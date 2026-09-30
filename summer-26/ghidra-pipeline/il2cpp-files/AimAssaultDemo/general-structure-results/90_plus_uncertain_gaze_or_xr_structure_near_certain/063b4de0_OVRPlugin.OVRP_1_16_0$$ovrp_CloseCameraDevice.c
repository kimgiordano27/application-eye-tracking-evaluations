/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 063b4de0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x20 + 0x714) = 1;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063b4da0 with catch @ 063b4df0
                        */
  lVar1 = FUN_03c6a920();
  if (lVar1 != 0) {
                    /* try { // try from 063b4e08 to 064b4e0b has its CatchHandler @ 063b4e1c */
                    /* catch() { ... } // from try @ 063b4e08 with catch @ 063b4e1c */
    FUN_054d3fe8(lVar1,*(undefined8 *)PTR_DAT_07db71c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


