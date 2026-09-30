/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 07a4b2b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionAdvertisement(void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  *(undefined4 *)(unaff_x19 + 8) = 0;
  puVar1 = PTR_DAT_092ecfe0;
  if ((unaff_w21 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(unaff_x20 + 0xc);
  }
  *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
  if ((unaff_w21 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  lVar2 = *(long *)puVar1;
  *(undefined4 *)(unaff_x19 + 0x10) = uVar3;
  uVar3 = *(undefined4 *)(unaff_x20 + 0x14);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  *(undefined4 *)(unaff_x19 + 0x14) = uVar3;
  return;
}


