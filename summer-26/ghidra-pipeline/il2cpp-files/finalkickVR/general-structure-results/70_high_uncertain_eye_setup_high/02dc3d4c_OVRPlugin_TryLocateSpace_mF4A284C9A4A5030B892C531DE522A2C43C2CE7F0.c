/*
FUNCTION_NAME: OVRPlugin_TryLocateSpace_mF4A284C9A4A5030B892C531DE522A2C43C2CE7F0
ENTRY_POINT: 02dc3d4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRPlugin_TryLocateSpace_mF4A284C9A4A5030B892C531DE522A2C43C2CE7F0
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 local_150 [5];
  undefined8 *local_128;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 *local_d0;
  int local_c4;
  undefined4 local_c0;
  byte local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 *local_80;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 local_34;
  undefined8 local_30 [2];
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
  ;
  puVar1 = 
  Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  local_34 = param_2;
  local_30[0] = param_1;
  if ((OVRPlugin_TryLocateSpace_mF4A284C9A4A5030B892C531DE522A2C43C2CE7F0::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_BD199D44CC5FFF41A1C37FD35241A5024EC5E6A11274C19A47669D388401995D
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_TryLocateSpace_mF4A284C9A4A5030B892C531DE522A2C43C2CE7F0::s_Il2CppMethodInitialized =
         1;
  }
  memset(auStack_78,0,0x28);
  local_80 = local_40;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_a0 = *puVar3;
  uStack_98 = (undefined4)puVar3[1];
  uStack_8c = *(undefined8 *)((long)puVar3 + 0x14);
  uStack_94 = *(undefined8 *)((long)puVar3 + 0xc);
  local_80[1] = CONCAT44((undefined4)uStack_94,uStack_98);
  *local_80 = local_a0;
  *(undefined8 *)((long)local_80 + 0x14) = uStack_8c;
  *(undefined8 *)((long)local_80 + 0xc) = uStack_94;
  local_a8 = local_48;
  *local_48 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_b0 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_b8 = *puVar3;
  local_b9 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_b0,local_b8,0);
  local_b9 = local_b9 & 1;
  if (local_b9 != 0) {
    local_c0 = local_34;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_c4 = OVRP_1_79_0_ovrp_LocateSpace2_mBFA862E72AC1950C0C1E349D8B69779339D60465
                         (auStack_78,local_30,local_c0,0);
    if (local_c4 == 0) {
      local_d0 = local_40;
      memcpy(auStack_f8,auStack_78,0x28);
      local_d0[1] = CONCAT44(uStack_e4,uStack_e8);
      *local_d0 = local_f0;
      *(undefined8 *)((long)local_d0 + 0x14) = uStack_dc;
      *(ulong *)((long)local_d0 + 0xc) = CONCAT44(uStack_e0,uStack_e4);
      local_128 = local_48;
      memcpy(local_150,auStack_78,0x28);
      *local_128 = local_150[0];
      return 1;
    }
  }
  return 0;
}


