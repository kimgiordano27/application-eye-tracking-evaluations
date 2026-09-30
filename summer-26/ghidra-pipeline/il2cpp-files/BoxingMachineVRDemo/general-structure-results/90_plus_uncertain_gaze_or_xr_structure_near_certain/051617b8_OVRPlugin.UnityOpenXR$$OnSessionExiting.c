/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 051617b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(long *param_1)

{
  byte bVar1;
  long *in_x9;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *in_x9)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88();
}


