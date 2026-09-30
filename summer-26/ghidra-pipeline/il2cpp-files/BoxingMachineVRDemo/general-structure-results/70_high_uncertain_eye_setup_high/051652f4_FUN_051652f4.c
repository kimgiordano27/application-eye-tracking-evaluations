/*
FUNCTION_NAME: FUN_051652f4
ENTRY_POINT: 051652f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_051652f4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 uint param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_06b79e69 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06764ee8);
    FUN_02d6084c(PTR_DAT_06782608);
    FUN_02d6084c(PTR_DAT_06782610);
    FUN_02d6084c(PTR_DAT_06763f18);
    FUN_02d6084c(PTR_DAT_06763f20);
    FUN_02d6084c(PTR_DAT_06763f10);
    FUN_02d6084c(PTR_DAT_06782618);
    FUN_02d6084c(PTR_DAT_06782620);
    FUN_02d6084c(PTR_DAT_06782628);
    FUN_02d6084c(PTR_DAT_067823f0);
    FUN_02d6084c(PTR_DAT_06782630);
    FUN_02d6084c(PTR_DAT_06782638);
    FUN_02d6084c(PTR_DAT_067823b8);
    FUN_02d6084c(PTR_DAT_067823c0);
    FUN_02d6084c(PTR_DAT_06782428);
    FUN_02d6084c(PTR_DAT_06782400);
    FUN_02d6084c(PTR_DAT_06782408);
    FUN_02d6084c(PTR_DAT_067823c8);
    DAT_06b79e69 = 1;
  }
  puVar5 = PTR_DAT_067823f0;
  local_70 = 0;
  local_68 = (long *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  plStack_78 = (long *)0x0;
  local_80 = 0;
  if (param_3 != (long *)0x0) {
    lVar13 = *param_3;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_067823f0) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_05165478;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)PTR_DAT_067823f0,2);
LAB_05165478:
    lVar13 = (*(code *)*puVar9)(param_3,puVar9[1]);
    puVar7 = PTR_DAT_06782610;
    puVar6 = PTR_DAT_06782408;
    puVar4 = PTR_DAT_067823b8;
    puVar3 = PTR_DAT_06764ee8;
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) == 0) {
        return;
      }
      if (*(int *)(lVar13 + 0x18) != 1) {
        uVar22 = 0;
        lVar16 = 0;
        lVar13 = 0;
        do {
          lVar14 = *param_3;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_05165564;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar5,2);
LAB_05165564:
          lVar14 = (*(code *)*puVar9)(param_3,puVar9[1]);
          if (lVar14 == 0) goto LAB_05165c08;
          if (*(int *)(lVar14 + 0x18) <= (int)uVar22) {
            if (lVar16 != 0) {
              System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                        (&local_90,lVar16,*(undefined8 *)PTR_DAT_06782608);
              puVar3 = PTR_DAT_06782620;
              goto LAB_051659e4;
            }
            lVar16 = *param_3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 == 0) goto LAB_05165ae4;
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_05165acc;
          }
          lVar14 = *param_3;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_051655d0;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar5,2);
LAB_051655d0:
          lVar14 = (*(code *)*puVar9)(param_3,puVar9[1]);
          if (lVar14 == 0) goto LAB_05165c08;
          uVar12 = FUN_03aac1c4(lVar14,uVar22,*(undefined8 *)puVar6);
          lVar14 = FUN_05164b1c(uVar12,uVar12,param_4);
          if (lVar16 == 0) {
            if (lVar13 == 0) {
              lVar16 = 0;
            }
            else {
              uVar17 = thunk_FUN_04e8bd3c(lVar14,lVar13,0);
              if ((uVar17 & 1) == 0) {
                lVar16 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06763f10);
                FUN_04894d4c(lVar16,*(undefined8 *)PTR_DAT_06763f18);
                if (uVar22 < 2) {
                  lVar11 = *param_3;
                  uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar17 != 0) {
                    piVar19 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                        goto LAB_05165964;
                      }
                      uVar17 = uVar17 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar5,2);
LAB_05165964:
                  lVar11 = (*(code *)*puVar9)(param_3,puVar9[1]);
                  if ((lVar11 == 0) ||
                     (lVar11 = FUN_03aac1c4(lVar11,0,*(undefined8 *)puVar6), lVar16 == 0))
                  goto LAB_05165c08;
                  uVar21 = *(undefined8 *)puVar3;
                }
                else {
                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
                  FUN_03aabcd0(lVar11,uVar22,*(undefined8 *)PTR_DAT_067823c0);
                  uVar20 = 0;
                  do {
                    lVar15 = *param_3;
                    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar17 != 0) {
                      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
                          puVar9 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                          goto LAB_051658b4;
                        }
                        uVar17 = uVar17 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar5,2);
LAB_051658b4:
                    lVar15 = (*(code *)*puVar9)(param_3,puVar9[1]);
                    if ((lVar15 == 0) ||
                       (uVar21 = FUN_03aac1c4(lVar15,uVar20,*(undefined8 *)puVar6), lVar11 == 0))
                    goto LAB_05165c08;
                    lVar15 = *(long *)(lVar11 + 0x10);
                    lVar18 = *(long *)puVar4;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_05165c08;
                    uVar2 = *(uint *)(lVar11 + 0x18);
                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar21;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                      FUN_03aac494(lVar11,uVar21,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar20 != uVar22);
                  if (lVar16 == 0) goto LAB_05165c08;
                  uVar21 = *(undefined8 *)puVar3;
                }
                FUN_048956f0(lVar16,lVar13,lVar11,uVar21);
                uVar21 = *(undefined8 *)puVar3;
                goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume;
              }
              lVar16 = 0;
              lVar14 = lVar13;
            }
          }
          else {
            uVar17 = FUN_0489720c(lVar16,lVar14,&local_68,*(undefined8 *)puVar7);
            if ((uVar17 & 1) == 0) {
              uVar21 = *(undefined8 *)puVar3;
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume:
              FUN_048956f0(lVar16,lVar14,uVar12,uVar21);
              lVar14 = lVar13;
            }
            else {
              if (local_68 == (long *)0x0) {
LAB_0516565c:
                plVar10 = (long *)thunk_FUN_02d9d534();
                FUN_03aabc60(plVar10,*(undefined8 *)PTR_DAT_06782428);
                plVar8 = local_68;
                if (plVar10 == (long *)0x0) goto LAB_05165c08;
                if (local_68 == (long *)0x0) {
                  lVar11 = 0;
                }
                else {
                  uVar21 = *(undefined8 *)puVar5;
                  lVar11 = thunk_FUN_02d9d438(local_68,uVar21);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60e88(plVar8,uVar21);
                  }
                }
                lVar15 = plVar10[2];
                lVar18 = *(long *)puVar4;
                *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_05165c08;
                uVar20 = *(uint *)(plVar10 + 3);
                if (uVar20 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(plVar10 + 3) = uVar20 + 1;
                  *(long *)(lVar15 + (long)(int)uVar20 * 8 + 0x20) = lVar11;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(plVar10,lVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                FUN_048956dc(lVar16,lVar14,plVar10,*(undefined8 *)PTR_DAT_06763f20);
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_067823c8 + 0x130);
                if ((*(byte *)(*local_68 + 0x130) < bVar1) ||
                   (plVar10 = local_68,
                   *(long *)(*(long *)(*local_68 + 200) + (ulong)bVar1 * 8 + -8) !=
                   *(long *)PTR_DAT_067823c8)) goto LAB_0516565c;
              }
              lVar14 = plVar10[2];
              lVar11 = *(long *)puVar4;
              *(int *)((long)plVar10 + 0x1c) = *(int *)((long)plVar10 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_05165c08;
              uVar20 = *(uint *)(plVar10 + 3);
              if (uVar20 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(plVar10 + 3) = uVar20 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar20 * 8 + 0x20) = uVar12;
                thunk_FUN_02dd37b4();
                lVar14 = lVar13;
              }
              else {
                FUN_03aac494(plVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                lVar14 = lVar13;
              }
            }
          }
          uVar22 = uVar22 + 1;
          lVar13 = lVar14;
        } while( true );
      }
      lVar13 = *param_3;
      uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_05165b04;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar5,2);
LAB_05165b04:
      lVar13 = (*(code *)*puVar9)(param_3,puVar9[1]);
      if (lVar13 != 0) {
        uVar12 = FUN_03aac1c4(lVar13,0,*(undefined8 *)PTR_DAT_06782408);
        lVar13 = FUN_05164b1c(uVar12,uVar12,param_4);
        lVar16 = *param_3;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_05165b88;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar5,2);
LAB_05165b88:
        uVar12 = (*(code *)*puVar9)(param_3,puVar9[1]);
        goto LAB_05165be4;
      }
    }
  }
LAB_05165c08:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_051659e4:
  uVar17 = FUN_04b3a824(&local_90,*(undefined8 *)puVar3);
  plVar10 = plStack_78;
  uVar12 = local_80;
  if ((uVar17 & 1) == 0) {
    FUN_04b3a944(&local_90,*(undefined8 *)PTR_DAT_06782618);
    return;
  }
  if (plStack_78 == (long *)0x0) {
    lVar13 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067823c8 + 0x130);
    if ((bVar1 <= *(byte *)(*plStack_78 + 0x130)) &&
       (*(long *)(*(long *)(*plStack_78 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_067823c8
       )) {
      FUN_05165ca4(param_1,param_2,param_4,param_5 & 1,plStack_78,local_80);
      goto LAB_051659e4;
    }
    uVar21 = *(undefined8 *)puVar5;
    lVar13 = thunk_FUN_02d9d438(plStack_78,uVar21);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar10,uVar21);
    }
  }
  FUN_05165e18(param_1,param_2,param_4,param_5 & 1,lVar13,uVar12);
  goto LAB_051659e4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_05165acc:
    if (*(long *)(piVar19 + -2) == *(long *)puVar5) {
      puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 2) * 0x10 + 0x138);
      goto LAB_05165bc0;
    }
  }
LAB_05165ae4:
  puVar9 = (undefined8 *)FUN_02d9a5d4(param_3,*(long *)puVar5,2);
LAB_05165bc0:
  uVar12 = (*(code *)*puVar9)(param_3,puVar9[1]);
LAB_05165be4:
  FUN_05165ca4(param_1,param_2,param_4,param_5 & 1,uVar12,lVar13);
  return;
}


