/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_69
ENTRY_POINT: 01fa361c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__655_69(ulong param_1)

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
  
  lVar8 = in_stack_000000c0;
  if ((param_1 & 1) != 0) {
    uVar13 = thunk_FUN_01279b34(PTR_DAT_027c20f8);
    thunk_FUN_01279b34(PTR_DAT_027b4020);
    uVar15 = thunk_FUN_0124bba8();
    FUN_01f68e18(uVar15,uVar13,0);
    goto LAB_01fa45d8;
  }
  puVar14 = PTR_DAT_027c2100;
  if ((unaff_w19 & 0xff00) == 0) goto FUN_01fa44a8;
  uVar17 = 0x1c;
  if ((unaff_w19 & 0x200) != 0) {
    uVar17 = 0x14;
  }
  if ((unaff_w19 & 0xff) != 0) {
    uVar17 = 0;
  }
  if (in_stack_000000c0 == 0) {
LAB_01fa367c:
    if (unaff_x28 == 0) {
      iStack000000000000004c = 0;
    }
    else {
      iStack000000000000004c = *(int *)(unaff_x28 + 0x18);
    }
    if (unaff_x23 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      unaff_x23 = (long *)FUN_01f824c8(0);
    }
    if ((unaff_w19 >> 9 & 1) != 0) {
      puVar14 = PTR_DAT_027c2118;
      if ((unaff_w19 & 0x3d00) == 0) {
        uVar13 = FUN_01f90180();
        return uVar13;
      }
      goto FUN_01fa44a8;
    }
    uVar18 = uVar17 | unaff_w19;
    if ((unaff_w19 & 0xc000) != 0) {
      uVar18 = uVar17 | unaff_w19 | 0x2000;
    }
    if (unaff_x22 == 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3df8);
      uVar13 = thunk_FUN_0124bba8();
      puVar14 = PTR_DAT_027b5cd8;
LAB_01fa4428:
      uVar15 = thunk_FUN_01279b34(puVar14);
      FUN_01e75914(uVar13,uVar15,0);
      uVar15 = thunk_FUN_01279b34(PTR_DAT_027c2128);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar13,uVar15);
    }
    if ((*(int *)(unaff_x22 + 0x10) == 0) || (uVar6 = FUN_01e68100(), (uVar6 & 1) != 0)) {
      lVar7 = FUN_01fa4624();
      unaff_x22 = *(long *)PTR_DAT_027c20d0;
      if (lVar7 != 0) {
        unaff_x22 = lVar7;
      }
    }
    if ((uVar18 >> 10 & 1) == 0 && (uVar18 & 0x800) == 0) {
LAB_01fa3a14:
      uVar17 = uVar18 & 0x2000;
      uVar19 = uVar18 >> 0xc & 1;
      if (uVar19 != 0 || uVar17 != 0) {
        puVar14 = PTR_DAT_027c2148;
        uVar5 = uVar17;
        if ((uVar18 >> 0xc & 1) == 0) {
          puVar14 = PTR_DAT_027c20f0;
          uVar5 = uVar18 >> 8 & 1;
        }
        if (uVar5 != 0) goto FUN_01fa44a8;
      }
      if ((uVar18 >> 8 & 1) == 0) {
        plVar24 = (long *)0x0;
        plVar10 = (long *)0x0;
      }
      else {
        uVar13 = (**(code **)(*unaff_x24 + 0x6a8))();
        lVar7 = thunk_FUN_0124baac(uVar13,*(undefined8 *)PTR_DAT_027bcec0);
        puVar2 = PTR_DAT_027b46c8;
        puVar14 = PTR_DAT_027b3ec0;
        if (lVar7 == 0) goto LAB_01fa42ac;
        if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
          plVar24 = (long *)0x0;
        }
        else {
          lVar26 = 0;
          uVar6 = 0;
          uVar20 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          plVar10 = (long *)0x0;
          do {
            if (uVar20 <= uVar6) goto LAB_01fa42b0;
            plVar12 = *(long **)(lVar7 + 0x20 + uVar6 * 8);
            uVar13 = FUN_01230af8(*(undefined8 *)puVar2,iStack000000000000004c);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)puVar14);
            }
            if (plVar12 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_027bb590 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_027bb590)) goto LAB_01fa42b4;
            }
            uVar20 = FUN_01f9e620(plVar12,uVar18,3,uVar13);
            plVar24 = plVar10;
            if (((uVar20 & 1) != 0) &&
               (uVar20 = FUN_01ee57ec(plVar10,0,0), plVar24 = plVar12, (uVar20 & 1) == 0)) {
              if (lVar26 == 0) {
                lVar26 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bb6b0);
                FUN_01953820(lVar26,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_027c20c0);
                if (lVar26 == 0) goto LAB_01fa42ac;
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_027bb698;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_01fa42ac;
                uVar5 = *(uint *)(lVar26 + 0x18);
                if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                  *plVar24 = (long)plVar10;
                  thunk_FUN_01286abc(plVar24,plVar10);
                }
                else {
                  FUN_01953fdc(lVar26,plVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar9 = *(long *)(lVar26 + 0x10);
              lVar22 = *(long *)PTR_DAT_027bb698;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_01fa42ac;
              uVar5 = *(uint *)(lVar26 + 0x18);
              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20);
                *puVar11 = plVar12;
                thunk_FUN_01286abc(puVar11,plVar12);
                plVar24 = plVar10;
              }
              else {
                FUN_01953fdc(lVar26,plVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                plVar24 = plVar10;
              }
            }
            uVar20 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar6 = uVar6 + 1;
            plVar10 = plVar24;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          if (lVar26 != 0) {
            plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027bcec0,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_01954490(lVar26,plVar10,*(undefined8 *)PTR_DAT_027c20b8);
            goto LAB_01fa3d0c;
          }
        }
        plVar10 = (long *)0x0;
      }
LAB_01fa3d0c:
      uVar5 = FUN_01ee57ec(plVar24,0,0);
      if ((uVar5 & uVar19) != 0 || (uVar18 >> 0xd & 1) != 0) {
        uVar13 = (**(code **)(*unaff_x24 + 0x6a8))
                           (unaff_x24,unaff_x22,0x10,uVar18,*(undefined8 *)(*unaff_x24 + 0x6b0));
        lVar7 = thunk_FUN_0124baac(uVar13,*(undefined8 *)PTR_DAT_027bcec8);
        puVar2 = PTR_DAT_027b46c8;
        puVar14 = PTR_DAT_027b3ec0;
        if (lVar7 == 0) goto LAB_01fa42ac;
        uVar19 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar19) {
          uVar5 = 0;
          lVar26 = 0;
          plVar25 = plVar24;
          do {
            if (uVar19 <= uVar5) goto LAB_01fa42b0;
            plVar24 = *(long **)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
            if (plVar24 == (long *)0x0) goto LAB_01fa42ac;
            lVar9 = *plVar24;
            if (uVar17 == 0) {
              pcVar21 = *(code **)(lVar9 + 0x268);
              uVar13 = *(undefined8 *)(lVar9 + 0x270);
            }
            else {
              pcVar21 = *(code **)(lVar9 + 0x278);
              uVar13 = *(undefined8 *)(lVar9 + 0x280);
            }
            plVar12 = (long *)(*pcVar21)(plVar24,1,uVar13);
            uVar6 = FUN_01ee57ec(plVar12,0,0);
            plVar24 = plVar25;
            if ((uVar6 & 1) == 0) {
              uVar13 = FUN_01230af8(*(undefined8 *)puVar2,iStack000000000000004c);
              if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                thunk_FUN_01220628(*(long *)puVar14);
              }
              if (plVar12 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027bb590 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_027bb590)) {
LAB_01fa42b4:
                    /* WARNING: Subroutine does not return */
                  FUN_01230f60(plVar12);
                }
              }
              uVar6 = FUN_01f9e620(plVar12,uVar18,3,uVar13);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = FUN_01ee57ec(plVar25,0,0), plVar24 = plVar12, (uVar6 & 1) == 0)) {
                if (lVar26 == 0) {
                  lVar26 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bb6b0);
                  FUN_01953820(lVar26,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_027c20c0)
                  ;
                  if (lVar26 == 0) goto LAB_01fa42ac;
                  lVar9 = *(long *)(lVar26 + 0x10);
                  lVar22 = *(long *)PTR_DAT_027bb698;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar9 == 0) goto LAB_01fa42ac;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar24 = (long)plVar25;
                    thunk_FUN_01286abc(plVar24,plVar25);
                  }
                  else {
                    FUN_01953fdc(lVar26,plVar25,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar9 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_027bb698;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_01fa42ac;
                uVar19 = *(uint *)(lVar26 + 0x18);
                if (uVar19 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                  plVar24 = (long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
                  *plVar24 = (long)plVar12;
                  thunk_FUN_01286abc(plVar24,plVar12);
                  plVar24 = plVar25;
                }
                else {
                  FUN_01953fdc(lVar26,plVar12,
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
            plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027bcec0,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_01954490(lVar26,plVar10,*(undefined8 *)PTR_DAT_027c20b8);
          }
        }
      }
      uVar6 = FUN_01ee57b0(plVar24,0,0);
      if ((uVar6 & 1) != 0) {
        if ((iStack000000000000004c == 0) && (plVar10 == (long *)0x0)) {
          if ((plVar24 == (long *)0x0) ||
             (lVar7 = (**(code **)(*plVar24 + 0x378))(plVar24,*(undefined8 *)(*plVar24 + 0x380)),
             lVar7 == 0)) goto LAB_01fa42ac;
          if (((uVar18 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
            uVar13 = (**(code **)(*plVar24 + 0x308))
                               (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                                *(undefined8 *)(*plVar24 + 0x310));
            return uVar13;
          }
        }
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027bcec0,1);
          if (plVar10 == (long *)0x0) goto LAB_01fa42ac;
          if ((plVar24 != (long *)0x0) &&
             (lVar7 = thunk_FUN_0124baac(plVar24,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
            uVar13 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar13,0);
          }
          if ((int)plVar10[3] == 0) {
LAB_01fa42b0:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          plVar10[4] = (long)plVar24;
          thunk_FUN_01286abc(plVar10 + 4,plVar24);
        }
        if (in_stack_00000058 == 0) {
          lVar26 = *(long *)PTR_DAT_027b3840;
          lVar7 = *(long *)(lVar26 + 0x38);
          if (lVar7 == 0) {
            FUN_0122e7a4(lVar26);
            lVar7 = *(long *)(lVar26 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0122e748();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          lVar7 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0122e748();
          }
          in_stack_00000058 = **(long **)(lVar7 + 0xb8);
        }
        in_stack_00000050 = 0;
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        plVar24 = (long *)(**(code **)(*unaff_x23 + 0x188))
                                    (unaff_x23,uVar18,plVar10,&stack0x00000058,unaff_x25,unaff_x27,
                                     lVar8,&stack0x00000050);
        uVar6 = FUN_01ee539c(plVar24,0,0);
        if ((uVar6 & 1) == 0) {
          if (plVar24 == (long *)0x0) {
LAB_01fa42ac:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          lVar8 = *plVar24;
          bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_027bacc8
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(plVar24);
          }
          uVar13 = (**(code **)(lVar8 + 0x308))
                             (plVar24,unaff_x21,uVar18,unaff_x23,in_stack_00000058,unaff_x27,
                              *(undefined8 *)(lVar8 + 0x310));
          if (in_stack_00000050 != 0) {
            if (unaff_x23 == (long *)0x0) goto LAB_01fa42ac;
            (**(code **)(*unaff_x23 + 0x1a8))
                      (unaff_x23,&stack0x00000058,in_stack_00000050,
                       *(undefined8 *)(*unaff_x23 + 0x1b0));
          }
          return uVar13;
        }
      }
      uVar13 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
      thunk_FUN_01279b34(PTR_DAT_027b3ed0);
      uVar15 = thunk_FUN_0124bba8();
      FUN_01f6b07c(uVar15,uVar13,unaff_x22,0);
      goto LAB_01fa45d8;
    }
    uVar17 = uVar18 & 0x400;
    if (uVar17 == 0) {
      if (unaff_x28 == 0) {
        thunk_FUN_01279b34(PTR_DAT_027b3df8);
        uVar13 = thunk_FUN_0124bba8();
        puVar14 = PTR_DAT_027c2120;
        goto LAB_01fa4428;
      }
      puVar14 = PTR_DAT_027c2138;
      if ((uVar18 >> 0xc & 1) == 0) {
        uVar19 = uVar18 >> 8;
        puVar14 = PTR_DAT_027c20e0;
        goto joined_r0x01fa3790;
      }
    }
    else {
      puVar14 = PTR_DAT_027c2130;
      if ((uVar18 & 0x800) == 0) {
        uVar19 = uVar18 >> 0xd;
        puVar14 = PTR_DAT_027c2140;
joined_r0x01fa3790:
        if ((uVar19 & 1) == 0) {
          uVar13 = (**(code **)(*unaff_x24 + 0x6a8))();
          lVar7 = thunk_FUN_0124baac(uVar13,*(undefined8 *)PTR_DAT_027bb780);
          puVar14 = PTR_DAT_027c1c00;
          if (lVar7 == 0) goto LAB_01fa42ac;
          if ((int)*(long *)(lVar7 + 0x18) == 1) {
            plVar24 = *(long **)(lVar7 + 0x20);
LAB_01fa385c:
            uVar6 = FUN_01ee3bf4(plVar24,0,0);
            if ((uVar6 & 1) != 0) {
              if ((plVar24 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240))
                 , lVar8 == 0)) goto LAB_01fa42ac;
              uVar6 = FUN_01f80ec8(lVar8,0);
              if ((uVar6 & 1) == 0) {
                lVar8 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240));
                uVar13 = *(undefined8 *)PTR_DAT_027b3f30;
                if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)PTR_DAT_027b32e0);
                }
                lVar7 = FUN_01f7d8a0(uVar13,0);
                if (lVar8 == lVar7) goto LAB_01fa38ec;
              }
              else {
LAB_01fa38ec:
                uVar19 = iStack000000000000004c - (uint)(uVar17 == 0);
                if (0 < (int)uVar19) {
                  lVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,uVar19);
                  puVar14 = PTR_DAT_027ba7b0;
                  if (unaff_x28 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(uint *)(unaff_x28 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca8();
                      }
                      lVar26 = (long)(int)uVar18;
                      lVar7 = *(long *)(unaff_x28 + lVar26 * 8 + 0x20);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca0();
                      }
                      uVar13 = *(undefined8 *)puVar14;
                      lVar9 = thunk_FUN_0124baac(lVar7,uVar13);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(lVar7,uVar13);
                      }
                      lVar9 = *(long *)puVar14;
                      plVar10 = (long *)thunk_FUN_0124baac(lVar7,lVar9);
                      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(lVar7,lVar9);
                      }
                      lVar7 = *plVar10;
                      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar6 != 0) {
                        piVar23 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == lVar9) {
                            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar23 + 7) * 0x10 + 0x138);
                            goto LAB_01fa39c4;
                          }
                          uVar6 = uVar6 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0122ea3c(plVar10,lVar9,7);
LAB_01fa39c4:
                      uVar4 = (*(code *)*puVar11)(plVar10,0,puVar11[1]);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca0();
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca8();
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(lVar8 + lVar26 * 4 + 0x20) = uVar4;
                      if (uVar18 == uVar19) {
                        plVar24 = (long *)(**(code **)(*plVar24 + 0x2a8))
                                                    (plVar24,unaff_x21,
                                                     *(undefined8 *)(*plVar24 + 0x2b0));
                        if (plVar24 == (long *)0x0) {
                          if (uVar17 != 0) goto LAB_01fa42ac;
                        }
                        else {
                          bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                          if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
                             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
                              *(long *)PTR_DAT_027b3f80)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01230f60();
                          }
                          if (uVar17 != 0) {
                            uVar13 = thunk_FUN_0122b744(plVar24,lVar8,0);
                            return uVar13;
                          }
                        }
                        if (in_stack_00000058 == 0) goto LAB_01fa42ac;
                        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar19) goto LAB_01fa42b0;
                        if (plVar24 != (long *)0x0) {
                          thunk_FUN_0122b918(plVar24,*(undefined8 *)
                                                      (in_stack_00000058 + (long)(int)uVar19 * 8 +
                                                      0x20),lVar8,0);
                          return 0;
                        }
                        goto LAB_01fa42ac;
                      }
                      unaff_x28 = in_stack_00000058;
                    } while (in_stack_00000058 != 0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01230ca0();
                }
              }
              if (uVar17 == 0) {
                puVar14 = PTR_DAT_027c2150;
                if (iStack000000000000004c == 1) {
                  if (unaff_x28 != 0) {
                    if (*(int *)(unaff_x28 + 0x18) != 0) {
                      (**(code **)(*plVar24 + 0x2c8))
                                (plVar24,unaff_x21,*(undefined8 *)(unaff_x28 + 0x20),uVar18,
                                 unaff_x23);
                      return 0;
                    }
                    goto LAB_01fa42b0;
                  }
                  goto LAB_01fa42ac;
                }
              }
              else {
                puVar14 = PTR_DAT_027c2158;
                if (iStack000000000000004c == 0) {
                  uVar13 = (**(code **)(*plVar24 + 0x2a8))
                                     (plVar24,unaff_x21,*(undefined8 *)(*plVar24 + 0x2b0));
                  return uVar13;
                }
              }
              goto FUN_01fa44a8;
            }
          }
          else {
            if (*(long *)(lVar7 + 0x18) != 0) {
              if (uVar17 == 0) {
                if (unaff_x28 == 0) goto LAB_01fa42ac;
                if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_01fa42b0;
                puVar11 = (undefined8 *)(unaff_x28 + 0x20);
              }
              else {
                lVar26 = *(long *)PTR_DAT_027c1c00;
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                  lVar26 = *(long *)puVar14;
                }
                puVar11 = *(undefined8 **)(lVar26 + 0xb8);
              }
              if (unaff_x23 == (long *)0x0) goto LAB_01fa42ac;
              plVar24 = (long *)(**(code **)(*unaff_x23 + 0x178))(unaff_x23,uVar18,lVar7,*puVar11);
              goto LAB_01fa385c;
            }
            uVar6 = FUN_01ee3bf4(0,0,0);
            if ((uVar6 & 1) != 0) goto LAB_01fa42ac;
          }
          if ((uVar18 & 0xfff300) == 0) {
            uVar13 = (**(code **)(*unaff_x24 + 0x2c8))();
            thunk_FUN_01279b34(PTR_DAT_027c1c18);
            uVar15 = thunk_FUN_0124bba8();
            FUN_01f88ca4(uVar15,uVar13,unaff_x22,0);
            goto LAB_01fa45d8;
          }
          goto LAB_01fa3a14;
        }
      }
    }
FUN_01fa44a8:
    uVar13 = thunk_FUN_01279b34(puVar14);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar15 = thunk_FUN_0124bba8();
    puVar14 = PTR_DAT_027c2160;
  }
  else {
    puVar14 = PTR_DAT_027c20e8;
    if (unaff_x28 == 0) {
      if (*(long *)(in_stack_000000c0 + 0x18) == 0) goto LAB_01fa365c;
    }
    else if ((int)*(long *)(in_stack_000000c0 + 0x18) <= *(int *)(unaff_x28 + 0x18)) {
LAB_01fa365c:
      iVar3 = FUN_01483360(in_stack_000000c0,0,*(undefined8 *)PTR_DAT_027c20b0);
      puVar14 = PTR_DAT_027c2108;
      if (iVar3 == -1) goto LAB_01fa367c;
    }
    uVar13 = thunk_FUN_01279b34(puVar14);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar15 = thunk_FUN_0124bba8();
    puVar14 = PTR_DAT_027c2110;
  }
  uVar16 = thunk_FUN_01279b34(puVar14);
  FUN_01e7598c(uVar15,uVar13,uVar16,0);
LAB_01fa45d8:
  uVar13 = thunk_FUN_01279b34(PTR_DAT_027c2128);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar15,uVar13);
}


