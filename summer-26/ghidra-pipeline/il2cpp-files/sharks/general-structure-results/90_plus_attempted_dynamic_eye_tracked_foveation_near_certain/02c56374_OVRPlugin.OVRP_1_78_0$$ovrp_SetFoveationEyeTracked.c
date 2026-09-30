/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_SetFoveationEyeTracked
ENTRY_POINT: 02c56374
PROGRAM: sharks-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_SetFoveationEyeTracked(void)

{
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
                    /* try { // try from 02c56388 to 02d56397 has its CatchHandler @ 02c56398 */
                    /* catch() { ... } // from try @ 02c56328 with catch @ 02c56398
                       catch() { ... } // from try @ 02c56388 with catch @ 02c56398 */
                    /* try { // try from 02c5639c to 02d5639f has its CatchHandler @ 02c563a8 */
  FUN_02c563a0(uVar1,unaff_w19);
  return;
}


