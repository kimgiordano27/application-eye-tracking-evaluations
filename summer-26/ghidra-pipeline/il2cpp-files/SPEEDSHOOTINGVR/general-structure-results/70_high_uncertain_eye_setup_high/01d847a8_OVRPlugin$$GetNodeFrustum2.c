/*
FUNCTION_NAME: OVRPlugin$$GetNodeFrustum2
ENTRY_POINT: 01d847a8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodeFrustum2(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  code *pcVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  undefined8 unaff_x22;
  undefined8 uVar22;
  long *unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  undefined8 unaff_x27;
  long lVar23;
  long unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  
  lVar6 = thunk_FUN_0103ffe0(param_2,*param_1);
  if (lVar6 == 0) goto LAB_01d85298;
  if ((int)*(long *)(lVar6 + 0x18) == 1) {
    plVar20 = *(long **)(lVar6 + 0x20);
LAB_01d84848:
    uVar7 = FUN_01cc6c94(plVar20,0,0);
    if ((uVar7 & 1) == 0) goto LAB_01d849f0;
    if ((plVar20 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar20 + 0x238))(plVar20,*(undefined8 *)(*plVar20 + 0x240)),
       lVar6 == 0)) goto LAB_01d85298;
    uVar7 = FUN_01d61eb0(lVar6,0);
    if ((uVar7 & 1) == 0) {
      lVar6 = (**(code **)(*plVar20 + 0x238))(plVar20,*(undefined8 *)(*plVar20 + 0x240));
      uVar22 = *(undefined8 *)PTR_DAT_0234bd80;
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14(*(long *)PTR_DAT_0234bc58);
      }
      lVar8 = FUN_01d5e86c(uVar22,0);
      if (lVar6 == lVar8) goto LAB_01d848d8;
    }
    else {
LAB_01d848d8:
      uVar2 = in_stack_00000048._4_4_ - (uint)(unaff_w26 == 0);
      if (0 < (int)uVar2) {
        lVar6 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234cba8,uVar2);
        puVar13 = PTR_DAT_023517e0;
        if (unaff_x28 != 0) {
          uVar16 = 0;
          do {
            if (*(uint *)(unaff_x28 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            lVar23 = (long)(int)uVar16;
            lVar8 = *(long *)(unaff_x28 + lVar23 * 8 + 0x20);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            uVar22 = *(undefined8 *)puVar13;
            lVar9 = thunk_FUN_0103ffe0(lVar8,uVar22);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc8d0(lVar8,uVar22);
            }
            lVar9 = *(long *)puVar13;
            plVar10 = (long *)thunk_FUN_0103ffe0(lVar8,lVar9);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc8d0(lVar8,lVar9);
            }
            lVar8 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar9) {
                  puVar11 = (undefined8 *)(lVar8 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                  goto LAB_01d849b0;
                }
                uVar7 = uVar7 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_0103c348(plVar10,lVar9,7);
LAB_01d849b0:
            uVar4 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            uVar16 = uVar16 + 1;
            *(undefined4 *)(lVar6 + lVar23 * 4 + 0x20) = uVar4;
            if (uVar16 == uVar2) {
              plVar20 = (long *)(**(code **)(*plVar20 + 0x2c8))
                                          (plVar20,in_stack_00000040,
                                           *(undefined8 *)(*plVar20 + 0x2d0));
              if (plVar20 == (long *)0x0) {
                if (unaff_w26 != 0) goto LAB_01d85298;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_0234bdf8 + 0x130);
                if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_0234bdf8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc8d0();
                }
                if (unaff_w26 != 0) {
                  uVar22 = thunk_FUN_0105ce10(plVar20,lVar6,0);
                  return uVar22;
                }
              }
              if (in_stack_00000058 == 0) goto LAB_01d85298;
              if (*(uint *)(in_stack_00000058 + 0x18) <= uVar2) goto LAB_01d8529c;
              if (plVar20 != (long *)0x0) {
                thunk_FUN_0105cfb0(plVar20,*(undefined8 *)
                                            (in_stack_00000058 + (long)(int)uVar2 * 8 + 0x20),lVar6,
                                   0);
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
    if (unaff_w26 == 0) {
      puVar13 = PTR_DAT_023592c0;
      if (in_stack_00000048._4_4_ == 1) {
        if (unaff_x28 != 0) {
          if (*(int *)(unaff_x28 + 0x18) != 0) {
            (**(code **)(*plVar20 + 0x2e8))
                      (plVar20,in_stack_00000040,*(undefined8 *)(unaff_x28 + 0x20),unaff_w25);
            return 0;
          }
          goto LAB_01d8529c;
        }
        goto LAB_01d85298;
      }
    }
    else {
      puVar13 = PTR_DAT_023592c8;
      if (in_stack_00000048._4_4_ == 0) {
        uVar22 = (**(code **)(*plVar20 + 0x2c8))
                           (plVar20,in_stack_00000040,*(undefined8 *)(*plVar20 + 0x2d0));
        return uVar22;
      }
    }
LAB_01d85494:
    uVar22 = thunk_FUN_010303a8(puVar13);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar14 = thunk_FUN_010400dc();
    uVar15 = thunk_FUN_010303a8(PTR_DAT_023592d0);
    FUN_01c5e198(uVar14,uVar22,uVar15,0);
    goto LAB_01d855c4;
  }
  if (*(long *)(lVar6 + 0x18) != 0) {
    if (unaff_w26 == 0) {
      if (unaff_x28 == 0) goto LAB_01d85298;
      if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_01d8529c;
    }
    else if (*(int *)(*(long *)PTR_DAT_02358d88 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if (unaff_x23 == (long *)0x0) goto LAB_01d85298;
    plVar20 = (long *)(**(code **)(*unaff_x23 + 0x178))();
    goto LAB_01d84848;
  }
  uVar7 = FUN_01cc6c94(0,0,0);
  if ((uVar7 & 1) != 0) goto LAB_01d85298;
LAB_01d849f0:
  if ((unaff_w25 & 0xfff300) == 0) {
    uVar22 = (**(code **)(*unaff_x24 + 0x2c8))();
    thunk_FUN_010303a8(PTR_DAT_02358da0);
    uVar14 = thunk_FUN_010400dc();
    FUN_01d69de8(uVar14,uVar22);
    goto LAB_01d855c4;
  }
  uVar2 = unaff_w25 & 0x2000;
  uVar16 = unaff_w25 >> 0xc & 1;
  if (uVar16 != 0 || uVar2 != 0) {
    puVar13 = PTR_DAT_023592b8;
    uVar5 = uVar2;
    if ((unaff_w25 >> 0xc & 1) == 0) {
      puVar13 = PTR_DAT_02359260;
      uVar5 = unaff_w25 >> 8 & 1;
    }
    if (uVar5 != 0) goto LAB_01d85494;
  }
  if ((unaff_w25 >> 8 & 1) == 0) {
    plVar20 = (long *)0x0;
    plVar10 = (long *)0x0;
  }
  else {
    uVar22 = (**(code **)(*unaff_x24 + 0x698))();
    lVar6 = thunk_FUN_0103ffe0(uVar22,*(undefined8 *)PTR_DAT_02353e90);
    puVar3 = PTR_DAT_0234c5a8;
    puVar13 = PTR_DAT_0234bce0;
    if (lVar6 == 0) goto LAB_01d85298;
    if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
      plVar20 = (long *)0x0;
    }
    else {
      lVar8 = 0;
      uVar7 = 0;
      uVar17 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      plVar10 = (long *)0x0;
      do {
        if (uVar17 <= uVar7) goto LAB_01d8529c;
        plVar12 = *(long **)(lVar6 + 0x20 + uVar7 * 8);
        uVar22 = FUN_00fdc388(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
        if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
          thunk_FUN_01022c14(*(long *)puVar13);
        }
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_02351e10)) goto LAB_01d852a0;
        }
        uVar17 = FUN_01d7f588(plVar12,unaff_w25,3,uVar22);
        plVar20 = plVar10;
        if (((uVar17 & 1) != 0) &&
           (uVar17 = FUN_01cc86b0(plVar10,0,0), plVar20 = plVar12, (uVar17 & 1) == 0)) {
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
            FUN_017d2874(lVar8,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)PTR_DAT_02359230);
            if (lVar8 == 0) goto LAB_01d85298;
            lVar23 = *(long *)(lVar8 + 0x10);
            lVar9 = *(long *)PTR_DAT_02352648;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_01d85298;
            uVar5 = *(uint *)(lVar8 + 0x18);
            if (uVar5 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar5 + 1;
              plVar20 = (long *)(lVar23 + (long)(int)uVar5 * 8 + 0x20);
              *plVar20 = (long)plVar10;
              thunk_FUN_0106e12c(plVar20,plVar10);
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
            plVar20 = plVar10;
          }
          else {
            FUN_017d3030(lVar8,plVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            plVar20 = plVar10;
          }
        }
        uVar17 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
        plVar10 = plVar20;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
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
  uVar5 = FUN_01cc86b0(plVar20,0,0);
  if ((uVar5 & uVar16) != 0 || (unaff_w25 >> 0xd & 1) != 0) {
    uVar22 = (**(code **)(*unaff_x24 + 0x698))
                       (unaff_x24,unaff_x22,0x10,unaff_w25,*(undefined8 *)(*unaff_x24 + 0x6a0));
    lVar6 = thunk_FUN_0103ffe0(uVar22,*(undefined8 *)PTR_DAT_02353e98);
    puVar3 = PTR_DAT_0234c5a8;
    puVar13 = PTR_DAT_0234bce0;
    if (lVar6 == 0) goto LAB_01d85298;
    uVar16 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar16) {
      uVar5 = 0;
      lVar8 = 0;
      plVar21 = plVar20;
      do {
        if (uVar16 <= uVar5) goto LAB_01d8529c;
        plVar20 = *(long **)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar20 == (long *)0x0) goto LAB_01d85298;
        lVar23 = *plVar20;
        if (uVar2 == 0) {
          pcVar18 = *(code **)(lVar23 + 0x278);
          uVar22 = *(undefined8 *)(lVar23 + 0x280);
        }
        else {
          pcVar18 = *(code **)(lVar23 + 0x298);
          uVar22 = *(undefined8 *)(lVar23 + 0x2a0);
        }
        plVar12 = (long *)(*pcVar18)(plVar20,1,uVar22);
        uVar7 = FUN_01cc86b0(plVar12,0,0);
        plVar20 = plVar21;
        if ((uVar7 & 1) == 0) {
          uVar22 = FUN_00fdc388(*(undefined8 *)puVar3,in_stack_00000048._4_4_);
          if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
            thunk_FUN_01022c14(*(long *)puVar13);
          }
          if (plVar12 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_02351e10)) {
LAB_01d852a0:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc8d0(plVar12);
            }
          }
          uVar7 = FUN_01d7f588(plVar12,unaff_w25,3,uVar22);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = FUN_01cc86b0(plVar21,0,0), plVar20 = plVar12, (uVar7 & 1) == 0)) {
            if (lVar8 == 0) {
              lVar8 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
              FUN_017d2874(lVar8,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)PTR_DAT_02359230);
              if (lVar8 == 0) goto LAB_01d85298;
              lVar23 = *(long *)(lVar8 + 0x10);
              lVar9 = *(long *)PTR_DAT_02352648;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar23 == 0) goto LAB_01d85298;
              uVar16 = *(uint *)(lVar8 + 0x18);
              if (uVar16 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar16 + 1;
                plVar20 = (long *)(lVar23 + (long)(int)uVar16 * 8 + 0x20);
                *plVar20 = (long)plVar21;
                thunk_FUN_0106e12c(plVar20,plVar21);
              }
              else {
                FUN_017d3030(lVar8,plVar21,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar23 = *(long *)(lVar8 + 0x10);
            lVar9 = *(long *)PTR_DAT_02352648;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar23 == 0) goto LAB_01d85298;
            uVar16 = *(uint *)(lVar8 + 0x18);
            if (uVar16 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar16 + 1;
              plVar20 = (long *)(lVar23 + (long)(int)uVar16 * 8 + 0x20);
              *plVar20 = (long)plVar12;
              thunk_FUN_0106e12c(plVar20,plVar12);
              plVar20 = plVar21;
            }
            else {
              FUN_017d3030(lVar8,plVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              plVar20 = plVar21;
            }
          }
        }
        uVar16 = *(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
        plVar21 = plVar20;
      } while ((int)uVar5 < (int)uVar16);
      if (lVar8 != 0) {
        plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,*(undefined4 *)(lVar8 + 0x18)
                                      );
        FUN_017d34e4(lVar8,plVar10,*(undefined8 *)PTR_DAT_02359228);
      }
    }
  }
  uVar7 = FUN_01cc8674(plVar20,0,0);
  if ((uVar7 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar10 == (long *)0x0)) {
      if ((plVar20 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar20 + 0x398))(plVar20,*(undefined8 *)(*plVar20 + 0x3a0)),
         lVar6 == 0)) goto LAB_01d85298;
      if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar6 + 0x18) == 0)) {
        uVar22 = (**(code **)(*plVar20 + 0x328))
                           (plVar20,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,
                            unaff_x27,*(undefined8 *)(*plVar20 + 0x330));
        return uVar22;
      }
    }
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
      if (plVar10 == (long *)0x0) goto LAB_01d85298;
      if ((plVar20 != (long *)0x0) &&
         (lVar6 = thunk_FUN_0103ffe0(plVar20,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
        uVar22 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar22,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar10[4] = (long)plVar20;
      thunk_FUN_0106e12c(plVar10 + 4,plVar20);
    }
    if (in_stack_00000058 == 0) {
      lVar8 = *(long *)PTR_DAT_023508c0;
      lVar6 = *(long *)(lVar8 + 0x38);
      if (lVar6 == 0) {
        FUN_0103c2a0(lVar8);
        lVar6 = *(long *)(lVar8 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      in_stack_00000058 = **(long **)(lVar6 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    plVar20 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                (unaff_x23,unaff_w25,plVar10,&stack0x00000058,in_stack_00000020,
                                 unaff_x27,in_stack_00000038,&stack0x00000050);
    uVar7 = FUN_01cc8210(plVar20,0,0);
    if ((uVar7 & 1) == 0) {
      if (plVar20 != (long *)0x0) {
        lVar6 = *plVar20;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
        if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234ebc0))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar20);
        }
        uVar22 = (**(code **)(lVar6 + 0x328))
                           (plVar20,in_stack_00000040,unaff_w25,unaff_x23,in_stack_00000058,
                            unaff_x27,*(undefined8 *)(lVar6 + 0x330));
        if (in_stack_00000050 != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_01d85298;
          (**(code **)(*unaff_x23 + 0x1a8))
                    (unaff_x23,&stack0x00000058,in_stack_00000050,
                     *(undefined8 *)(*unaff_x23 + 0x1b0));
        }
        return uVar22;
      }
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  uVar22 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
  thunk_FUN_010303a8(PTR_DAT_0234bcf0);
  uVar14 = thunk_FUN_010400dc();
  FUN_01d4c060(uVar14,uVar22,unaff_x22,0);
LAB_01d855c4:
  uVar22 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar14,uVar22);
}


