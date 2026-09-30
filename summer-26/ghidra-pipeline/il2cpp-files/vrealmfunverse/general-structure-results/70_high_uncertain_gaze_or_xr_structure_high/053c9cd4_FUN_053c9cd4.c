/*
FUNCTION_NAME: FUN_053c9cd4
ENTRY_POINT: 053c9cd4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


uint FUN_053c9cd4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_14;
  
  local_14 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = thunk_FUN_02ba3594(
                              UnityEngine_Rendering_LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F2_PostfixBurstDelegate_TypeInfo
                              );
    uVar1 = FUN_0540c734(uVar1,0);
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar3 = thunk_FUN_02b79644();
    uVar2 = thunk_FUN_02ba3594(PTR_DAT_0632a080);
    FUN_04cf1968(uVar3,uVar2,uVar1,0);
  }
  else {
    if ((param_2 & 1) == 0) {
      return param_2 >> 1;
    }
    uVar1 = thunk_FUN_02ba3594(PTR_DAT_06313048);
    uVar1 = FUN_02b3c908(uVar1,1);
    uVar2 = FUN_04d072c8(0);
    uVar2 = FUN_04d78d58(&local_14,uVar2,0);
    FUN_0275e13c(uVar1);
    FUN_0275a400(uVar1,uVar2);
    FUN_0275a434(uVar1,0,uVar2);
    uVar2 = thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo);
    uVar1 = FUN_0540ce80(uVar2,uVar1,0);
    thunk_FUN_02ba3594(PTR_DAT_06328948);
    uVar3 = thunk_FUN_02b79644();
    FUN_04d63e8c(uVar3,uVar1,0);
  }
  uVar1 = FUN_0540c738(uVar3,0);
  uVar2 = thunk_FUN_02ba3594(OVRManager_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar2);
}


