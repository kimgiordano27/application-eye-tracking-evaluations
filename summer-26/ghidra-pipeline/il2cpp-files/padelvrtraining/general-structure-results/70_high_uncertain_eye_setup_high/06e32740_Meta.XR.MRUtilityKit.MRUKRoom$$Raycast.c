/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 06e32740
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1)

{
  int in_w9;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar1;
  
  while( true ) {
    uVar1 = in_w11;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(in_x10 + 0x18) <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w21 * (long)in_w9 + 0x20)) break;
    if (unaff_w20 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      goto LAB_06e327a8;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar1 + 1;
    in_w11 = uVar1 + 1;
    unaff_w21 = uVar1;
  }
  memmove((void *)(unaff_x19 + 0x10),(void *)(in_x10 + (long)(int)unaff_w21 * 0x60 + 0x38),0x48);
  thunk_FUN_03d1023c(unaff_x19 + 0x30,0);
  uVar1 = unaff_w21;
LAB_06e327a8:
  return uVar1 < unaff_w20;
}


