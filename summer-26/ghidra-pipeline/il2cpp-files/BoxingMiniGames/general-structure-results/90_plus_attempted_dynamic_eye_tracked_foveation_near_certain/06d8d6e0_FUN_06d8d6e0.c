/*
FUNCTION_NAME: FUN_06d8d6e0
ENTRY_POINT: 06d8d6e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_06d8d6e0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 8);
      if (lVar1 == 0) {
UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
      if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0))
      goto UnityEngine_Rendering_RasterCommandBuffer__ConfigureFoveatedRendering;
      FUN_06da445c(lVar1,0);
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < *(int *)(param_1 + 0x28));
  }
  plVar2 = (long *)(param_1 + 0x38);
  if (*plVar2 != 0) {
    FUN_06da445c(*plVar2,0);
  }
  *plVar2 = 0;
  thunk_FUN_036b7ad0(plVar2,0);
  return;
}


