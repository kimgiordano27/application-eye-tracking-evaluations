/*
FUNCTION_NAME: FUN_032ee0f4
ENTRY_POINT: 032ee0f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_16;telemetry_or_network_hits_7
*/


void FUN_032ee0f4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  
  if ((DAT_03ff5af2 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4346);
    thunk_FUN_01ad9084(StringLiteral_4344);
    thunk_FUN_01ad9084(StringLiteral_368);
    thunk_FUN_01ad9084(StringLiteral_4345);
    thunk_FUN_01ad9084(StringLiteral_369);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_366);
    thunk_FUN_01ad9084(StringLiteral_367);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff5af2 = 1;
  }
  if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x18), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x50);
  uVar3 = FUN_03b2d940(param_2,0);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(lVar6 + 0xf8) = 1;
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    uVar11 = **(undefined8 **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8)
    ;
    *(undefined2 *)(lVar6 + 0x144) = 1;
    *(undefined8 *)(lVar6 + 0x10c) = uVar11;
    *(undefined8 *)(lVar6 + 0x114) = *(undefined8 *)(lVar6 + 0x104);
    uVar3 = FUN_032ee7a8(lVar6);
    if ((uVar3 & 1) != 0) {
      FUN_0394fadc(0);
      FUN_032ee820(lVar6);
    }
    memcpy((void *)(lVar6 + 0xa0),(void *)(lVar6 + 0x50),0x50);
    thunk_FUN_01b4f09c((void *)(lVar6 + 0xa0),0);
    FUN_03b2d630(param_1,uVar7,lVar6,0);
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
    uVar11 = FUN_01ed03b4(uVar7,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),
                          *(undefined8 *)StringLiteral_4344);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar11,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar11 = FUN_01ed0670(uVar7,*(undefined8 *)StringLiteral_367);
    }
    fVar10 = (float)FUN_03925d1c(0);
    uVar9 = *(undefined8 *)(lVar6 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar11,uVar9,0);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(lVar6 + 0x138) = 1;
    }
    else {
      if (DAT_00b556ec <= fVar10 - *(float *)(lVar6 + 0x134)) {
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(lVar6 + 0x138) + 1;
      }
      *(int *)(lVar6 + 0x138) = iVar5;
      *(float *)(lVar6 + 0x134) = fVar10;
    }
    FUN_03b261cc(lVar6,uVar11,0);
    *(undefined8 *)(lVar6 + 0x38) = uVar7;
    thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x38),uVar7);
    *(float *)(lVar6 + 0x134) = fVar10;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar11 = FUN_01ed0670(uVar7,*(undefined8 *)StringLiteral_366);
    puVar8 = (undefined8 *)(lVar6 + 0x40);
    *puVar8 = uVar11;
    thunk_FUN_01b4f09c(puVar8,uVar11);
    uVar11 = *puVar8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar11,0,0);
    if ((uVar3 & 1) != 0) {
      uVar11 = *puVar8;
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
      FUN_01ecfb94(uVar11,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30),
                   *(undefined8 *)StringLiteral_4345);
    }
  }
  uVar3 = FUN_03b2da10(param_2,0);
  puVar2 = StringLiteral_362;
  if ((uVar3 & 1) != 0) {
    uVar11 = *(undefined8 *)(lVar6 + 0x28);
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c8 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c8 = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar4 = *(long *)puVar2;
    }
    FUN_01ecfb94(uVar11,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),
                 *(undefined8 *)StringLiteral_370);
    uVar11 = FUN_01ed0670(uVar7,*(undefined8 *)StringLiteral_367);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar9 = *(undefined8 *)(lVar6 + 0x28);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_03922f24(uVar9,uVar11,0);
    if (((uVar3 & 1) == 0) || (*(char *)(lVar6 + 0xf8) == '\0')) {
      uVar11 = *(undefined8 *)(lVar6 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar11,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff00bf == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03ff00bf = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar2;
        }
        FUN_01ed03b4(uVar7,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50),
                     *(undefined8 *)StringLiteral_4346);
      }
    }
    else {
      uVar11 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c7 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c7 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar11,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),
                   *(undefined8 *)StringLiteral_369);
    }
    *(undefined1 *)(lVar6 + 0xf8) = 0;
    FUN_03b261cc(lVar6,0,0);
    *(undefined8 *)(lVar6 + 0x38) = 0;
    thunk_FUN_01b4f09c((undefined8 *)(lVar6 + 0x38),0);
    puVar8 = (undefined8 *)(lVar6 + 0x40);
    uVar11 = *puVar8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar11,0,0);
    if (((uVar3 & 1) != 0) && (*(char *)(lVar6 + 0x145) != '\0')) {
      uVar11 = *puVar8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c9 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c9 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar11,lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x48),
                   *(undefined8 *)StringLiteral_368);
    }
    *(undefined1 *)(lVar6 + 0x145) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    thunk_FUN_01b4f09c(puVar8,0);
    uVar11 = *(undefined8 *)(lVar6 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar7,uVar11,0);
    if ((uVar3 & 1) != 0) {
      FUN_03b2b6b0(param_1,lVar6,0,0);
      FUN_03b2b6b0(param_1,lVar6,uVar7,0);
      return;
    }
  }
  return;
}


