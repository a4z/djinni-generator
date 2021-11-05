"""
    Setup skylib and configure scala
"""

load("@bazel_skylib//:workspace.bzl", "bazel_skylib_workspace")
load("@io_bazel_rules_scala//:scala_config.bzl", "scala_config")

def djinni_generator_config():
    """
        Setup the workspace for scala

        This call scala config to setup the wanted version.
        This must be done before loading any scala rule
    """
    bazel_skylib_workspace()
    scala_config(scala_version = "2.13.6")
