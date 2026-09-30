/*
FUNCTION_NAME: OVRPlugin_GetUseOverriddenExternalCameraStaticPose_m6F48A2E135F43889623814D7F1150DC71DCD8EB5
ENTRY_POINT: 02db2e00
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte OVRPlugin_GetUseOverriddenExternalCameraStaticPose_m6F48A2E135F43889623814D7F1150DC71DCD8EB5
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int local_28;
  byte local_21;
  undefined8 local_20;
  undefined4 local_18;
  byte local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRPlugin_GetUseOverriddenExternalCameraStaticPose_m6F48A2E135F43889623814D7F1150DC71DCD8EB5
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetUseOverriddenExternalCameraStaticPose_m6F48A2E135F43889623814D7F1150DC71DCD8EB5::
    s_Il2CppMethodInitialized = 1;
  }
  local_21 = 0;
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  uVar2 = local_18;
  if ((bVar3 & 1) == 0) {
    local_11 = 0;
  }
  else {
    local_21 = 1;
    local_28 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar4 = OVRP_1_44_0_ovrp_GetUseOverriddenExternalCameraStaticPose_mA746668CE06522934FE60DAD26F824394B67150D
                      (uVar2,&local_28,0);
    if (iVar4 != 0) {
      local_21 = 0;
    }
    if (local_28 == 0) {
      local_21 = 0;
    }
    local_11 = local_21 & 1;
  }
  return local_11;
}


