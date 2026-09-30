/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 01a4f738
PROGRAM: Lovesick-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(code *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  if (param_1 == (code *)0x0) {
                    /* try { // try from 01a4f740 to 01b4f747 has its CatchHandler @ 01a50090 */
                    /* try { // try from 01a4f74c to 01b4f75b has its CatchHandler @ 01a50098 */
                    /* try { // try from 01a4f77c to 01b4f783 has its CatchHandler @ 01a50088 */
    param_1 = (code *)thunk_FUN_00d625b4();
    *(code **)(unaff_x20 + 0x5f0) = param_1;
  }
                    /* try { // try from 01a4f78c to 01b4f797 has its CatchHandler @ 01a50084 */
  (*param_1)(param_2);
                    /* try { // try from 01a4f79c to 01b4f7a3 has its CatchHandler @ 01a50080 */
  return;
}


