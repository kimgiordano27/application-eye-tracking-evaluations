/*
FUNCTION_NAME: Meta.XR.Movement.Networking.NetworkPoseRetargeter$$SerializeData
ENTRY_POINT: 06daff34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_Networking_NetworkPoseRetargeter__SerializeData(void)

{
  ulong uVar1;
  code *in_x9;
  long unaff_x19;
  
  uVar1 = (*in_x9)();
  if (((uVar1 & 1) != 0) && (1 < *(int *)(unaff_x19 + 0x30) - 1U)) {
    FUN_06daff60();
    return;
  }
  return;
}


