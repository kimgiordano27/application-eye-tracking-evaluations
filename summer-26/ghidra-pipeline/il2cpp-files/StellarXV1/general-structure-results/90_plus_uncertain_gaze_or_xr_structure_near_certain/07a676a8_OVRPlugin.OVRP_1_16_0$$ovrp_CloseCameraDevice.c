/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_CloseCameraDevice
ENTRY_POINT: 07a676a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_CloseCameraDevice(undefined8 param_1,long param_2)

{
  ulong uVar1;
  uint in_w9;
  ulong uVar2;
  float *pfVar3;
  
  if (0 < (int)in_w9) {
    uVar1 = (ulong)(in_w9 & ((int)in_w9 >> 0x1f ^ 0xffffffffU));
    uVar2 = (ulong)in_w9;
    pfVar3 = (float *)(param_2 + 0x20);
    do {
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar1 = uVar1 - 1;
      uVar2 = uVar2 - 1;
      *pfVar3 = *pfVar3 * 0.0;
      pfVar3 = pfVar3 + 1;
    } while (uVar1 != 0);
  }
  return;
}


