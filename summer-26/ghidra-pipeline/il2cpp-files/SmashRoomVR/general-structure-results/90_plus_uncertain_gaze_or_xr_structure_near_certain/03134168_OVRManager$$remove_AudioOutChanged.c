/*
FUNCTION_NAME: OVRManager$$remove_AudioOutChanged
ENTRY_POINT: 03134168
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_12;validity_or_gating_hits_11;telemetry_or_network_hits_5;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_5
*/


void OVRManager__remove_AudioOutChanged(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar5;
  undefined8 *unaff_x23;
  undefined8 uVar6;
  undefined2 unaff_w24;
  float fVar7;
  undefined8 uVar8;
  
  uVar8 = **(undefined8 **)
            (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8);
  *(undefined2 *)(unaff_x19 + 0x144) = unaff_w24;
  unaff_x23[1] = uVar8;
  unaff_x23[2] = *unaff_x23;
  memcpy((void *)(unaff_x19 + 0xa0),(void *)(unaff_x19 + 0x50),0x50);
  thunk_FUN_01b4f09c((void *)(unaff_x19 + 0xa0),0);
  FUN_03b2d630();
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(uVar8);
  if ((uVar3 & 1) != 0) {
    FUN_03b2b6b0();
    *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x20));
  }
  puVar2 = StringLiteral_362;
  if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03fed7c5 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_362);
    DAT_03fed7c5 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_01ed03b4();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar3 = FUN_03922f24(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_01ed0670();
  }
  fVar7 = (float)FUN_03925d1c(0);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(uVar8,uVar6,0);
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x138) = 1;
  }
  else {
    if (DAT_00b556ec <= fVar7 - *(float *)(unaff_x19 + 0x134)) {
      iVar4 = 1;
    }
    else {
      iVar4 = *(int *)(unaff_x19 + 0x138) + 1;
    }
    *(int *)(unaff_x19 + 0x138) = iVar4;
    *(float *)(unaff_x19 + 0x134) = fVar7;
  }
  FUN_03b261cc();
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38));
  *(float *)(unaff_x19 + 0x134) = fVar7;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_01ed0670();
  puVar5 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar5 = uVar8;
  thunk_FUN_01b4f09c(puVar5,uVar8);
  uVar8 = *puVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    uVar8 = *puVar5;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff00be == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03ff00be = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01ecfb94(uVar8);
  }
  puVar1 = StringLiteral_362;
  if ((unaff_x21 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c8 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c8 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01ecfb94(uVar8);
    uVar8 = FUN_01ed0670();
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar6,uVar8,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0xf8) != '\0')) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c7 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c7 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ecfb94(uVar8);
    }
    puVar5 = (undefined8 *)(unaff_x19 + 0x40);
    uVar8 = *puVar5;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar8,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff00bf == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff00bf = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ed03b4();
    }
    *(undefined1 *)(unaff_x19 + 0xf8) = 0;
    FUN_03b261cc();
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38),0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar8,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x145) != '\0')) {
      uVar8 = *puVar5;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c9 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c9 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01ecfb94(uVar8);
    }
    *(undefined1 *)(unaff_x19 + 0x145) = 0;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    thunk_FUN_01b4f09c(puVar5,0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff1eb4 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03ff1eb4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01ed03b4(uVar8);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x20),0);
    return;
  }
  return;
}


