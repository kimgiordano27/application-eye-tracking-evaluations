/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetOverlayQuad3
ENTRY_POINT: 0316c574
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


bool OVRPlugin_OVRP_1_6_0__ovrp_SetOverlayQuad3(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0xb8) = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = true;
  }
  else {
    if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    bVar1 = *(int *)(*(long *)(param_2 + 0x28) + 0x40) == 0;
  }
  return bVar1;
}


