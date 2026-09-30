/*
FUNCTION_NAME: OVRPlugin_GetControllerState5_mAA377A20B26D6410B559B2C579384E0E80F2A2F3
ENTRY_POINT: 02dafd94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_GetControllerState5_mAA377A20B26D6410B559B2C579384E0E80F2A2F3
               (void *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [96];
  undefined1 auStack_178 [96];
  undefined1 auStack_118 [96];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  byte local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_94 [100];
  undefined8 local_30;
  undefined4 local_24;
  
  puVar2 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
                    /* try { // try from 02dafdac to 02eafe67 has its CatchHandler @ 02dafe84 */
  local_30 = param_3;
  local_24 = param_2;
  if ((OVRPlugin_GetControllerState5_mAA377A20B26D6410B559B2C579384E0E80F2A2F3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_GetControllerState5_mAA377A20B26D6410B559B2C579384E0E80F2A2F3::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_94,0,100);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_a0 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_a8 = *puVar3;
  local_a9 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_a0,local_a8,0);
  local_a9 = local_a9 & 1;
  if (local_a9 == 0) {
    local_b8 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRPlugin_GetControllerState4_m728848DEFBC02ED0E9A2064A9D230F96D1C36760(local_b8);
    memcpy(auStack_118,auStack_178,0x60);
    memset(param_1,0,100);
    memcpy(auStack_1d8,auStack_118,0x60);
    ControllerState5__ctor_mCB18ACC713F96FAF168DCEF5251CCFE6E25ABC3D(param_1,auStack_1d8,0);
  }
  else {
    il2cpp_codegen_initobj(auStack_94,100);
    local_b0 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_b4 = OVRP_1_78_0_ovrp_GetControllerState5_mAC88F3E3FCD69C4A97496C3ACF2EC7A02B672347
                         (local_b0,auStack_94,0);
    memcpy(param_1,auStack_94,100);
  }
  return;
}


