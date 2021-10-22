"""
    all the http_archive loading on one place
"""

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def get_archives():
    """
        Downloads all reuqired archives
    """
    http_archive(
        name = "bazel_skylib",
        urls = [
            "https://github.com/bazelbuild/bazel-skylib/releases/download/1.1.1/bazel-skylib-1.1.1.tar.gz",
            "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.1.1/bazel-skylib-1.1.1.tar.gz",
        ],
        sha256 = "c6966ec828da198c5d9adbaa94c05e3a1c7f21bd012a0b29ba8ddbccb2c93b0d",
    )

    rules_scala_version = "e7a948ad1948058a7a5ddfbd9d1629d6db839933"
    http_archive(
        name = "io_bazel_rules_scala",
        sha256 = "76e1abb8a54f61ada974e6e9af689c59fd9f0518b49be6be7a631ce9fa45f236",
        strip_prefix = "rules_scala-%s" % rules_scala_version,
        type = "zip",
        url = "https://github.com/bazelbuild/rules_scala/archive/%s.zip" % rules_scala_version,
    )

    http_archive(
        name = "com_google_protobuf",
        sha256 = "9b4ee22c250fe31b16f1a24d61467e40780a3fbb9b91c3b65be2a376ed913a1a",
        strip_prefix = "protobuf-3.13.0",
        urls = [
            "https://github.com/protocolbuffers/protobuf/archive/v3.13.0.tar.gz",
        ],
    )

    # Get Stuff from maven
    RULES_JVM_EXTERNAL_TAG = "4.0"
    RULES_JVM_EXTERNAL_SHA = "31701ad93dbfe544d597dbe62c9a1fdd76d81d8a9150c2bf1ecf928ecdf97169"

    http_archive(
        name = "rules_jvm_external",
        strip_prefix = "rules_jvm_external-%s" % RULES_JVM_EXTERNAL_TAG,
        sha256 = RULES_JVM_EXTERNAL_SHA,
        url = "https://github.com/bazelbuild/rules_jvm_external/archive/%s.zip" % RULES_JVM_EXTERNAL_TAG,
    )

    # http_archive(
    #     name = "djinni",
    #     sha256 = "2029b355791d000661e9fc174d11efbc5902fcd175dbfb9df1831bd1a7a17898",
    #     strip_prefix = "djinni-generator-bazel",
    #     build_file = "//:BUILD.djinni",
    #     url = "https://github.com/a4z/djinni-generator/archive/refs/heads/bazel.zip",
    # )


    # http_archive(
    #     name = "support-lib",
    #     sha256 = "2029b355791d000661e9fc174d11efbc5902fcd175dbfb9df1831bd1a7a17898",
    #     strip_prefix = "djinni-support-lib-v1.2.0",
    #     build_file = "//:BUILD.libs",
    #     url = "https://github.com/cross-language-cpp/djinni-support-lib/archive/refs/tags/v1.2.0.zip",
    # )





    # buildifyer
    http_archive(
        name = "io_bazel_rules_go",
        sha256 = "8e968b5fcea1d2d64071872b12737bbb5514524ee5f0a4f54f5920266c261acb",
        urls = [
            "https://mirror.bazel.build/github.com/bazelbuild/rules_go/releases/download/v0.28.0/rules_go-v0.28.0.zip",
            "https://github.com/bazelbuild/rules_go/releases/download/v0.28.0/rules_go-v0.28.0.zip",
        ],
    )

    http_archive(
        name = "bazel_gazelle",
        sha256 = "62ca106be173579c0a167deb23358fdfe71ffa1e4cfdddf5582af26520f1c66f",
        urls = [
            "https://mirror.bazel.build/github.com/bazelbuild/bazel-gazelle/releases/download/v0.23.0/bazel-gazelle-v0.23.0.tar.gz",
            "https://github.com/bazelbuild/bazel-gazelle/releases/download/v0.23.0/bazel-gazelle-v0.23.0.tar.gz",
        ],
    )

    http_archive(
        name = "com_github_bazelbuild_buildtools",
        sha256 = "d49976b0b1e81146d79072f10cabe6634afcd318b1bd86b0102d5967121c43c1",
        strip_prefix = "buildtools-4.2.0",
        urls = [
            "https://github.com/bazelbuild/buildtools/archive/refs/tags/4.2.0.tar.gz",
        ],
    )
