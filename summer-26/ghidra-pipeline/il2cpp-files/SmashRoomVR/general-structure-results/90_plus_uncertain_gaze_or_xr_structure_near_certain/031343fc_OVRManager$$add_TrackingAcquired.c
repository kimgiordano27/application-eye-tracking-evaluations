/*
FUNCTION_NAME: OVRManager$$add_TrackingAcquired
ENTRY_POINT: 031343fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_6;telemetry_or_network_hits_3;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_3
*/


void OVRManager__add_TrackingAcquired(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 in_w8;
  long unaff_x19;
  ulong unaff_x21;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x23;
  long *unaff_x24;
  
  *(undefined1 *)(unaff_x23 + 0xbe) = in_w8;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01ecfb94();
  puVar2 = StringLiteral_362;
  if ((unaff_x21 & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c8 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c8 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01ecfb94(uVar4);
    uVar4 = FUN_01ed0670();
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar6,uVar4,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0xf8) != '\0')) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c7 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c7 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ecfb94(uVar4);
    }
    puVar5 = (undefined8 *)(unaff_x19 + 0x40);
    uVar4 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff00bf == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff00bf = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ed03b4();
    }
    *(undefined1 *)(unaff_x19 + 0xf8) = 0;
    FUN_03b261cc();
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38),0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar4,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
      uVar4 = *puVar5;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c9 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c9 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ecfb94(uVar4);
    }
    *(undefined1 *)(unaff_x19 + 0x145) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    thunk_FUN_01b4f09c(puVar5,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff1eb4 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03ff1eb4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01ed03b4(uVar4);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x20),0);
    return;
  }
  return;
}


