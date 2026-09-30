/*
FUNCTION_NAME: FUN_03b2f7c4
ENTRY_POINT: 03b2f7c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_03b2f7c4(long param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar14;
  
  if ((DAT_03ffdbd9 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_4344);
    thunk_FUN_01ad9084(StringLiteral_4345);
    thunk_FUN_01ad9084(StringLiteral_366);
    thunk_FUN_01ad9084(StringLiteral_367);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdbd9 = 1;
  }
  if ((param_2 == 0) || (lVar10 = *(long *)(param_2 + 0x18), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar9 = *(uint *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(lVar10 + 0x50);
  if ((uVar9 & 0xfffffffd) == 0) {
    *(undefined1 *)(lVar10 + 0xf8) = 1;
    if (DAT_03fed2da == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
    uVar14 = **(undefined8 **)
               (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8)
    ;
    *(undefined2 *)(lVar10 + 0x144) = 1;
    *(undefined8 *)(lVar10 + 0x10c) = uVar14;
    *(undefined8 *)(lVar10 + 0x114) = *(undefined8 *)(lVar10 + 0x104);
    memcpy((void *)(lVar10 + 0xa0),(void *)(lVar10 + 0x50),0x50);
    thunk_FUN_01b4f09c((void *)(lVar10 + 0xa0),0);
    FUN_03b2d630(param_1,uVar11,lVar10);
    fVar13 = (float)FUN_03925d1c(0);
    fVar2 = DAT_00b556ec;
    if (DAT_00b556ec <= fVar13 - *(float *)(lVar10 + 0x134)) {
      *(undefined4 *)(lVar10 + 0x138) = 0;
    }
    puVar4 = StringLiteral_362;
    if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed7c5 == '\0') {
      thunk_FUN_01ad9084(StringLiteral_362);
      DAT_03fed7c5 = '\x01';
    }
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *(long *)puVar4;
    }
    uVar14 = FUN_01ed03b4(uVar11,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                          *(undefined8 *)StringLiteral_4344);
    uVar6 = FUN_01ed0670(uVar11,*(undefined8 *)StringLiteral_367);
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar7 = FUN_03922f24(uVar14,0,0);
    uVar1 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar1 = uVar14;
    }
    fVar13 = (float)FUN_03925d1c(0);
    uVar14 = *(undefined8 *)(lVar10 + 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03922f24(uVar1,uVar14,0);
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x138) = 1;
    }
    else {
      if (fVar2 <= fVar13 - *(float *)(lVar10 + 0x134)) {
        iVar8 = 1;
      }
      else {
        iVar8 = *(int *)(lVar10 + 0x138) + 1;
      }
      *(int *)(lVar10 + 0x138) = iVar8;
      *(float *)(lVar10 + 0x134) = fVar13;
    }
    FUN_03b261cc(lVar10,uVar1);
    *(undefined8 *)(lVar10 + 0x38) = uVar11;
    thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x38),uVar11);
    *(undefined8 *)(lVar10 + 0x48) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(lVar10 + 0x48),uVar6);
    *(float *)(lVar10 + 0x134) = fVar13;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar14 = FUN_01ed0670(uVar11,*(undefined8 *)StringLiteral_366);
    puVar12 = (undefined8 *)(lVar10 + 0x40);
    *puVar12 = uVar14;
    thunk_FUN_01b4f09c(puVar12,uVar14);
    uVar14 = *puVar12;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = *puVar12;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff00be == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03ff00be = '\x01';
      }
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar4;
      }
      FUN_01ecfb94(uVar14,lVar10,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),
                   *(undefined8 *)StringLiteral_4345);
    }
    *(long *)(param_1 + 0x90) = lVar10;
    thunk_FUN_01b4f09c((long *)(param_1 + 0x90),lVar10);
    uVar9 = *(uint *)(param_2 + 0x10);
  }
  if (uVar9 - 1 < 2) {
    FUN_03b2de2c(param_1,lVar10,uVar11);
    return;
  }
  return;
}


