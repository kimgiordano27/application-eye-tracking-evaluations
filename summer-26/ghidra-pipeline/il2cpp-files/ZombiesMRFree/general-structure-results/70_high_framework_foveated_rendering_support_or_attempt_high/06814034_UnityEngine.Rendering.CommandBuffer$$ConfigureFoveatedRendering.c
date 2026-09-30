/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 06814034
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x21;
  
  uVar1 = thunk_FUN_0301080c(**(undefined8 **)(param_1 + 0xd0));
  FUN_05b32c00(uVar1,0);
  *unaff_x19 = uVar1;
  thunk_FUN_03048534();
  lVar2 = **(long **)(*unaff_x21 + 0xb8);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0xa8);
    uVar1 = FUN_0681441c(*(undefined8 *)(lVar2 + 0x98));
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x10);
      *puVar4 = uVar1;
      thunk_FUN_03048534(puVar4,uVar1);
      lVar2 = **(long **)(*unaff_x21 + 0xb8);
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0xa8);
        uVar1 = FUN_0681441c(*(undefined8 *)(lVar2 + 0xa0));
        if (lVar3 != 0) {
          puVar4 = (undefined8 *)(lVar3 + 0x18);
          *puVar4 = uVar1;
          thunk_FUN_03048534(puVar4,uVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


