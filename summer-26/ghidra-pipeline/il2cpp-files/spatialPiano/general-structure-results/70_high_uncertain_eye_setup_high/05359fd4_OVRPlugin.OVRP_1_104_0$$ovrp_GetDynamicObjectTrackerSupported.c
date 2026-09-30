/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectTrackerSupported
ENTRY_POINT: 05359fd4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectTrackerSupported
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  char *local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  if (DAT_06bbbc80 == (code *)0x0) {
    local_70 = "ovrplatformloader";
    uStack_68 = 0x11;
    local_60 = "ovr_NetSync_SetVoipAttenuationModel";
    uStack_58 = 0x23;
    local_50 = DAT_011b1530;
    local_48 = 0x28;
    local_44 = 0;
    DAT_06bbbc80 = (code *)thunk_FUN_02f454a0(&local_70);
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_3 + 0x20;
  }
  lVar2 = 0;
  if (param_4 != 0) {
    lVar2 = param_4 + 0x20;
  }
  (*DAT_06bbbc80)(param_1,param_2,lVar1,lVar2,param_5);
  return;
}


