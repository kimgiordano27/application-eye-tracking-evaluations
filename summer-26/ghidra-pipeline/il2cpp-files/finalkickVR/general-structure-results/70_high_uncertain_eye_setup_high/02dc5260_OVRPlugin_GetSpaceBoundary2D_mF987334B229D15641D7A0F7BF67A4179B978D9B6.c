/*
FUNCTION_NAME: OVRPlugin_GetSpaceBoundary2D_mF987334B229D15641D7A0F7BF67A4179B978D9B6
ENTRY_POINT: 02dc5260
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined1  [16]
OVRPlugin_GetSpaceBoundary2D_mF987334B229D15641D7A0F7BF67A4179B978D9B6
          (undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  int local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  local_48 = param_3;
  local_3c = param_2;
  local_38 = param_1;
  if ((OVRPlugin_GetSpaceBoundary2D_mF987334B229D15641D7A0F7BF67A4179B978D9B6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_2D28E0C827135BA57297EC1D6D2FE798FCC03D22F2E7E7121E34F92B2F70A715
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_3CD085A87F325CB6566DE06EB72EBADFCEE4B199DE660E11CBE907EA8B224D85
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetSpaceBoundary2D_mF987334B229D15641D7A0F7BF67A4179B978D9B6::
    s_Il2CppMethodInitialized = 1;
  }
  local_60 = 0;
  lStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_98 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_a0 = *puVar5;
  local_a1 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_98,local_a0,0);
  local_a1 = local_a1 & 1;
  if (local_a1 == 0) {
    il2cpp_codegen_initobj(&local_90,0x10);
    local_90 = 0;
    uStack_b8 = uStack_88;
    local_c0 = 0;
    lStack_58 = uStack_88;
    local_60 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_c4 = OVRP_1_72_0_ovrp_GetSpaceBoundary2D_m5463E72B4B3CCA5901C621EEB49C64C68D8190E0
                         (&local_38,&local_60,0);
    if (local_c4 == 0) {
      uStack_d8 = lStack_58;
      local_e0 = local_60;
      uVar3 = local_e0;
      local_e0._4_4_ = (int)((ulong)local_60 >> 0x20);
      iVar4 = local_e0._4_4_;
      local_e4 = local_e0._4_4_;
      local_e8 = local_3c;
      local_e0 = uVar3;
      NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5
                ((NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 *)&local_70,iVar4,local_3c
                 ,1,*(MethodInfo **)
                     Field_<PrivateImplementationDetails>_3CD085A87F325CB6566DE06EB72EBADFCEE4B199DE660E11CBE907EA8B224D85
                );
      uStack_f8 = uStack_68;
      local_100 = local_70;
      uStack_118 = uStack_68;
      local_120 = local_70;
      local_108 = (void *)NativeArrayUnsafeUtility_GetUnsafePtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2B0D2CB30FDAA96454AA1E55D86254BBE984DA53
                                    (local_70,uStack_68,
                                     *(undefined8 *)
                                      Field_<PrivateImplementationDetails>_2D28E0C827135BA57297EC1D6D2FE798FCC03D22F2E7E7121E34F92B2F70A715
                                    );
      local_128 = 0;
      IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline
                (&local_128,local_108,(MethodInfo *)0x0);
      lStack_58 = local_128;
      local_60 = CONCAT44(local_60._4_4_,(undefined4)uStack_68);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      iVar4 = OVRP_1_72_0_ovrp_GetSpaceBoundary2D_m5463E72B4B3CCA5901C621EEB49C64C68D8190E0
                        (&local_38,&local_60,0);
      if (iVar4 == 0) {
        uStack_28 = uStack_68;
        local_30 = local_70;
      }
      else {
        NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7
                  ((NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 *)&local_70,
                   *(MethodInfo **)
                    Field_<PrivateImplementationDetails>_67484346CA8C1305358877892C919EBEEBDDA56467A35AB2E12D32E0ACC1D17A
                  );
        il2cpp_codegen_initobj(&local_80,0x10);
        uStack_28 = uStack_78;
        local_30 = local_80;
      }
    }
    else {
      il2cpp_codegen_initobj(&local_80,0x10);
      uStack_28 = uStack_78;
      local_30 = local_80;
    }
  }
  else {
    il2cpp_codegen_initobj(&local_80,0x10);
    uStack_28 = uStack_78;
    local_30 = local_80;
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}


