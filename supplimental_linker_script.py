Import("env")

env.Append(
  LINKFLAGS=[
        "-mfloat-abi=hard",
        "-mfpu=fpv4-sp-d16"
  ]
)
print("running supplimental linker script")    

