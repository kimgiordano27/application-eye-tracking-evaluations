/*
FUNCTION_NAME: Oculus.Platform.MessageWithPartyUpdateNotification$$GetDataFromMessage
ENTRY_POINT: 030d2c14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Platform_MessageWithPartyUpdateNotification__GetDataFromMessage(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xa00));
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  *(undefined1 *)(unaff_x21 + 0xa5d) = 1;
  if (unaff_x20 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    plVar3 = (long *)0x0;
  }
  else {
    lVar4 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
        plVar3 = (long *)0x0;
      }
    }
    *(long **)(unaff_x19 + 0x20) = plVar3;
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != lVar4) {
        plVar3 = (long *)0x0;
      }
    }
  }
  thunk_FUN_01b4f09c(unaff_x19 + 0x20,plVar3);
  *(long **)(unaff_x19 + 0x28) = unaff_x20;
  thunk_FUN_01b4f09c();
  uVar2 = thunk_FUN_01afa9e0();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x30),uVar2);
  return;
}


