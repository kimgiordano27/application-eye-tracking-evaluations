/*
FUNCTION_NAME: OVRPlugin_SetControllerHapticsPcm_mFEAD0169FAE82422B3DF28F992C79BDFA9BC73E1
ENTRY_POINT: 02db0614
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_SetControllerHapticsPcm_mFEAD0169FAE82422B3DF28F992C79BDFA9BC73E1
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_38;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  bool local_11;
  
  puVar1 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  local_20 = param_3;
  local_18 = param_1;
  if ((OVRPlugin_SetControllerHapticsPcm_mFEAD0169FAE82422B3DF28F992C79BDFA9BC73E1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SetControllerHapticsPcm_mFEAD0169FAE82422B3DF28F992C79BDFA9BC73E1::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_28 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_30 = *puVar3;
  local_31 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_28,local_30,0);
  local_31 = local_31 & 1;
  if (local_31 == 0) {
    local_11 = false;
  }
  else {
    local_38 = local_18;
    uStack_58 = param_2[1];
    local_60 = *param_2;
    uStack_48 = param_2[3];
    local_50 = param_2[2];
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uStack_88 = uStack_58;
    local_90 = local_60;
    uStack_78 = uStack_48;
    local_80 = local_50;
    iVar2 = OVRP_1_78_0_ovrp_SetControllerHapticsPcm_m3EBE325E6A367025949994559D7CE75F7D095D85
                      (local_38,&local_90,0);
    local_11 = iVar2 == 0;
  }
  return local_11;
}


