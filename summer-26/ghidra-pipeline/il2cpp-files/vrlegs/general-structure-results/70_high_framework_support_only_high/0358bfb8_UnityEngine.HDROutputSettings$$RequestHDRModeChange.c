/*
FUNCTION_NAME: UnityEngine.HDROutputSettings$$RequestHDRModeChange
ENTRY_POINT: 0358bfb8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 UnityEngine_HDROutputSettings__RequestHDRModeChange(long param_1)

{
  undefined4 uVar1;
  int in_w8;
  undefined4 uVar2;
  long lVar3;
  long *unaff_x21;
  undefined8 uVar4;
  long in_stack_00000020;
  
  if (in_w8 == -1) {
    uVar2 = 0;
  }
  else {
    lVar3 = *unaff_x21;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      param_1 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    }
    uVar1 = FUN_03558224(uVar4,lVar3,*(long *)(param_1 + 0xb8),
                         *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8),0);
    uVar2 = 1;
    *(undefined4 *)(in_stack_00000020 + 0x120) = uVar1;
    *(undefined4 *)(in_stack_00000020 + 0x644) = 1;
  }
  return uVar2;
}


