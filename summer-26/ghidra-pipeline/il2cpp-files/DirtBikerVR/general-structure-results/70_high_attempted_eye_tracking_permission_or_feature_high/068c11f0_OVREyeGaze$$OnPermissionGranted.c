/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 068c11f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  puVar2 = PTR_DAT_084b2020;
  puVar1 = PTR_DAT_084b2008;
  if ((*(byte *)(unaff_x19 + 0x840) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b2008);
    FUN_03a8a718(PTR_DAT_084b2020);
    *(undefined1 *)(unaff_x19 + 0x840) = 1;
  }
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_0679343c(uVar3,0);
                    /* try { // try from 068c123c to 069c124f has its CatchHandler @ 068c1370 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
  thunk_FUN_03afed3c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar3);
  return;
}


