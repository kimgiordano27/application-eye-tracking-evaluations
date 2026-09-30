/*
FUNCTION_NAME: FUN_05796a88
ENTRY_POINT: 05796a88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05796a88(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05796a38 with catch @ 05796a88
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05796a10 with catch @ 05796a8c
                        */
  if (DAT_06dbfb50 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionEnd";
    uStack_38 = 0x1d;
    local_30 = DAT_010fc3f0;
    local_28 = 8;
    local_24 = 0;
    DAT_06dbfb50 = (code *)thunk_FUN_02dd33e4(&local_50);
  }
  (*DAT_06dbfb50)(param_1);
  return;
}


