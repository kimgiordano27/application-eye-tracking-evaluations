/*
FUNCTION_NAME: Photon.Pun.UtilityScripts.OnClickDestroy.<DestroyRpc>d__4$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 075ab6d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Photon_Pun_UtilityScripts_OnClickDestroy_<DestroyRpc>d__4__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_09848c30 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_Media_SetCustomCameraAnchorPose";
    uStack_38 = 0x24;
    local_28 = 0x24;
    local_30 = DAT_01910f80;
    local_24 = 0;
    DAT_09848c30 = (code *)thunk_FUN_03d2f1fc(&local_50);
  }
  uStack_5c = *(undefined8 *)((long)param_2 + 0x14);
  uStack_70 = *param_2;
  uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
  uStack_68 = (undefined4)param_2[1];
  local_64 = (undefined4)((ulong)param_2[1] >> 0x20);
  (*DAT_09848c30)(param_1,&uStack_70);
  return;
}


