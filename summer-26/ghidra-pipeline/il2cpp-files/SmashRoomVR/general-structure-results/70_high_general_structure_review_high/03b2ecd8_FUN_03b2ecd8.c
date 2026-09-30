/*
FUNCTION_NAME: FUN_03b2ecd8
ENTRY_POINT: 03b2ecd8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_15;telemetry_or_network_hits_6
*/


void FUN_03b2ecd8(long param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 uVar13;
  
  if ((DAT_03ffdbd4 & 1) == 0) {
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
    DAT_03ffdbd4 = 1;
  }
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(param_2 + 0xf8) = 1;
      if (DAT_03fed2da == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
        DAT_03fed2da = '\x01';
      }
      uVar13 = **(undefined8 **)
                 (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                 0xb8);
      *(undefined2 *)(param_2 + 0x144) = 1;
      *(undefined8 *)(param_2 + 0x10c) = uVar13;
      *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x104);
      memcpy((void *)(param_2 + 0xa0),(void *)(param_2 + 0x50),0x50);
      thunk_FUN_01b4f09c((void *)(param_2 + 0xa0),0);
      FUN_03b2d630(param_1,uVar9,param_2);
      puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar13,uVar9,0);
      if ((uVar5 & 1) != 0) {
        FUN_03b2b6b0(param_1,param_2,uVar9);
        *(undefined8 *)(param_2 + 0x20) = uVar9;
        thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),uVar9);
      }
      fVar12 = (float)FUN_03925d1c(0);
      fVar2 = DAT_00b556ec;
      if (DAT_00b556ec <= fVar12 - *(float *)(param_2 + 0x134)) {
        *(undefined4 *)(param_2 + 0x138) = 0;
      }
      puVar4 = StringLiteral_362;
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c5 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c5 = '\x01';
      }
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar4;
      }
      uVar13 = FUN_01ed03b4(uVar9,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),
                            *(undefined8 *)StringLiteral_4344);
      uVar7 = FUN_01ed0670(uVar9,*(undefined8 *)StringLiteral_367);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar3);
      }
      uVar5 = FUN_03922f24(uVar13,0,0);
      uVar1 = uVar7;
      if ((uVar5 & 1) == 0) {
        uVar1 = uVar13;
      }
      fVar12 = (float)FUN_03925d1c(0);
      uVar13 = *(undefined8 *)(param_2 + 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_03922f24(uVar1,uVar13,0);
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(param_2 + 0x138) = 1;
      }
      else {
        if (fVar2 <= fVar12 - *(float *)(param_2 + 0x134)) {
          iVar8 = 1;
        }
        else {
          iVar8 = *(int *)(param_2 + 0x138) + 1;
        }
        *(int *)(param_2 + 0x138) = iVar8;
        *(float *)(param_2 + 0x134) = fVar12;
      }
      FUN_03b261cc(param_2,uVar1);
      *(undefined8 *)(param_2 + 0x38) = uVar9;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),uVar9);
      *(undefined8 *)(param_2 + 0x48) = uVar7;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x48),uVar7);
      *(float *)(param_2 + 0x134) = fVar12;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar13 = FUN_01ed0670(uVar9,*(undefined8 *)StringLiteral_366);
      puVar11 = (undefined8 *)(param_2 + 0x40);
      *puVar11 = uVar13;
      thunk_FUN_01b4f09c(puVar11,uVar13);
      uVar13 = *puVar11;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar13,0,0);
      if ((uVar5 & 1) != 0) {
        uVar13 = *puVar11;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff00be == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03ff00be = '\x01';
        }
        lVar6 = *(long *)puVar4;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar4;
        }
        FUN_01ecfb94(uVar13,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30),
                     *(undefined8 *)StringLiteral_4345);
      }
    }
    puVar3 = StringLiteral_362;
    if ((param_4 & 1) != 0) {
      uVar13 = *(undefined8 *)(param_2 + 0x28);
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c8 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c8 = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar3;
      }
      FUN_01ecfb94(uVar13,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20),
                   *(undefined8 *)StringLiteral_370);
      uVar13 = FUN_01ed0670(uVar9,*(undefined8 *)StringLiteral_367);
      puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      puVar11 = (undefined8 *)(param_2 + 0x48);
      uVar7 = *puVar11;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03922f24(uVar7,uVar13,0);
      if (((uVar5 & 1) != 0) && (*(char *)(param_2 + 0xf8) != '\0')) {
        uVar13 = *puVar11;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c7 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c7 = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar3;
        }
        FUN_01ecfb94(uVar13,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28),
                     *(undefined8 *)StringLiteral_369);
      }
      puVar10 = (undefined8 *)(param_2 + 0x40);
      uVar13 = *puVar10;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar13,0,0);
      if (((uVar5 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff00bf == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03ff00bf = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar3;
        }
        FUN_01ed03b4(uVar9,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                     *(undefined8 *)StringLiteral_4346);
      }
      *(undefined1 *)(param_2 + 0xf8) = 0;
      FUN_03b261cc(param_2,0);
      *(undefined8 *)(param_2 + 0x38) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),0);
      *(undefined8 *)(param_2 + 0x48) = 0;
      thunk_FUN_01b4f09c(puVar11,0);
      uVar9 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar9,0,0);
      if (((uVar5 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
        uVar9 = *puVar10;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c9 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c9 = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar3;
        }
        FUN_01ecfb94(uVar9,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48),
                     *(undefined8 *)StringLiteral_368);
      }
      *(undefined1 *)(param_2 + 0x145) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      thunk_FUN_01b4f09c(puVar10,0);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff1eb4 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff1eb4 = '\x01';
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar3;
      }
      FUN_01ed03b4(uVar9,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                   *(undefined8 *)PTR_DAT_03d7f728);
      *(undefined8 *)(param_2 + 0x20) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x20),0);
    }
    *(long *)(param_1 + 0x90) = param_2;
    thunk_FUN_01b4f09c((long *)(param_1 + 0x90),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


