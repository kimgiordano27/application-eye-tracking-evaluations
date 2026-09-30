/*
FUNCTION_NAME: FUN_03134b40
ENTRY_POINT: 03134b40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_03134b40(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_03ff1eaf & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_364);
    thunk_FUN_01ad9084(StringLiteral_359);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1eaf = 1;
  }
  if (param_2 == 0) {
LAB_03134d74:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar3 = FUN_03b26064(param_2,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_2 + 0x145) == '\0') {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_03134d74;
        if ((*(char *)(param_2 + 0x144) != '\0') &&
           (fVar8 = *(float *)(param_2 + 0x114) - *(float *)(param_2 + 0x104),
           fVar9 = *(float *)(param_2 + 0x118) - *(float *)(param_2 + 0x108),
           fVar7 = (float)*(int *)(*(long *)(param_1 + 0x38) + 0x3c),
           fVar8 * fVar8 + fVar9 * fVar9 < fVar7 * fVar7)) {
          return;
        }
        if (*(char *)(param_1 + 0x68) != '\0') {
          *(float *)(param_2 + 0x104) = *(float *)(param_2 + 0x114);
          *(float *)(param_2 + 0x108) = *(float *)(param_2 + 0x118);
        }
        puVar2 = StringLiteral_362;
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c6 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c6 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar2;
        }
        FUN_01ecfb94(uVar5,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),
                     *(undefined8 *)StringLiteral_364);
        *(undefined1 *)(param_2 + 0x145) = 1;
      }
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(uVar5,uVar6,0);
      if ((uVar3 & 1) != 0) {
        FUN_03132da8(uVar3,param_2);
      }
      puVar1 = StringLiteral_362;
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c3 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c3 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar1;
      }
      FUN_01ecfb94(uVar5,param_2,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x40),
                   *(undefined8 *)StringLiteral_359);
      return;
    }
  }
  return;
}


