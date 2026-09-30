/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 068c1118
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000048;
  
code_r0x068c1118:
  uStack0000000000000030 = param_1;
  uVar1 = FUN_05749198();
  do {
    while( true ) {
      unaff_w23 = unaff_w23 | uVar1;
      uVar2 = FUN_06913ea0();
      if ((uVar2 & 1) == 0) {
        if ((unaff_w23 & 1) != 0) {
          FUN_068c11b4();
          FUN_068c0a78(*(undefined8 *)(unaff_x19 + 0x20));
        }
        return;
      }
      if (in_stack_00000048._4_4_ != 3) break;
      if (*(long *)(unaff_x20 + 0x110) == 0) goto LAB_068c11b0;
LAB_068c112c:
      uStack0000000000000030 = *(undefined8 *)(unaff_x19 + 0x30);
      uVar1 = FUN_05746b00();
    }
    if (in_stack_00000048._4_4_ == 2) break;
    if (in_stack_00000048._4_4_ == 1) {
      if (*(long *)(unaff_x20 + 0x100) != 0) goto LAB_068c112c;
      goto LAB_068c11b0;
    }
    FUN_06913ebc();
    uVar1 = 0;
  } while( true );
  if (*(long *)(unaff_x20 + 0x108) == 0) {
LAB_068c11b0:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  param_1 = *(undefined8 *)(unaff_x19 + 0x30);
  goto code_r0x068c1118;
}


