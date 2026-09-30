/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 07c1d098
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


long * UnityWebSocketSharp_Server_WebSocketSessionManager__CloseSession(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  bool bVar15;
  long lVar16;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar17;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  uint uVar18;
  long *unaff_x28;
  
  plVar8 = (long *)FUN_03c8f97c(*param_1,2);
  lVar9 = FUN_0710fcf0(*(undefined8 *)PTR_DAT_08ea01d0,0);
  if (plVar8 == (long *)0x0) goto LAB_07c1d77c;
  if ((lVar9 != 0) &&
     (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_07c1d8e8:
    uVar11 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar11,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar9;
    thunk_FUN_03d233cc(plVar8 + 4,lVar9);
    if ((unaff_x23 != 0) && (lVar9 = thunk_FUN_03cf5138(), lVar9 == 0)) goto LAB_07c1d8e8;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = unaff_x23;
      thunk_FUN_03d233cc();
      if (unaff_x25 != 0) {
        uVar11 = FUN_0711bcdc();
        uVar12 = FUN_0702dc84(uVar11,0,0);
        if ((uVar12 & 1) == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_08ee50f8;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_0710fcf0(uVar11,0);
          uVar12 = FUN_07119344();
          if ((unaff_x20 == (long *)0x0) || ((uVar12 & 1) == 0)) {
            plVar8 = (long *)FUN_07c1a610();
            return plVar8;
          }
          plVar8 = *(long **)(unaff_x19 + 0x18);
          uVar11 = *(undefined8 *)PTR_DAT_08e80ca8;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar11 = FUN_0710fcf0(uVar11,0);
          if (plVar8 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar8 + 0x1f8))
                               (plVar8,uVar11,0,*(undefined8 *)(*plVar8 + 0x200));
            if ((uVar12 & 1) == 0) {
              plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08ee5100,1);
              puVar4 = PTR_DAT_08e6b480;
              uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e6b480);
              }
              unaff_x20 = (long *)FUN_07136034(uVar11);
              if (plVar8 != (long *)0x0) {
                if (unaff_x20 != (long *)0x0) {
                  lVar9 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar9 + 0x130);
                  if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) != lVar9)) {
LAB_07c1d7d8:
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fecc(unaff_x20);
                  }
                  lVar9 = thunk_FUN_03cf5138(unaff_x20,*(undefined8 *)(*plVar8 + 0x40));
                  if (lVar9 == 0) goto LAB_07c1d8e8;
                  lVar9 = *(long *)puVar4;
                  bVar2 = *(byte *)(lVar9 + 0x130);
                  if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
                     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) != lVar9))
                  goto LAB_07c1d7d8;
                }
                if ((int)plVar8[3] != 0) {
                  plVar8[4] = (long)unaff_x20;
                  thunk_FUN_03d233cc(plVar8 + 4,unaff_x20);
                  return plVar8;
                }
                goto LAB_07c1d778;
              }
            }
            else {
              lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ee5128);
              FUN_052124c0(lVar9,*(undefined8 *)PTR_DAT_08ee5120);
              puVar4 = PTR_DAT_08e6b480;
              uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_08e6b480 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              lVar10 = FUN_0713670c(uVar11,0);
              if (lVar10 != 0) {
                uVar6 = FUN_07119d8c(lVar10,0);
                lVar14 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e88698,uVar6);
                iVar7 = FUN_07119d8c(lVar10,0);
                puVar5 = PTR_DAT_08e78740;
                if (0 < iVar7) {
                  uVar12 = 0;
                  do {
                    plVar8 = (long *)FUN_07119dec(lVar10,uVar12 & 0xffffffff,0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(*(long *)puVar5);
                    }
                    if (plVar8 != (long *)0x0) {
                      bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                      if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                        FUN_03c8fecc(plVar8);
                      }
                    }
                    uVar11 = FUN_07070edc(plVar8);
                    if (lVar14 == 0) goto LAB_07c1d77c;
                    if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_07c1d778;
                    *(undefined8 *)(lVar14 + 0x20 + uVar12 * 8) = uVar11;
                    uVar12 = uVar12 + 1;
                    iVar7 = FUN_07119d8c(lVar10,0);
                  } while ((long)uVar12 < (long)iVar7);
                }
                if (*(int *)(*(long *)PTR_DAT_08e78740 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)puVar4)) goto LAB_07c1d7d8;
                uVar12 = FUN_07070edc();
                puVar5 = PTR_DAT_08ee5110;
                bVar15 = true;
                do {
                  if (!bVar15) {
                    if (uVar12 != 0) {
                      uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                        thunk_FUN_03cd7500();
                      }
                      plVar8 = (long *)FUN_07136ec8(uVar11,uVar12,0);
                      if (lVar9 == 0) goto LAB_07c1d77c;
                      if (plVar8 != (long *)0x0) {
                        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                        if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
                           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                            *(long *)puVar4)) {
LAB_07c1d7d0:
                    /* WARNING: Subroutine does not return */
                          FUN_03c8fecc(plVar8);
                        }
                      }
                      lVar10 = *(long *)(lVar9 + 0x10);
                      lVar14 = *(long *)puVar5;
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar10 == 0) goto LAB_07c1d77c;
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        plVar13 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar13 = (long)plVar8;
                        thunk_FUN_03d233cc(plVar13,plVar8);
                      }
                      else {
                        FUN_05212cf4(lVar9,plVar8,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_07c1d730;
                    }
                    break;
                  }
                  if (lVar14 == 0) goto LAB_07c1d77c;
                  uVar1 = *(uint *)(lVar14 + 0x18);
                  if ((int)uVar1 < 1) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    do {
                      if (uVar1 <= uVar18) goto LAB_07c1d778;
                      uVar17 = *(ulong *)(lVar14 + (long)(int)uVar18 * 8 + 0x20);
                      if ((uVar17 == uVar12) ||
                         (uVar17 != 0 && (uVar17 & (uVar12 ^ 0xffffffffffffffff)) == 0)) {
                        uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_03cd7500();
                        }
                        plVar8 = (long *)FUN_07136ec8(uVar11,uVar17,0);
                        if (lVar9 == 0) goto LAB_07c1d77c;
                        if (plVar8 != (long *)0x0) {
                          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
                          if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
                             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)puVar4)) goto LAB_07c1d7d0;
                        }
                        lVar10 = *(long *)(lVar9 + 0x10);
                        lVar16 = *(long *)puVar5;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar10 == 0) goto LAB_07c1d77c;
                        uVar3 = *(uint *)(lVar9 + 0x18);
                        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
                          plVar13 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                          *plVar13 = (long)plVar8;
                          thunk_FUN_03d233cc(plVar13,plVar8);
                        }
                        else {
                          FUN_05212cf4(lVar9,plVar8,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar12 = uVar12 & (uVar17 ^ 0xffffffffffffffff);
                        break;
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar1 != uVar18);
                  }
                  bVar15 = (int)uVar18 < (int)uVar1;
                } while (uVar12 != 0);
                if (lVar9 != 0) {
LAB_07c1d730:
                  plVar8 = (long *)FUN_05214770(lVar9,*(undefined8 *)PTR_DAT_08ee5118);
                  return plVar8;
                }
              }
            }
          }
        }
        else {
          plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,2);
          if (plVar8 != (long *)0x0) {
            lVar9 = *(long *)(unaff_x19 + 0x18);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_07c1d8e8;
            if ((int)plVar8[3] != 0) {
              plVar8[4] = lVar9;
              thunk_FUN_03d233cc(plVar8 + 4,lVar9);
              if ((unaff_x24 != 0) && (lVar9 = thunk_FUN_03cf5138(), lVar9 == 0)) goto LAB_07c1d8e8;
              if (1 < *(uint *)(plVar8 + 3)) {
                plVar8[5] = unaff_x24;
                thunk_FUN_03d233cc();
                plVar13 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08ed3b38);
                FUN_07c3d2d4(plVar13,uVar11,plVar8,0);
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


