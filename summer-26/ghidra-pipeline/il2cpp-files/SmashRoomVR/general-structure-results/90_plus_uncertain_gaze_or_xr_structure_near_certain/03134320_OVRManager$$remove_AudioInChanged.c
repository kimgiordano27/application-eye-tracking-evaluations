/*
FUNCTION_NAME: OVRManager$$remove_AudioInChanged
ENTRY_POINT: 03134320
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


void OVRManager__remove_AudioInChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 unaff_s8;
  
  *(int *)(unaff_x19 + 0x138) = *(int *)(unaff_x19 + 0x138) + 1;
  *(undefined4 *)(unaff_x19 + 0x134) = unaff_s8;
  FUN_03b261cc();
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38));
  *(undefined4 *)(unaff_x19 + 0x134) = unaff_s8;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_01ed0670();
  puVar5 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar5 = uVar3;
  thunk_FUN_01b4f09c(puVar5,uVar3);
  uVar3 = *puVar5;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_0391f968(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = *puVar5;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff00be == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03ff00be = '\x01';
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01ecfb94(uVar3);
  }
  puVar2 = StringLiteral_362;
  if ((unaff_x21 & 1) != 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
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
    FUN_01ecfb94(uVar3);
    uVar3 = FUN_01ed0670();
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_03922f24(uVar6,uVar3,0);
    if (((uVar4 & 1) != 0) && (*(char *)(unaff_x19 + 0xf8) != '\0')) {
      uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
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
      FUN_01ecfb94(uVar3);
    }
    puVar5 = (undefined8 *)(unaff_x19 + 0x40);
    uVar3 = *puVar5;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar3,0,0);
    if (((uVar4 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
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
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar3,0,0);
    if (((uVar4 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
      uVar3 = *puVar5;
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
      FUN_01ecfb94(uVar3);
    }
    *(undefined1 *)(unaff_x19 + 0x145) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    thunk_FUN_01b4f09c(puVar5,0);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
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
    FUN_01ed03b4(uVar3);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x20),0);
    return;
  }
  return;
}


