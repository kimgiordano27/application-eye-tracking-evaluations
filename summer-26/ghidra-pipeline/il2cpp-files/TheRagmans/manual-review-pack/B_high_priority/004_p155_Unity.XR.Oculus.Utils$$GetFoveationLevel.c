/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$GetFoveationLevel
ENTRY_POINT: 00ce259c
PROGRAM: TheRagmans-libil2cpp.so
SCORE: 71
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_3;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
Unity_XR_Oculus_Utils__GetFoveationLevel(long *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  int in_w9;
  
  if (in_w9 < param_4) {
    thunk_FUN_00556484(PTR_DAT_01558760);
    uVar2 = thunk_FUN_005690e8();
    FUN_00437fc4();
    uVar3 = thunk_FUN_00556484(PTR_DAT_01563088);
    uVar4 = thunk_FUN_00556484(PTR_DAT_0157af50);
    FUN_00b7217c(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_00556484(PTR_DAT_01566780);
                    /* WARNING: Subroutine does not return */
    FUN_0052517c(uVar2,uVar3);
  }
  if (param_4 != 0) {
    lVar1 = 0;
    if (in_w8 != 0) {
      lVar1 = param_2 + 0x20;
    }
                    /* WARNING: Could not recover jumptable at 0x00ce25d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x298))
                      (param_1,lVar1 + param_3,param_4,0,*(undefined8 *)(*param_1 + 0x2a0));
    return uVar2;
  }
  return 0;
}


