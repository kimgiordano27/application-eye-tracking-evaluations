/*
FUNCTION_NAME: FUN_01cb5e74
ENTRY_POINT: 01cb5e74
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_01cb5e74(float param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_118;
  undefined4 uStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong uVar21;
  ulong uVar25;
  
  if ((DAT_03feda0f & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1007);
    thunk_FUN_01ad9084(StringLiteral_1012);
    thunk_FUN_01ad9084(StringLiteral_1013);
    thunk_FUN_01ad9084(StringLiteral_1014);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda0f = 1;
  }
  local_e0 = 0;
  local_d8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  if (param_3 == 0) goto LAB_01cb628c;
  iVar9 = FUN_039548f8(param_3,0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (0 < iVar9) {
    FUN_03954b9c(&local_118,param_3,0,0);
    uStack_c8 = CONCAT44(fStack_10c,uStack_110);
    uVar21 = CONCAT44(fStack_104,local_108);
    local_d0 = local_118;
    uStack_b8 = uStack_100;
    uStack_a8 = uStack_f0;
    local_b0 = local_f8;
    local_c0 = uVar21;
    lVar11 = FUN_0395ee54(&local_d0,0);
    uVar25 = local_f8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
      uVar25 = local_f8;
    }
    uVar12 = FUN_0391f968(lVar11,0,0);
    if ((uVar12 & 1) != 0) {
      if (lVar11 == 0) goto LAB_01cb628c;
      uVar12 = FUN_01e8b8bc(lVar11,&local_d8,*(undefined8 *)StringLiteral_1013);
      puVar2 = StringLiteral_1007;
      if ((uVar12 & 1) != 0) {
        lVar13 = *(long *)StringLiteral_1007;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = *(long *)puVar2;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) goto LAB_01cb628c;
        lVar14 = *(long *)(lVar13 + 0x10);
        lVar16 = *(long *)StringLiteral_1014;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_01cb628c;
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *puVar15 = local_d8;
          thunk_FUN_01b4f09c(puVar15);
        }
        else {
          FUN_02b599e4(lVar13,local_d8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    if (0.0 < param_1) {
      if ((param_2 != 0) &&
         (lVar13 = FUN_0391c27c(param_2,0), puVar6 = StringLiteral_1014, puVar5 = StringLiteral_1013
         , puVar4 = StringLiteral_1012, puVar3 = StringLiteral_1007,
         puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__,
         lVar13 != 0)) {
        iVar9 = 0;
        do {
          iVar10 = FUN_0392a654(lVar13,0);
          if (iVar10 <= iVar9) {
            return;
          }
          lVar13 = FUN_0391c27c(param_2,0);
          if ((lVar13 == 0) || (lVar13 = FUN_0392a9fc(lVar13,iVar9,0), lVar13 == 0)) break;
          uVar12 = FUN_01e8b8bc(lVar13,&local_e0,*(undefined8 *)puVar5);
          if ((uVar12 & 1) != 0) {
            uVar12 = FUN_01e8b8bc(lVar13,&local_e8,*(undefined8 *)puVar4);
            lVar14 = local_e8;
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar12 = FUN_0391f968(lVar14,lVar11,0);
              fVar22 = (float)uVar25;
              fVar20 = (float)uVar21;
              if ((uVar12 & 1) != 0) {
                fVar17 = (float)FUN_03928d34(lVar13,0);
                if (local_e8 == 0) break;
                fVar19 = fVar20;
                fVar23 = fVar22;
                FUN_0395b594(&local_118,local_e8,0);
                fVar24 = fStack_104;
                fVar8 = local_108;
                fVar7 = fStack_10c;
                if (DAT_03fed25c == '\0') {
                  thunk_FUN_01ad9084(puVar2);
                  DAT_03fed25c = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                fVar18 = (float)FUN_0395ee3c(&local_d0,0);
                if (DAT_03fed25c == '\0') {
                  thunk_FUN_01ad9084(puVar2);
                  DAT_03fed25c = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                fVar24 = fVar24 * fVar24;
                uVar25 = (ulong)(uint)fVar24;
                fVar20 = SQRT((fVar23 - fVar22) * (fVar23 - fVar22) +
                              (fVar18 - fVar17) * (fVar18 - fVar17) +
                              (fVar19 - fVar20) * (fVar19 - fVar20));
                uVar21 = (ulong)(uint)fVar20;
                if (param_1 < SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar24) + fVar20)
                goto LAB_01cb6278;
              }
            }
            lVar13 = *(long *)puVar3;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar13 = *(long *)puVar3;
            }
            lVar13 = **(long **)(lVar13 + 0xb8);
            if (lVar13 == 0) break;
            lVar14 = *(long *)(lVar13 + 0x10);
            lVar16 = *(long *)puVar6;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar14 == 0) break;
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
              *puVar15 = local_e0;
              thunk_FUN_01b4f09c(puVar15);
            }
            else {
              FUN_02b599e4(lVar13,local_e0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_01cb6278:
          iVar9 = iVar9 + 1;
          lVar13 = FUN_0391c27c(param_2,0);
        } while (lVar13 != 0);
      }
LAB_01cb628c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


