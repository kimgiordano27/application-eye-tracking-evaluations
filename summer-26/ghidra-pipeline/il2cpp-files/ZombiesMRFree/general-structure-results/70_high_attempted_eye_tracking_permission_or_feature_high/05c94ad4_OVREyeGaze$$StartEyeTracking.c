/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 05c94ad4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 88
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVREyeGaze__StartEyeTracking(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined1 auVar6 [16];
  
  FUN_02fe925c();
  FUN_02fe925c(PTR_DAT_06fb6818);
  *(undefined1 *)(unaff_x22 + 0x36a) = 1;
  uVar4 = _UNK_01370438;
  uVar3 = _DAT_01370430;
  uVar2 = _UNK_0136ed98;
  uVar1 = _DAT_0136ed90;
  auVar6 = NEON_fmov(0x3f800000,4);
  *(long *)(unaff_x19 + 0x50) = auVar6._8_8_;
  *(long *)(unaff_x19 + 0x48) = auVar6._0_8_;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  *(undefined4 *)(unaff_x19 + 0x78) = 0x3f800000;
  uVar5 = FUN_068cca24(*unaff_x21,0);
  *(undefined4 *)(unaff_x19 + 0x80) = uVar5;
  uVar5 = FUN_068cca24(*unaff_x20,0);
  *(undefined4 *)(unaff_x19 + 0x84) = uVar5;
  thunk_FUN_068f530c();
  return;
}


