/*
FUNCTION_NAME: FUN_03869ce8
ENTRY_POINT: 03869ce8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_03869ce8(float param_1,long param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_03ff86d5 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_364);
    thunk_FUN_01ad9084(StringLiteral_359);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff86d5 = 1;
  }
  if (param_3 == 0) {
LAB_0386a030:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_03b26064(param_3,0);
  if (((uVar4 & 1) != 0) && ((param_4 != 1 || (iVar3 = FUN_0390e2b8(0), iVar3 != 1)))) {
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(char *)(param_3 + 0x145) == '\0') {
        if (*(long *)(param_2 + 0x38) == 0) goto LAB_0386a030;
        if ((*(char *)(param_3 + 0x144) != '\0') &&
           (param_1 = (float)*(int *)(*(long *)(param_2 + 0x38) + 0x3c) * param_1,
           fVar8 = (float)*(undefined8 *)(param_3 + 0x114) - (float)*(undefined8 *)(param_3 + 0x104)
           , fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x114) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(param_3 + 0x104) >> 0x20),
           fVar8 * fVar8 + fVar9 * fVar9 < param_1 * param_1)) {
          return;
        }
        lVar5 = *(long *)(param_2 + 0xd8);
        uVar6 = *(undefined8 *)(param_3 + 0x40);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar6,param_3,*(undefined8 *)(lVar5 + 0x28));
        }
        puVar2 = StringLiteral_362;
        if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c6 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c6 = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar2;
        }
        FUN_01ecfb94(uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x38),
                     *(undefined8 *)StringLiteral_364);
        *(undefined1 *)(param_3 + 0x145) = 1;
      }
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      uVar7 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0391f968(uVar6,uVar7,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_2 + 0xb8);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar6,param_3,*(undefined8 *)(lVar5 + 0x28));
        }
        puVar1 = StringLiteral_362;
        if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c8 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c8 = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *(long *)puVar1;
        }
        FUN_01ecfb94(uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),
                     *(undefined8 *)StringLiteral_370);
        *(undefined1 *)(param_3 + 0xf8) = 0;
        FUN_03b261cc(param_3,0,0);
        *(undefined8 *)(param_3 + 0x38) = 0;
        thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x38),0);
      }
      lVar5 = *(long *)(param_2 + 0xe0);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(param_3 + 0x40),param_3,
                   *(undefined8 *)(lVar5 + 0x28));
      }
      puVar1 = StringLiteral_362;
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c3 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c3 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *(long *)puVar1;
      }
      FUN_03b4c144(*(undefined8 *)(lVar5 + 0xb8));
      return;
    }
  }
  return;
}


