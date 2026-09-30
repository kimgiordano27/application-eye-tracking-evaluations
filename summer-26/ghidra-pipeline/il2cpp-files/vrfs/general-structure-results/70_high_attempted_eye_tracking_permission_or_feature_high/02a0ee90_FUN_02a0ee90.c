/*
FUNCTION_NAME: FUN_02a0ee90
ENTRY_POINT: 02a0ee90
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02a0ee90(undefined8 param_1)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000007234d30 == (code *)0x0) {
    pcStack_50 = "OVRPlugin";
    uStack_48 = 9;
    pcStack_40 = "ovrp_GetEyeTrackingEnabled";
    uStack_38 = 0x1a;
    uStack_28 = 8;
    uStack_30 = DAT_0533f8a8;
    uStack_24 = 0;
    pcRam0000000007234d30 = (code *)thunk_FUN_015d07f0(&pcStack_50);
  }
  (*pcRam0000000007234d30)(param_1);
                    /* try { // try from 02a0eefc to 02b0f213 has its CatchHandler @ 02a0eefc
                       catch() { ... } // from try @ 02a0eefc with catch @ 02a0eefc
                       catch() { ... } // from try @ 02a0f324 with catch @ 02a0eefc
                       catch() { ... } // from try @ 02a0f370 with catch @ 02a0eefc
                       catch() { ... } // from try @ 02a0f3ac with catch @ 02a0eefc */
  return;
}


