/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 04edd6fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(undefined8 param_1)

{
  bool in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 unaff_d8;
  undefined4 unaff_s9;
  float in_stack_00000010;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (!in_ZR) {
    FUN_02aa8564(&stack0x00000040);
                    /* WARNING: Subroutine does not return */
    FUN_02c2be1c(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar4 = *plVar3;
  in_stack_00000040 = lVar4;
  __cxa_end_catch();
  FUN_047e41f8(in_stack_00000048,*unaff_x25);
  if (lVar4 == 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_05c8c45c();
    if ((uVar1 & 1) == 0) {
      in_stack_00000010 = *(float *)(unaff_x19 + 0x128);
    }
    uVar2 = *unaff_x22;
    *(float *)(unaff_x19 + 0x1a8) =
         *(float *)(unaff_x19 + 0x180) + in_stack_00000010 * *(float *)(unaff_x19 + 0x19c);
    *(ulong *)(unaff_x19 + 0x1a0) =
         CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x178) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(unaff_x19 + 0x194) >> 0x20) * in_stack_00000010,
                  (float)*(undefined8 *)(unaff_x19 + 0x178) +
                  (float)*(undefined8 *)(unaff_x19 + 0x194) * in_stack_00000010);
    lVar4 = thunk_FUN_02b79644(uVar2);
    FUN_04dbdb8c(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = unaff_x20;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar4 + 0x18) = unaff_d8;
    *(undefined4 *)(lVar4 + 0x20) = unaff_s9;
    *(long *)(unaff_x19 + 0x130) = lVar4;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x130,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc(lVar4);
}


