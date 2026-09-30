/*
FUNCTION_NAME: OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669
ENTRY_POINT: 02dc5f38
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  __13 *extraout_x1;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  void *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_12c;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  void *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 *local_d8;
  FinallyHelper<OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669::__13,false>
  aFStack_d0 [23];
  byte local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  byte local_a1;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_21;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5
  ;
  local_58 = param_6;
  local_50 = param_1;
  local_48 = param_4;
  uStack_40 = param_5;
  local_38 = param_2;
  uStack_30 = param_3;
  if ((OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Services_Core_Internal_TaskAsyncOperation_<>c_<_ctor>b__10_0__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_32D0830B8EE1D49A66F395C8EA80E02BFC07C2A12A8EA8C8B484AF02108A1950
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_35BF50EEF3270FD8CA09E66FC5B0481C5A151B14F6A634854E32F63633D49DCB
              );
    OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669::
    s_Il2CppMethodInitialized = 1;
  }
  local_59 = 0;
  lStack_78 = 0;
  local_80 = 0;
  lStack_68 = 0;
  local_70 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  local_a1 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_b0 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_b8 = *puVar3;
  local_b9 = Version_op_LessThan_m83ED9AEB1F6175AF9C8CDEDD9329CE0D2DA2CE4E(local_b0,local_b8,0);
  local_b9 = local_b9 & 1;
  if (local_b9 == 0) {
    OVRProfilerScope__ctor_m9420381BC476AD6837745E63335B61DE79C2E33B
              (&local_59,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_35BF50EEF3270FD8CA09E66FC5B0481C5A151B14F6A634854E32F63633D49DCB
               ,0);
    local_d8 = &local_59;
    il2cpp::utils::
    Finally<OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669::__13>
              ((utils *)&local_d8,extraout_x1);
    il2cpp_codegen_initobj(&local_a0,0x20);
    uStack_f8 = uStack_30;
    local_100 = local_38;
    uStack_118 = uStack_30;
    local_120 = local_38;
    local_108 = (void *)NativeArrayUnsafeUtility_GetUnsafePtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB893A445FD5C5759C9BEDB2EF5037667D4985897
                                  (local_38,uStack_30,
                                   *(undefined8 *)
                                    Field_<PrivateImplementationDetails>_32D0830B8EE1D49A66F395C8EA80E02BFC07C2A12A8EA8C8B484AF02108A1950
                                  );
    local_128 = 0;
    IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline
              (&local_128,local_108,(MethodInfo *)0x0);
    lStack_98 = local_128;
    local_12c = (undefined4)uStack_30;
    local_a0 = CONCAT44(local_a0._4_4_,(undefined4)uStack_30);
    uStack_158 = uStack_40;
    local_160 = local_48;
    local_140 = local_160;
    uStack_138 = uStack_158;
    local_148 = (void *)NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144
                                  (local_48,uStack_40,
                                   *(undefined8 *)
                                    Method_Unity_Services_Core_Internal_TaskAsyncOperation_<>c_<_ctor>b__10_0__
                                  );
    local_168 = 0;
    IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline
              (&local_168,local_148,(MethodInfo *)0x0);
    lStack_88 = local_168;
    local_90 = CONCAT44(local_90._4_4_,(undefined4)uStack_40);
    lStack_78 = lStack_98;
    local_80 = local_a0;
    lStack_68 = local_168;
    local_70 = local_90;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar2 = OVRP_1_82_0_ovrp_GetSpaceTriangleMesh_m7D735377C663D93C1AEDF26989041CDB67C4188D
                      (&local_50,&local_80,0);
    local_a1 = iVar2 == 0;
    il2cpp::utils::
    FinallyHelper<OVRPlugin_GetSpaceTriangleMesh_m5854FD745B1852685C20B7E815BE0B9D01F9F669::$_13,false>
    ::~FinallyHelper(aFStack_d0);
    local_21 = local_a1 & 1;
  }
  else {
    local_21 = 0;
  }
  return local_21;
}


