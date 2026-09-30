/*
FUNCTION_NAME: OVRManager$$set_isHmdPresent
ENTRY_POINT: 03135d0c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__set_isHmdPresent(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xec1) & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0xec1) = 1;
  }
  if (param_2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x20) = plVar2;
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
  }
  thunk_FUN_01b4f09c(param_1 + 0x20,plVar2);
  *(long *)(param_1 + 0x28) = (long)param_2;
  thunk_FUN_01b4f09c((long *)(param_1 + 0x28),param_2);
  return;
}


