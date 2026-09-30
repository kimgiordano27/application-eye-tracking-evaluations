/*
FUNCTION_NAME: OVRSceneVolume$$UpdateTransform
ENTRY_POINT: 0317c5d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void OVRSceneVolume__UpdateTransform(ulong param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0x1b7) = 1;
  }
  *(long **)(param_2 + 0x28) = unaff_x20;
  thunk_FUN_01b4f09c();
  if (unaff_x20 == (long *)0x0) {
    unaff_x20 = (long *)0x0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  else {
    lVar2 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    bVar1 = *(byte *)(lVar2 + 0x130);
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar3 = (long *)0x0;
      }
    }
    *(long **)(param_2 + 0x20) = plVar3;
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
      unaff_x20 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
      unaff_x20 = (long *)0x0;
    }
  }
  thunk_FUN_01b4f09c(param_2 + 0x20,unaff_x20);
  return;
}


