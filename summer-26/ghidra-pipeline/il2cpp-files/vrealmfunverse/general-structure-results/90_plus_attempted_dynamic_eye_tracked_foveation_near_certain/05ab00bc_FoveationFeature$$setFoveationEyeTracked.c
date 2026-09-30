/*
FUNCTION_NAME: FoveationFeature$$setFoveationEyeTracked
ENTRY_POINT: 05ab00bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__setFoveationEyeTracked(long param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 05ab00bc to 05bb00c7 has its CatchHandler @ 05ab0868 */
  (**(code **)(param_1 + 0x448))();
  FUN_03bf3b34(&stack0x00000018,*unaff_x23);
                    /* try { // try from 05ab00e4 to 05bb00eb has its CatchHandler @ 05ab07b0 */
  lVar1 = thunk_FUN_02b79548();
  if (lVar1 != 0) {
                    /* try { // try from 05ab00fc to 05bb0103 has its CatchHandler @ 05ab07ac */
                    /* try { // try from 05ab0110 to 05bb011b has its CatchHandler @ 05ab07a8 */
    (**(code **)(*unaff_x20 + 0x398))();
  }
  return;
}


