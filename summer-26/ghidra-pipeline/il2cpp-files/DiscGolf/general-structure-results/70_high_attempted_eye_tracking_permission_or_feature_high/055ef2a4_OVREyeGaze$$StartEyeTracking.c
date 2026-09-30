/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 055ef2a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(ulong param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb990);
    *(undefined1 *)(unaff_x21 + 0x84f) = 1;
  }
  puVar3 = (undefined8 *)(param_2 + 0x88);
  uVar4 = *puVar3;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_0634eb94(uVar4);
  if ((uVar2 & 1) != 0) {
    *puVar3 = unaff_x20;
    LeanTween__value(puVar3);
    uVar4 = *puVar3;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    bVar1 = FUN_0634eb94(uVar4,0,0);
    *(byte *)(param_2 + 0xa8) = bVar1 & 1;
  }
  return;
}


