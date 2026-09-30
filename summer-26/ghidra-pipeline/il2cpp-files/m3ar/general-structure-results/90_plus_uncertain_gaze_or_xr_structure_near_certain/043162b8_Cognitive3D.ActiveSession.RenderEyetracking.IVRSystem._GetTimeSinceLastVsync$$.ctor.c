/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetTimeSinceLastVsync$$.ctor
ENTRY_POINT: 043162b8
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetTimeSinceLastVsync___ctor
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  if (param_3 != 0) {
    uVar1 = FUN_042f0b74(param_3,0);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    uVar1 = FUN_042f0a24(param_3,0);
    *(undefined8 *)(param_1 + 0x70) = param_5;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


