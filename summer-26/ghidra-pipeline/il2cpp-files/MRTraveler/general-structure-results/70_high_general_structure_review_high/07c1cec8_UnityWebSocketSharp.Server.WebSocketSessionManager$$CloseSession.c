/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 07c1cec8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long * UnityWebSocketSharp_Server_WebSocketSessionManager__CloseSession(long *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar18;
  long unaff_x23;
  long unaff_x25;
  undefined8 uVar19;
  uint uVar20;
  long *unaff_x28;
  
  lVar15 = *param_1;
  uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == unaff_x25) {
        puVar8 = (undefined8 *)(lVar15 + (long)(*piVar17 + 0x10) * 0x10 + 0x138);
        goto LAB_07c1d048;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348(param_1);
LAB_07c1d048:
  lVar15 = (*(code *)*puVar8)(param_1);
  uVar19 = *(undefined8 *)PTR_DAT_08e92c88;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x28);
  }
  lVar9 = FUN_0710fcf0(uVar19,0);
  plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
  lVar11 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08ea01d0,0);
  if (plVar10 == (long *)0x0) goto LAB_07c1d77c;
  if ((lVar11 != 0) &&
     (lVar12 = thunk_FUN_03cf5138(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
LAB_07c1d8e8:
    uVar19 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar19,0);
  }
  if ((int)plVar10[3] != 0) {
    plVar10[4] = lVar11;
    thunk_FUN_03d233cc(plVar10 + 4,lVar11);
    if ((unaff_x23 != 0) && (lVar11 = thunk_FUN_03cf5138(), lVar11 == 0)) goto LAB_07c1d8e8;
    if (1 < *(uint *)(plVar10 + 3)) {
      plVar10[5] = unaff_x23;
      thunk_FUN_03d233cc();
      if (lVar9 != 0) {
        uVar19 = FUN_0711bcdc(lVar9,*(undefined8 *)PTR_DAT_08ee5130,plVar10,0);
        uVar16 = FUN_0702dc84(uVar19,0,0);
        if ((uVar16 & 1) == 0) {
          uVar19 = *(undefined8 *)PTR_DAT_08ee50f8;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_0710fcf0(uVar19,0);
          uVar16 = FUN_07119344();
          if ((unaff_x20 == (long *)0x0) || ((uVar16 & 1) == 0)) {
            plVar10 = (long *)FUN_07c1a610();
            return plVar10;
          }
          plVar10 = *(long **)(unaff_x19 + 0x18);
          uVar19 = *(undefined8 *)PTR_DAT_08e80ca8;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar19 = FUN_0710fcf0(uVar19,0);
          if (plVar10 != (long *)0x0) {
            uVar16 = (**(code **)(*plVar10 + 0x1f8))
                               (plVar10,uVar19,0,*(undefined8 *)(*plVar10 + 0x200));
            if ((uVar16 & 1) == 0) {
              plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08ee5100,1);
              puVar4 = PTR_DAT_08e6b480;
              uVar19 = *(undefined8 *)(unaff_x19 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b480);
              }
              unaff_x20 = (long *)FUN_07136034(uVar19);
              if (plVar10 != (long *)0x0) {
                if (unaff_x20 != (long *)0x0) {
                  lVar15 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar15 + 0x130);
                  if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) != lVar15)) {
LAB_07c1d7d8:
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fecc(unaff_x20);
                  }
                  lVar15 = thunk_FUN_03cf5138(unaff_x20,*(undefined8 *)(*plVar10 + 0x40));
                  if (lVar15 == 0) goto LAB_07c1d8e8;
                  lVar15 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar15 + 0x130);
                  if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) != lVar15))
                  goto LAB_07c1d7d8;
                }
                if ((int)plVar10[3] != 0) {
                  plVar10[4] = (long)unaff_x20;
                  thunk_FUN_03d233cc(plVar10 + 4,unaff_x20);
                  return plVar10;
                }
                goto LAB_07c1d778;
              }
            }
            else {
              lVar15 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee5128);
              FUN_052124c0(lVar15,*(undefined8 *)PTR_DAT_08ee5120);
              puVar4 = PTR_DAT_08e6b480;
              uVar19 = *(undefined8 *)(unaff_x19 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              lVar9 = FUN_0713670c(uVar19,0);
              if (lVar9 != 0) {
                uVar6 = FUN_07119d8c(lVar9,0);
                lVar11 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e88698,uVar6);
                iVar7 = FUN_07119d8c(lVar9,0);
                puVar5 = PTR_DAT_08e78740;
                if (0 < iVar7) {
                  uVar16 = 0;
                  do {
                    plVar10 = (long *)FUN_07119dec(lVar9,uVar16 & 0xffffffff,0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(*(long *)puVar5);
                    }
                    if (plVar10 != (long *)0x0) {
                      bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                      if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                        FUN_03c8fecc(plVar10);
                      }
                    }
                    uVar19 = FUN_07070edc(plVar10);
                    if (lVar11 == 0) goto LAB_07c1d77c;
                    if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_07c1d778;
                    *(undefined8 *)(lVar11 + 0x20 + uVar16 * 8) = uVar19;
                    uVar16 = uVar16 + 1;
                    iVar7 = FUN_07119d8c(lVar9,0);
                  } while ((long)uVar16 < (long)iVar7);
                }
                if (*(int *)(*(long *)PTR_DAT_08e78740 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)puVar4)) goto LAB_07c1d7d8;
                uVar16 = FUN_07070edc();
                puVar5 = PTR_DAT_08ee5110;
                bVar14 = true;
                do {
                  if (!bVar14) {
                    if (uVar16 != 0) {
                      uVar19 = *(undefined8 *)(unaff_x19 + 0x18);
                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                        thunk_FUN_03cd7500();
                      }
                      plVar10 = (long *)FUN_07136ec8(uVar19,uVar16,0);
                      if (lVar15 == 0) goto LAB_07c1d77c;
                      if (plVar10 != (long *)0x0) {
                        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
                           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                            *(long *)puVar4)) {
LAB_07c1d7d0:
                    /* WARNING: Subroutine does not return */
                          FUN_03c8fecc(plVar10);
                        }
                      }
                      lVar9 = *(long *)(lVar15 + 0x10);
                      lVar11 = *(long *)puVar5;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar9 == 0) goto LAB_07c1d77c;
                      uVar1 = *(uint *)(lVar15 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                        plVar13 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar13 = (long)plVar10;
                        thunk_FUN_03d233cc(plVar13,plVar10);
                      }
                      else {
                        FUN_05212cf4(lVar15,plVar10,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_07c1d730;
                    }
                    break;
                  }
                  if (lVar11 == 0) goto LAB_07c1d77c;
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if ((int)uVar1 < 1) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = 0;
                    do {
                      if (uVar1 <= uVar20) goto LAB_07c1d778;
                      uVar18 = *(ulong *)(lVar11 + (long)(int)uVar20 * 8 + 0x20);
                      if ((uVar18 == uVar16) ||
                         (uVar18 != 0 && (uVar18 & (uVar16 ^ 0xffffffffffffffff)) == 0)) {
                        uVar19 = *(undefined8 *)(unaff_x19 + 0x18);
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_03cd7500();
                        }
                        plVar10 = (long *)FUN_07136ec8(uVar19,uVar18,0);
                        if (lVar15 == 0) goto LAB_07c1d77c;
                        if (plVar10 != (long *)0x0) {
                          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                          if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
                             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)puVar4)) goto LAB_07c1d7d0;
                        }
                        lVar9 = *(long *)(lVar15 + 0x10);
                        lVar12 = *(long *)puVar5;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar9 == 0) goto LAB_07c1d77c;
                        uVar3 = *(uint *)(lVar15 + 0x18);
                        if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                          plVar13 = (long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
                          *plVar13 = (long)plVar10;
                          thunk_FUN_03d233cc(plVar13,plVar10);
                        }
                        else {
                          FUN_05212cf4(lVar15,plVar10,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar16 = uVar16 & (uVar18 ^ 0xffffffffffffffff);
                        break;
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar1 != uVar20);
                  }
                  bVar14 = (int)uVar20 < (int)uVar1;
                } while (uVar16 != 0);
                if (lVar15 != 0) {
LAB_07c1d730:
                  plVar10 = (long *)FUN_05214770(lVar15,*(undefined8 *)PTR_DAT_08ee5118);
                  return plVar10;
                }
              }
            }
          }
        }
        else {
          plVar10 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,2);
          if (plVar10 != (long *)0x0) {
            lVar9 = *(long *)(unaff_x19 + 0x18);
            if ((lVar9 != 0) &&
               (lVar11 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
            goto LAB_07c1d8e8;
            if ((int)plVar10[3] != 0) {
              plVar10[4] = lVar9;
              thunk_FUN_03d233cc(plVar10 + 4,lVar9);
              if ((lVar15 != 0) &&
                 (lVar9 = thunk_FUN_03cf5138(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0))
              goto LAB_07c1d8e8;
              if (1 < *(uint *)(plVar10 + 3)) {
                plVar10[5] = lVar15;
                thunk_FUN_03d233cc(plVar10 + 5,lVar15);
                plVar13 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ed3b38);
                FUN_07c3d2d4(plVar13,uVar19,plVar10,0);
                return plVar13;
              }
            }
            goto LAB_07c1d778;
          }
        }
      }
LAB_07c1d77c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
LAB_07c1d778:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


