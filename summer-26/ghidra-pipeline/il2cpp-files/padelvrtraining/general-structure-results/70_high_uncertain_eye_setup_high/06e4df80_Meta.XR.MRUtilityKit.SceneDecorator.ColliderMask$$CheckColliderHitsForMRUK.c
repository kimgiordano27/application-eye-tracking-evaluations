/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$CheckColliderHitsForMRUK
ENTRY_POINT: 06e4df80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__CheckColliderHitsForMRUK(long param_1)

{
  int in_w9;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  uint unaff_w24;
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
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w24 * (long)in_w9 + 0x20)) break;
    if (unaff_w23 <= uVar1) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(uint *)(unaff_x19 + 0xc) = unaff_w23 + 1;
      *(undefined4 *)(unaff_x19 + 0x18) = 0;
      goto LAB_06e4e00c;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 0xc) = uVar1 + 1;
    in_w11 = uVar1 + 1;
    unaff_w24 = uVar1;
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  FUN_05810270();
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  uVar1 = unaff_w24;
LAB_06e4e00c:
  return uVar1 < unaff_w23;
}


