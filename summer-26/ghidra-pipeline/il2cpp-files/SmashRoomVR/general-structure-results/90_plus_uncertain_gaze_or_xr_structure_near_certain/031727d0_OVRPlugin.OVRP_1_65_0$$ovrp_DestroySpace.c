/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_DestroySpace
ENTRY_POINT: 031727d0
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


void OVRPlugin_OVRP_1_65_0__ovrp_DestroySpace(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  long *plVar6;
  long unaff_x23;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x23 + 0x340);
  plVar6 = *(long **)(unaff_x22 + 0xcf8);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13594);
    thunk_FUN_01ad9084(StringLiteral_13568);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x20 + 0xfe) = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = thunk_FUN_01afa9e0(uVar5,*puVar7);
  *(undefined8 *)(param_2 + 0x68) = uVar2;
  uVar2 = thunk_FUN_01afa9e0(uVar5,*puVar7);
  thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x68),uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(uVar2,0,0);
  puVar1 = StringLiteral_13568;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    uVar2 = thunk_FUN_01afa9e0(uVar5,*(undefined8 *)StringLiteral_13568);
    *(undefined8 *)(param_2 + 0x78) = uVar2;
    uVar2 = thunk_FUN_01afa9e0(uVar5,*(undefined8 *)puVar1);
    thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x78),uVar2);
  }
  if ((*(long *)(param_2 + 0x48) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_2 + 0x48) + 0x88), lVar4 != 0)) {
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_2 + 0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


