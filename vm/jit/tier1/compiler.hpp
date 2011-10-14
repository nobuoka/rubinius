#ifndef VM_JIT_TIER1_COMPILER_HPP
#define VM_JIT_TIER1_COMPILER_HPP

namespace rubinius {
  class CompiledMethod;
  class VM;

namespace tier1 {
  class Compiler {
    CompiledMethod* cm_;
    void* function_;
    size_t size_;

  public:
    void* jitted_function() {
      return function_;
    }

    size_t jitted_size() {
      return size_;
    }

  public:
    Compiler(CompiledMethod* cm);

    bool compile(VM*);
    int stack_size();
  };
}
}

#endif