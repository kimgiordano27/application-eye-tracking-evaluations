/*
FUNCTION_NAME: Photon.Pun.UtilityScripts.OnClickInstantiate$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick
ENTRY_POINT: 075ab6dc
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


void Photon_Pun_UtilityScripts_OnClickInstantiate__UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick
               (undefined8 param_1,long param_2)

{
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined1 uStack000000000000004c;
  
  if (DAT_09848c30 == (code *)0x0) {
    in_stack_00000020 = "OVRPlugin";
    in_stack_00000028 = 9;
    in_stack_00000030 = "ovrp_Media_SetCustomCameraAnchorPose";
    in_stack_00000038 = 0x24;
    uStack0000000000000048 = 0x24;
    in_stack_00000040 = DAT_01910f80;
    uStack000000000000004c = 0;
    DAT_09848c30 = (code *)thunk_FUN_03d2f1fc(&stack0x00000020);
  }
  uStack0000000000000014 = *(undefined8 *)(param_2 + 0x14);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  (*DAT_09848c30)(param_1);
  return;
}


