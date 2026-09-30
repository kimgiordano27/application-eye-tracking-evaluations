/*
FUNCTION_NAME: FUN_0318fed0
ENTRY_POINT: 0318fed0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


int FUN_0318fed0(long param_1,long param_2,ulong param_3,int param_4,long *param_5,uint param_6,
                int param_7,uint param_8)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 *__s;
  long lVar25;
  long lVar26;
  size_t __n;
  long lVar27;
  uint uVar28;
  uint auStack_c0 [4];
  long local_b0;
  long local_a8;
  long local_a0;
  int local_94;
  int local_90;
  int local_8c;
  long local_88;
  long local_80;
  uint *local_78;
  int local_6c;
  long local_68;
  undefined *puVar5;
  
  lVar27 = tpidr_el0;
  local_68 = *(long *)(lVar27 + 0x28);
  uVar23 = param_3 & 0xffffffff;
  if ((DAT_04532368 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f930);
    FUN_01c5d288(GameManager_<CloseGameAfterSeconds>d__200_TypeInfo);
    FUN_01c5d288(GRAmbientSound_<PauseUpdateForSeconds>d__24_TypeInfo);
    FUN_01c5d288(
                System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                );
    DAT_04532368 = 1;
  }
  if (param_2 == 0) goto LAB_03190a94;
  puVar5 = GameManager_<DoServerRequests>d__174_TypeInfo;
  if (*(int *)(param_2 + 0x18) < param_4 + (int)param_3) goto LAB_03190070;
  iVar8 = *(int *)(param_1 + 0x24);
  iVar22 = 0;
  if (iVar8 != 0) {
    iVar22 = param_4 / iVar8;
  }
  local_94 = param_4 - iVar22 * iVar8;
  local_6c = param_4;
  if ((param_8 & 1) == 0) goto switchD_0318ffac_default;
  switch(param_7) {
  case 1:
    puVar5 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualCharLiftedToNull_TypeInfo;
    if (local_94 != 0) goto LAB_03190070;
    break;
  case 2:
  case 4:
  case 5:
switchD_0318ffac_caseD_2:
    uVar28 = iVar8 - local_94;
    if (uVar28 == 0) {
      lVar26 = 0;
    }
    else {
      lVar26 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,uVar28);
      if (param_7 == 5) {
        if (*(int *)(*(long *)
                      System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt64LiftedToNull_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar7 = (long *)FUN_0319fb54(0);
        if (plVar7 == (long *)0x0) goto LAB_03190a94;
        (**(code **)(*plVar7 + 0x198))(plVar7,lVar26,*(undefined8 *)(*plVar7 + 0x1a0));
      }
      else if (param_7 != 4) {
        if ((param_7 == 2) && (0 < (int)uVar28)) {
          if (lVar26 == 0) goto LAB_03190a94;
          uVar16 = *(uint *)(lVar26 + 0x18);
          uVar24 = 0;
          do {
            if (uVar16 <= uVar24) goto LAB_03190ab8;
            *(char *)(lVar26 + 0x20 + uVar24) = (char)uVar28;
            uVar24 = uVar24 + 1;
          } while (uVar28 != uVar24);
        }
        goto LAB_03190048;
      }
      if (lVar26 == 0) {
LAB_03190a94:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(uint *)(lVar26 + 0x18) <= uVar28 - 1) {
LAB_03190ab8:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(char *)(lVar26 + (int)(uVar28 - 1) + 0x20) = (char)uVar28;
    }
    goto LAB_03190048;
  case 3:
    if (local_94 != 0) goto switchD_0318ffac_caseD_2;
  }
switchD_0318ffac_default:
  lVar26 = 0;
  uVar28 = 0;
LAB_03190048:
  if (*param_5 == 0) {
    lVar9 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,uVar28 + local_6c);
    param_6 = 0;
    *param_5 = lVar9;
  }
  else {
    puVar5 = GameManager_<DoServerRequests>d__174_TypeInfo;
    if ((int)(*(int *)(*param_5 + 0x18) - param_6) < (int)(uVar28 + local_6c)) {
LAB_03190070:
      uVar4 = thunk_FUN_01c273e8(puVar5);
      uVar4 = FUN_03313b64(uVar4,0);
      thunk_FUN_01c273e8(PTR_DAT_0422fd40);
      uVar6 = thunk_FUN_01c496e0();
      FUN_03184c3c(uVar6,uVar4);
      uVar4 = thunk_FUN_01c273e8(GameManager_<CloseGameAfterSeconds>d__200_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar4);
    }
  }
  puVar5 = GRAmbientSound_<PauseUpdateForSeconds>d__24_TypeInfo;
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = 0;
    if (*(int *)(lVar9 + 0x18) != 0) {
      lVar25 = lVar9 + 0x20;
    }
  }
  lVar9 = *(long *)(param_1 + 0x30);
  if (lVar9 == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = 0;
    if (*(int *)(lVar9 + 0x18) != 0) {
      local_a0 = lVar9 + 0x20;
    }
  }
  lVar9 = *(long *)GRAmbientSound_<PauseUpdateForSeconds>d__24_TypeInfo;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar9 = *(long *)puVar5;
  }
  lVar10 = *(long *)(lVar9 + 0xb8);
  lVar11 = *(long *)(lVar10 + 0x10);
  if (lVar11 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = 0;
    if (*(int *)(lVar11 + 0x18) != 0) {
      local_80 = lVar11 + 0x20;
    }
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar10 = *(long *)(*(long *)puVar5 + 0xb8);
  }
  lVar9 = *(long *)(lVar10 + 0x18);
  if (lVar9 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = 0;
    if (*(int *)(lVar9 + 0x18) != 0) {
      local_88 = lVar9 + 0x20;
    }
  }
  __n = (long)*(int *)(param_1 + 0x44) * 4;
  local_b0 = lVar27;
  if (*(int *)(param_1 + 0x44) == 0) {
    memset((void *)0x0,0,0);
    local_78 = (uint *)0x0;
    __s = (undefined4 *)0x0;
  }
  else {
    uVar24 = __n + 0xf & 0xfffffffffffffff0;
    puVar13 = (uint *)((long)auStack_c0 - uVar24);
    local_78 = puVar13;
    memset(puVar13,0,__n);
    __s = (undefined4 *)((long)puVar13 - uVar24);
  }
  memset(__s,0,__n);
  auStack_c0[3] = uVar28 + local_6c;
  local_8c = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    local_8c = (int)auStack_c0[3] / *(int *)(param_1 + 0x24);
  }
  local_90 = local_8c + -1;
  if (0 < local_8c) {
    iVar8 = 0;
    lVar27 = local_a0;
    local_a8 = lVar25;
    do {
      iVar22 = (int)uVar23;
      local_6c = iVar8;
      if (*(int *)(param_1 + 0x10) == 4) {
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        lVar9 = *(long *)(param_1 + 0x78);
        uVar24 = 0;
LAB_03190400:
        FUN_032fe22c(local_78,0,lVar9,uVar24,uVar2,0);
      }
      else {
        if ((uVar28 == 0) || (iVar8 != local_90)) {
          uVar2 = *(undefined4 *)(param_1 + 0x20);
          lVar9 = param_2;
          uVar24 = uVar23;
          goto LAB_03190400;
        }
        if (0 < *(int *)(param_1 + 0x44)) {
          lVar9 = 0;
          uVar16 = 0;
          iVar8 = iVar22 + local_94;
          puVar13 = local_78;
          uVar24 = uVar23;
          do {
            uVar15 = (uint)uVar24;
            if ((int)uVar15 < iVar8) {
              if (*(uint *)(param_2 + 0x18) <= uVar15) goto LAB_03190ab8;
              uVar17 = (uint)*(byte *)(param_2 + (int)uVar15 + 0x20);
              uVar24 = (long)(int)uVar15 + 1;
              if (iVar8 <= (int)(uint)uVar24) {
                if (lVar26 != 0) {
                  iVar3 = 1;
                  uVar24 = uVar24 & 0xffffffff;
                  uVar18 = uVar16;
                  goto LAB_03190318;
                }
                goto LAB_03190a94;
              }
              if (*(uint *)(param_2 + 0x18) <= (uint)uVar24) goto LAB_03190ab8;
              uVar18 = (uint)*(byte *)(param_2 + uVar24 + 0x20);
              uVar15 = uVar15 + 2;
              uVar24 = (ulong)uVar15;
              if ((int)uVar15 < iVar8) goto LAB_03190334;
              uVar20 = uVar16;
              if (lVar26 == 0) goto LAB_03190a94;
LAB_0319035c:
              uVar15 = (uint)uVar24;
              if (*(uint *)(lVar26 + 0x18) <= uVar20) goto LAB_03190ab8;
              uVar19 = (uint)*(byte *)(lVar26 + (int)uVar20 + 0x20);
              uVar16 = uVar20 + 1;
              if ((int)uVar15 < iVar8) goto LAB_03190380;
              uVar15 = uVar16;
              uVar16 = uVar20 + 2;
LAB_031903b0:
              if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_03190ab8;
              lVar10 = lVar26 + (int)uVar15;
            }
            else {
              if (lVar26 == 0) goto LAB_03190a94;
              if (*(uint *)(lVar26 + 0x18) <= uVar16) goto LAB_03190ab8;
              uVar17 = (uint)*(byte *)(lVar26 + (int)uVar16 + 0x20);
              uVar18 = uVar16 + 1;
              iVar3 = 2;
LAB_03190318:
              uVar15 = (uint)uVar24;
              uVar20 = uVar16 + iVar3;
              if (*(uint *)(lVar26 + 0x18) <= uVar18) goto LAB_03190ab8;
              uVar18 = (uint)*(byte *)(lVar26 + (int)uVar18 + 0x20);
              uVar16 = uVar20;
              if (iVar8 <= (int)uVar15) goto LAB_0319035c;
LAB_03190334:
              if (*(uint *)(param_2 + 0x18) <= uVar15) goto LAB_03190ab8;
              uVar19 = (uint)*(byte *)(param_2 + (int)uVar15 + 0x20);
              uVar15 = uVar15 + 1;
              uVar24 = (ulong)uVar15;
              if (iVar8 <= (int)uVar15) {
                if (lVar26 != 0) {
                  uVar15 = uVar16;
                  uVar16 = uVar16 + 1;
                  goto LAB_031903b0;
                }
                goto LAB_03190a94;
              }
LAB_03190380:
              if (*(uint *)(param_2 + 0x18) <= uVar15) goto LAB_03190ab8;
              lVar10 = param_2 + (int)uVar15;
              uVar24 = (ulong)(uVar15 + 1);
            }
            lVar9 = lVar9 + 1;
            *puVar13 = uVar17 | uVar18 << 8 | uVar19 << 0x10 |
                       (uint)*(byte *)(lVar10 + 0x20) << 0x18;
            puVar13 = puVar13 + 1;
          } while (lVar9 < *(int *)(param_1 + 0x44));
        }
      }
      if ((*(int *)(param_1 + 0x10) == 1) && (0 < *(int *)(param_1 + 0x44))) {
        lVar9 = *(long *)(param_1 + 0x68);
        if (lVar9 == 0) goto LAB_03190a94;
        uVar16 = *(uint *)(lVar9 + 0x18);
        uVar24 = 0;
        puVar13 = local_78;
        do {
          if (uVar16 <= uVar24) goto LAB_03190ab8;
          lVar10 = uVar24 * 4;
          uVar24 = uVar24 + 1;
          *puVar13 = *(uint *)(lVar9 + 0x20 + lVar10) ^ *puVar13;
          puVar13 = puVar13 + 1;
        } while ((long)uVar24 < (long)*(int *)(param_1 + 0x44));
      }
      FUN_03191880(param_1,lVar25,lVar27,local_80,local_88,local_78,__s);
      iVar8 = *(int *)(param_1 + 0x10);
      if (iVar8 == 4) {
        if ((uVar28 == 0) || (local_6c != local_90)) {
          if (0 < *(int *)(param_1 + 0x44)) {
            lVar11 = 0;
            lVar10 = 0;
            lVar14 = (long)iVar22;
            lVar9 = param_2 + iVar22;
            do {
              if ((long)(*(int *)(param_1 + 0x24) + iVar22) <= lVar14 + lVar11) break;
              iVar8 = (int)lVar11;
              if (*(uint *)(param_2 + 0x18) <= (uint)(iVar22 + iVar8)) goto LAB_03190ab8;
              lVar21 = *param_5;
              if (lVar21 == 0) goto LAB_03190a94;
              uVar16 = param_6 + iVar8;
              if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_03190ab8;
              *(byte *)(lVar21 + (int)uVar16 + 0x20) =
                   *(byte *)(lVar9 + lVar11 + 0x20) ^ (byte)*(undefined4 *)((long)__s + lVar11);
              if ((long)(*(int *)(param_1 + 0x24) + iVar22) <= lVar14 + lVar11 + 1) {
                param_6 = param_6 + iVar8 + 1;
                goto LAB_03190994;
              }
              if (*(uint *)(param_2 + 0x18) <= iVar22 + iVar8 + 1U) goto LAB_03190ab8;
              lVar21 = *param_5;
              if (lVar21 == 0) goto LAB_03190a94;
              if (*(uint *)(lVar21 + 0x18) <= uVar16 + 1) goto LAB_03190ab8;
              *(byte *)(lVar21 + (int)(uVar16 + 1) + 0x20) =
                   *(byte *)(lVar9 + lVar11 + 0x21) ^
                   (byte)((uint)*(undefined4 *)((long)__s + lVar11) >> 8);
              if ((long)(*(int *)(param_1 + 0x24) + iVar22) <= lVar14 + lVar11 + 2) {
                param_6 = param_6 + iVar8 + 2;
                goto LAB_03190994;
              }
              if (*(uint *)(param_2 + 0x18) <= iVar22 + iVar8 + 2U) goto LAB_03190ab8;
              lVar21 = *param_5;
              if (lVar21 == 0) goto LAB_03190a94;
              uVar16 = param_6 + iVar8 + 2;
              if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_03190ab8;
              *(byte *)(lVar21 + (int)uVar16 + 0x20) =
                   *(byte *)(lVar9 + lVar11 + 0x22) ^
                   (byte)((uint)*(undefined4 *)((long)__s + lVar11) >> 0x10);
              if ((long)(*(int *)(param_1 + 0x24) + iVar22) <= lVar14 + lVar11 + 3) {
                param_6 = param_6 + iVar8 + 3;
                goto LAB_03190994;
              }
              if (*(uint *)(param_2 + 0x18) <= iVar22 + iVar8 + 3U) goto LAB_03190ab8;
              lVar21 = *param_5;
              if (lVar21 == 0) goto LAB_03190a94;
              uVar16 = param_6 + iVar8 + 3;
              if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_03190ab8;
              lVar1 = lVar9 + lVar11;
              puVar12 = (undefined4 *)((long)__s + lVar11);
              lVar10 = lVar10 + 1;
              lVar11 = lVar11 + 4;
              *(byte *)(lVar21 + (int)uVar16 + 0x20) =
                   *(byte *)(lVar1 + 0x23) ^ (byte)((uint)*puVar12 >> 0x18);
            } while (lVar10 < *(int *)(param_1 + 0x44));
            param_6 = param_6 + (int)lVar11;
          }
        }
        else {
          lVar9 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422f930,*(undefined4 *)(param_1 + 0x24));
          iVar8 = local_94;
          thunk_FUN_01bf3b04(param_2,uVar23,lVar9,0,local_94,0);
          thunk_FUN_01bf3b04(lVar26,0,lVar9,iVar8,uVar28,0);
          lVar25 = local_a8;
          lVar27 = local_a0;
          if (0 < *(int *)(param_1 + 0x44)) {
            lVar10 = 0;
            uVar23 = 0;
            do {
              iVar8 = (int)uVar23;
              if ((long)*(int *)(param_1 + 0x24) <= (long)uVar23) {
                param_6 = param_6 + iVar8;
                goto LAB_03190994;
              }
              if (lVar9 == 0) goto LAB_03190a94;
              if (*(uint *)(lVar9 + 0x18) <= uVar23) goto LAB_03190ab8;
              lVar11 = *param_5;
              if (lVar11 == 0) goto LAB_03190a94;
              uVar16 = param_6 + iVar8;
              if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_03190ab8;
              *(byte *)(lVar11 + (int)uVar16 + 0x20) =
                   *(byte *)(lVar9 + uVar23 + 0x20) ^ (byte)*(undefined4 *)((long)__s + uVar23);
              if ((long)*(int *)(param_1 + 0x24) <= (long)(uVar23 + 1)) {
                param_6 = param_6 + iVar8 + 1;
                goto LAB_03190994;
              }
              if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar23 + 1) goto LAB_03190ab8;
              lVar11 = *param_5;
              if (lVar11 == 0) goto LAB_03190a94;
              if (*(uint *)(lVar11 + 0x18) <= uVar16 + 1) goto LAB_03190ab8;
              *(byte *)(lVar11 + (int)(uVar16 + 1) + 0x20) =
                   *(byte *)(lVar9 + uVar23 + 0x21) ^
                   (byte)((uint)*(undefined4 *)((long)__s + uVar23) >> 8);
              if ((long)*(int *)(param_1 + 0x24) <= (long)(uVar23 + 2)) {
                param_6 = param_6 + iVar8 + 2;
                goto LAB_03190994;
              }
              if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar23 + 2) goto LAB_03190ab8;
              lVar11 = *param_5;
              if (lVar11 == 0) goto LAB_03190a94;
              uVar16 = param_6 + iVar8 + 2;
              if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_03190ab8;
              *(byte *)(lVar11 + (int)uVar16 + 0x20) =
                   *(byte *)(lVar9 + uVar23 + 0x22) ^
                   (byte)((uint)*(undefined4 *)((long)__s + uVar23) >> 0x10);
              if ((long)*(int *)(param_1 + 0x24) <= (long)(uVar23 + 3)) {
                param_6 = param_6 + iVar8 + 3;
                goto LAB_03190994;
              }
              if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar23 + 3) goto LAB_03190ab8;
              lVar11 = *param_5;
              if (lVar11 == 0) goto LAB_03190a94;
              uVar16 = param_6 + iVar8 + 3;
              if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_03190ab8;
              lVar14 = lVar9 + uVar23;
              puVar12 = (undefined4 *)((long)__s + uVar23);
              lVar10 = lVar10 + 1;
              uVar23 = uVar23 + 4;
              *(byte *)(lVar11 + (int)uVar16 + 0x20) =
                   *(byte *)(lVar14 + 0x23) ^ (byte)((uint)*puVar12 >> 0x18);
            } while (lVar10 < *(int *)(param_1 + 0x44));
            param_6 = param_6 + iVar8 + 4;
          }
        }
LAB_03190994:
        iVar8 = *(int *)(param_1 + 0x24);
        iVar3 = *(int *)(param_1 + 0x20) - iVar8;
        if (0 < iVar3) {
          uVar23 = 0;
          do {
            lVar9 = *(long *)(param_1 + 0x78);
            if (lVar9 == 0) goto LAB_03190a94;
            uVar16 = (int)uVar23 + iVar8;
            if (((uint)*(ulong *)(lVar9 + 0x18) <= uVar16) ||
               ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) <= uVar23)) goto LAB_03190ab8;
            lVar10 = lVar9 + uVar23;
            uVar23 = uVar23 + 1;
            *(undefined1 *)(lVar10 + 0x20) = *(undefined1 *)(lVar9 + (int)uVar16 + 0x20);
            iVar8 = *(int *)(param_1 + 0x24);
            iVar3 = *(int *)(param_1 + 0x20) - iVar8;
          } while ((long)uVar23 < (long)iVar3);
        }
        thunk_FUN_01bf3b04(*param_5,iVar8 * local_6c,*(undefined8 *)(param_1 + 0x78),iVar3,iVar8,0);
      }
      else {
        if (0 < *(int *)(param_1 + 0x44)) {
          lVar9 = 0;
          puVar12 = __s;
          do {
            uVar16 = param_6;
            lVar10 = *param_5;
            if (lVar10 == 0) goto LAB_03190a94;
            if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_03190ab8;
            *(char *)(lVar10 + (int)uVar16 + 0x20) = (char)*puVar12;
            lVar10 = *param_5;
            if (lVar10 == 0) goto LAB_03190a94;
            if (*(uint *)(lVar10 + 0x18) <= uVar16 + 1) goto LAB_03190ab8;
            *(char *)(lVar10 + (int)(uVar16 + 1) + 0x20) = (char)((uint)*puVar12 >> 8);
            lVar10 = *param_5;
            if (lVar10 == 0) goto LAB_03190a94;
            if (*(uint *)(lVar10 + 0x18) <= uVar16 + 2) goto LAB_03190ab8;
            *(char *)(lVar10 + (int)(uVar16 + 2) + 0x20) = (char)*(undefined2 *)((long)puVar12 + 2);
            lVar10 = *param_5;
            if (lVar10 == 0) goto LAB_03190a94;
            if (*(uint *)(lVar10 + 0x18) <= uVar16 + 3) goto LAB_03190ab8;
            lVar9 = lVar9 + 1;
            *(undefined1 *)(lVar10 + (int)(uVar16 + 3) + 0x20) = *(undefined1 *)((long)puVar12 + 3);
            puVar12 = puVar12 + 1;
            param_6 = uVar16 + 4;
          } while (lVar9 < *(int *)(param_1 + 0x44));
          iVar8 = *(int *)(param_1 + 0x10);
          param_6 = uVar16 + 4;
        }
        if (iVar8 == 1) {
          lVar9 = *(long *)(param_1 + 0x68);
          if (lVar9 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (*(int *)(lVar9 + 0x18) != 0) {
              lVar10 = lVar9 + 0x20;
            }
          }
          FUN_032fe25c(lVar10,__s,*(undefined4 *)(param_1 + 0x20),0);
        }
      }
      iVar8 = local_6c + 1;
      uVar23 = (ulong)(uint)(*(int *)(param_1 + 0x24) + iVar22);
    } while (iVar8 != local_8c);
  }
  if (*(long *)(local_b0 + 0x28) == local_68) {
    return auStack_c0[3];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


