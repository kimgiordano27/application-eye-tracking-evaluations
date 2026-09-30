/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetControllerRay
ENTRY_POINT: 05ae6430
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetControllerRay(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  int in_w11;
  long in_x12;
  long unaff_x19;
  
  while( true ) {
    *(uint *)(unaff_x19 + 8) = in_w10 + 1;
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x12 + 0x18) <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar1 = in_w10 + 1;
    if (-1 < *(int *)(in_x12 + (long)(int)in_w10 * (long)in_w11 + 0x20)) break;
    if (in_w9 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      goto LAB_05ae6480;
    }
    in_x12 = *(long *)(param_1 + 0x18);
    in_w10 = uVar1;
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(in_x12 + (long)(int)in_w10 * 0x18 + 0x28);
  uVar1 = in_w10;
LAB_05ae6480:
  return uVar1 < in_w9;
}


