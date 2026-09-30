/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 03117ba4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(undefined1 param_1 [16])

{
  long unaff_x19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  ulong uStack0000000000000054;
  
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000020;
  *(long *)(unaff_x19 + 0x74) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x6c) = param_1._0_8_;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0313815c(*(long *)(unaff_x19 + 0x30),0);
    _uStack0000000000000040 = *(undefined8 *)(unaff_x19 + 0x44);
    uStack0000000000000054 = *(ulong *)(unaff_x19 + 0x58);
    uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x19 + 0x4c);
    uStack000000000000004c = (undefined4)*(undefined8 *)(unaff_x19 + 0x50);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x50) >> 0x20);
    FUN_031370c8(&stack0x00000040,unaff_x19 + 0x60,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_03928dd4(uStack0000000000000040,uStack0000000000000044,uStack0000000000000048,
                   *(long *)(unaff_x19 + 0x38),0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_03928f54(uStack000000000000004c,uStack0000000000000050,
                     uStack0000000000000054 & 0xffffffff,uStack0000000000000054._4_4_,
                     *(long *)(unaff_x19 + 0x38),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


