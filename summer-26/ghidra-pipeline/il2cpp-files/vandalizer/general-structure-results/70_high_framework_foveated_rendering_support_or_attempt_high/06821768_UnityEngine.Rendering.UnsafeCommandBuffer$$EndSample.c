/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$EndSample
ENTRY_POINT: 06821768
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_3;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__EndSample(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = FUN_03d11bdc(lVar4,*(undefined8 *)PTR_DAT_07621f40);
  if (0 < (int)uVar1) {
    if (lVar4 == 0) {
LAB_06821878:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar5 = 0;
    puVar6 = (undefined8 *)(lVar4 + 0x30);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if (((*(byte *)(puVar6 + 5) >> 2 & 1) != 0) &&
         (uVar2 = FUN_068218f0(puVar6 + -2), (uVar2 & 1) != 0)) {
        if (unaff_x21 == 0) goto LAB_06821878;
        uVar2 = FUN_05c869f4();
        if ((uVar2 & 1) != 0) {
UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering:
          unaff_x20[2] = 0;
          plVar3 = unaff_x20 + 1;
          *plVar3 = 0;
          *unaff_x20 = param_1;
          thunk_FUN_0329bf60();
          *(int *)(unaff_x20 + 2) = (int)uVar5;
          *plVar3 = unaff_x19;
          thunk_FUN_0329bf60(plVar3);
          return;
        }
        FUN_0683cd48(*puVar6,0);
        uVar2 = FUN_05c869f4();
        if ((uVar2 & 1) != 0)
        goto UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0xb;
    } while (uVar1 != uVar5);
  }
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}


