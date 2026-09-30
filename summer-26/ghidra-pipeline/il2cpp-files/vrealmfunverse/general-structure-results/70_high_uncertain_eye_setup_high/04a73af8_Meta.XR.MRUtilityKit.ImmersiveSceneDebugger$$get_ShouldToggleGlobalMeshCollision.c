/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$get_ShouldToggleGlobalMeshCollision
ENTRY_POINT: 04a73af8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__get_ShouldToggleGlobalMeshCollision(void)

{
  long lVar1;
  uint in_w8;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined4 unaff_w21;
  uint uVar3;
  ulong unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x26 + unaff_x23 * 0x10 + 0x24);
  uVar3 = (uint)unaff_x23;
  if (uVar3 < in_w8) {
    lVar1 = unaff_x26 + 0x20;
    *(undefined4 *)
     (lVar1 + (-(unaff_x23 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x23 & 0xffffffff) << 4)) =
         unaff_w21;
    *(undefined8 *)(lVar1 + (long)(int)uVar3 * 0x10 + 8) = unaff_x20;
    thunk_FUN_02bb0e9c();
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((unaff_w24 < *(uint *)(lVar2 + 0x18)) && (uVar3 < *(uint *)(unaff_x26 + 0x18))) {
      lVar2 = lVar2 + (ulong)unaff_w24 * 4;
      *(int *)(lVar1 + (long)(int)uVar3 * 0x10 + 4) = *(int *)(lVar2 + 0x20) + -1;
      *(uint *)(lVar2 + 0x20) = uVar3 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


