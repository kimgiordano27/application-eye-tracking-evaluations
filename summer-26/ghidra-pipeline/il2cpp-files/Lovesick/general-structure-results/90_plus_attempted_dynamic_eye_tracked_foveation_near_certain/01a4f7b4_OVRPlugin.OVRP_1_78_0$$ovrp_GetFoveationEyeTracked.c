/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 01a4f7b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked(ulong param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  long *plVar1;
  
  plVar1 = *(long **)(unaff_x21 + 0x208);
  if ((param_1 & 1) == 0) {
                    /* try { // try from 01a4f7c8 to 01b4f7d3 has its CatchHandler @ 01a50078 */
    thunk_FUN_00d48444(Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__);
    *(undefined1 *)(unaff_x20 + 0x5f8) = 1;
  }
  if (*(int *)(*plVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01a4f7f8(param_2);
                    /* try { // try from 01a4f7ec to 01b4f7f7 has its CatchHandler @ 01a50074 */
  FUN_01a449d8();
  return;
}


