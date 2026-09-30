/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRPhysicsRaycaster$$Spherecast
ENTRY_POINT: 02dc52a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] UnityEngine_EventSystems_OVRPhysicsRaycaster__Spherecast(ulong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  ulong *in_stack_00000028;
  undefined4 uStack0000000000000034;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  void *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int in_stack_00000078;
  int iStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int iStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Field_<PrivateImplementationDetails>_3CD085A87F325CB6566DE06EB72EBADFCEE4B199DE660E11CBE907EA8B224D85
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000028);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRPlugin_GetSpaceBoundary2D_mF987334B229D15641D7A0F7BF67A4179B978D9B6::s_Il2CppMethodInitialized
       = 1;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000028);
  *(undefined8 *)(unaff_x29 + -0x80) = *puVar4;
  bVar1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E
                    (*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x80),0);
  *(byte *)(unaff_x29 + -0x81) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x81) & 1) == 0) {
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x70),0x10);
    *(undefined4 *)(unaff_x29 + -0x70) = 0;
    *(undefined4 *)(unaff_x29 + -0x6c) = 0;
    in_stack_000000a8 = *(undefined8 *)(unaff_x29 + -0x68);
    in_stack_000000a0 = *(undefined8 *)(unaff_x29 + -0x70);
    *(undefined8 *)(unaff_x29 + -0x38) = in_stack_000000a8;
    *(undefined8 *)(unaff_x29 + -0x40) = in_stack_000000a0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    iStack000000000000009c =
         OVRP_1_72_0_ovrp_GetSpaceBoundary2D_m5463E72B4B3CCA5901C621EEB49C64C68D8190E0
                   (unaff_x29 + -0x18,unaff_x29 + -0x40,0);
    if (iStack000000000000009c == 0) {
      in_stack_00000088 = *(undefined8 *)(unaff_x29 + -0x38);
      in_stack_00000080._4_4_ = (int)((ulong)*(undefined8 *)(unaff_x29 + -0x40) >> 0x20);
      iVar2 = in_stack_00000080._4_4_;
      iStack000000000000007c = in_stack_00000080._4_4_;
      in_stack_00000078 = *(int *)(unaff_x29 + -0x1c);
      in_stack_00000080 = *(undefined8 *)(unaff_x29 + -0x40);
      NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5
                ((NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 *)(unaff_x29 + -0x50),
                 iVar2,in_stack_00000078,1,
                 *(MethodInfo **)
                  Field_<PrivateImplementationDetails>_3CD085A87F325CB6566DE06EB72EBADFCEE4B199DE660E11CBE907EA8B224D85
                );
      in_stack_00000048 = *(undefined8 *)(unaff_x29 + -0x48);
      in_stack_00000040 = *(undefined8 *)(unaff_x29 + -0x50);
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000058 =
           (void *)NativeArrayUnsafeUtility_GetUnsafePtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2B0D2CB30FDAA96454AA1E55D86254BBE984DA53
                             (in_stack_00000040,in_stack_00000048,
                              *(undefined8 *)
                               Field_<PrivateImplementationDetails>_2D28E0C827135BA57297EC1D6D2FE798FCC03D22F2E7E7121E34F92B2F70A715
                             );
      in_stack_00000038 = 0;
      IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline
                (&stack0x00000038,in_stack_00000058,(MethodInfo *)0x0);
      *(long *)(unaff_x29 + -0x38) = in_stack_00000038;
      uStack0000000000000034 = *(undefined4 *)(unaff_x29 + -0x48);
      *(undefined4 *)(unaff_x29 + -0x40) = uStack0000000000000034;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
      iVar2 = OVRP_1_72_0_ovrp_GetSpaceBoundary2D_m5463E72B4B3CCA5901C621EEB49C64C68D8190E0
                        (unaff_x29 + -0x18,unaff_x29 + -0x40,0);
      if (iVar2 == 0) {
        *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x48);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x50);
      }
      else {
        NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7
                  ((NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 *)(unaff_x29 + -0x50),
                   *(MethodInfo **)
                    Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                  );
        il2cpp_codegen_initobj((void *)(unaff_x29 + -0x60),0x10);
        *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x58);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x60);
      }
    }
    else {
      il2cpp_codegen_initobj((void *)(unaff_x29 + -0x60),0x10);
      *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x58);
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x60);
    }
  }
  else {
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x60),0x10);
    *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x58);
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x60);
  }
  return *(undefined1 (*) [16])(unaff_x29 + -0x10);
}


