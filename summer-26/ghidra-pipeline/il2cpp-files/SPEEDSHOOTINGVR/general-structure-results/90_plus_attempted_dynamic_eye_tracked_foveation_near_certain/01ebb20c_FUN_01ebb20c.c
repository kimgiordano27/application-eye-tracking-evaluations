/*
FUNCTION_NAME: FUN_01ebb20c
ENTRY_POINT: 01ebb20c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 116
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_01ebb20c(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ebb194 with catch @ 01ebb20c
                       try { // try from 01ebb20c to 01fbb237 has its CatchHandler @ 01ebb0d8 */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ebb208 with catch @ 01ebb210
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ebb1a8 with catch @ 01ebb214
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ebb204 with catch @ 01ebb218
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ebb174 with catch @ 01ebb21c
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ebb15c with catch @ 01ebb220
                        */
  if (DAT_0247eed0 == (code *)0x0) {
                    /* try { // try from 01ebb238 to 01fbb23b has its CatchHandler @ 01ebb248 */
                    /* catch() { ... } // from try @ 01ebb238 with catch @ 01ebb248 */
                    /* try { // try from 01ebb24c to 01fbb263 has its CatchHandler @ 01ebb278 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SetFoveationEyeTracked";
    uStack_38 = 0x1b;
    local_28 = 4;
    local_30 = DAT_00657688;
    local_24 = 0;
    DAT_0247eed0 = (code *)thunk_FUN_01040398(&local_50);
  }
  (*DAT_0247eed0)(param_1);
  return;
}


