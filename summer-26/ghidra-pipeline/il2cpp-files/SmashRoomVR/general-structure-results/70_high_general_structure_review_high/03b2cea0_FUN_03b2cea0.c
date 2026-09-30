/*
FUNCTION_NAME: FUN_03b2cea0
ENTRY_POINT: 03b2cea0
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


void FUN_03b2cea0(long param_1,long param_2)

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
  float fVar10;
  
  if ((DAT_03ffdbc6 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_364);
    thunk_FUN_01ad9084(StringLiteral_359);
    thunk_FUN_01ad9084(StringLiteral_370);
    thunk_FUN_01ad9084(StringLiteral_362);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdbc6 = 1;
  }
  if (param_2 != 0) {
    if ((0.0 < *(float *)(param_2 + 0x10c) * *(float *)(param_2 + 0x10c) +
               *(float *)(param_2 + 0x110) * *(float *)(param_2 + 0x110)) &&
       (iVar3 = FUN_0390e2b8(0),
       puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, iVar3 != 1))
    {
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03922f24(uVar6,0,0);
      puVar2 = StringLiteral_362;
      if ((uVar4 & 1) == 0) {
        if (*(char *)(param_2 + 0x145) != '\0') {
          uVar6 = *(undefined8 *)(param_2 + 0x28);
          uVar7 = *(undefined8 *)(param_2 + 0x40);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_0391f968(uVar6,uVar7,0);
          puVar1 = StringLiteral_362;
          if ((uVar4 & 1) != 0) {
            uVar6 = *(undefined8 *)(param_2 + 0x28);
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
            FUN_01ecfb94(uVar6,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),
                         *(undefined8 *)StringLiteral_370);
            *(undefined1 *)(param_2 + 0xf8) = 0;
            FUN_03b261cc(param_2,0);
            *(undefined8 *)(param_2 + 0x38) = 0;
            thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x38),0);
          }
          puVar1 = StringLiteral_362;
          uVar6 = *(undefined8 *)(param_2 + 0x40);
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
          FUN_01ecfb94(uVar6,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x40),
                       *(undefined8 *)StringLiteral_359);
          return;
        }
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_03b2d168;
        if ((*(char *)(param_2 + 0x144) == '\0') ||
           (fVar9 = (float)*(undefined8 *)(param_2 + 0x114) -
                    (float)*(undefined8 *)(param_2 + 0x104),
           fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x114) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_2 + 0x104) >> 0x20),
           fVar8 = (float)*(int *)(*(long *)(param_1 + 0x38) + 0x3c),
           fVar8 * fVar8 <= fVar9 * fVar9 + fVar10 * fVar10)) {
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
          FUN_03b4beec(*(undefined8 *)(lVar5 + 0xb8));
          return;
        }
      }
    }
    return;
  }
LAB_03b2d168:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


