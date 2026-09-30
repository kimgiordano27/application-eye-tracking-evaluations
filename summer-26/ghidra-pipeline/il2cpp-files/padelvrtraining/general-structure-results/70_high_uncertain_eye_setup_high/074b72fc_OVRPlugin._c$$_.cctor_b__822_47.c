/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__822_47
ENTRY_POINT: 074b72fc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__822_47(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_09846f90 == (code *)0x0) {
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_Message_GetDestinationArray";
    uStack_38 = 0x1f;
    local_28 = 8;
    local_30 = DAT_01910f80;
    local_24 = 0;
    DAT_09846f90 = (code *)thunk_FUN_03d2f1fc(&local_50);
  }
  (*DAT_09846f90)(param_1);
  return;
}


