/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$GetFoveationLevel
ENTRY_POINT: 022de088
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_Utils__GetFoveationLevel(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  thunk_FUN_02292194(param_1,0);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)PTR_DAT_027d33f0;
    thunk_FUN_01286abc((undefined8 *)(param_1 + 0x28));
    lVar3 = *(long *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x20) = 0x10;
    *(undefined2 *)(param_1 + 0x50) = 0x101;
    uVar2 = FUN_022de2f0();
    puVar1 = PTR_DAT_027d1580;
    if (lVar3 != 0) {
      FUN_01b2ac40(lVar3,uVar2,*(undefined8 *)PTR_DAT_027d1580);
      lVar3 = *(long *)(param_1 + 0x48);
      uVar2 = FUN_022de798();
      if (lVar3 != 0) {
        FUN_01b2ac40(lVar3,uVar2,*(undefined8 *)puVar1);
        lVar3 = *(long *)(param_1 + 0x48);
        uVar2 = FUN_022de588();
        if (lVar3 != 0) {
          FUN_01b2ac40(lVar3,uVar2,*(undefined8 *)puVar1);
          FUN_022870cc();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


