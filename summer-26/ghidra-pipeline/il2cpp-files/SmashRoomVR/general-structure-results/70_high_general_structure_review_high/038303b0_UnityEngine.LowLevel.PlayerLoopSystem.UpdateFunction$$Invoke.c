/*
FUNCTION_NAME: UnityEngine.LowLevel.PlayerLoopSystem.UpdateFunction$$Invoke
ENTRY_POINT: 038303b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void UnityEngine_LowLevel_PlayerLoopSystem_UpdateFunction__Invoke(void)

{
  byte bVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  long *unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  *(undefined1 *)(unaff_x22 + 0x4ca) = 1;
  *(undefined8 *)(unaff_x19 + 0x2a8) = unaff_x20;
  thunk_FUN_01b4f09c(unaff_x19 + 0x2a8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x2a8);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  bVar1 = FUN_0391f968(uVar2,0,0);
  *(byte *)(unaff_x19 + 0x359) = bVar1 & 1;
  return;
}


