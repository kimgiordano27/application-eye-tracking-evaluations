/*
FUNCTION_NAME: FUN_0209f678
ENTRY_POINT: 0209f678
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void FUN_0209f678(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
                    /* try { // try from 0209f684 to 0219f6a3 has its CatchHandler @ 0209f82c */
  if (DAT_029401e0 == (code *)0x0) {
                    /* try { // try from 0209f6a4 to 0219f6af has its CatchHandler @ 0209f818 */
    local_18 = 0;
    local_40 = "OVRPlugin";
    uStack_38 = 9;
    local_30 = "ovrp_StartEyeTracking";
    uStack_28 = 0x15;
    local_20 = DAT_007455b0;
                    /* try { // try from 0209f6c0 to 0219f6c7 has its CatchHandler @ 0209f814 */
    local_14 = 0;
    DAT_029401e0 = (code *)thunk_FUN_0124be64(&local_40);
  }
  (*DAT_029401e0)();
  return;
}


