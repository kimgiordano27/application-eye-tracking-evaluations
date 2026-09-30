/*
FUNCTION_NAME: FUN_03ae6b80
ENTRY_POINT: 03ae6b80
PROGRAM: vrfs-libil2cpp.so
SCORE: 110
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


bool FUN_03ae6b80(void)

{
  int iVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
                    /* try { // try from 03ae6b84 to 03be6b8b has its CatchHandler @ 03ae6b8c */
                    /* catch() { ... } // from try @ 03ae6b08 with catch @ 03ae6b8c
                       catch() { ... } // from try @ 03ae6b70 with catch @ 03ae6b8c
                       catch() { ... } // from try @ 03ae6b84 with catch @ 03ae6b8c */
                    /* try { // try from 03ae6b90 to 03be6d53 has its CatchHandler @ 03ae6b90
                       catch() { ... } // from try @ 03ae6b90 with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6ddc with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6eb4 with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6efc with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6f04 with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6f6c with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6fa8 with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6fc8 with catch @ 03ae6b90
                       catch() { ... } // from try @ 03ae6ffc with catch @ 03ae6b90 */
  if (DAT_0723b118 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OculusXRPlugin";
    uStack_38 = 0xe;
    local_30 = "GetEyeTrackedFoveatedRenderingSupported";
    uStack_28 = 0x27;
    local_20 = DAT_0533fbf8;
    local_14 = 0;
    DAT_0723b118 = (code *)thunk_FUN_015d07f0(&local_40);
  }
  iVar1 = (*DAT_0723b118)();
  return iVar1 != 0;
}


