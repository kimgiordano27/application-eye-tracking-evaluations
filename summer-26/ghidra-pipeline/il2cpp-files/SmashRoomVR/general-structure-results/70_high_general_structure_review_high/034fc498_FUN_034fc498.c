/*
FUNCTION_NAME: FUN_034fc498
ENTRY_POINT: 034fc498
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_034fc498(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* try { // try from 034fc4b4 to 035fc853 has its CatchHandler @ 034fc4b4
                       catch() { ... } // from try @ 034fc4b4 with catch @ 034fc4b4
                       catch() { ... } // from try @ 034fc8ac with catch @ 034fc4b4
                       catch() { ... } // from try @ 034fca10 with catch @ 034fc4b4
                       catch() { ... } // from try @ 034fca60 with catch @ 034fc4b4 */
  if ((DAT_03ff6d5f & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_364);
    thunk_FUN_01ad9084(StringLiteral_359);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff6d5f = 1;
  }
  if (param_3 == 0) {
LAB_034fc7ac:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar5 = FUN_03b26064(param_3,0);
  if (((uVar5 & 1) != 0) &&
     ((*(int *)(param_3 + 0x194) != 1 || (iVar4 = FUN_0390e2b8(0), iVar4 != 1)))) {
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03922f24(uVar7,0,0);
    puVar3 = StringLiteral_362;
    if ((uVar5 & 1) == 0) {
      if (*(char *)(param_3 + 0x145) == '\0') {
        if (*(char *)(param_3 + 0x144) != '\0') {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_034fc7ac;
          fVar9 = *(float *)(param_3 + 0x114) - *(float *)(param_3 + 0x104);
          fVar10 = *(float *)(param_3 + 0x118) - *(float *)(param_3 + 0x108);
          fVar1 = (float)*(int *)(*(long *)(param_1 + 0x38) + 0x3c);
          fVar11 = 1.0;
          if (*(int *)(param_3 + 0x194) == 3) {
            fVar11 = *(float *)(param_1 + 0x60);
          }
          if (fVar9 * fVar9 + fVar10 * fVar10 < fVar1 * fVar1 * fVar11) {
            return;
          }
        }
        uVar7 = *(undefined8 *)(param_3 + 0x40);
        if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c6 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c6 = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar3;
        }
        FUN_01ecfb94(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),
                     *(undefined8 *)StringLiteral_364);
        *(undefined1 *)(param_3 + 0x145) = 1;
      }
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      uVar8 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar7,uVar8,0);
      puVar2 = StringLiteral_362;
      if ((uVar5 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_3 + 0x28);
        if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03fed7c8 == '\0') {
          thunk_FUN_01ad9084(StringLiteral_362);
          DAT_03fed7c8 = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar2;
        }
        FUN_01ecfb94(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20),
                     *(undefined8 *)StringLiteral_370);
        *(undefined1 *)(param_3 + 0xf8) = 0;
        FUN_03b261cc(param_3,0,0);
        *(undefined8 *)(param_3 + 0x38) = 0;
        thunk_FUN_01b4f09c((undefined8 *)(param_3 + 0x38),0);
      }
      puVar2 = StringLiteral_362;
      uVar7 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)StringLiteral_362 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03fed7c3 == '\0') {
        thunk_FUN_01ad9084(StringLiteral_362);
        DAT_03fed7c3 = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar2;
      }
      FUN_01ecfb94(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40),
                   *(undefined8 *)StringLiteral_359);
      FUN_034fd118(param_2,param_3);
      return;
    }
  }
  return;
}


