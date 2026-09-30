/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$get_RaycastHitResult
ENTRY_POINT: 05b4038c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_RaycastHitResult(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  int in_w9;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x24;
  
  uVar3 = *param_1;
  if (in_w9 == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_05e26f18(uVar3,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
  plVar1 = (long *)FUN_05e59d90(uVar3);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar1);
    }
  }
  return plVar1;
}


