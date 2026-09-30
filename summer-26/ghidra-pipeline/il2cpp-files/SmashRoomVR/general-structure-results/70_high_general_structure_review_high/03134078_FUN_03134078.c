/*
FUNCTION_NAME: FUN_03134078
ENTRY_POINT: 03134078
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_14;telemetry_or_network_hits_6
*/


void FUN_03134078(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  if ((DAT_03ff1eae & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4346);
    thunk_FUN_01ad9084(StringLiteral_4344);
    thunk_FUN_01ad9084(PTR_DAT_03d7f728);
    thunk_FUN_01ad9084(StringLiteral_368);
    thunk_FUN_01ad9084(StringLiteral_4345);
    thunk_FUN_01ad9084(StringLiteral_369);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_366);
    thunk_FUN_01ad9084(StringLiteral_367);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1eae = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 0xf8) = 1;
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    uVar10 = **(undefined8 **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8)
    ;
    *(undefined2 *)(param_2 + 0x144) = 1;
    *(undefined8 *)(param_2 + 0x10c) = uVar10;
    *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x104);
    memcpy((void *)(param_2 + 0xa0),(void *)(param_2 + 0x50),0x50);
    thunk_FUN_01b4f09c((void *)(param_2 + 0xa0),0);
    FUN_03b2d630(param_1,uVar6,param_2,0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar10,uVar6,0);
    if ((uVar3 & 1) != 0) {
      FUN_03b2b6b0(param_1,param_2,uVar6,0);
      *(undefined8 *)(param_2 + 0x20) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),uVar6);
    }
    puVar2 = StringLiteral_362;
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c5 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c5 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar2;
    }
    uVar10 = FUN_01ed03b4(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),
                          *(undefined8 *)StringLiteral_4344);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar3 = FUN_03922f24(uVar10,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_367);
    }
    fVar9 = (float)FUN_03925d1c(0);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar10,uVar8,0);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x138) = 1;
    }
    else {
      if (DAT_00b556ec <= fVar9 - *(float *)(param_2 + 0x134)) {
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(param_2 + 0x138) + 1;
      }
      *(int *)(param_2 + 0x138) = iVar5;
      *(float *)(param_2 + 0x134) = fVar9;
    }
    FUN_03b261cc(param_2,uVar10,0);
    *(undefined8 *)(param_2 + 0x38) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),uVar6);
    *(float *)(param_2 + 0x134) = fVar9;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_366);
    puVar7 = (undefined8 *)(param_2 + 0x40);
    *puVar7 = uVar10;
    thunk_FUN_01b4f09c(puVar7,uVar10);
    uVar10 = *puVar7;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar10,0,0);
    if ((uVar3 & 1) != 0) {
      uVar10 = *puVar7;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff00be == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff00be = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30),
                   *(undefined8 *)StringLiteral_4345);
    }
  }
  puVar1 = StringLiteral_362;
  if ((param_4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c8 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c8 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),
                 *(undefined8 *)StringLiteral_370);
    uVar10 = FUN_01ed0670(uVar6,*(undefined8 *)StringLiteral_367);
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar8,uVar10,0);
    if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0xf8) != '\0')) {
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c7 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c7 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      FUN_01ecfb94(uVar10,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),
                   *(undefined8 *)StringLiteral_369);
    }
    puVar7 = (undefined8 *)(param_2 + 0x40);
    uVar10 = *puVar7;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar10,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff00bf == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff00bf = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      FUN_01ed03b4(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50),
                   *(undefined8 *)StringLiteral_4346);
    }
    *(undefined1 *)(param_2 + 0xf8) = 0;
    FUN_03b261cc(param_2,0,0);
    *(undefined8 *)(param_2 + 0x38) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),0);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar6,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
      uVar6 = *puVar7;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c9 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c9 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      FUN_01ecfb94(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x48),
                   *(undefined8 *)StringLiteral_368);
    }
    *(undefined1 *)(param_2 + 0x145) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    thunk_FUN_01b4f09c(puVar7,0);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff1eb4 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03ff1eb4 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar1;
    }
    FUN_01ed03b4(uVar6,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                 *(undefined8 *)PTR_DAT_03d7f728);
    *(undefined8 *)(param_2 + 0x20) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),0);
    return;
  }
  return;
}


