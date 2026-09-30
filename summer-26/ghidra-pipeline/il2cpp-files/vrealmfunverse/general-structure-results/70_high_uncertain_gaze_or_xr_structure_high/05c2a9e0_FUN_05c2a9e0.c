/*
FUNCTION_NAME: FUN_05c2a9e0
ENTRY_POINT: 05c2a9e0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05c2a9e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0631ee00;
  local_30 = param_2;
  uStack_28 = param_3;
  if ((DAT_066d63f0 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__);
    FUN_02b3c81c(PTR_DAT_0631ee00);
    DAT_066d63f0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar3 = FUN_05ca8d8c(&local_30,0);
  puVar2 = Method_OVRTask_SetResult<OVRResult<Guid,_OVRColocationSession_Result>>__;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_0329ed04(&local_30,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631d068);
      uVar4 = thunk_FUN_02b79644();
      uVar5 = thunk_FUN_02ba3594(Method_OVRTask_SetResult<OVRResult<ulong,_OVRPlugin_Result>>__);
      FUN_04d78a40(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02ba3594(Method_OVRTask_SetResult<bool>__);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,uVar5);
    }
  }
  param_1[1] = uStack_28;
  *param_1 = local_30;
  return;
}


