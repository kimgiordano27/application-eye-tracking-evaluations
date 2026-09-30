/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelPaths
ENTRY_POINT: 03162d04
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetRenderModelPaths(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  
  lVar3 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  bVar1 = *(byte *)(lVar3 + 0x130);
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x20) = plVar2;
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x20 + 0x20),plVar2);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x20 + 0x28));
  return;
}


