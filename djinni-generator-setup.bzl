"""
    Load all the scala rules and 3rd party dependencies

    Note that scala config needs to be done befor this!
"""

load("@io_bazel_rules_scala//scala:scala.bzl", "scala_repositories")
load("@io_bazel_rules_scala//scala:toolchains.bzl", "scala_register_toolchains")
load("@io_bazel_rules_scala//testing:scalatest.bzl", "scalatest_repositories", "scalatest_toolchain")
load("@rules_jvm_external//:defs.bzl", "maven_install")

def djinni_generator_scala_setup():
    """
        Setup scala and install 3rd party dependencies
    """
    scala_register_toolchains()
    scala_repositories()
    scalatest_repositories()
    scalatest_toolchain()

    maven_install(
        artifacts = [
            "commons-io:commons-io:2.11.0",
            "com.github.scopt:scopt_2.13:4.0.1",
            "org.scala-lang.modules:scala-parser-combinators_2.13:2.1.0",
            "org.yaml:snakeyaml:1.29",
        ],
        repositories = [
            "https://maven.google.com",
            "https://repo1.maven.org/maven2",
        ],
    )
