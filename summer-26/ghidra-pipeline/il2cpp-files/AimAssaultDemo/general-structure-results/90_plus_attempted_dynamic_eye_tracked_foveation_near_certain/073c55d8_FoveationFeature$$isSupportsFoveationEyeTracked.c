/*
FUNCTION_NAME: FoveationFeature$$isSupportsFoveationEyeTracked
ENTRY_POINT: 073c55d8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 125
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__isSupportsFoveationEyeTracked(long *param_1)

{
  if (*(int *)(*param_1 + 0xe4) == 0) {
                    /* try { // try from 073c55e4 to 074c5603 has its CatchHandler @ 073c5a98 */
    thunk_FUN_03798b70();
  }
  FUN_0755df88();
  FUN_05d64e94(&stack0x00000050,
               *(undefined8 *)System_Linq_Expressions_Interpreter_NewArrayInitInstruction_TypeInfo);
  return;
}


