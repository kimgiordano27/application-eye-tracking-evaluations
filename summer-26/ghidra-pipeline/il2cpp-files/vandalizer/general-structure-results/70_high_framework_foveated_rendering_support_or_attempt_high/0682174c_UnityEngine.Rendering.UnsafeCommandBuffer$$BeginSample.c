/*
FUNCTION_NAME: UnityEngine.Rendering.UnsafeCommandBuffer$$BeginSample
ENTRY_POINT: 0682174c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_UnsafeCommandBuffer__BeginSample(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar2 = FUN_05c87ee0(param_1,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_03257e30(PTR_DAT_0759c0f0);
    uVar5 = thunk_FUN_0322f148();
    uVar6 = thunk_FUN_03257e30(PTR_DAT_07622b30);
    FUN_05d6f364(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03257e30(PTR_DAT_07622b38);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar5,uVar6);
  }
  lVar3 = FUN_06808b48();
  if (lVar3 != 0) {
    lVar8 = *(long *)(lVar3 + 0x30);
    uVar1 = FUN_03d11bdc(lVar8,*(undefined8 *)PTR_DAT_07621f40);
    if (0 < (int)uVar1) {
      if (lVar8 == 0) goto LAB_06821878;
      uVar2 = 0;
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        if (((*(byte *)(puVar9 + 5) >> 2 & 1) != 0) &&
           (uVar4 = FUN_068218f0(puVar9 + -2), (uVar4 & 1) != 0)) {
          if (unaff_x21 == 0) goto LAB_06821878;
          uVar4 = FUN_05c869f4();
          if ((uVar4 & 1) != 0) {
UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering:
            unaff_x20[2] = 0;
            plVar7 = unaff_x20 + 1;
            *plVar7 = 0;
            *unaff_x20 = lVar3;
            thunk_FUN_0329bf60();
            *(int *)(unaff_x20 + 2) = (int)uVar2;
            *plVar7 = unaff_x19;
            thunk_FUN_0329bf60(plVar7);
            return;
          }
          FUN_0683cd48(*puVar9,0);
          uVar4 = FUN_05c869f4();
          if ((uVar4 & 1) != 0)
          goto UnityEngine_Rendering_UnsafeCommandBuffer__ConfigureFoveatedRendering;
        }
        uVar2 = uVar2 + 1;
        puVar9 = puVar9 + 0xb;
      } while (uVar1 != uVar2);
    }
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    return;
  }
LAB_06821878:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


