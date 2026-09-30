/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 01a45424
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0377acc0 == (code *)0x0) {
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_SetDeveloperAccessToken";
    uStack_38 = 0x1b;
    local_28 = 8;
    local_30 = DAT_028aa478;
    local_24 = 0;
    DAT_0377acc0 = (code *)thunk_FUN_00d625b4(&local_50);
  }
  uVar2 = thunk_FUN_00d62a48(param_1);
  iVar1 = (*DAT_0377acc0)();
  thunk_FUN_00d62a3c(uVar2);
  return iVar1 != 0;
}


