/*
FUNCTION_NAME: Photon.Pun.Demo.Cockpit.SendRateOnSerializeField$$OnEndEdit
ENTRY_POINT: 02d52854
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Pun_Demo_Cockpit_SendRateOnSerializeField__OnEndEdit(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_03a290b8 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SetTiledMultiResDynamic";
    uStack_38 = 0x1c;
    local_28 = 4;
    local_30 = DAT_009a5708;
    local_24 = 0;
    DAT_03a290b8 = (code *)thunk_FUN_01861e78(&local_50);
  }
  (*DAT_03a290b8)(param_1);
  return;
}


