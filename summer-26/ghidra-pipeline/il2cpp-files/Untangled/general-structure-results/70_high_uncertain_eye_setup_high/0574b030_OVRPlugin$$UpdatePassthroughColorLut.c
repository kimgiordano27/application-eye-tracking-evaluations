/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 0574b030
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdatePassthroughColorLut(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  int unaff_w20;
  long unaff_x25;
  double dVar2;
  double unaff_d8;
  double in_stack_00000008;
  long in_stack_00000018;
  
  dVar2 = (double)FUN_0556c208();
  if (unaff_w20 < 0x2b) {
    if (unaff_w20 < 0xd) {
      if (unaff_w20 == 0) goto LAB_0574b460;
      if (unaff_w20 == 0xc) goto LAB_0574b418;
    }
    else {
      if (unaff_w20 == 0x1a) goto LAB_0574b450;
      if (unaff_w20 == 0x2a) goto LAB_0574b1fc;
    }
LAB_0574b48c:
    *unaff_x19 = 0;
    thunk_FUN_02f411dc();
    uVar1 = 0;
  }
  else {
    if (unaff_w20 < 0x42) {
      if (unaff_w20 == 0x3f) {
LAB_0574b460:
        in_stack_00000008 = unaff_d8 + dVar2;
      }
      else {
        if (unaff_w20 != 0x41) goto LAB_0574b48c;
LAB_0574b418:
        in_stack_00000008 = unaff_d8 / dVar2;
      }
    }
    else if (unaff_w20 == 0x45) {
LAB_0574b450:
      in_stack_00000008 = unaff_d8 * dVar2;
    }
    else {
      if (unaff_w20 != 0x49) goto LAB_0574b48c;
LAB_0574b1fc:
      in_stack_00000008 = unaff_d8 - dVar2;
    }
    uVar1 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d04108,&stack0x00000008);
    *unaff_x19 = uVar1;
    thunk_FUN_02f411dc();
    uVar1 = 1;
  }
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


