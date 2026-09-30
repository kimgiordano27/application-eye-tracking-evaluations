/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_66
ENTRY_POINT: 01fa34d8
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


undefined8
OVRPlugin_<>c__<_cctor>b__655_66
          (ulong param_1,long *param_2,long param_3,uint param_4,long *param_5,undefined8 param_6,
          long param_7)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  int *piVar23;
  long *plVar24;
  long unaff_x20;
  long *plVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x27;
  long lVar26;
  long unaff_x28;
  int iStack000000000000004c;
  long in_stack_00000050;
  long lStack0000000000000058;
  long in_stack_000000c0;
  undefined *puVar15;
  
  lStack0000000000000058 = param_7;
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3840);
    thunk_FUN_01279b34(PTR_DAT_027c20b0);
    thunk_FUN_01279b34(PTR_DAT_027c1c00);
    thunk_FUN_01279b34(PTR_DAT_027bb780);
    thunk_FUN_01279b34(PTR_DAT_027ba7b0);
    thunk_FUN_01279b34(PTR_DAT_027b1ca8);
    thunk_FUN_01279b34(PTR_DAT_027bb698);
    thunk_FUN_01279b34(PTR_DAT_027c20b8);
    thunk_FUN_01279b34(PTR_DAT_027c20c0);
    thunk_FUN_01279b34(PTR_DAT_027c20c8);
    thunk_FUN_01279b34(PTR_DAT_027bb6b0);
    thunk_FUN_01279b34(PTR_DAT_027bcec0);
    thunk_FUN_01279b34(PTR_DAT_027bacc8);
    thunk_FUN_01279b34(PTR_DAT_027bcec8);
    thunk_FUN_01279b34(PTR_DAT_027b3f30);
    thunk_FUN_01279b34(PTR_DAT_027b3f80);
    thunk_FUN_01279b34(PTR_DAT_027bb590);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    thunk_FUN_01279b34(PTR_DAT_027b46c8);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027c20d0);
    thunk_FUN_01279b34(PTR_DAT_027c20d8);
    *(undefined1 *)(unaff_x20 + 0xf7c) = 1;
  }
  in_stack_00000050 = 0;
  uVar7 = (**(code **)(*param_2 + 0x388))(param_2,*(undefined8 *)(*param_2 + 0x390));
  lVar9 = in_stack_000000c0;
  if ((uVar7 & 1) != 0) {
    uVar14 = thunk_FUN_01279b34(PTR_DAT_027c20f8);
    thunk_FUN_01279b34(PTR_DAT_027b4020);
    uVar16 = thunk_FUN_0124bba8();
    FUN_01f68e18(uVar16,uVar14,0);
    goto LAB_01fa45d8;
  }
  puVar15 = PTR_DAT_027c2100;
  if ((param_4 & 0xff00) == 0) goto FUN_01fa44a8;
  uVar18 = 0x1c;
  if ((param_4 & 0x200) != 0) {
    uVar18 = 0x14;
  }
  if ((param_4 & 0xff) != 0) {
    uVar18 = 0;
  }
  if (in_stack_000000c0 == 0) {
LAB_01fa367c:
    if (unaff_x28 == 0) {
      iStack000000000000004c = 0;
    }
    else {
      iStack000000000000004c = *(int *)(unaff_x28 + 0x18);
    }
    if (param_5 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      param_5 = (long *)FUN_01f824c8(0);
    }
    uVar18 = uVar18 | param_4;
    if ((param_4 >> 9 & 1) != 0) {
      puVar15 = PTR_DAT_027c2118;
      if ((param_4 & 0x3d00) == 0) {
        uVar14 = FUN_01f90180(param_2,uVar18,param_5);
        return uVar14;
      }
      goto FUN_01fa44a8;
    }
    if ((param_4 & 0xc000) != 0) {
      uVar18 = uVar18 | 0x2000;
    }
    if (param_3 == 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3df8);
      uVar14 = thunk_FUN_0124bba8();
      puVar15 = PTR_DAT_027b5cd8;
LAB_01fa4428:
      uVar16 = thunk_FUN_01279b34(puVar15);
      FUN_01e75914(uVar14,uVar16,0);
      uVar16 = thunk_FUN_01279b34(PTR_DAT_027c2128);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar14,uVar16);
    }
    if ((*(int *)(param_3 + 0x10) == 0) ||
       (uVar7 = FUN_01e68100(param_3,*(undefined8 *)PTR_DAT_027c20d8,0), (uVar7 & 1) != 0)) {
      lVar8 = FUN_01fa4624(param_2);
      param_3 = *(long *)PTR_DAT_027c20d0;
      if (lVar8 != 0) {
        param_3 = lVar8;
      }
    }
    if ((uVar18 >> 10 & 1) == 0 && (uVar18 & 0x800) == 0) {
LAB_01fa3a14:
      uVar1 = uVar18 & 0x2000;
      uVar19 = uVar18 >> 0xc & 1;
      if (uVar19 != 0 || uVar1 != 0) {
        puVar15 = PTR_DAT_027c2148;
        uVar6 = uVar1;
        if ((uVar18 >> 0xc & 1) == 0) {
          puVar15 = PTR_DAT_027c20f0;
          uVar6 = uVar18 >> 8 & 1;
        }
        if (uVar6 != 0) goto FUN_01fa44a8;
      }
      if ((uVar18 >> 8 & 1) == 0) {
        plVar24 = (long *)0x0;
        plVar11 = (long *)0x0;
      }
      else {
        uVar14 = (**(code **)(*param_2 + 0x6a8))
                           (param_2,param_3,8,uVar18,*(undefined8 *)(*param_2 + 0x6b0));
        lVar8 = thunk_FUN_0124baac(uVar14,*(undefined8 *)PTR_DAT_027bcec0);
        puVar3 = PTR_DAT_027b46c8;
        puVar15 = PTR_DAT_027b3ec0;
        if (lVar8 == 0) goto LAB_01fa42ac;
        if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
          plVar24 = (long *)0x0;
        }
        else {
          lVar26 = 0;
          uVar7 = 0;
          uVar20 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          plVar11 = (long *)0x0;
          do {
            if (uVar20 <= uVar7) goto LAB_01fa42b0;
            plVar13 = *(long **)(lVar8 + 0x20 + uVar7 * 8);
            uVar14 = FUN_01230af8(*(undefined8 *)puVar3,iStack000000000000004c);
            if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)puVar15);
            }
            if (plVar13 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_027bb590 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_027bb590)) goto LAB_01fa42b4;
            }
            uVar20 = FUN_01f9e620(plVar13,uVar18,3,uVar14);
            plVar24 = plVar11;
            if (((uVar20 & 1) != 0) &&
               (uVar20 = FUN_01ee57ec(plVar11,0,0), plVar24 = plVar13, (uVar20 & 1) == 0)) {
              if (lVar26 == 0) {
                lVar26 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bb6b0);
                FUN_01953820(lVar26,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_027c20c0);
                if (lVar26 == 0) goto LAB_01fa42ac;
                lVar10 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_027bb698;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_01fa42ac;
                uVar6 = *(uint *)(lVar26 + 0x18);
                if (uVar6 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar6 + 1;
                  plVar24 = (long *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
                  *plVar24 = (long)plVar11;
                  thunk_FUN_01286abc(plVar24,plVar11);
                }
                else {
                  FUN_01953fdc(lVar26,plVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar10 = *(long *)(lVar26 + 0x10);
              lVar22 = *(long *)PTR_DAT_027bb698;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar10 == 0) goto LAB_01fa42ac;
              uVar6 = *(uint *)(lVar26 + 0x18);
              if (uVar6 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar26 + 0x18) = uVar6 + 1;
                puVar12 = (undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
                *puVar12 = plVar13;
                thunk_FUN_01286abc(puVar12,plVar13);
                plVar24 = plVar11;
              }
              else {
                FUN_01953fdc(lVar26,plVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                plVar24 = plVar11;
              }
            }
            uVar20 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar7 = uVar7 + 1;
            plVar11 = plVar24;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
          if (lVar26 != 0) {
            plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027bcec0,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_01954490(lVar26,plVar11,*(undefined8 *)PTR_DAT_027c20b8);
            goto LAB_01fa3d0c;
          }
        }
        plVar11 = (long *)0x0;
      }
LAB_01fa3d0c:
      uVar6 = FUN_01ee57ec(plVar24,0,0);
      if ((uVar6 & uVar19) != 0 || (uVar18 >> 0xd & 1) != 0) {
        uVar14 = (**(code **)(*param_2 + 0x6a8))
                           (param_2,param_3,0x10,uVar18,*(undefined8 *)(*param_2 + 0x6b0));
        lVar8 = thunk_FUN_0124baac(uVar14,*(undefined8 *)PTR_DAT_027bcec8);
        puVar3 = PTR_DAT_027b46c8;
        puVar15 = PTR_DAT_027b3ec0;
        if (lVar8 == 0) goto LAB_01fa42ac;
        uVar19 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar19) {
          uVar6 = 0;
          lVar26 = 0;
          plVar25 = plVar24;
          do {
            if (uVar19 <= uVar6) goto LAB_01fa42b0;
            plVar24 = *(long **)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
            if (plVar24 == (long *)0x0) goto LAB_01fa42ac;
            lVar10 = *plVar24;
            if (uVar1 == 0) {
              pcVar21 = *(code **)(lVar10 + 0x268);
              uVar14 = *(undefined8 *)(lVar10 + 0x270);
            }
            else {
              pcVar21 = *(code **)(lVar10 + 0x278);
              uVar14 = *(undefined8 *)(lVar10 + 0x280);
            }
            plVar13 = (long *)(*pcVar21)(plVar24,1,uVar14);
            uVar7 = FUN_01ee57ec(plVar13,0,0);
            plVar24 = plVar25;
            if ((uVar7 & 1) == 0) {
              uVar14 = FUN_01230af8(*(undefined8 *)puVar3,iStack000000000000004c);
              if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                thunk_FUN_01220628(*(long *)puVar15);
              }
              if (plVar13 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)PTR_DAT_027bb590 + 0x130);
                if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_027bb590)) {
LAB_01fa42b4:
                    /* WARNING: Subroutine does not return */
                  FUN_01230f60(plVar13);
                }
              }
              uVar7 = FUN_01f9e620(plVar13,uVar18,3,uVar14);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = FUN_01ee57ec(plVar25,0,0), plVar24 = plVar13, (uVar7 & 1) == 0)) {
                if (lVar26 == 0) {
                  lVar26 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bb6b0);
                  FUN_01953820(lVar26,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_027c20c0)
                  ;
                  if (lVar26 == 0) goto LAB_01fa42ac;
                  lVar10 = *(long *)(lVar26 + 0x10);
                  lVar22 = *(long *)PTR_DAT_027bb698;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_01fa42ac;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    plVar24 = (long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar24 = (long)plVar25;
                    thunk_FUN_01286abc(plVar24,plVar25);
                  }
                  else {
                    FUN_01953fdc(lVar26,plVar25,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar10 = *(long *)(lVar26 + 0x10);
                lVar22 = *(long *)PTR_DAT_027bb698;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_01fa42ac;
                uVar19 = *(uint *)(lVar26 + 0x18);
                if (uVar19 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                  plVar24 = (long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
                  *plVar24 = (long)plVar13;
                  thunk_FUN_01286abc(plVar24,plVar13);
                  plVar24 = plVar25;
                }
                else {
                  FUN_01953fdc(lVar26,plVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                  plVar24 = plVar25;
                }
              }
            }
            uVar19 = *(uint *)(lVar8 + 0x18);
            uVar6 = uVar6 + 1;
            plVar25 = plVar24;
          } while ((int)uVar6 < (int)uVar19);
          if (lVar26 != 0) {
            plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027bcec0,
                                           *(undefined4 *)(lVar26 + 0x18));
            FUN_01954490(lVar26,plVar11,*(undefined8 *)PTR_DAT_027c20b8);
          }
        }
      }
      uVar7 = FUN_01ee57b0(plVar24,0,0);
      if ((uVar7 & 1) != 0) {
        if ((iStack000000000000004c == 0) && (plVar11 == (long *)0x0)) {
          if ((plVar24 == (long *)0x0) ||
             (lVar8 = (**(code **)(*plVar24 + 0x378))(plVar24,*(undefined8 *)(*plVar24 + 0x380)),
             lVar8 == 0)) goto LAB_01fa42ac;
          if (((uVar18 >> 0x12 & 1) == 0) && (*(long *)(lVar8 + 0x18) == 0)) {
            uVar14 = (**(code **)(*plVar24 + 0x308))
                               (plVar24,param_6,uVar18,param_5,lStack0000000000000058,unaff_x27,
                                *(undefined8 *)(*plVar24 + 0x310));
            return uVar14;
          }
        }
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027bcec0,1);
          if (plVar11 == (long *)0x0) goto LAB_01fa42ac;
          if ((plVar24 != (long *)0x0) &&
             (lVar8 = thunk_FUN_0124baac(plVar24,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
            uVar14 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar14,0);
          }
          if ((int)plVar11[3] == 0) {
LAB_01fa42b0:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          plVar11[4] = (long)plVar24;
          thunk_FUN_01286abc(plVar11 + 4,plVar24);
        }
        if (lStack0000000000000058 == 0) {
          lVar26 = *(long *)PTR_DAT_027b3840;
          lVar8 = *(long *)(lVar26 + 0x38);
          if (lVar8 == 0) {
            FUN_0122e7a4(lVar26);
            lVar8 = *(long *)(lVar26 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0122e748();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          lVar8 = *(long *)(*(long *)(lVar26 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0122e748();
          }
          lStack0000000000000058 = **(long **)(lVar8 + 0xb8);
        }
        in_stack_00000050 = 0;
        if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        plVar24 = (long *)(**(code **)(*param_5 + 0x188))
                                    (param_5,uVar18,plVar11,&stack0x00000058,unaff_x25,unaff_x27,
                                     lVar9,&stack0x00000050);
        uVar7 = FUN_01ee539c(plVar24,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar24 == (long *)0x0) {
LAB_01fa42ac:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          lVar9 = *plVar24;
          bVar2 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
          if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_027bacc8
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(plVar24);
          }
          uVar14 = (**(code **)(lVar9 + 0x308))
                             (plVar24,param_6,uVar18,param_5,lStack0000000000000058,unaff_x27,
                              *(undefined8 *)(lVar9 + 0x310));
          if (in_stack_00000050 != 0) {
            if (param_5 == (long *)0x0) goto LAB_01fa42ac;
            (**(code **)(*param_5 + 0x1a8))
                      (param_5,&stack0x00000058,in_stack_00000050,*(undefined8 *)(*param_5 + 0x1b0))
            ;
          }
          return uVar14;
        }
      }
      uVar14 = (**(code **)(*param_2 + 0x2c8))(param_2,*(undefined8 *)(*param_2 + 0x2d0));
      thunk_FUN_01279b34(PTR_DAT_027b3ed0);
      uVar16 = thunk_FUN_0124bba8();
      FUN_01f6b07c(uVar16,uVar14,param_3,0);
      goto LAB_01fa45d8;
    }
    uVar1 = uVar18 & 0x400;
    if (uVar1 == 0) {
      if (unaff_x28 == 0) {
        thunk_FUN_01279b34(PTR_DAT_027b3df8);
        uVar14 = thunk_FUN_0124bba8();
        puVar15 = PTR_DAT_027c2120;
        goto LAB_01fa4428;
      }
      puVar15 = PTR_DAT_027c2138;
      if ((uVar18 >> 0xc & 1) == 0) {
        uVar19 = uVar18 >> 8;
        puVar15 = PTR_DAT_027c20e0;
        goto joined_r0x01fa3790;
      }
    }
    else {
      puVar15 = PTR_DAT_027c2130;
      if ((uVar18 & 0x800) == 0) {
        uVar19 = uVar18 >> 0xd;
        puVar15 = PTR_DAT_027c2140;
joined_r0x01fa3790:
        if ((uVar19 & 1) == 0) {
          uVar14 = (**(code **)(*param_2 + 0x6a8))
                             (param_2,param_3,4,uVar18,*(undefined8 *)(*param_2 + 0x6b0));
          lVar8 = thunk_FUN_0124baac(uVar14,*(undefined8 *)PTR_DAT_027bb780);
          puVar15 = PTR_DAT_027c1c00;
          if (lVar8 == 0) goto LAB_01fa42ac;
          if ((int)*(long *)(lVar8 + 0x18) == 1) {
            plVar24 = *(long **)(lVar8 + 0x20);
LAB_01fa385c:
            uVar7 = FUN_01ee3bf4(plVar24,0,0);
            if ((uVar7 & 1) != 0) {
              if ((plVar24 == (long *)0x0) ||
                 (lVar9 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240))
                 , lVar9 == 0)) goto LAB_01fa42ac;
              uVar7 = FUN_01f80ec8(lVar9,0);
              if ((uVar7 & 1) == 0) {
                lVar9 = (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240));
                uVar14 = *(undefined8 *)PTR_DAT_027b3f30;
                if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)PTR_DAT_027b32e0);
                }
                lVar8 = FUN_01f7d8a0(uVar14,0);
                if (lVar9 == lVar8) goto LAB_01fa38ec;
              }
              else {
LAB_01fa38ec:
                uVar19 = iStack000000000000004c - (uint)(uVar1 == 0);
                if (0 < (int)uVar19) {
                  lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,uVar19);
                  puVar15 = PTR_DAT_027ba7b0;
                  if (unaff_x28 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(uint *)(unaff_x28 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca8();
                      }
                      lVar26 = (long)(int)uVar18;
                      lVar8 = *(long *)(unaff_x28 + lVar26 * 8 + 0x20);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca0();
                      }
                      uVar14 = *(undefined8 *)puVar15;
                      lVar10 = thunk_FUN_0124baac(lVar8,uVar14);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(lVar8,uVar14);
                      }
                      lVar10 = *(long *)puVar15;
                      plVar11 = (long *)thunk_FUN_0124baac(lVar8,lVar10);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(lVar8,lVar10);
                      }
                      lVar8 = *plVar11;
                      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar7 != 0) {
                        piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar23 + -2) == lVar10) {
                            puVar12 = (undefined8 *)(lVar8 + (long)(*piVar23 + 7) * 0x10 + 0x138);
                            goto LAB_01fa39c4;
                          }
                          uVar7 = uVar7 - 1;
                          piVar23 = piVar23 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_0122ea3c(plVar11,lVar10,7);
LAB_01fa39c4:
                      uVar5 = (*(code *)*puVar12)(plVar11,0,puVar12[1]);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca0();
                      }
                      if (*(uint *)(lVar9 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230ca8();
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(lVar9 + lVar26 * 4 + 0x20) = uVar5;
                      if (uVar18 == uVar19) {
                        plVar24 = (long *)(**(code **)(*plVar24 + 0x2a8))
                                                    (plVar24,param_6,
                                                     *(undefined8 *)(*plVar24 + 0x2b0));
                        if (plVar24 == (long *)0x0) {
                          if (uVar1 != 0) goto LAB_01fa42ac;
                        }
                        else {
                          bVar2 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                          if ((*(byte *)(*plVar24 + 0x130) < bVar2) ||
                             (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)PTR_DAT_027b3f80)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01230f60();
                          }
                          if (uVar1 != 0) {
                            uVar14 = thunk_FUN_0122b744(plVar24,lVar9,0);
                            return uVar14;
                          }
                        }
                        if (lStack0000000000000058 == 0) goto LAB_01fa42ac;
                        if (*(uint *)(lStack0000000000000058 + 0x18) <= uVar19) goto LAB_01fa42b0;
                        if (plVar24 != (long *)0x0) {
                          thunk_FUN_0122b918(plVar24,*(undefined8 *)
                                                      (lStack0000000000000058 +
                                                       (long)(int)uVar19 * 8 + 0x20),lVar9,0);
                          return 0;
                        }
                        goto LAB_01fa42ac;
                      }
                      unaff_x28 = lStack0000000000000058;
                    } while (lStack0000000000000058 != 0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01230ca0();
                }
              }
              if (uVar1 == 0) {
                puVar15 = PTR_DAT_027c2150;
                if (iStack000000000000004c == 1) {
                  if (unaff_x28 != 0) {
                    if (*(int *)(unaff_x28 + 0x18) != 0) {
                      (**(code **)(*plVar24 + 0x2c8))
                                (plVar24,param_6,*(undefined8 *)(unaff_x28 + 0x20),uVar18,param_5);
                      return 0;
                    }
                    goto LAB_01fa42b0;
                  }
                  goto LAB_01fa42ac;
                }
              }
              else {
                puVar15 = PTR_DAT_027c2158;
                if (iStack000000000000004c == 0) {
                  uVar14 = (**(code **)(*plVar24 + 0x2a8))
                                     (plVar24,param_6,*(undefined8 *)(*plVar24 + 0x2b0));
                  return uVar14;
                }
              }
              goto FUN_01fa44a8;
            }
          }
          else {
            if (*(long *)(lVar8 + 0x18) != 0) {
              if (uVar1 == 0) {
                if (unaff_x28 == 0) goto LAB_01fa42ac;
                if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_01fa42b0;
                puVar12 = (undefined8 *)(unaff_x28 + 0x20);
              }
              else {
                lVar26 = *(long *)PTR_DAT_027c1c00;
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                  lVar26 = *(long *)puVar15;
                }
                puVar12 = *(undefined8 **)(lVar26 + 0xb8);
              }
              if (param_5 == (long *)0x0) goto LAB_01fa42ac;
              plVar24 = (long *)(**(code **)(*param_5 + 0x178))(param_5,uVar18,lVar8,*puVar12);
              goto LAB_01fa385c;
            }
            uVar7 = FUN_01ee3bf4(0,0,0);
            if ((uVar7 & 1) != 0) goto LAB_01fa42ac;
          }
          if ((uVar18 & 0xfff300) == 0) {
            uVar14 = (**(code **)(*param_2 + 0x2c8))(param_2,*(undefined8 *)(*param_2 + 0x2d0));
            thunk_FUN_01279b34(PTR_DAT_027c1c18);
            uVar16 = thunk_FUN_0124bba8();
            FUN_01f88ca4(uVar16,uVar14,param_3,0);
            goto LAB_01fa45d8;
          }
          goto LAB_01fa3a14;
        }
      }
    }
FUN_01fa44a8:
    uVar14 = thunk_FUN_01279b34(puVar15);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar16 = thunk_FUN_0124bba8();
    puVar15 = PTR_DAT_027c2160;
  }
  else {
    puVar15 = PTR_DAT_027c20e8;
    if (unaff_x28 == 0) {
      if (*(long *)(in_stack_000000c0 + 0x18) == 0) goto LAB_01fa365c;
    }
    else if ((int)*(long *)(in_stack_000000c0 + 0x18) <= *(int *)(unaff_x28 + 0x18)) {
LAB_01fa365c:
      iVar4 = FUN_01483360(in_stack_000000c0,0,*(undefined8 *)PTR_DAT_027c20b0);
      puVar15 = PTR_DAT_027c2108;
      if (iVar4 == -1) goto LAB_01fa367c;
    }
    uVar14 = thunk_FUN_01279b34(puVar15);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar16 = thunk_FUN_0124bba8();
    puVar15 = PTR_DAT_027c2110;
  }
  uVar17 = thunk_FUN_01279b34(puVar15);
  FUN_01e7598c(uVar16,uVar14,uVar17,0);
LAB_01fa45d8:
  uVar14 = thunk_FUN_01279b34(PTR_DAT_027c2128);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar16,uVar14);
}


