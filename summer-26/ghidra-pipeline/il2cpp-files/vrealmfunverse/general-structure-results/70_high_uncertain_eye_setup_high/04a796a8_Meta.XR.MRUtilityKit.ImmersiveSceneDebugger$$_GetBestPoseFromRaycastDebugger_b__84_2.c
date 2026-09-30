/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetBestPoseFromRaycastDebugger>b__84_2
ENTRY_POINT: 04a796a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetBestPoseFromRaycastDebugger>b__84_2(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_w8;
  long in_x9;
  ulong in_x10;
  long in_x11;
  uint unaff_w25;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  undefined4 *unaff_x29;
  
  *(int *)(in_x9 + in_x11 * 4 + 0x20) =
       *(int *)(unaff_x26 + (unaff_x28 & 0xffffffff) * (in_x10 & 0xffffffff) + 4) + 1;
  if (unaff_w25 < in_w8) {
    iVar1 = *(int *)(unaff_x27 + 0x38);
    uVar2 = *(undefined4 *)(unaff_x27 + 0x28);
    iVar3 = *(int *)(unaff_x27 + 0x20) + -1;
    *unaff_x29 = 0xffffffff;
    *(int *)(unaff_x27 + 0x20) = iVar3;
    *(undefined4 *)(unaff_x26 + (unaff_x28 & 0xffffffff) * 0xc + 4) = uVar2;
    *(int *)(unaff_x27 + 0x38) = iVar1 + 1;
    if (iVar3 == 0) {
      unaff_w25 = 0xffffffff;
      *(undefined4 *)(unaff_x27 + 0x24) = 0;
    }
    *(uint *)(unaff_x27 + 0x28) = unaff_w25;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


