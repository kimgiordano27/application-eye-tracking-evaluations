/*
FUNCTION_NAME: OVRPlugin$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 01d846c8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__set_eyeFovPremultipliedAlphaModeEnabled(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  code *pcVar19;
  int *piVar20;
  long *plVar21;
  long *plVar22;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar23;
  long unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined *puVar14;
  
  if ((*(int *)(unaff_x22 + 0x10) == 0) || (uVar6 = FUN_01c50924(), (uVar6 & 1) != 0)) {
    lVar7 = OVRPlugin__GetTimeInSeconds();
    unaff_x22 = *(long *)PTR_DAT_02359240;
    if (lVar7 != 0) {
      unaff_x22 = lVar7;
    }
  }
  if ((unaff_w25 >> 10 & 1) != 0 || (unaff_w25 & 0x800) != 0) {
    uVar1 = unaff_w25 & 0x400;
    if (uVar1 == 0) {
      if (unaff_x28 == 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bbe8);
        uVar13 = thunk_FUN_010400dc();
        uVar15 = thunk_FUN_010303a8(PTR_DAT_02359290);
        FUN_01c5e120(uVar13,uVar15,0);
        uVar15 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar13,uVar15);
      }
      puVar14 = PTR_DAT_023592a8;
      if ((unaff_w25 >> 0xc & 1) == 0) {
        uVar17 = unaff_w25 >> 8;
        puVar14 = PTR_DAT_02359250;
joined_r0x01d8477c:
        if ((uVar17 & 1) == 0) {
          uVar13 = (**(code **)(*unaff_x24 + 0x698))();
          lVar7 = thunk_FUN_0103ffe0(uVar13,*(undefined8 *)PTR_DAT_02352730);
          if (lVar7 == 0) goto LAB_01d85298;
          if ((int)*(long *)(lVar7 + 0x18) == 1) {
            plVar21 = *(long **)(lVar7 + 0x20);
LAB_01d84848:
            uVar6 = FUN_01cc6c94(plVar21,0,0);
            if ((uVar6 & 1) != 0) {
              if ((plVar21 == (long *)0x0) ||
                 (lVar7 = (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240))
                 , lVar7 == 0)) goto LAB_01d85298;
              uVar6 = FUN_01d61eb0(lVar7,0);
              if ((uVar6 & 1) == 0) {
                lVar7 = (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240));
                uVar13 = *(undefined8 *)PTR_DAT_0234bd80;
                if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
                  thunk_FUN_01022c14(*(long *)PTR_DAT_0234bc58);
                }
                lVar8 = FUN_01d5e86c(uVar13,0);
                if (lVar7 == lVar8) goto LAB_01d848d8;
              }
              else {
LAB_01d848d8:
                uVar17 = in_stack_00000048._4_4_ - (uint)(uVar1 == 0);
                if (0 < (int)uVar17) {
                  lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234cba8,uVar17);
                  puVar14 = PTR_DAT_023517e0;
                  if (unaff_x28 != 0) {
                    uVar5 = 0;
                    do {
                      if (*(uint *)(unaff_x28 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc53c();
                      }
                      lVar23 = (long)(int)uVar5;
                      lVar8 = *(long *)(unaff_x28 + lVar23 * 8 + 0x20);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc534();
                      }
                      uVar13 = *(undefined8 *)puVar14;
                      lVar9 = thunk_FUN_0103ffe0(lVar8,uVar13);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(lVar8,uVar13);
                      }
                      lVar9 = *(long *)puVar14;
                      plVar10 = (long *)thunk_FUN_0103ffe0(lVar8,lVar9);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(lVar8,lVar9);
                      }
                      lVar8 = *plVar10;
                      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar6 != 0) {
                        piVar20 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar20 + -2) == lVar9) {
                            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                            goto LAB_01d849b0;
                          }
                          uVar6 = uVar6 - 1;
                          piVar20 = piVar20 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0103c348(plVar10,lVar9,7);
LAB_01d849b0:
                      uVar4 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc534();
                      }
                      if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc53c();
                      }
                      uVar5 = uVar5 + 1;
                      *(undefined4 *)(lVar7 + lVar23 * 4 + 0x20) = uVar4;
                      if (uVar5 == uVar17) {
                        plVar21 = (long *)(**(code **)(*plVar21 + 0x2c8))
                                                    (plVar21,in_stack_00000040,
                                                     *(undefined8 *)(*plVar21 + 0x2d0));
                        if (plVar21 == (long *)0x0) {
                          if (uVar1 != 0) goto LAB_01d85298;
                        }
                        else {
                          bVar2 = *(byte *)(*(long *)PTR_DAT_0234bdf8 + 0x130);
                          if ((*(byte *)(*plVar21 + 0x130) < bVar2) ||
                             (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)PTR_DAT_0234bdf8)) {
                    /* WARNING: Subroutine does not return */
                            FUN_00fdc8d0();
                          }
                          if (uVar1 != 0) {
                            uVar13 = thunk_FUN_0105ce10(plVar21,lVar7,0);
                            return uVar13;
                          }
                        }
                        if (in_stack_00000058 == 0) goto LAB_01d85298;
                        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar17) goto LAB_01d8529c;
                        if (plVar21 != (long *)0x0) {
                          thunk_FUN_0105cfb0(plVar21,*(undefined8 *)
                                                      (in_stack_00000058 + (long)(int)uVar17 * 8 +
                                                      0x20),lVar7,0);
                          return 0;
                        }
                        goto LAB_01d85298;
                      }
                      unaff_x28 = in_stack_00000058;
                    } while (in_stack_00000058 != 0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc534();
                }
              }
              if (uVar1 == 0) {
                puVar14 = PTR_DAT_023592c0;
                if (in_stack_00000048._4_4_ == 1) {
                  if (unaff_x28 != 0) {
                    if (*(int *)(unaff_x28 + 0x18) != 0) {
                      (**(code **)(*plVar21 + 0x2e8))
                                (plVar21,in_stack_00000040,*(undefined8 *)(unaff_x28 + 0x20),
                                 unaff_w25);
                      return 0;
                    }
                    goto LAB_01d8529c;
                  }
                  goto LAB_01d85298;
                }
              }
              else {
                puVar14 = PTR_DAT_023592c8;
                if (in_stack_00000048._4_4_ == 0) {
                  uVar13 = (**(code **)(*plVar21 + 0x2c8))
                                     (plVar21,in_stack_00000040,*(undefined8 *)(*plVar21 + 0x2d0));
                  return uVar13;
                }
              }
              goto LAB_01d85494;
            }
          }
          else {
            if (*(long *)(lVar7 + 0x18) != 0) {
              if (uVar1 == 0) {
                if (unaff_x28 == 0) goto LAB_01d85298;
                if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_01d8529c;
              }
              else if (*(int *)(*(long *)PTR_DAT_02358d88 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              if (unaff_x23 == (long *)0x0) goto LAB_01d85298;
              plVar21 = (long *)(**(code **)(*unaff_x23 + 0x178))();
              goto LAB_01d84848;
            }
            uVar6 = FUN_01cc6c94(0,0,0);
            if ((uVar6 & 1) != 0) goto LAB_01d85298;
          }
          if ((unaff_w25 & 0xfff300) == 0) {
            uVar13 = (**(code **)(*unaff_x24 + 0x2c8))();
            thunk_FUN_010303a8(PTR_DAT_02358da0);
            uVar15 = thunk_FUN_010400dc();
            FUN_01d69de8(uVar15,uVar13,unaff_x22,0);
            goto LAB_01d855c4;
          }
          goto LAB_01d84a00;
        }
      }
    }
    else {
      puVar14 = PTR_DAT_023592a0;
      if ((unaff_w25 & 0x800) == 0) {
        uVar17 = unaff_w25 >> 0xd;
        puVar14 = PTR_DAT_023592b0;
        goto joined_r0x01d8477c;
      }
    }
LAB_01d85494:
    uVar13 = thunk_FUN_010303a8(puVar14);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar15 = thunk_FUN_010400dc();
    uVar16 = thunk_FUN_010303a8(PTR_DAT_023592d0);
    FUN_01c5e198(uVar15,uVar13,uVar16,0);
    goto LAB_01d855c4;
  }
LAB_01d84a00:
  uVar1 = unaff_w25 & 0x2000;
  uVar17 = unaff_w25 >> 0xc & 1;
  if (uVar17 != 0 || uVar1 != 0) {
    puVar14 = PTR_DAT_023592b8;
    uVar5 = uVar1;
    if ((unaff_w25 >> 0xc & 1) == 0) {
      puVar14 = PTR_DAT_02359260;
      uVar5 = unaff_w25 >> 8 & 1;
    }
    if (uVar5 != 0) goto LAB_01d85494;
  }
  if ((unaff_w25 >> 8 & 1) == 0) {
    plVar21 = (long *)0x0;
    plVar10 = (long *)0x0;
  }
  else {
    uVar13 = (**(code **)(*unaff_x24 + 0x698))();
    lVar7 = thunk_FUN_0103ffe0(uVar13,*(undefined8 *)PTR_DAT_02353e90);
    puVar3 = PTR_DAT_0234c5a8;
    puVar14 = PTR_DAT_0234bce0;
    if (lVar7 == 0) goto LAB_01d85298;
    if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
      plVar21 = (long *)0x0;
    }
    else {
      lVar8 = 0;
      uVar6 = 0;
      uVar18 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar10 = (long *)0x0;
      do {
        if (uVar18 <= uVar6) goto LAB_01d8529c;
        plVar12 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
        uVar13 = FUN_00fdc388(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar14);
        }
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_02351e10)) goto LAB_01d852a0;
        }
        uVar18 = FUN_01d7f588(plVar12,unaff_w25,3,uVar13);
        plVar21 = plVar10;
        if (((uVar18 & 1) != 0) &&
           (uVar18 = FUN_01cc86b0(plVar10,0,0), plVar21 = plVar12, (uVar18 & 1) == 0)) {
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
            FUN_017d2874(lVar8,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_02359230);
            if (lVar8 == 0) goto LAB_01d85298;
            lVar23 = *(long *)(lVar8 + 0x10);
            lVar9 = *(long *)PTR_DAT_02352648;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_01d85298;
            uVar5 = *(uint *)(lVar8 + 0x18);
            if (uVar5 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar5 + 1;
              plVar21 = (long *)(lVar23 + (long)(int)uVar5 * 8 + 0x20);
              *plVar21 = (long)plVar10;
              thunk_FUN_0106e12c(plVar21,plVar10);
            }
            else {
              FUN_017d3030(lVar8,plVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar23 = *(long *)(lVar8 + 0x10);
          lVar9 = *(long *)PTR_DAT_02352648;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar23 == 0) goto LAB_01d85298;
          uVar5 = *(uint *)(lVar8 + 0x18);
          if (uVar5 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar5 + 1;
            puVar11 = (undefined8 *)(lVar23 + (long)(int)uVar5 * 8 + 0x20);
            *puVar11 = plVar12;
            thunk_FUN_0106e12c(puVar11,plVar12);
            plVar21 = plVar10;
          }
          else {
            FUN_017d3030(lVar8,plVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            plVar21 = plVar10;
          }
        }
        uVar18 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar6 = uVar6 + 1;
        plVar10 = plVar21;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
      if (lVar8 != 0) {
        plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,*(undefined4 *)(lVar8 + 0x18)
                                      );
        FUN_017d34e4(lVar8,plVar10,*(undefined8 *)PTR_DAT_02359228);
        goto LAB_01d84cf8;
      }
    }
    plVar10 = (long *)0x0;
  }
LAB_01d84cf8:
  uVar5 = FUN_01cc86b0(plVar21,0,0);
  if ((uVar5 & uVar17) != 0 || (unaff_w25 >> 0xd & 1) != 0) {
    uVar13 = (**(code **)(*unaff_x24 + 0x698))
                       (unaff_x24,unaff_x22,0x10,unaff_w25,*(undefined8 *)(*unaff_x24 + 0x6a0));
    lVar7 = thunk_FUN_0103ffe0(uVar13,*(undefined8 *)PTR_DAT_02353e98);
    puVar3 = PTR_DAT_0234c5a8;
    puVar14 = PTR_DAT_0234bce0;
    if (lVar7 == 0) goto LAB_01d85298;
    uVar17 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar17) {
      uVar5 = 0;
      lVar8 = 0;
      plVar22 = plVar21;
      do {
        if (uVar17 <= uVar5) goto LAB_01d8529c;
        plVar21 = *(long **)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar21 == (long *)0x0) goto LAB_01d85298;
        lVar23 = *plVar21;
        if (uVar1 == 0) {
          pcVar19 = *(code **)(lVar23 + 0x278);
          uVar13 = *(undefined8 *)(lVar23 + 0x280);
        }
        else {
          pcVar19 = *(code **)(lVar23 + 0x298);
          uVar13 = *(undefined8 *)(lVar23 + 0x2a0);
        }
        plVar12 = (long *)(*pcVar19)(plVar21,1,uVar13);
        uVar6 = FUN_01cc86b0(plVar12,0,0);
        plVar21 = plVar22;
        if ((uVar6 & 1) == 0) {
          uVar13 = FUN_00fdc388(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
          if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
            thunk_FUN_01022c14(*(long *)puVar14);
          }
          if (plVar12 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_02351e10)) {
LAB_01d852a0:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc8d0(plVar12);
            }
          }
          uVar6 = FUN_01d7f588(plVar12,unaff_w25,3,uVar13);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = FUN_01cc86b0(plVar22,0,0), plVar21 = plVar12, (uVar6 & 1) == 0)) {
            if (lVar8 == 0) {
              lVar8 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
              FUN_017d2874(lVar8,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_02359230);
              if (lVar8 == 0) goto LAB_01d85298;
              lVar23 = *(long *)(lVar8 + 0x10);
              lVar9 = *(long *)PTR_DAT_02352648;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_01d85298;
              uVar17 = *(uint *)(lVar8 + 0x18);
              if (uVar17 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar17 + 1;
                plVar21 = (long *)(lVar23 + (long)(int)uVar17 * 8 + 0x20);
                *plVar21 = (long)plVar22;
                thunk_FUN_0106e12c(plVar21,plVar22);
              }
              else {
                FUN_017d3030(lVar8,plVar22,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar23 = *(long *)(lVar8 + 0x10);
            lVar9 = *(long *)PTR_DAT_02352648;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_01d85298;
            uVar17 = *(uint *)(lVar8 + 0x18);
            if (uVar17 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar17 + 1;
              plVar21 = (long *)(lVar23 + (long)(int)uVar17 * 8 + 0x20);
              *plVar21 = (long)plVar12;
              thunk_FUN_0106e12c(plVar21,plVar12);
              plVar21 = plVar22;
            }
            else {
              FUN_017d3030(lVar8,plVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              plVar21 = plVar22;
            }
          }
        }
        uVar17 = *(uint *)(lVar7 + 0x18);
        uVar5 = uVar5 + 1;
        plVar22 = plVar21;
      } while ((int)uVar5 < (int)uVar17);
      if (lVar8 != 0) {
        plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,*(undefined4 *)(lVar8 + 0x18)
                                      );
        FUN_017d34e4(lVar8,plVar10,*(undefined8 *)PTR_DAT_02359228);
      }
    }
  }
  uVar6 = FUN_01cc8674(plVar21,0,0);
  if ((uVar6 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar10 == (long *)0x0)) {
      if ((plVar21 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar21 + 0x398))(plVar21,*(undefined8 *)(*plVar21 + 0x3a0)),
         lVar7 == 0)) goto LAB_01d85298;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
        uVar13 = (**(code **)(*plVar21 + 0x328))
                           (plVar21,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,
                            unaff_x27,*(undefined8 *)(*plVar21 + 0x330));
        return uVar13;
      }
    }
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
      if (plVar10 == (long *)0x0) goto LAB_01d85298;
      if ((plVar21 != (long *)0x0) &&
         (lVar7 = thunk_FUN_0103ffe0(plVar21,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
        uVar13 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar13,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar10[4] = (long)plVar21;
      thunk_FUN_0106e12c(plVar10 + 4,plVar21);
    }
    if (in_stack_00000058 == 0) {
      lVar8 = *(long *)PTR_DAT_023508c0;
      lVar7 = *(long *)(lVar8 + 0x38);
      if (lVar7 == 0) {
        FUN_0103c2a0(lVar8);
        lVar7 = *(long *)(lVar8 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0103c244();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0103c244();
      }
      in_stack_00000058 = **(long **)(lVar7 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    plVar21 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                (unaff_x23,unaff_w25,plVar10,&stack0x00000058,in_stack_00000020,
                                 unaff_x27,unaff_x26,&stack0x00000050);
    uVar6 = FUN_01cc8210(plVar21,0,0);
    if ((uVar6 & 1) == 0) {
      if (plVar21 != (long *)0x0) {
        lVar7 = *plVar21;
        bVar2 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0234ebc0))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar21);
        }
        uVar13 = (**(code **)(lVar7 + 0x328))
                           (plVar21,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,
                            unaff_x27,*(undefined8 *)(lVar7 + 0x330));
        if (in_stack_00000050 != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_01d85298;
          (**(code **)(*unaff_x23 + 0x1a8))
                    (unaff_x23,&stack0x00000058,in_stack_00000050,
                     *(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        return uVar13;
      }
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  uVar13 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
  thunk_FUN_010303a8(PTR_DAT_0234bcf0);
  uVar15 = thunk_FUN_010400dc();
  FUN_01d4c060(uVar15,uVar13,unaff_x22,0);
LAB_01d855c4:
  uVar13 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar15,uVar13);
}


