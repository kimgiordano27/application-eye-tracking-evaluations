/*
FUNCTION_NAME: FUN_02cfd314
ENTRY_POINT: 02cfd314
PROGRAM: vrfs-libil2cpp.so
SCORE: 104
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_02cfd314(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
                    /* try { // try from 02cfd324 to 02dfd3ef has its CatchHandler @ 02cfd324
                       catch() { ... } // from try @ 02cfd324 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfd92c with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfd9f4 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdaa4 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdae8 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdbb0 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdc50 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdca8 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdd14 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdd44 with catch @ 02cfd324
                       catch() { ... } // from try @ 02cfdd94 with catch @ 02cfd324 */
  if (DAT_072360a8 == (code *)0x0) {
    local_18 = 0;
    local_40 = "UnityOpenXR";
    uStack_38 = 0xb;
    local_30 = "OculusFoveation_GetUsedApi";
    uStack_28 = 0x1a;
    local_20 = DAT_0533fbf8;
    local_14 = 0;
    DAT_072360a8 = (code *)thunk_FUN_015d07f0(&local_40);
  }
  (*DAT_072360a8)();
  return;
}


