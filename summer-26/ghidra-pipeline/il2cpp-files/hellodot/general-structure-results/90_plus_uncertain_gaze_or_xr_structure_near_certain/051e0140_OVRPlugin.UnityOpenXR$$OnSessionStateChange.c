/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 051e0140
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange(long param_1)

{
  long in_x9;
  long lVar1;
  
  if (in_x9 != 0) {
    *(undefined1 *)(in_x9 + 0x10) = 1;
    *(undefined4 *)(in_x9 + 0x14) = 0;
    *(undefined4 *)(in_x9 + 0x18) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
                    /* try { // try from 051e0154 to 052e0183 has its CatchHandler @ 051e0188 */
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x10) = 1;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


