/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$GetFoveationLevel
ENTRY_POINT: 00e8cae8
PROGRAM: JustAnotherCookingGame-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_6;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_Utils__GetFoveationLevel(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 in_w9;
  long unaff_x19;
  uint unaff_w25;
  long unaff_x26;
  
  *(undefined4 *)(param_1 + 0x20) = in_w9;
  lVar2 = *(long *)(unaff_x19 + 0x18);
  if (lVar2 != 0) {
    if (unaff_w25 < *(uint *)(lVar2 + 0x18)) {
      *(undefined4 *)(lVar2 + unaff_x26 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x28);
      lVar2 = *(long *)(unaff_x19 + 0x18);
      if (lVar2 == 0) goto LAB_00e8cb70;
      if (unaff_w25 < *(uint *)(lVar2 + 0x18)) {
        *(undefined4 *)(lVar2 + unaff_x26 * 0x18 + 0x28) = 0;
        lVar2 = *(long *)(unaff_x19 + 0x18);
        if (lVar2 == 0) goto LAB_00e8cb70;
        if (unaff_w25 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + unaff_x26 * 0x18 + 0x30) = 0;
          *(uint *)(unaff_x19 + 0x28) = unaff_w25;
          *(int *)(unaff_x19 + 0x2c) = *(int *)(unaff_x19 + 0x2c) + 1;
          *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + 1;
          return 1;
        }
      }
    }
    uVar1 = thunk_FUN_005c3bd0();
                    /* WARNING: Subroutine does not return */
    FUN_00628184(uVar1,0);
  }
LAB_00e8cb70:
                    /* WARNING: Subroutine does not return */
  FUN_006281b8();
}


