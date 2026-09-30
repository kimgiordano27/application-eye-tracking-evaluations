/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 06af9070
PROGRAM: Waifu-libil2cpp.so
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
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  if ((unaff_x19 != 0) && (*(int *)(unaff_x19 + 0x10) != 0)) {
    if (*(int *)(DAT_083c9548 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_06af90e8();
    return;
  }
  FUN_033d1ba8(&DAT_083d2778);
  uVar1 = thunk_FUN_03398a84();
  uVar2 = FUN_033d1ba8(&DAT_08433b90);
  FUN_07a0ee88(uVar1,uVar2,0);
  uVar2 = FUN_033d1ba8(&DAT_08400e88);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar1,uVar2);
}


