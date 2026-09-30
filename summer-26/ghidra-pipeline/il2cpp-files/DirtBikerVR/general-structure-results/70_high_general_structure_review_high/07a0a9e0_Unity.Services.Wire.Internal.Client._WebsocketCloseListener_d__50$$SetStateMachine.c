/*
FUNCTION_NAME: Unity.Services.Wire.Internal.Client.<WebsocketCloseListener>d__50$$SetStateMachine
ENTRY_POINT: 07a0a9e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Unity_Services_Wire_Internal_Client_<WebsocketCloseListener>d__50__SetStateMachine(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb2) = in_w8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  Unity_Services_Vivox_vx_resp_session_chat_history_query_t__Dispose(uVar1,uVar2,unaff_w19,0);
  return;
}


