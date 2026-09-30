/*
FUNCTION_NAME: FUN_0209f364
ENTRY_POINT: 0209f364
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 118
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_0209f364(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 0209f240 with catch @ 0209f378
                       try { // try from 0209f378 to 0219f39f has its CatchHandler @ 0209f1a4 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 0209f224 with catch @ 0209f37c
                        */
  if (DAT_029401a8 == (code *)0x0) {
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 0209f268 with catch @ 0209f380
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 0209f27c with catch @ 0209f384
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 0209f354 with catch @ 0209f388
                        */
                    /* try { // try from 0209f3a0 to 0219f3a3 has its CatchHandler @ 0209f3c8 */
                    /* try { // try from 0209f3a4 to 0219f3cb has its CatchHandler @ 0209f1a4 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetFoveationEyeTrackedSupported";
    uStack_38 = 0x24;
    local_28 = 8;
    local_30 = DAT_007455b0;
    local_24 = 0;
    DAT_029401a8 = (code *)thunk_FUN_0124be64(&local_50);
  }
                    /* catch() { ... } // from try @ 0209f3a0 with catch @ 0209f3c8 */
                    /* try { // try from 0209f3cc to 0219f3d7 has its CatchHandler @ 0209f3ec */
  (*DAT_029401a8)(param_1);
                    /* try { // try from 0209f3d8 to 0219f3e3 has its CatchHandler @ 0209f1a4 */
  return;
}


