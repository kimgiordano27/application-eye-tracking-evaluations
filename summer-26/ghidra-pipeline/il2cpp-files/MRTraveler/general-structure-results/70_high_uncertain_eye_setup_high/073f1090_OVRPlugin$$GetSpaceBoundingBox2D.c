/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox2D
ENTRY_POINT: 073f1090
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundingBox2D(void)

{
  undefined *puVar1;
  undefined4 in_w8;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  *(undefined4 *)(unaff_x19 + 4) = in_w8;
  if ((unaff_w21 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 8);
  }
  *(undefined4 *)(unaff_x19 + 8) = uVar2;
  puVar1 = PTR_DAT_08eb1c18;
  if ((unaff_w21 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 0xc);
  }
  *(undefined4 *)(unaff_x19 + 0xc) = uVar2;
  if ((unaff_w21 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x14);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  *(undefined4 *)(unaff_x19 + 0x14) = uVar2;
  return;
}


