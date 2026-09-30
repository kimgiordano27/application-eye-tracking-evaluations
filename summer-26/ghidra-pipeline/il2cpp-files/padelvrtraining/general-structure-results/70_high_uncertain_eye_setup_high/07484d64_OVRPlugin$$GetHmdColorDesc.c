/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 07484d64
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHmdColorDesc(void)

{
  undefined *puVar1;
  undefined4 in_w8;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  
  *unaff_x19 = in_w8;
  if ((unaff_w21 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 4);
  }
  unaff_x19[1] = uVar2;
  if ((unaff_w21 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 8);
  }
  unaff_x19[2] = uVar2;
  puVar1 = PTR_DAT_0921fba8;
  if ((unaff_w21 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 0xc);
  }
  unaff_x19[3] = uVar2;
  if ((unaff_w21 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  unaff_x19[4] = uVar2;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x14);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  unaff_x19[5] = uVar2;
  return;
}


