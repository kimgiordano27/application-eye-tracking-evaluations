/*
FUNCTION_NAME: FUN_05271f04
ENTRY_POINT: 05271f04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05271f04(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05271ee4 with catch @ 05271f04
                       catch(type#2 @ 00000000) { ... } // from try @ 05271efc with catch @ 05271f04
                        */
  if (DAT_06b7d490 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetTrackingPoseEnabledForInvisibleSession";
    uStack_38 = 0x2e;
    local_28 = 8;
    local_30 = DAT_01206d88;
    local_24 = 0;
    DAT_06b7d490 = (code *)thunk_FUN_02d9d7f0(&local_50);
  }
  (*DAT_06b7d490)(param_1);
  return;
}


