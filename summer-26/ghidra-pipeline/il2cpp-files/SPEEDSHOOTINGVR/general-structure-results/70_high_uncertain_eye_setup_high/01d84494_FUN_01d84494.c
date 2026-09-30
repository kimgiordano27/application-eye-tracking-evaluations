/*
FUNCTION_NAME: FUN_01d84494
ENTRY_POINT: 01d84494
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_01d84494(long *param_1,long param_2,uint param_3,long *param_4,undefined8 param_5,long param_6,
            undefined8 param_7,undefined8 param_8,long param_9)

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
  int *piVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  int local_74;
  long local_70;
  long local_68;
  undefined *puVar15;
  
  local_68 = param_6;
  if ((DAT_0247d7f5 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_023508c0);
    FUN_00fdc2e4(PTR_DAT_02359220);
    FUN_00fdc2e4(PTR_DAT_02358d88);
    FUN_00fdc2e4(PTR_DAT_02352730);
    FUN_00fdc2e4(PTR_DAT_023517e0);
    FUN_00fdc2e4(PTR_DAT_0234cba8);
    FUN_00fdc2e4(PTR_DAT_02352648);
    FUN_00fdc2e4(PTR_DAT_02359228);
    FUN_00fdc2e4(PTR_DAT_02359230);
    FUN_00fdc2e4(PTR_DAT_02359238);
    FUN_00fdc2e4(PTR_DAT_02352660);
    FUN_00fdc2e4(PTR_DAT_02353e90);
    FUN_00fdc2e4(PTR_DAT_0234ebc0);
    FUN_00fdc2e4(PTR_DAT_02353e98);
    FUN_00fdc2e4(PTR_DAT_0234bd80);
    FUN_00fdc2e4(PTR_DAT_0234bdf8);
    FUN_00fdc2e4(PTR_DAT_02351e10);
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    FUN_00fdc2e4(PTR_DAT_0234c5a8);
    FUN_00fdc2e4(PTR_DAT_0234bc58);
    FUN_00fdc2e4(PTR_DAT_02359240);
    FUN_00fdc2e4(PTR_DAT_02359248);
    DAT_0247d7f5 = 1;
  }
  local_70 = 0;
  uVar7 = (**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  if ((uVar7 & 1) != 0) {
    uVar14 = thunk_FUN_010303a8(PTR_DAT_02359268);
    thunk_FUN_010303a8(PTR_DAT_0234c170);
    uVar16 = thunk_FUN_010400dc();
    FUN_01d4a564(uVar16,uVar14,0);
    goto LAB_01d855c4;
  }
  puVar15 = PTR_DAT_02359270;
  if ((param_3 & 0xff00) == 0) goto LAB_01d85494;
  uVar18 = 0x1c;
  if ((param_3 & 0x200) != 0) {
    uVar18 = 0x14;
  }
  if ((param_3 & 0xff) != 0) {
    uVar18 = 0;
  }
  if (param_9 == 0) {
LAB_01d84668:
    if (param_6 == 0) {
      local_74 = 0;
    }
    else {
      local_74 = *(int *)(param_6 + 0x18);
    }
    if (param_4 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      param_4 = (long *)FUN_01d634a8(0);
    }
    uVar18 = uVar18 | param_3;
    if ((param_3 >> 9 & 1) != 0) {
      puVar15 = PTR_DAT_02359288;
      if ((param_3 & 0x3d00) == 0) {
        uVar14 = FUN_01d71314(param_1,uVar18,param_4,param_6,param_8,0);
        return uVar14;
      }
      goto LAB_01d85494;
    }
    if ((param_3 & 0xc000) != 0) {
      uVar18 = uVar18 | 0x2000;
    }
    if (param_2 == 0) {
      thunk_FUN_010303a8(PTR_DAT_0234bbe8);
      uVar14 = thunk_FUN_010400dc();
      puVar15 = PTR_DAT_0234dd50;
LAB_01d85414:
      uVar16 = thunk_FUN_010303a8(puVar15);
      FUN_01c5e120(uVar14,uVar16,0);
      uVar16 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar14,uVar16);
    }
    if ((*(int *)(param_2 + 0x10) == 0) ||
       (uVar7 = FUN_01c50924(param_2,*(undefined8 *)PTR_DAT_02359248,0), (uVar7 & 1) != 0)) {
      lVar8 = OVRPlugin__GetTimeInSeconds(param_1);
      param_2 = *(long *)PTR_DAT_02359240;
      if (lVar8 != 0) {
        param_2 = lVar8;
      }
    }
    if ((uVar18 >> 10 & 1) == 0 && (uVar18 & 0x800) == 0) {
LAB_01d84a00:
      uVar1 = uVar18 & 0x2000;
      uVar19 = uVar18 >> 0xc & 1;
      if (uVar19 != 0 || uVar1 != 0) {
        puVar15 = PTR_DAT_023592b8;
        uVar6 = uVar1;
        if ((uVar18 >> 0xc & 1) == 0) {
          puVar15 = PTR_DAT_02359260;
          uVar6 = uVar18 >> 8 & 1;
        }
        if (uVar6 != 0) goto LAB_01d85494;
      }
      if ((uVar18 >> 8 & 1) == 0) {
        plVar23 = (long *)0x0;
        plVar11 = (long *)0x0;
      }
      else {
        uVar14 = (**(code **)(*param_1 + 0x698))
                           (param_1,param_2,8,uVar18,*(undefined8 *)(*param_1 + 0x6a0));
        lVar8 = thunk_FUN_0103ffe0(uVar14,*(undefined8 *)PTR_DAT_02353e90);
        puVar3 = PTR_DAT_0234c5a8;
        puVar15 = PTR_DAT_0234bce0;
        if (lVar8 == 0) goto LAB_01d85298;
        if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
          plVar23 = (long *)0x0;
        }
        else {
          lVar9 = 0;
          uVar7 = 0;
          uVar20 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          plVar11 = (long *)0x0;
          do {
            if (uVar20 <= uVar7) goto LAB_01d8529c;
            plVar13 = *(long **)(lVar8 + 0x20 + uVar7 * 8);
            uVar14 = FUN_00fdc388(*(undefined8 *)puVar3,local_74);
            if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
              thunk_FUN_01022c14(*(long *)puVar15);
            }
            if (plVar13 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_02351e10)) goto LAB_01d852a0;
            }
            uVar20 = FUN_01d7f588(plVar13,uVar18,3,uVar14);
            plVar23 = plVar11;
            if (((uVar20 & 1) != 0) &&
               (uVar20 = FUN_01cc86b0(plVar11,0,0), plVar23 = plVar13, (uVar20 & 1) == 0)) {
              if (lVar9 == 0) {
                lVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
                FUN_017d2874(lVar9,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_02359230);
                if (lVar9 == 0) goto LAB_01d85298;
                lVar25 = *(long *)(lVar9 + 0x10);
                lVar10 = *(long *)PTR_DAT_02352648;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar25 == 0) goto LAB_01d85298;
                uVar6 = *(uint *)(lVar9 + 0x18);
                if (uVar6 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar6 + 1;
                  plVar23 = (long *)(lVar25 + (long)(int)uVar6 * 8 + 0x20);
                  *plVar23 = (long)plVar11;
                  thunk_FUN_0106e12c(plVar23,plVar11);
                }
                else {
                  FUN_017d3030(lVar9,plVar11,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar25 = *(long *)(lVar9 + 0x10);
              lVar10 = *(long *)PTR_DAT_02352648;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar25 == 0) goto LAB_01d85298;
              uVar6 = *(uint *)(lVar9 + 0x18);
              if (uVar6 < *(uint *)(lVar25 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar6 + 1;
                puVar12 = (undefined8 *)(lVar25 + (long)(int)uVar6 * 8 + 0x20);
                *puVar12 = plVar13;
                thunk_FUN_0106e12c(puVar12,plVar13);
                plVar23 = plVar11;
              }
              else {
                FUN_017d3030(lVar9,plVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                plVar23 = plVar11;
              }
            }
            uVar20 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar7 = uVar7 + 1;
            plVar11 = plVar23;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
          if (lVar9 != 0) {
            plVar11 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,
                                           *(undefined4 *)(lVar9 + 0x18));
            FUN_017d34e4(lVar9,plVar11,*(undefined8 *)PTR_DAT_02359228);
            goto LAB_01d84cf8;
          }
        }
        plVar11 = (long *)0x0;
      }
LAB_01d84cf8:
      uVar6 = FUN_01cc86b0(plVar23,0,0);
      if ((uVar6 & uVar19) != 0 || (uVar18 >> 0xd & 1) != 0) {
        uVar14 = (**(code **)(*param_1 + 0x698))
                           (param_1,param_2,0x10,uVar18,*(undefined8 *)(*param_1 + 0x6a0));
        lVar8 = thunk_FUN_0103ffe0(uVar14,*(undefined8 *)PTR_DAT_02353e98);
        puVar3 = PTR_DAT_0234c5a8;
        puVar15 = PTR_DAT_0234bce0;
        if (lVar8 == 0) goto LAB_01d85298;
        uVar19 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar19) {
          uVar6 = 0;
          lVar9 = 0;
          plVar24 = plVar23;
          do {
            if (uVar19 <= uVar6) goto LAB_01d8529c;
            plVar23 = *(long **)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
            if (plVar23 == (long *)0x0) goto LAB_01d85298;
            lVar25 = *plVar23;
            if (uVar1 == 0) {
              pcVar21 = *(code **)(lVar25 + 0x278);
              uVar14 = *(undefined8 *)(lVar25 + 0x280);
            }
            else {
              pcVar21 = *(code **)(lVar25 + 0x298);
              uVar14 = *(undefined8 *)(lVar25 + 0x2a0);
            }
            plVar13 = (long *)(*pcVar21)(plVar23,1,uVar14);
            uVar7 = FUN_01cc86b0(plVar13,0,0);
            plVar23 = plVar24;
            if ((uVar7 & 1) == 0) {
              uVar14 = FUN_00fdc388(*(undefined8 *)puVar3,local_74);
              if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
                thunk_FUN_01022c14(*(long *)puVar15);
              }
              if (plVar13 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
                if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_02351e10)) {
LAB_01d852a0:
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc8d0(plVar13);
                }
              }
              uVar7 = FUN_01d7f588(plVar13,uVar18,3,uVar14);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = FUN_01cc86b0(plVar24,0,0), plVar23 = plVar13, (uVar7 & 1) == 0)) {
                if (lVar9 == 0) {
                  lVar9 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
                  FUN_017d2874(lVar9,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_02359230);
                  if (lVar9 == 0) goto LAB_01d85298;
                  lVar25 = *(long *)(lVar9 + 0x10);
                  lVar10 = *(long *)PTR_DAT_02352648;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar25 == 0) goto LAB_01d85298;
                  uVar19 = *(uint *)(lVar9 + 0x18);
                  if (uVar19 < *(uint *)(lVar25 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar19 + 1;
                    plVar23 = (long *)(lVar25 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar23 = (long)plVar24;
                    thunk_FUN_0106e12c(plVar23,plVar24);
                  }
                  else {
                    FUN_017d3030(lVar9,plVar24,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                lVar25 = *(long *)(lVar9 + 0x10);
                lVar10 = *(long *)PTR_DAT_02352648;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar25 == 0) goto LAB_01d85298;
                uVar19 = *(uint *)(lVar9 + 0x18);
                if (uVar19 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar19 + 1;
                  plVar23 = (long *)(lVar25 + (long)(int)uVar19 * 8 + 0x20);
                  *plVar23 = (long)plVar13;
                  thunk_FUN_0106e12c(plVar23,plVar13);
                  plVar23 = plVar24;
                }
                else {
                  FUN_017d3030(lVar9,plVar13,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  plVar23 = plVar24;
                }
              }
            }
            uVar19 = *(uint *)(lVar8 + 0x18);
            uVar6 = uVar6 + 1;
            plVar24 = plVar23;
          } while ((int)uVar6 < (int)uVar19);
          if (lVar9 != 0) {
            plVar11 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,
                                           *(undefined4 *)(lVar9 + 0x18));
            FUN_017d34e4(lVar9,plVar11,*(undefined8 *)PTR_DAT_02359228);
          }
        }
      }
      uVar7 = FUN_01cc8674(plVar23,0,0);
      if ((uVar7 & 1) != 0) {
        if ((local_74 == 0) && (plVar11 == (long *)0x0)) {
          if ((plVar23 == (long *)0x0) ||
             (lVar8 = (**(code **)(*plVar23 + 0x398))(plVar23,*(undefined8 *)(*plVar23 + 0x3a0)),
             lVar8 == 0)) goto LAB_01d85298;
          if (((uVar18 >> 0x12 & 1) == 0) && (*(long *)(lVar8 + 0x18) == 0)) {
            uVar14 = (**(code **)(*plVar23 + 0x328))
                               (plVar23,param_5,uVar18,param_4,local_68,param_8,
                                *(undefined8 *)(*plVar23 + 0x330));
            return uVar14;
          }
        }
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
          if (plVar11 == (long *)0x0) goto LAB_01d85298;
          if ((plVar23 != (long *)0x0) &&
             (lVar8 = thunk_FUN_0103ffe0(plVar23,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0)) {
            uVar14 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar14,0);
          }
          if ((int)plVar11[3] == 0) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          plVar11[4] = (long)plVar23;
          thunk_FUN_0106e12c(plVar11 + 4,plVar23);
        }
        if (local_68 == 0) {
          lVar9 = *(long *)PTR_DAT_023508c0;
          lVar8 = *(long *)(lVar9 + 0x38);
          if (lVar8 == 0) {
            FUN_0103c2a0(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0103c244();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0103c244();
          }
          local_68 = **(long **)(lVar8 + 0xb8);
        }
        local_70 = 0;
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        plVar23 = (long *)(**(code **)(*param_4 + 0x188))
                                    (param_4,uVar18,plVar11,&local_68,param_7,param_8,param_9,
                                     &local_70,*(undefined8 *)(*param_4 + 400));
        uVar7 = FUN_01cc8210(plVar23,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar23 == (long *)0x0) {
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          lVar8 = *plVar23;
          bVar2 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0234ebc0
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(plVar23);
          }
          uVar14 = (**(code **)(lVar8 + 0x328))
                             (plVar23,param_5,uVar18,param_4,local_68,param_8,
                              *(undefined8 *)(lVar8 + 0x330));
          if (local_70 != 0) {
            if (param_4 == (long *)0x0) goto LAB_01d85298;
            (**(code **)(*param_4 + 0x1a8))
                      (param_4,&local_68,local_70,*(undefined8 *)(*param_4 + 0x1b0));
          }
          return uVar14;
        }
      }
      uVar14 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
      thunk_FUN_010303a8(PTR_DAT_0234bcf0);
      uVar16 = thunk_FUN_010400dc();
      FUN_01d4c060(uVar16,uVar14,param_2,0);
      goto LAB_01d855c4;
    }
    uVar1 = uVar18 & 0x400;
    if (uVar1 == 0) {
      if (param_6 == 0) {
        thunk_FUN_010303a8(PTR_DAT_0234bbe8);
        uVar14 = thunk_FUN_010400dc();
        puVar15 = PTR_DAT_02359290;
        goto LAB_01d85414;
      }
      puVar15 = PTR_DAT_023592a8;
      if ((uVar18 >> 0xc & 1) == 0) {
        uVar19 = uVar18 >> 8;
        puVar15 = PTR_DAT_02359250;
        goto joined_r0x01d8477c;
      }
    }
    else {
      puVar15 = PTR_DAT_023592a0;
      if ((uVar18 & 0x800) == 0) {
        uVar19 = uVar18 >> 0xd;
        puVar15 = PTR_DAT_023592b0;
joined_r0x01d8477c:
        if ((uVar19 & 1) == 0) {
          uVar14 = (**(code **)(*param_1 + 0x698))
                             (param_1,param_2,4,uVar18,*(undefined8 *)(*param_1 + 0x6a0));
          lVar8 = thunk_FUN_0103ffe0(uVar14,*(undefined8 *)PTR_DAT_02352730);
          puVar15 = PTR_DAT_02358d88;
          if (lVar8 == 0) goto LAB_01d85298;
          if ((int)*(long *)(lVar8 + 0x18) == 1) {
            plVar23 = *(long **)(lVar8 + 0x20);
LAB_01d84848:
            uVar7 = FUN_01cc6c94(plVar23,0,0);
            if ((uVar7 & 1) != 0) {
              if ((plVar23 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar23 + 0x238))(plVar23,*(undefined8 *)(*plVar23 + 0x240))
                 , lVar8 == 0)) goto LAB_01d85298;
              uVar7 = FUN_01d61eb0(lVar8,0);
              if ((uVar7 & 1) == 0) {
                lVar8 = (**(code **)(*plVar23 + 0x238))(plVar23,*(undefined8 *)(*plVar23 + 0x240));
                uVar14 = *(undefined8 *)PTR_DAT_0234bd80;
                if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
                  thunk_FUN_01022c14(*(long *)PTR_DAT_0234bc58);
                }
                lVar9 = FUN_01d5e86c(uVar14,0);
                if (lVar8 == lVar9) goto LAB_01d848d8;
              }
              else {
LAB_01d848d8:
                uVar19 = local_74 - (uint)(uVar1 == 0);
                if (0 < (int)uVar19) {
                  lVar8 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234cba8,uVar19);
                  puVar15 = PTR_DAT_023517e0;
                  if (param_6 != 0) {
                    uVar18 = 0;
                    do {
                      if (*(uint *)(param_6 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc53c();
                      }
                      lVar25 = (long)(int)uVar18;
                      lVar9 = *(long *)(param_6 + lVar25 * 8 + 0x20);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc534();
                      }
                      uVar14 = *(undefined8 *)puVar15;
                      lVar10 = thunk_FUN_0103ffe0(lVar9,uVar14);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(lVar9,uVar14);
                      }
                      lVar10 = *(long *)puVar15;
                      plVar11 = (long *)thunk_FUN_0103ffe0(lVar9,lVar10);
                      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc8d0(lVar9,lVar10);
                      }
                      lVar9 = *plVar11;
                      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar7 != 0) {
                        piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar22 + -2) == lVar10) {
                            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar22 + 7) * 0x10 + 0x138);
                            goto LAB_01d849b0;
                          }
                          uVar7 = uVar7 - 1;
                          piVar22 = piVar22 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar12 = (undefined8 *)FUN_0103c348(plVar11,lVar10,7);
LAB_01d849b0:
                      uVar5 = (*(code *)*puVar12)(plVar11,0,puVar12[1]);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc534();
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fdc53c();
                      }
                      uVar18 = uVar18 + 1;
                      *(undefined4 *)(lVar8 + lVar25 * 4 + 0x20) = uVar5;
                      if (uVar18 == uVar19) {
                        plVar23 = (long *)(**(code **)(*plVar23 + 0x2c8))
                                                    (plVar23,param_5,
                                                     *(undefined8 *)(*plVar23 + 0x2d0));
                        if (plVar23 == (long *)0x0) {
                          if (uVar1 != 0) goto LAB_01d85298;
                        }
                        else {
                          bVar2 = *(byte *)(*(long *)PTR_DAT_0234bdf8 + 0x130);
                          if ((*(byte *)(*plVar23 + 0x130) < bVar2) ||
                             (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)PTR_DAT_0234bdf8)) {
                    /* WARNING: Subroutine does not return */
                            FUN_00fdc8d0();
                          }
                          if (uVar1 != 0) {
                            uVar14 = thunk_FUN_0105ce10(plVar23,lVar8,0);
                            return uVar14;
                          }
                        }
                        if (local_68 == 0) goto LAB_01d85298;
                        if (*(uint *)(local_68 + 0x18) <= uVar19) goto LAB_01d8529c;
                        if (plVar23 != (long *)0x0) {
                          thunk_FUN_0105cfb0(plVar23,*(undefined8 *)
                                                      (local_68 + (long)(int)uVar19 * 8 + 0x20),
                                             lVar8,0);
                          return 0;
                        }
                        goto LAB_01d85298;
                      }
                      param_6 = local_68;
                    } while (local_68 != 0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00fdc534();
                }
              }
              if (uVar1 == 0) {
                puVar15 = PTR_DAT_023592c0;
                if (local_74 == 1) {
                  if (param_6 != 0) {
                    if (*(int *)(param_6 + 0x18) != 0) {
                      (**(code **)(*plVar23 + 0x2e8))
                                (plVar23,param_5,*(undefined8 *)(param_6 + 0x20),uVar18,param_4,
                                 param_8,*(undefined8 *)(*plVar23 + 0x2f0));
                      return 0;
                    }
                    goto LAB_01d8529c;
                  }
                  goto LAB_01d85298;
                }
              }
              else {
                puVar15 = PTR_DAT_023592c8;
                if (local_74 == 0) {
                  uVar14 = (**(code **)(*plVar23 + 0x2c8))
                                     (plVar23,param_5,*(undefined8 *)(*plVar23 + 0x2d0));
                  return uVar14;
                }
              }
              goto LAB_01d85494;
            }
          }
          else {
            if (*(long *)(lVar8 + 0x18) != 0) {
              if (uVar1 == 0) {
                if (param_6 == 0) goto LAB_01d85298;
                if (*(int *)(param_6 + 0x18) == 0) goto LAB_01d8529c;
                puVar12 = (undefined8 *)(param_6 + 0x20);
              }
              else {
                lVar9 = *(long *)PTR_DAT_02358d88;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01022c14();
                  lVar9 = *(long *)puVar15;
                }
                puVar12 = *(undefined8 **)(lVar9 + 0xb8);
              }
              if (param_4 == (long *)0x0) goto LAB_01d85298;
              plVar23 = (long *)(**(code **)(*param_4 + 0x178))
                                          (param_4,uVar18,lVar8,*puVar12,param_8,
                                           *(undefined8 *)(*param_4 + 0x180));
              goto LAB_01d84848;
            }
            uVar7 = FUN_01cc6c94(0,0,0);
            if ((uVar7 & 1) != 0) goto LAB_01d85298;
          }
          if ((uVar18 & 0xfff300) == 0) {
            uVar14 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
            thunk_FUN_010303a8(PTR_DAT_02358da0);
            uVar16 = thunk_FUN_010400dc();
            FUN_01d69de8(uVar16,uVar14,param_2,0);
            goto LAB_01d855c4;
          }
          goto LAB_01d84a00;
        }
      }
    }
LAB_01d85494:
    uVar14 = thunk_FUN_010303a8(puVar15);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar16 = thunk_FUN_010400dc();
    puVar15 = PTR_DAT_023592d0;
  }
  else {
    puVar15 = PTR_DAT_02359258;
    if (param_6 == 0) {
      if (*(long *)(param_9 + 0x18) == 0) goto LAB_01d84648;
    }
    else if ((int)*(long *)(param_9 + 0x18) <= *(int *)(param_6 + 0x18)) {
LAB_01d84648:
      iVar4 = FUN_0120568c(param_9,0,*(undefined8 *)PTR_DAT_02359220);
      puVar15 = PTR_DAT_02359278;
      if (iVar4 == -1) goto LAB_01d84668;
    }
    uVar14 = thunk_FUN_010303a8(puVar15);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar16 = thunk_FUN_010400dc();
    puVar15 = PTR_DAT_02359280;
  }
  uVar17 = thunk_FUN_010303a8(puVar15);
  FUN_01c5e198(uVar16,uVar14,uVar17,0);
LAB_01d855c4:
  uVar14 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar16,uVar14);
}


