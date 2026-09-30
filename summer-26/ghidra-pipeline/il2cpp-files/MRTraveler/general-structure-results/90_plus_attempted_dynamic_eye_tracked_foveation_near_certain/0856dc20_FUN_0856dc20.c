/*
FUNCTION_NAME: FUN_0856dc20
ENTRY_POINT: 0856dc20
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool FUN_0856dc20(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_09434d38 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OculusXRPlugin";
    uStack_38 = 0xe;
                    /* try { // try from 0856dc60 to 0866dddb has its CatchHandler @ 0856dc60
                       catch() { ... } // from try @ 0856dc60 with catch @ 0856dc60
                       catch() { ... } // from try @ 0856deb0 with catch @ 0856dc60
                       catch() { ... } // from try @ 0856dffc with catch @ 0856dc60
                       catch() { ... } // from try @ 0856e004 with catch @ 0856dc60
                       catch() { ... } // from try @ 0856e0a0 with catch @ 0856dc60 */
    local_30 = "GetEyeTrackedFoveatedRenderingSupported";
    uStack_28 = 0x27;
    local_20 = DAT_018ae780;
    local_14 = 0;
    DAT_09434d38 = (code *)thunk_FUN_03cf54f0(&local_40);
  }
  cVar1 = (*DAT_09434d38)();
  return cVar1 != '\0';
}


