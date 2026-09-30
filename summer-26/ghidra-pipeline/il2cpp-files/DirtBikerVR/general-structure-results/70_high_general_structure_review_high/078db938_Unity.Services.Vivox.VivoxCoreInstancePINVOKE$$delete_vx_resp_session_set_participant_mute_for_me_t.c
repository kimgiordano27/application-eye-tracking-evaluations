/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_session_set_participant_mute_for_me_t
ENTRY_POINT: 078db938
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_session_set_participant_mute_for_me_t
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_03a8a718();
  FUN_03a8a718(Normal_Realtime_Serialization_RealtimeArray<AvatarIKHintModel>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xb46) = 1;
  puVar1 = Normal_Realtime_Serialization_RealtimeArray<AvatarIKHintModel>_TypeInfo;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0679343c();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
  thunk_FUN_03afed3c();
  uVar2 = FUN_065c0764(*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar2);
  return;
}


