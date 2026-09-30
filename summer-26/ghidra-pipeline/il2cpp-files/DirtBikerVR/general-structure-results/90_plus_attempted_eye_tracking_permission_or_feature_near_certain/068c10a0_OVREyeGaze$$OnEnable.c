/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 068c10a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  undefined8 in_stack_00000048;
  
  uVar2 = FUN_06913ea0();
  if ((uVar2 & 1) != 0) {
    uVar4 = 0;
    do {
      if (in_stack_00000048._4_4_ == 3) {
        lVar3 = *(long *)(unaff_x20 + 0x110);
joined_r0x068c1128:
        if (lVar3 == 0) {
LAB_068c11b0:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar1 = FUN_05746b00();
      }
      else if (in_stack_00000048._4_4_ == 2) {
        if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_068c11b0;
        uVar1 = FUN_05749198();
      }
      else {
        if (in_stack_00000048._4_4_ == 1) {
          lVar3 = *(long *)(unaff_x20 + 0x100);
          goto joined_r0x068c1128;
        }
        FUN_06913ebc();
        uVar1 = 0;
      }
      uVar4 = uVar4 | uVar1;
      uVar2 = FUN_06913ea0();
    } while ((uVar2 & 1) != 0);
    if ((uVar4 & 1) != 0) {
      FUN_068c11b4();
      FUN_068c0a78(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  return;
}


