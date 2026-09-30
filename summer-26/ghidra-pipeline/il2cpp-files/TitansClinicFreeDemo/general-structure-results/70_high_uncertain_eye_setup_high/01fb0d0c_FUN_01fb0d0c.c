/*
FUNCTION_NAME: FUN_01fb0d0c
ENTRY_POINT: 01fb0d0c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_01fb0d0c(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long local_70;
  long local_68;
  
  if ((DAT_0293e004 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c2718);
    thunk_FUN_01279b34(PTR_DAT_027c1b38);
    thunk_FUN_01279b34(PTR_DAT_027c2720);
    thunk_FUN_01279b34(PTR_DAT_027c2728);
    thunk_FUN_01279b34(PTR_DAT_027c2730);
    thunk_FUN_01279b34(PTR_DAT_027c2738);
    thunk_FUN_01279b34(PTR_DAT_027b39f8);
    thunk_FUN_01279b34(PTR_DAT_027c2740);
    thunk_FUN_01279b34(PTR_DAT_027c2748);
    thunk_FUN_01279b34(PTR_DAT_027c2750);
    thunk_FUN_01279b34(PTR_DAT_027b39e8);
    thunk_FUN_01279b34(PTR_DAT_027b1af0);
    thunk_FUN_01279b34(PTR_DAT_027c2758);
    thunk_FUN_01279b34(PTR_DAT_027bd0a8);
    thunk_FUN_01279b34(PTR_DAT_027b3650);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    DAT_0293e004 = 1;
  }
  puVar14 = PTR_DAT_027b32e0;
  local_68 = 0;
  if (param_1 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar17 = thunk_FUN_0124bba8();
    puVar14 = PTR_DAT_027badb0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar7 = FUN_01f7f404(param_2,0,0);
    puVar2 = PTR_DAT_027bd0a8;
    if ((uVar7 & 1) == 0) {
      uVar17 = *(undefined8 *)PTR_DAT_027c2758;
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar17 = FUN_01f7d8a0(uVar17,0);
      uVar7 = FUN_01f7f404(param_2,uVar17,0);
      plVar12 = (long *)0x0;
      if ((uVar7 & 1) == 0) {
        plVar12 = param_2;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)puVar2);
      }
      lVar8 = FUN_01fb0b6c(param_1,plVar12,0);
      if ((param_3 & 1) == 0) {
        if (lVar8 == 0) goto LAB_01fb127c;
        if (*(int *)(lVar8 + 0x18) == 1) {
          if (*(long *)(lVar8 + 0x20) != 0) {
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar7 = FUN_01f801dc(plVar12,0,0);
            if (*(int *)(lVar8 + 0x18) == 0) {
LAB_01fb16d4:
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
            if (*(long *)(lVar8 + 0x20) != 0) {
              plVar11 = (long *)FUN_0122c1cc();
              if ((uVar7 & 1) != 0) {
                if (plVar12 == (long *)0x0) goto LAB_01fb127c;
                uVar7 = (**(code **)(*plVar12 + 0x288))
                                  (plVar12,plVar11,*(undefined8 *)(*plVar12 + 0x290));
                plVar11 = plVar12;
                if ((uVar7 & 1) == 0) {
                  lVar8 = FUN_01f8cdf0(plVar12,0,0);
                  if (lVar8 == 0) {
                    return (long *)0x0;
                  }
                  uVar17 = *(undefined8 *)PTR_DAT_027b3650;
                  plVar12 = (long *)thunk_FUN_0124baac(lVar8,uVar17);
                  if (plVar12 != (long *)0x0) {
                    return plVar12;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01230f60(lVar8,uVar17);
                }
              }
              lVar9 = FUN_01f8cdf0(plVar11,1,0);
              if (lVar9 == 0) {
                if (*(int *)(lVar8 + 0x18) != 0) goto LAB_01fb127c;
              }
              else {
                uVar17 = *(undefined8 *)PTR_DAT_027b3650;
                plVar12 = (long *)thunk_FUN_0124baac(lVar9,uVar17);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01230f60(lVar9,uVar17);
                }
                if (*(int *)(lVar8 + 0x18) != 0) {
                  lVar8 = *(long *)(lVar8 + 0x20);
                  if (lVar8 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar10 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar12 + 0x40));
                    lVar9 = lVar8;
                    if (lVar10 == 0) {
                      uVar17 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
                      FUN_01230b78(uVar17,0);
                    }
                  }
                  if ((int)plVar12[3] != 0) {
                    plVar12[4] = lVar9;
                    thunk_FUN_01286abc(plVar12 + 4,lVar8);
                    return plVar12;
                  }
                }
              }
              goto LAB_01fb16d4;
            }
            goto LAB_01fb127c;
          }
LAB_01fb1630:
          thunk_FUN_01279b34(PTR_DAT_027c2760);
          uVar17 = thunk_FUN_0124bba8();
          uVar13 = thunk_FUN_01279b34(PTR_DAT_027c2768);
          FUN_01ee36e4(uVar17,uVar13,0);
          goto LAB_01fb1660;
        }
        bVar4 = false;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar9 = FUN_01fb16e4(param_1);
        bVar4 = lVar9 != 0;
      }
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar7 = FUN_01f801dc(plVar12,0,0);
      if ((uVar7 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if (plVar12 == (long *)0x0) goto LAB_01fb127c;
        bVar5 = FUN_01f8132c(plVar12,0);
        bVar5 = bVar5 & 1;
      }
      if ((bVar5 & bVar4) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar9 = FUN_01fb1aa8(plVar12);
        if (lVar9 == 0) goto LAB_01fb127c;
        bVar4 = (bool)(bVar4 & *(char *)(lVar9 + 0x15) != '\0');
      }
      if (lVar8 != 0) {
        if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar6 = FUN_01f69cb8(*(undefined4 *)(lVar8 + 0x18),0x10,0);
        if (bVar4 != false) {
          lVar9 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c2738);
          FUN_01658bd4(lVar9,uVar6,*(undefined8 *)PTR_DAT_027c2730);
          lVar10 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b39e8);
          FUN_01953820(lVar10,uVar6,*(undefined8 *)PTR_DAT_027c2748);
          puVar2 = PTR_DAT_027c2728;
          iVar21 = 0;
          local_70 = param_1;
          do {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (0 < (int)uVar1) {
              uVar20 = 0;
              do {
                if (uVar1 <= uVar20) goto LAB_01fb16d4;
                lVar18 = *(long *)(lVar8 + (long)(int)uVar20 * 8 + 0x20);
                if (lVar18 == 0) goto LAB_01fb1630;
                uVar17 = FUN_0122c1cc(lVar18);
                if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)puVar14);
                }
                uVar7 = FUN_01f801dc(plVar12,0,0);
                if ((uVar7 & 1) == 0) {
LAB_01fb10e0:
                  if (lVar9 == 0) goto LAB_01fb127c;
                  uVar7 = FUN_0165a6b0(lVar9,uVar17,&local_68,*(undefined8 *)puVar2);
                  if ((uVar7 & 1) == 0) {
                    if (*(int *)(*(long *)PTR_DAT_027bd0a8 + 0xe0) == 0) {
                      thunk_FUN_01220628();
                    }
                    lVar19 = FUN_01fb1aa8(uVar17);
                    if (iVar21 != 0) goto LAB_01fb113c;
LAB_01fb110c:
                    if (lVar19 == 0) goto LAB_01fb127c;
LAB_01fb1148:
                    if (((*(char *)(lVar19 + 0x14) != '\0') || (local_68 == 0)) ||
                       (*(int *)(local_68 + 0x18) == iVar21)) {
                      if (lVar10 == 0) goto LAB_01fb127c;
                      lVar15 = *(long *)(lVar10 + 0x10);
                      lVar16 = *(long *)PTR_DAT_027b39f8;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_01fb127c;
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar11 = lVar18;
                        thunk_FUN_01286abc(plVar11,lVar18);
                      }
                      else {
                        FUN_01953fdc(lVar10,lVar18,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  else {
                    if (local_68 == 0) goto LAB_01fb127c;
                    lVar19 = *(long *)(local_68 + 0x10);
                    if (iVar21 == 0) goto LAB_01fb110c;
LAB_01fb113c:
                    if (lVar19 == 0) goto LAB_01fb127c;
                    if (*(char *)(lVar19 + 0x15) != '\0') goto LAB_01fb1148;
                  }
                  if (local_68 == 0) {
                    lVar18 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c2718);
                    *(long *)(lVar18 + 0x10) = lVar19;
                    thunk_FUN_01286abc((long *)(lVar18 + 0x10),lVar19);
                    *(int *)(lVar18 + 0x18) = iVar21;
                    FUN_01658ea4(lVar9,uVar17,lVar18,*(undefined8 *)PTR_DAT_027c2720);
                  }
                }
                else {
                  if (plVar12 == (long *)0x0) goto LAB_01fb127c;
                  uVar7 = (**(code **)(*plVar12 + 0x288))
                                    (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x290));
                  if ((uVar7 & 1) != 0) goto LAB_01fb10e0;
                }
                uVar1 = *(uint *)(lVar8 + 0x18);
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < (int)uVar1);
            }
            puVar3 = PTR_DAT_027bd0a8;
            if (*(int *)(*(long *)PTR_DAT_027bd0a8 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            local_70 = FUN_01fb16e4(local_70);
            if (local_70 == 0) {
              if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar7 = FUN_01f7f404(plVar12,0,0);
              if ((uVar7 & 1) == 0) {
                if (plVar12 == (long *)0x0) break;
                uVar7 = OVRPlugin__set_tiledMultiResLevel(plVar12,0);
                if ((uVar7 & 1) == 0) {
                  if (lVar10 != 0) {
                    uVar17 = FUN_01f8cdf0(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
                    plVar12 = (long *)thunk_FUN_0124baac(uVar17,*(undefined8 *)PTR_DAT_027b3650);
                    goto LAB_01fb15f4;
                  }
                  break;
                }
              }
              if (lVar10 != 0) {
                plVar12 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027c1b38,
                                               *(undefined4 *)(lVar10 + 0x18));
                goto LAB_01fb15f4;
              }
              break;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            iVar21 = iVar21 + 1;
            lVar8 = FUN_01fb0b6c(local_70,plVar12,1);
          } while (lVar8 != 0);
          goto LAB_01fb127c;
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar7 = FUN_01f7f404(plVar12,0,0);
        if ((uVar7 & 1) != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar1) {
            lVar9 = 0;
            do {
              if (uVar1 <= (uint)lVar9) goto LAB_01fb16d4;
              if (*(long *)(lVar8 + 0x20 + lVar9 * 8) == 0) goto LAB_01fb1630;
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < (int)uVar1);
          }
          plVar12 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027c1b38);
          FUN_01f89bec(lVar8,plVar12,0,0);
          return plVar12;
        }
        lVar10 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b39e8);
        FUN_01953820(lVar10,uVar6,*(undefined8 *)PTR_DAT_027c2748);
        puVar2 = PTR_DAT_027b39f8;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          lVar9 = 0;
          do {
            if (uVar1 <= (uint)lVar9) goto LAB_01fb16d4;
            lVar18 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
            if (lVar18 == 0) goto LAB_01fb1630;
            uVar17 = FUN_0122c1cc(lVar18);
            if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)puVar14);
            }
            uVar7 = FUN_01f801dc(plVar12,0,0);
            if ((uVar7 & 1) == 0) {
LAB_01fb13fc:
              if (lVar10 == 0) goto LAB_01fb127c;
              lVar19 = *(long *)(lVar10 + 0x10);
              lVar15 = *(long *)puVar2;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_01fb127c;
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar18;
                thunk_FUN_01286abc(plVar11,lVar18);
              }
              else {
                FUN_01953fdc(lVar10,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (plVar12 == (long *)0x0) goto LAB_01fb127c;
              uVar7 = (**(code **)(*plVar12 + 0x288))
                                (plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x290));
              if ((uVar7 & 1) != 0) goto LAB_01fb13fc;
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar1);
        }
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar7 = FUN_01f7f404(plVar12,0,0);
        if ((uVar7 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_01fb127c;
          uVar7 = OVRPlugin__set_tiledMultiResLevel(plVar12,0);
          if ((uVar7 & 1) == 0) {
            if (lVar10 == 0) goto LAB_01fb127c;
            uVar17 = FUN_01f8cdf0(plVar12,*(undefined4 *)(lVar10 + 0x18),0);
            plVar12 = (long *)thunk_FUN_0124baac(uVar17,*(undefined8 *)PTR_DAT_027b3650);
            goto LAB_01fb15f4;
          }
        }
        if (lVar10 != 0) {
          plVar12 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027c1b38,
                                         *(undefined4 *)(lVar10 + 0x18));
LAB_01fb15f4:
          FUN_0195458c(lVar10,plVar12,0,*(undefined8 *)PTR_DAT_027c2740);
          return plVar12;
        }
      }
LAB_01fb127c:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar17 = thunk_FUN_0124bba8();
    puVar14 = PTR_DAT_027bcb18;
  }
  uVar13 = thunk_FUN_01279b34(puVar14);
  FUN_01e75914(uVar17,uVar13,0);
LAB_01fb1660:
  uVar13 = thunk_FUN_01279b34(PTR_DAT_027c2770);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar17,uVar13);
}


