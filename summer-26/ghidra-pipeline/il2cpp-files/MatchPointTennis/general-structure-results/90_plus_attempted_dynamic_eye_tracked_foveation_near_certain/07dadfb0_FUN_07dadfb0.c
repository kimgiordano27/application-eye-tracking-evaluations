/*
FUNCTION_NAME: FUN_07dadfb0
ENTRY_POINT: 07dadfb0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 116
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_07dadfb0(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0a529cf0 == (code *)0x0) {
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07dadf88 with catch @ 07dadfdc
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07dadf94 with catch @ 07dadfe0
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07dadf34 with catch @ 07dadfe4
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07dadf44 with catch @ 07dadfe8
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07dadf08 with catch @ 07dadfec
                        */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SetFoveationEyeTracked";
    uStack_38 = 0x1b;
    local_28 = 4;
    local_30 = DAT_01c73bd0;
                    /* try { // try from 07dae004 to 07eae007 has its CatchHandler @ 07dae014 */
    local_24 = 0;
    DAT_0a529cf0 = (code *)thunk_FUN_044854c8(&local_50);
  }
                    /* catch() { ... } // from try @ 07dae004 with catch @ 07dae014 */
  (*DAT_0a529cf0)(param_1);
                    /* try { // try from 07dae020 to 07eae02b has its CatchHandler @ 07dae040 */
  return;
}


