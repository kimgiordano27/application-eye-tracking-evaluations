/*
FUNCTION_NAME: FUN_05bbb4b8
ENTRY_POINT: 05bbb4b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_05bbb4b8(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  uint uVar22;
  long *plVar23;
  uint uVar24;
  
                    /* catch() { ... } // from try @ 05bbb47c with catch @ 05bbb4b8 */
                    /* catch() { ... } // from try @ 05bbb340 with catch @ 05bbb4bc */
                    /* catch() { ... } // from try @ 05bbb474 with catch @ 05bbb4c0 */
                    /* catch() { ... } // from try @ 05bbb350 with catch @ 05bbb4c4 */
                    /* catch() { ... } // from try @ 05bbb470 with catch @ 05bbb4c8 */
                    /* catch() { ... } // from try @ 05bbb3bc with catch @ 05bbb4cc */
                    /* catch() { ... } // from try @ 05bbb2f0 with catch @ 05bbb4d0 */
                    /* catch() { ... } // from try @ 05bbb28c with catch @ 05bbb4d4 */
  if ((DAT_06dc2453 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QuerySessionsResults>_get_Task__
                );
                    /* try { // try from 05bbb4f0 to 05cbb4f3 has its CatchHandler @ 05bbb500 */
    FUN_02d965b8(PTR_DAT_06a01850);
                    /* catch() { ... } // from try @ 05bbb4f0 with catch @ 05bbb500 */
                    /* try { // try from 05bbb504 to 05cbb50b has its CatchHandler @ 05bbb514 */
    FUN_02d965b8(PTR_DAT_069fb9e8);
                    /* try { // try from 05bbb50c to 05cbb517 has its CatchHandler @ 05bbb078 */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_Add__);
                    /* catch() { ... } // from try @ 05bbb504 with catch @ 05bbb514 */
                    /* try { // try from 05bbb518 to 05cbb6cb has its CatchHandler @ 05bbb518
                       catch() { ... } // from try @ 05bbb518 with catch @ 05bbb518
                       catch() { ... } // from try @ 05bbb794 with catch @ 05bbb518
                       catch() { ... } // from try @ 05bbb854 with catch @ 05bbb518
                       catch() { ... } // from try @ 05bbb8ac with catch @ 05bbb518 */
    FUN_02d965b8(PTR_DAT_06a0b298);
    FUN_02d965b8(PTR_DAT_06a104a8);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<Category,_CategoryButton>_Add__);
    DAT_06dc2453 = 1;
  }
  lVar17 = *(long *)(param_1 + 0x50);
  if (lVar17 != 0) {
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x5c)) {
LAB_05bbbf8c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    iVar13 = *(int *)(param_1 + 0x84);
    uVar3 = *(ushort *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x5c) * 2 + 0x20);
    uVar16 = 0x20;
    if (param_2 != 0) {
      uVar16 = 10;
    }
    uVar10 = FUN_05bb65e8(param_1);
    uVar11 = FUN_05bb668c(param_1);
    *(undefined4 *)(param_1 + 0x9c) = uVar10;
    *(undefined4 *)(param_1 + 0xa0) = uVar11;
    iVar12 = *(int *)(param_1 + 0x5c) + 1;
    *(int *)(param_1 + 0x5c) = iVar12;
    *(int *)(param_1 + 0x70) = iVar12;
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN_05378f70(*(long *)(param_1 + 0x90),0,0);
      puVar9 = Method_System_Collections_Generic_Dictionary<Category,_CategoryButton>_Add__;
      puVar8 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QuerySessionsResults>_get_Task__
      ;
      puVar7 = PTR_DAT_069fb9c0;
      lVar17 = *(long *)(param_1 + 0x50);
      if (lVar17 != 0) {
LAB_05bbb5d8:
        uVar22 = *(uint *)(param_1 + 0x5c);
        if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_05bbbf8c;
        lVar19 = *(long *)(param_1 + 0x30);
        if (lVar19 == 0) goto LAB_05bbbf88;
        uVar4 = *(ushort *)(lVar17 + (long)(int)uVar22 * 2 + 0x20);
        if (*(uint *)(lVar19 + 0x18) <= (uint)uVar4) goto LAB_05bbbf8c;
        if ((-1 < *(char *)(lVar19 + (ulong)uVar4 + 0x20)) || (uVar4 == 0x25)) {
          if ((uVar4 == uVar3) && (*(int *)(param_1 + 0x84) == iVar13)) {
            if (*(long *)(param_1 + 0x90) == 0) goto LAB_05bbbf88;
            iVar13 = FUN_05378acc(*(long *)(param_1 + 0x90),0);
            if (0 < iVar13) {
              if (*(long *)(param_1 + 0x90) == 0) goto LAB_05bbbf88;
              FUN_05379620(*(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x50),
                           *(int *)(param_1 + 0x70),
                           *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x70),0);
            }
            *(ushort *)(param_1 + 0xa4) = uVar3;
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
            return 0x23;
          }
          if (0 < (int)(uVar22 - *(int *)(param_1 + 0x70))) {
            if (*(long *)(param_1 + 0x90) == 0) goto LAB_05bbbf88;
            FUN_05379620();
            uVar22 = *(uint *)(param_1 + 0x5c);
            lVar17 = *(long *)(param_1 + 0x50);
            *(uint *)(param_1 + 0x70) = uVar22;
            if (lVar17 == 0) goto LAB_05bbbf88;
          }
          uVar2 = *(uint *)(lVar17 + 0x18);
          if (uVar2 <= uVar22) goto LAB_05bbbf8c;
          uVar4 = *(ushort *)(lVar17 + (long)(int)uVar22 * 2 + 0x20);
          if (0x27 < uVar4) {
            if (uVar4 == 0x3c) {
              if (param_2 == 0) {
                uVar14 = FUN_05bc4f34(0x3c,0,0);
                FUN_05bb7dc0(param_1,uVar22,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_Add__
                             ,uVar14);
                uVar22 = *(uint *)(param_1 + 0x5c);
              }
            }
            else if (uVar4 != 0x3e) goto LAB_05bbb6f4;
            goto LAB_05bbb61c;
          }
          if (0x21 < uVar4) {
            if (uVar4 < 0x26) {
              if (uVar4 == 0x22) goto LAB_05bbb61c;
              if (uVar4 != 0x25) goto LAB_05bbb6f4;
              *(uint *)(param_1 + 0x5c) = uVar22 + 1;
              if (param_2 != 1) goto LAB_05bbb624;
              uVar14 = FUN_05bbbf90(param_1);
              FUN_05bbc840(param_1,uVar14,1,1,0);
LAB_05bbb9cc:
              uVar10 = *(undefined4 *)(param_1 + 0x5c);
LAB_05bbb9d0:
              *(undefined4 *)(param_1 + 0x70) = uVar10;
              goto LAB_05bbb624;
            }
            if (uVar4 != 0x26) {
              if (uVar4 == 0x27) goto LAB_05bbb61c;
LAB_05bbb6f4:
              uVar24 = *(uint *)(param_1 + 0x58);
              if (uVar22 != uVar24) {
                uVar1 = uVar22;
                if ((uVar4 & 0xfc00) != 0xd800) {
LAB_05bbbf60:
                  FUN_05bb7fa4(param_1,lVar17,uVar24,uVar1);
                  return 9;
                }
                uVar1 = uVar22 + 1;
                if (uVar1 == uVar24) goto LAB_05bbb924;
                *(uint *)(param_1 + 0x5c) = uVar1;
                if (uVar1 < uVar2) {
                  if ((*(ushort *)(lVar17 + (long)(int)uVar1 * 2 + 0x20) & 0xfc00) != 0xdc00)
                  goto LAB_05bbbf60;
                  iVar12 = uVar22 + 2;
                  goto LAB_05bbb620;
                }
                goto LAB_05bbbf8c;
              }
LAB_05bbb924:
              plVar23 = *(long **)(param_1 + 0x10);
              if (plVar23 != (long *)0x0) {
                lVar17 = *plVar23;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                      puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 9) * 0x10 + 0x138);
                      goto LAB_05bbb97c;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,9);
LAB_05bbb97c:
                uVar20 = (*(code *)*puVar15)(plVar23,puVar15[1]);
                if ((((uVar20 & 1) != 0) || (iVar12 = FUN_05bbaf14(param_1), iVar12 == 0)) &&
                   ((param_2 == 2 || (uVar20 = FUN_05bbafd8(param_1,1), (uVar20 & 1) == 0)))) {
                  FUN_05bb7a18(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined8 *)puVar9,
                               **(undefined8 **)(*(long *)(puVar7 + 0x90) + 0xb8));
                }
                goto LAB_05bbb9cc;
              }
              goto LAB_05bbbf88;
            }
            if (param_2 == 2) goto LAB_05bbb61c;
            uVar24 = uVar22 + 1;
            if (uVar24 == *(uint *)(param_1 + 0x58)) goto LAB_05bbb924;
            if (uVar2 <= uVar24) goto LAB_05bbbf8c;
            sVar5 = *(short *)(lVar17 + (long)(int)uVar24 * 2 + 0x20);
            FUN_05bb6494(param_1,uVar22);
            plVar23 = *(long **)(param_1 + 0x10);
            if (sVar5 == 0x23) {
              uVar20 = FUN_05bb3378(param_1);
              if ((uVar20 & 1) == 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined8 *)(param_1 + 0x78);
              }
              if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
              lVar17 = *plVar23;
              uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                    puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 0xe) * 0x10 + 0x138);
                    goto LAB_05bbbb50;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,0xe);
LAB_05bbbb50:
              iVar12 = (*(code *)*puVar15)(plVar23,uVar14,puVar15[1]);
              FUN_05bb388c(param_1);
              if (*(long *)(param_1 + 0x90) == 0) goto LAB_05bbbf88;
              FUN_05379620(*(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x50),
                           *(int *)(param_1 + 0x5c),iVar12 - *(int *)(param_1 + 0x5c),0);
              plVar23 = *(long **)(param_1 + 0x10);
              if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
              lVar19 = *plVar23;
              lVar17 = *(long *)puVar8;
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar17) goto LAB_05bbbec8;
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
            }
            else {
              if (param_2 != 0) {
                if (plVar23 != (long *)0x0) {
                  lVar17 = *plVar23;
                  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                        puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 0xf) * 0x10 + 0x138);
                        goto LAB_05bbbd70;
                      }
                      uVar20 = uVar20 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,0xf);
LAB_05bbbd70:
                  iVar12 = (*(code *)*puVar15)(plVar23,0,0,puVar15[1]);
                  FUN_05bb388c(param_1);
                  if (-1 < iVar12) {
                    uVar10 = *(undefined4 *)(param_1 + 0x5c);
                    *(int *)(param_1 + 0x5c) = iVar12;
                    goto LAB_05bbb9d0;
                  }
                  if (*(long *)(param_1 + 0x90) != 0) {
                    FUN_0537a744(*(long *)(param_1 + 0x90),0x26,0);
                    iVar12 = *(int *)(param_1 + 0x5c) + 1;
                    *(int *)(param_1 + 0x5c) = iVar12;
                    *(int *)(param_1 + 0x70) = iVar12;
                    uVar14 = FUN_05bbbf90(param_1);
                    FUN_05bbc0f0(param_1,uVar14,0,0,0);
                    goto LAB_05bbb624;
                  }
                }
                goto LAB_05bbbf88;
              }
              uVar20 = FUN_05bb3378(param_1);
              if ((uVar20 & 1) == 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined8 *)(param_1 + 0x78);
              }
              if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
              lVar17 = *plVar23;
              uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                    puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 0xf) * 0x10 + 0x138);
                    goto LAB_05bbbe40;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,0xf);
LAB_05bbbe40:
              iVar12 = (*(code *)*puVar15)(plVar23,1,uVar14,puVar15[1]);
              FUN_05bb388c(param_1);
              if (iVar12 < 0) {
                FUN_05bb8058(param_1,0,1,1);
                goto LAB_05bbb9cc;
              }
              if (*(long *)(param_1 + 0x90) == 0) goto LAB_05bbbf88;
              FUN_05379620(*(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x50),
                           *(int *)(param_1 + 0x5c),iVar12 - *(int *)(param_1 + 0x5c),0);
              plVar23 = *(long **)(param_1 + 0x10);
              if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
              lVar19 = *plVar23;
              lVar17 = *(long *)puVar8;
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar17) goto LAB_05bbbec8;
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
            }
            puVar15 = (undefined8 *)FUN_02dd004c(plVar23,lVar17,6);
            goto LAB_05bbbed8;
          }
          if (uVar4 != 9) {
            if (uVar4 == 10) {
              uVar24 = uVar22 + 1;
              *(uint *)(param_1 + 0x5c) = uVar24;
              if (*(char *)(param_1 + 0x48) != '\0') {
                if (*(long *)(param_1 + 0x90) == 0) goto LAB_05bbbf88;
                FUN_0537a744(*(long *)(param_1 + 0x90),uVar16,0);
                uVar24 = *(uint *)(param_1 + 0x5c);
                *(uint *)(param_1 + 0x70) = uVar24;
              }
              plVar23 = *(long **)(param_1 + 0x10);
              if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
              lVar17 = *plVar23;
              uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                    puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 0xd) * 0x10 + 0x138);
                    goto LAB_05bbb9e8;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,0xd);
LAB_05bbb9e8:
              pcVar18 = (code *)*puVar15;
              uVar14 = puVar15[1];
            }
            else {
              if (uVar4 != 0xd) goto LAB_05bbb6f4;
              uVar24 = uVar22 + 1;
              if (uVar2 <= uVar24) goto LAB_05bbbf8c;
              if (*(short *)(lVar17 + (long)(int)uVar24 * 2 + 0x20) == 10) {
                if (*(char *)(param_1 + 0x48) != '\0') {
                  lVar17 = *(long *)(param_1 + 0x90);
                  plVar23 = *(long **)(param_1 + 0x10);
                  if (param_2 == 0) {
                    if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
                    lVar19 = *plVar23;
                    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar20 != 0) {
                      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xb) * 0x10 + 0x138);
                          goto LAB_05bbbbd4;
                        }
                        uVar20 = uVar20 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar20 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,0xb);
LAB_05bbbbd4:
                    uVar20 = (*(code *)*puVar15)(plVar23,puVar15[1]);
                    puVar6 = (undefined8 *)PTR_DAT_069fb9e8;
                    puVar15 = (undefined8 *)PTR_DAT_06a104a8;
                  }
                  else {
                    if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
                    lVar19 = *plVar23;
                    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    if (uVar20 != 0) {
                      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xb) * 0x10 + 0x138);
                          goto LAB_05bbbb08;
                        }
                        uVar20 = uVar20 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar20 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,0xb);
LAB_05bbbb08:
                    uVar20 = (*(code *)*puVar15)(plVar23,puVar15[1]);
                    puVar6 = (undefined8 *)PTR_DAT_06a01850;
                    puVar15 = (undefined8 *)PTR_DAT_06a0b298;
                  }
                  if (lVar17 == 0) goto LAB_05bbbf88;
                  if ((uVar20 & 1) == 0) {
                    puVar15 = puVar6;
                  }
                  FUN_053798ac(lVar17,*puVar15,0);
                  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x5c) + 2;
                  FUN_05bb6494(param_1);
                  plVar23 = *(long **)(param_1 + 0x10);
                  if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
                  lVar17 = *plVar23;
                  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                        puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 5) * 0x10 + 0x138);
                        goto LAB_05bbbc78;
                      }
                      uVar20 = uVar20 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,5);
LAB_05bbbc78:
                  iVar12 = (*(code *)*puVar15)(plVar23,puVar15[1]);
                  lVar17 = *plVar23;
                  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                        puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 6) * 0x10 + 0x138);
                        goto LAB_05bbbcd8;
                      }
                      uVar20 = uVar20 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,6);
LAB_05bbbcd8:
                  (*(code *)*puVar15)(plVar23,iVar12 + 1,puVar15[1]);
                  uVar22 = *(uint *)(param_1 + 0x5c);
                }
                uVar24 = uVar22 + 2;
                *(uint *)(param_1 + 0x5c) = uVar24;
              }
              else {
                if (uVar24 == *(uint *)(param_1 + 0x58)) goto LAB_05bbb924;
                *(uint *)(param_1 + 0x5c) = uVar24;
                if (*(char *)(param_1 + 0x48) != '\0') {
                  if (*(long *)(param_1 + 0x90) == 0) goto LAB_05bbbf88;
                  FUN_0537a744(*(long *)(param_1 + 0x90),uVar16,0);
                  uVar24 = *(uint *)(param_1 + 0x5c);
                  *(uint *)(param_1 + 0x70) = uVar24;
                }
              }
              plVar23 = *(long **)(param_1 + 0x10);
              if (plVar23 == (long *)0x0) goto LAB_05bbbf88;
              lVar17 = *plVar23;
              uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar8) {
                    puVar15 = (undefined8 *)(lVar17 + (long)(*piVar21 + 0xd) * 0x10 + 0x138);
                    goto LAB_05bbbd4c;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar15 = (undefined8 *)FUN_02dd004c(plVar23,*(long *)puVar8,0xd);
LAB_05bbbd4c:
              pcVar18 = (code *)*puVar15;
              uVar14 = puVar15[1];
            }
            (*pcVar18)(plVar23,uVar24,uVar14);
            goto LAB_05bbb624;
          }
          if ((param_2 == 0) && (*(char *)(param_1 + 0x48) != '\0')) {
            if (*(long *)(param_1 + 0x90) != 0) {
              FUN_0537a744(*(long *)(param_1 + 0x90),0x20,0);
              uVar22 = *(uint *)(param_1 + 0x5c);
              *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
              goto LAB_05bbb61c;
            }
            goto LAB_05bbbf88;
          }
        }
LAB_05bbb61c:
        iVar12 = uVar22 + 1;
LAB_05bbb620:
        *(int *)(param_1 + 0x5c) = iVar12;
        goto LAB_05bbb624;
      }
    }
  }
LAB_05bbbf88:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_05bbbec8:
  puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 6) * 0x10 + 0x138);
LAB_05bbbed8:
  (*(code *)*puVar15)(plVar23,iVar12,puVar15[1]);
  *(int *)(param_1 + 0x70) = iVar12;
  *(int *)(param_1 + 0x5c) = iVar12;
LAB_05bbb624:
  lVar17 = *(long *)(param_1 + 0x50);
  if (lVar17 == 0) goto LAB_05bbbf88;
  goto LAB_05bbb5d8;
}


