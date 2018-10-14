// [[nodiscard]] compiler is encouraged to issue a warning if value is ignored
// constexpr possible to evaluate at compiel time
// noexcept function does not throw an exception
// -> auto trailing type specification
[[nodiscard]] constexpr auto bar() noexcept -> auto { return 0; }

int main() { return bar(); }