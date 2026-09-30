/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 01d845f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
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
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  int *piVar23;
  uint unaff_w19;
  long *plVar24;
  long *plVar25;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  long lVar26;
  long unaff_x28;
  int iStack000000000000004c;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_000000c0;
  undefined *puVar14;
  
  uVar6 = (**(code **)(param_1 + 0x388))();
  lVar8 = in_stack_000000c0;
  if ((uVar6 & 1) != 0) {
    uVar13 = thunk_FUN_010303a8(PTR_DAT_02359268);
    thunk_FUN_010303a8(PTR_DAT_0234c170);
    uVar15 = thunk_FUN_010400dc();
    FUN_01d4a564(uVar15,uVar13,0);
    goto LAB_01d855c4;
  }
  puVar14 = PTR_DAT_02359270;
  if ((unaff_w19 & 0xff00) == 0) goto LAB_01d85494;
  uVar17 = 0x1c;
  if ((unaff_w19 & 0x200) != 0) {
    uVar17 = 0x14;
  }
  if ((unaff_w19 & 0xff) != 0) {
    uVar17 = 0;
  }
  if (in_stack_000000c0 == 0) {
LAB_01d84668:
    if (unaff_x28 == 0) {
      iStack000000000000004c = 0;
    }
    else {
      iStack000000000000004c = *(int *)(unaff_x28 + 0x18);
    }
    if (unaff_x23 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      unaff_x23 = (long *)FUN_01d634a8(0);
    }
    if ((unaff_w19 >> 9 & 1) != 0) {
      puVar14 = PTR_DAT_02359288;
      if ((unaff_w19 & 0x3d00) == 0) {
        uVar13 = FUN_01d71314();
        return uVar13;
      }
      goto LAB_01d85494;
    }
    uVar18 = uVar17 | unaff_w19;
    if ((unaff_w19 & 0xc000) != 0) {
      uVar18 = uVar17 | unaff_w19 | 0x2000;
    }
    if (unaff_x22 == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bbe8);
      uVar13 = thunk_FUN_010400dc();
      puVar14 = PTR_DAT_0234dd50;
LAB_01d85414:
      uVar15 = thunk_FUN_010303a8(puVar14);
      FUN_01c5e120(uVar13,uVar15,0);
      uVar15 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar13,uVar15);
    }
    if ((*(int *)(unaff_x22 + 0x10) == 0) || (uVar6 = FUN_01c50924(), (uVar6 & 1) != 0)) {
      lVar7 = OVRPlugin__GetTimeInSeconds();
      unaff_x22 = *(long *)PTR_DAT_02359240;
      if (lVar7 != 0) {
        unaff_x22 = lVar7;
      }
    }
    if ((uVar18 >> 10 & 1) == 0 && (uVar18 & 0x800) == 0) {
LAB_01d84a00:
      uVar17 = uVar18 & 0x2000;
      uVar19 = uVar18 >> 0xc & 1;
      if (uVar19 != 0 || uVar17 != 0) {
        puVar14 = PTR_DAT_023592b8;
        uVar5 = uVar17;
        if ((uVar18 >> 0xc & 1) == 0) {
          puVar14 = PTR_DAT_02359260;
          uVar5 = uVar18 >> 8 & 1;
        }
        if (uVar5 != 0) goto LAB_01d85494;
      }
      if ((uVar18 >> 8 & 1) == 0) {
        plVar24 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      else {
        uVar13 = (**(code **)(*unaff_x24 + 0x698))();
        lVar7 = thunk_FUN_0103ffe0(uVar13,*(undefined8 *)PTR_DAT_02353e90);
        puVar2 = PTR_DAT_0234c5a8;
        puVar14 = PTR_DAT_0234bce0;
        if (lVar7 == 0) goto LAB_01d85298;
        if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
          plVar24 = (long *)0x0;
        }
        else {
          lVar26 = 0;
          uVar6 = 0;
          uVar20 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          plVar10 = (long *)0x0;
          do {
            if (uVar20 <= uVar6) goto LAB_01d8529c;
            plVar12 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
            uVar13 = FUN_00fdc388(*(undefined8 *)puVar2,iStack000000000000004c);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01022c14(*(long *)puVar14);
            }
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_02351e10)) goto LAB_01d852a0;
            }
            uVar20 = FUN_01d7f588(plVar12,uVar18,3,uVar13);
            plVar24 = plVar10;
            if (((uVar20 & 1) != 0) &&
               (uVar20 = FUN_01cc86b0(plVar10,0,0), plVar24 = plVar12, (uVar20 & 1) == 0)) {
              if (lVar26 == 0) {
                lVar26 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
                FUN_017d2874(lVar26,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_02359230);
                if (lVar26 == 0) goto LAB_01d85298;
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_02352648;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_01d85298;
                uVar5 = *(uint *)(lVar26 + 0x18);
                if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                  *plVar24 = (long)plVar10;
                  thunk_FUN_0106e12c(plVar24,plVar10);
                }
                else {
                  FUN_017d3030(lVar26,plVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar9 = *(long *)(lVar26 + 0x10);
              lVar22 = *(long *)PTR_DAT_02352648;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_01d85298;
              uVar5 = *(uint *)(lVar26 + 0x18);
              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                *puVar11 = plVar12;
                thunk_FUN_0106e12c(puVar11,plVar12);
                plVar24 = plVar10;
              }
              else {
                FUN_017d3030(lVar26,plVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                plVar24 = plVar10;
              }
            }
            uVar20 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar6 = uVar6 + 1;
            plVar10 = plVar24;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          if (lVar26 != 0) {
            plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_017d34e4(lVar26,plVar10,*(undefined8 *)PTR_DAT_02359228);
            goto LAB_01d84cf8;
          }
        }
        plVar10 = (long *)0x0;
      }
LAB_01d84cf8:
      uVar5 = FUN_01cc86b0(plVar24,0,0);
      if ((uVar5 & uVar19) != 0 || (uVar18 >> 0xd & 1) != 0) {
        uVar13 = (**(code **)(*unaff_x24 + 0x698))
                           (unaff_x24,unaff_x22,0x10,uVar18,*(undefined8 *)(*unaff_x24 + 0x6a0));
        lVar7 = thunk_FUN_0103ffe0(uVar13,*(undefined8 *)PTR_DAT_02353e98);
        puVar2 = PTR_DAT_0234c5a8;
        puVar14 = PTR_DAT_0234bce0;
        if (lVar7 == 0) goto LAB_01d85298;
        uVar19 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar19) {
          uVar5 = 0;
          lVar26 = 0;
          plVar25 = plVar24;
          do {
            if (uVar19 <= uVar5) goto LAB_01d8529c;
            plVar24 = *(long **)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
            if (plVar24 == (long *)0x0) goto LAB_01d85298;
            lVar9 = *plVar24;
            if (uVar17 == 0) {
              pcVar21 = *(code **)(lVar9 + 0x278);
              uVar13 = *(undefined8 *)(lVar9 + 0x280);
            }
            else {
              pcVar21 = *(code **)(lVar9 + 0x298);
              uVar13 = *(undefined8 *)(lVar9 + 0x2a0);
            }
            plVar12 = (long *)(*pcVar21)(plVar24,1,uVar13);
            uVar6 = FUN_01cc86b0(plVar12,0,0);
            plVar24 = plVar25;
            if ((uVar6 & 1) == 0) {
              uVar13 = FUN_00fdc388(*(undefined8 *)puVar2,iStack000000000000004c);
              if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                thunk_FUN_01022c14(*(long *)puVar14);
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
              uVar6 = FUN_01d7f588(plVar12,uVar18,3,uVar13);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = FUN_01cc86b0(plVar25,0,0), plVar24 = plVar12, (uVar6 & 1) == 0)) {
                if (lVar26 == 0) {
                  lVar26 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
                  FUN_017d2874(lVar26,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_02359230)
                  ;
                  if (lVar26 == 0) goto LAB_01d85298;
                  lVar9 = *(long *)(lVar26 + 0x10);
                  lVar22 = *(long *)PTR_DAT_02352648;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar9 == 0) goto LAB_01d85298;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar24 = (long)plVar25;
                    thunk_FUN_0106e12c(plVar24,plVar25);
                  }
                  else {
                    FUN_017d3030(lVar26,plVar25,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_02352648;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_01d85298;
                uVar19 = *(uint *)(lVar26 + 0x18);
                if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                  *plVar24 = (long)plVar12;
                  thunk_FUN_0106e12c(plVar24,plVar12);
                  plVar24 = plVar25;
                }
                else {
                  FUN_017d3030(lVar26,plVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                  plVar24 = plVar25;
                }
              }
            }
            uVar19 = *(uint *)(lVar7 + 0x18);
            uVar5 = uVar5 + 1;
            plVar25 = plVar24;
          } while ((int)uVar5 < (int)uVar19);
          if (lVar26 != 0) {
            plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_017d34e4(lVar26,plVar10,*(undefined8 *)PTR_DAT_02359228);
          }
        }
      }
      uVar6 = FUN_01cc8674(plVar24,0,0);
      if ((uVar6 & 1) != 0) {
        if ((iStack000000000000004c == 0) && (plVar10 == (long *)0x0)) {
          if ((plVar24 == (long *)0x0) ||
             (lVar7 = (**(code **)(*plVar24 + 0x398))(plVar24,*(undefined8 *)(*plVar24 + 0x3a0)),
             lVar7 == 0)) goto LAB_01d85298;
          if (((uVar18 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
            uVar13 = (**(code **)(*plVar24 + 0x328))
                               (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                                *(undefined8 *)(*plVar24 + 0x330));
            return uVar13;
          }
        }
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
          if (plVar10 == (long *)0x0) goto LAB_01d85298;
          if ((plVar24 != (long *)0x0) &&
             (lVar7 = thunk_FUN_0103ffe0(plVar24,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
            uVar13 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar13,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          plVar10[4] = (long)plVar24;
          thunk_FUN_0106e12c(plVar10 + 4,plVar24);
        }
        if (in_stack_00000058 == 0) {
          lVar26 = *(long *)PTR_DAT_023508c0;
          lVar7 = *(long *)(lVar26 + 0x38);
          if (lVar7 == 0) {
            FUN_0103c2a0(lVar26);
            lVar7 = *(long *)(lVar26 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0103c244();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar7 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
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
        plVar24 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                    (unaff_x23,uVar18,plVar10,&stack0x00000058,unaff_x25,unaff_x27,
                                     lVar8,&stack0x00000050);
        uVar6 = FUN_01cc8210(plVar24,0,0);
        if ((uVar6 & 1) == 0) {
          if (plVar24 == (long *)0x0) {
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar8 = *plVar24;
          bVar1 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234ebc0
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(plVar24);
          }
          uVar13 = (**(code **)(lVar8 + 0x328))
                             (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                              *(undefined8 *)(lVar8 + 0x330));
          if (in_stack_00000050 != 0) {
            if (unaff_x23 == (long *)0x0) goto LAB_01d85298;
            (**(code **)(*unaff_x23 + 0x1a8))
                      (unaff_x23,&stack0x00000058,in_stack_00000050,
                       *(undefined8 *)(*unaff_x23 + 0x1b0));
          }
          return uVar13;
        }
      }
      uVar13 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
      thunk_FUN_010303a8(PTR_DAT_0234bcf0);
      uVar15 = thunk_FUN_010400dc();
      FUN_01d4c060(uVar15,uVar13,unaff_x22,0);
      goto LAB_01d855c4;
    }
    uVar17 = uVar18 & 0x400;
    if (uVar17 == 0) {
      if (unaff_x28 == 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bbe8);
        uVar13 = thunk_FUN_010400dc();
        puVar14 = PTR_DAT_02359290;
        goto LAB_01d85414;
      }
      puVar14 = PTR_DAT_023592a8;
      if ((uVar18 >> 0xc & 1) == 0) {
        uVar19 = uVar18 >> 8;
        puVar14 = PTR_DAT_02359250;
        goto joined_r0x01d8477c;
      }
    }
    else {
      puVar14 = PTR_DAT_023592a0;
      if ((uVar18 & 0x800) == 0) {
        uVar19 = uVar18 >> 0xd;
        puVar14 = PTR_DAT_023592b0;
joined_r0x01d8477c:
        if ((uVar19 & 1) == 0) {
          uVar13 = (**(code **)(*unaff_x24 + 0x698))();
          lVar7 = thunk_FUN_0103ffe0(uVar13,*(undefined8 *)PTR_DAT_02352730);
          puVar14 = PTR_DAT_02358d88;
          if (lVar7 == 0) goto LAB_01d85298;
          if ((int)*(long *)(lVar7 + 0x18) == 1) {
            plVar24 = *(long **)(lVar7 + 0x20);
LAB_01d84848:
            uVar6 = FUN_01cc6c94(plVar24,0,0);
            if ((uVar6 & 1) != 0) {
              if ((plVar24 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240))
                 , lVar8 == 0)) goto LAB_01d85298;
              uVar6 = FUN_01d61eb0(lVar8,0);
              if ((uVar6 & 1) == 0) {
                lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240));
                uVar13 = *(undefined8 *)PTR_DAT_0234bd80;
                if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
                  thunk_FUN_01022c14(*(long *)PTR_DAT_0234bc58);
                }
                lVar7 = FUN_01d5e86c(uVar13,0);
                if (lVar8 == lVar7) goto LAB_01d848d8;
              }
              else {
LAB_01d848d8:
                uVar19 = iStack000000000000004c - (uint)(uVar17 == 0);
                if (0 < (int)uVar19) {
                  lVar8 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234cba8,uVar19);
                  puVar14 = PTR_DAT_023517e0;
                  if (unaff_x28 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(uint *)(unaff_x28 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc53c();
                      }
                      lVar26 = (long)(int)uVar18;
                      lVar7 = *(long *)(unaff_x28 + lVar26 * 8 + 0x20);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc534();
                      }
                      uVar13 = *(undefined8 *)puVar14;
                      lVar9 = thunk_FUN_0103ffe0(lVar7,uVar13);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(lVar7,uVar13);
                      }
                      lVar9 = *(long *)puVar14;
                      plVar10 = (long *)thunk_FUN_0103ffe0(lVar7,lVar9);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(lVar7,lVar9);
                      }
                      lVar7 = *plVar10;
                      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar6 != 0) {
                        piVar23 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == lVar9) {
                            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar23 + 7) * 0x10 + 0x138);
                            goto LAB_01d849b0;
                          }
                          uVar6 = uVar6 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0103c348(plVar10,lVar9,7);
LAB_01d849b0:
                      uVar4 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc534();
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc53c();
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(lVar8 + lVar26 * 4 + 0x20) = uVar4;
                      if (uVar18 == uVar19) {
                        plVar24 = (long *)(**(code **)(*plVar24 + 0x2c8))
                                                    (plVar24,unaff_x21,
                                                     *(undefined8 *)(*plVar24 + 0x2d0));
                        if (plVar24 == (long *)0x0) {
                          if (uVar17 != 0) goto LAB_01d85298;
                        }
                        else {
                          bVar1 = *(byte *)(*(long *)PTR_DAT_0234bdf8 + 0x130);
                          if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
                             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
                              *(long *)PTR_DAT_0234bdf8)) {
                    /* WARNING: Subroutine does not return */
                            FUN_00fdc8d0();
                          }
                          if (uVar17 != 0) {
                            uVar13 = thunk_FUN_0105ce10(plVar24,lVar8,0);
                            return uVar13;
                          }
                        }
                        if (in_stack_00000058 == 0) goto LAB_01d85298;
                        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar19) goto LAB_01d8529c;
                        if (plVar24 != (long *)0x0) {
                          thunk_FUN_0105cfb0(plVar24,*(undefined8 *)
                                                      (in_stack_00000058 + (long)(int)uVar19 * 8 +
                                                      0x20),lVar8,0);
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
              if (uVar17 == 0) {
                puVar14 = PTR_DAT_023592c0;
                if (iStack000000000000004c == 1) {
                  if (unaff_x28 != 0) {
                    if (*(int *)(unaff_x28 + 0x18) != 0) {
                      (**(code **)(*plVar24 + 0x2e8))
                                (plVar24,unaff_x21,*(undefined8 *)(unaff_x28 + 0x20),uVar18,
                                 unaff_x23);
                      return 0;
                    }
                    goto LAB_01d8529c;
                  }
                  goto LAB_01d85298;
                }
              }
              else {
                puVar14 = PTR_DAT_023592c8;
                if (iStack000000000000004c == 0) {
                  uVar13 = (**(code **)(*plVar24 + 0x2c8))
                                     (plVar24,unaff_x21,*(undefined8 *)(*plVar24 + 0x2d0));
                  return uVar13;
                }
              }
              goto LAB_01d85494;
            }
          }
          else {
            if (*(long *)(lVar7 + 0x18) != 0) {
              if (uVar17 == 0) {
                if (unaff_x28 == 0) goto LAB_01d85298;
                if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_01d8529c;
                puVar11 = (undefined8 *)(unaff_x28 + 0x20);
              }
              else {
                lVar26 = *(long *)PTR_DAT_02358d88;
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  thunk_FUN_01022c14();
                  lVar26 = *(long *)puVar14;
                }
                puVar11 = *(undefined8 **)(lVar26 + 0xb8);
              }
              if (unaff_x23 == (long *)0x0) goto LAB_01d85298;
              plVar24 = (long *)(**(code **)(*unaff_x23 + 0x178))(unaff_x23,uVar18,lVar7,*puVar11);
              goto LAB_01d84848;
            }
            uVar6 = FUN_01cc6c94(0,0,0);
            if ((uVar6 & 1) != 0) goto LAB_01d85298;
          }
          if ((uVar18 & 0xfff300) == 0) {
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
LAB_01d85494:
    uVar13 = thunk_FUN_010303a8(puVar14);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar15 = thunk_FUN_010400dc();
    puVar14 = PTR_DAT_023592d0;
  }
  else {
    puVar14 = PTR_DAT_02359258;
    if (unaff_x28 == 0) {
      if (*(long *)(in_stack_000000c0 + 0x18) == 0) goto LAB_01d84648;
    }
    else if ((int)*(long *)(in_stack_000000c0 + 0x18) <= *(int *)(unaff_x28 + 0x18)) {
LAB_01d84648:
      iVar3 = FUN_0120568c(in_stack_000000c0,0,*(undefined8 *)PTR_DAT_02359220);
      puVar14 = PTR_DAT_02359278;
      if (iVar3 == -1) goto LAB_01d84668;
    }
    uVar13 = thunk_FUN_010303a8(puVar14);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar15 = thunk_FUN_010400dc();
    puVar14 = PTR_DAT_02359280;
  }
  uVar16 = thunk_FUN_010303a8(puVar14);
  FUN_01c5e198(uVar15,uVar13,uVar16,0);
LAB_01d855c4:
  uVar13 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar15,uVar13);
}


