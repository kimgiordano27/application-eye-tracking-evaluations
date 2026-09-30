/*
FUNCTION_NAME: FUN_01f94efc
ENTRY_POINT: 01f94efc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


long FUN_01f94efc(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  uint local_64;
  
  if ((DAT_0293defc & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1c20);
    thunk_FUN_01279b34(PTR_DAT_027c1390);
    thunk_FUN_01279b34(PTR_DAT_027b1ca8);
    thunk_FUN_01279b34(PTR_DAT_027c1c28);
    thunk_FUN_01279b34(PTR_DAT_027bcec8);
    thunk_FUN_01279b34(PTR_DAT_027b5b48);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027c1c30);
    thunk_FUN_01279b34(PTR_DAT_027c1c38);
    DAT_0293defc = 1;
  }
  puVar3 = PTR_DAT_027c1c38;
  if (param_5 != 0) {
    lVar6 = *(long *)PTR_DAT_027c1c38;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar6 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_027c1c20;
    lVar17 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar17 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar6 = *(long *)puVar3;
      }
      uVar18 = **(undefined8 **)(lVar6 + 0xb8);
      lVar17 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1c28);
      FUN_01b3fbf8(lVar17,uVar18,*(undefined8 *)PTR_DAT_027c1c30,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar7 = lVar17;
      thunk_FUN_01286abc(plVar7,lVar17);
    }
    uVar8 = FUN_013edd6c(param_5,lVar17,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3df8);
      uVar18 = thunk_FUN_0124bba8();
      uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1c48);
      FUN_01e75914(uVar18,uVar11,0);
      uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar18,uVar11);
    }
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1be8);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar18 = thunk_FUN_0124bba8();
    uVar12 = thunk_FUN_01279b34(PTR_DAT_027b3fe8);
    FUN_01e7598c(uVar18,uVar11,uVar12,0);
    goto LAB_01f95884;
  }
  lVar6 = FUN_01f8a1a8(param_3,0);
  if (lVar6 == 0) {
    plVar7 = (long *)0x0;
    if (param_5 == 0) goto LAB_01f950a4;
LAB_01f95090:
    uVar15 = *(uint *)(param_5 + 0x18);
    plVar10 = (long *)PTR_DAT_027b32e0;
  }
  else {
    uVar18 = *(undefined8 *)PTR_DAT_027bcec8;
    plVar7 = (long *)thunk_FUN_0124baac(lVar6,uVar18);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(lVar6,uVar18);
    }
    if (param_5 != 0) goto LAB_01f95090;
LAB_01f950a4:
    uVar15 = 0;
    plVar10 = (long *)PTR_DAT_027b32e0;
  }
  PTR_DAT_027b32e0 = (undefined *)plVar10;
  if (plVar7 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar8 = plVar7[3] & 0xffffffff;
  if ((int)plVar7[3] < 1) {
    local_64 = 0;
  }
  else {
    local_64 = 0;
    uVar16 = 0;
    uVar21 = 0;
    do {
      if (param_5 == 0) {
LAB_01f95344:
        if (uVar16 == uVar15) {
OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType:
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar8 = FUN_01f801dc(param_4,0,0);
          uVar16 = uVar15;
          if ((uVar8 & 1) == 0) {
LAB_01f95524:
            uVar14 = *(uint *)(plVar7 + 3);
            if (uVar14 <= uVar21) goto LAB_01f9581c;
            lVar6 = plVar7[uVar21 + 4];
            if (lVar6 != 0) {
              lVar17 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar17 == 0) {
                uVar18 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
                FUN_01230b78(uVar18,0);
              }
              uVar14 = (uint)plVar7[3];
            }
            if (uVar14 <= local_64) goto LAB_01f9581c;
            lVar17 = (long)(int)local_64;
            plVar7[lVar17 + 4] = lVar6;
            local_64 = local_64 + 1;
            thunk_FUN_01286abc(plVar7 + lVar17 + 4,lVar6);
          }
          else {
            if (*(uint *)(plVar7 + 3) <= uVar21) goto LAB_01f9581c;
            plVar20 = plVar7 + uVar21 + 4;
            plVar9 = (long *)*plVar20;
            if ((plVar9 == (long *)0x0) ||
               (lVar6 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230)),
               lVar6 == 0)) goto LAB_01f95820;
            uVar8 = FUN_01f81644(lVar6,0);
            if ((uVar8 & 1) == 0) {
              if (*(uint *)(plVar7 + 3) <= uVar21) goto LAB_01f9581c;
              plVar20 = (long *)*plVar20;
              if ((plVar20 == (long *)0x0) ||
                 (plVar9 = (long *)(**(code **)(*plVar20 + 0x228))
                                             (plVar20,*(undefined8 *)(*plVar20 + 0x230)),
                 plVar9 == (long *)0x0)) goto LAB_01f95820;
              uVar8 = (**(code **)(*plVar9 + 0x288))
                                (plVar9,param_4,*(undefined8 *)(*plVar9 + 0x290));
joined_r0x01f95520:
              if ((uVar8 & 1) != 0) goto LAB_01f95524;
            }
            else {
              if (param_4 == (long *)0x0) goto LAB_01f95820;
              plVar9 = (long *)(**(code **)(*param_4 + 0x308))
                                         (param_4,*(undefined8 *)(*param_4 + 0x310));
              if (plVar9 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_027b3ec0)) {
                  plVar13 = (long *)(**(code **)(*param_4 + 0x308))
                                              (param_4,*(undefined8 *)(*param_4 + 0x310));
                  if (uVar21 < *(uint *)(plVar7 + 3)) {
                    plVar20 = (long *)*plVar20;
                    if ((plVar20 != (long *)0x0) &&
                       (plVar9 = (long *)(**(code **)(*plVar20 + 0x228))
                                                   (plVar20,*(undefined8 *)(*plVar20 + 0x230)),
                       plVar9 != (long *)0x0)) {
                      plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                                 (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                      }
                      lVar6 = *(long *)PTR_DAT_027b3ec0;
                      if (plVar13 != (long *)0x0) {
                        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar13 + 200) +
                                      (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar13);
                        }
                      }
                      if (plVar9 != (long *)0x0) {
                        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8
                                     + -8) != lVar6)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar9);
                        }
                      }
                      uVar8 = FUN_01f958f8(plVar13,plVar9);
                      goto joined_r0x01f95520;
                    }
                    goto LAB_01f95820;
                  }
                  goto LAB_01f9581c;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar8 <= uVar21) goto LAB_01f9581c;
        plVar9 = (long *)plVar7[uVar21 + 4];
        if ((plVar9 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           lVar6 == 0)) goto LAB_01f95820;
        uVar14 = (uint)*(undefined8 *)(lVar6 + 0x18);
        if (uVar15 == uVar14) {
          if ((int)uVar15 < 1) {
            uVar16 = 0;
            goto LAB_01f95344;
          }
          if (uVar14 != 0) {
            lVar17 = 0;
            uVar14 = 1;
            while( true ) {
              plVar9 = *(long **)(lVar6 + lVar17 * 8 + 0x20);
              if (plVar9 == (long *)0x0) goto LAB_01f95820;
              uVar16 = uVar14 - 1;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (*(uint *)(param_5 + 0x18) <= uVar16) goto LAB_01f9581c;
              plVar20 = (long *)(param_5 + lVar17 * 8 + 0x20);
              lVar17 = *plVar20;
              if (*(int *)(*plVar10 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar8 = FUN_01f7f404(plVar9,lVar17,0);
              if ((uVar8 & 1) == 0) {
                uVar18 = *(undefined8 *)PTR_DAT_027b5b48;
                if (*(int *)(*plVar10 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar18 = FUN_01f7d8a0(uVar18,0);
                uVar8 = FUN_01f7f404(plVar9,uVar18,0);
                if ((uVar8 & 1) == 0) {
                  if (plVar9 == (long *)0x0) goto LAB_01f95820;
                  uVar8 = FUN_01f81644(plVar9,0);
                  if (*(uint *)(param_5 + 0x18) <= uVar16) goto LAB_01f9581c;
                  plVar13 = (long *)*plVar20;
                  if ((uVar8 & 1) == 0) {
                    uVar8 = (**(code **)(*plVar9 + 0x288))
                                      (plVar9,plVar13,*(undefined8 *)(*plVar9 + 0x290));
                  }
                  else {
                    if (plVar13 == (long *)0x0) goto LAB_01f95820;
                    plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x310));
                    if (plVar13 == (long *)0x0) goto LAB_01f95344;
                    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
                    if (*(uint *)(param_5 + 0x18) <= uVar16) goto LAB_01f9581c;
                    plVar20 = (long *)*plVar20;
                    if (plVar20 == (long *)0x0) goto LAB_01f95820;
                    plVar20 = (long *)(**(code **)(*plVar20 + 0x308))
                                                (plVar20,*(undefined8 *)(*plVar20 + 0x310));
                    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                               (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                    }
                    lVar17 = *(long *)PTR_DAT_027b3ec0;
                    if (plVar20 != (long *)0x0) {
                      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8
                                   + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(plVar20);
                      }
                    }
                    if (plVar9 != (long *)0x0) {
                      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8
                                   + -8) != lVar17)) goto LAB_01f95824;
                    }
                    uVar8 = FUN_01f958f8(plVar20,plVar9);
                  }
                  if ((uVar8 & 1) == 0) goto LAB_01f95344;
                }
              }
              if (uVar15 == uVar14) break;
              lVar17 = (long)(int)uVar14;
              bVar4 = *(uint *)(lVar6 + 0x18) <= uVar14;
              uVar14 = uVar14 + 1;
              if (bVar4) goto LAB_01f9581c;
            }
            goto OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType;
          }
          goto LAB_01f9581c;
        }
      }
      uVar8 = (ulong)*(uint *)(plVar7 + 3);
      uVar21 = uVar21 + 1;
    } while ((long)uVar21 < (long)(int)*(uint *)(plVar7 + 3));
  }
  if (local_64 == 0) {
    lVar6 = 0;
  }
  else {
    if (local_64 == 1) {
      if ((int)uVar8 == 0) {
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
    }
    else {
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,uVar15);
      if (0 < (int)uVar15) {
        if (lVar6 == 0) goto LAB_01f95820;
        uVar16 = *(uint *)(lVar6 + 0x18);
        uVar8 = 0;
        do {
          if (uVar16 <= uVar8) goto LAB_01f9581c;
          *(int *)(lVar6 + 0x20 + uVar8 * 4) = (int)uVar8;
          uVar8 = uVar8 + 1;
        } while (uVar15 != uVar8);
      }
      if ((int)local_64 < 2) {
        uVar15 = 0;
      }
      else {
        bVar4 = false;
        uVar16 = 1;
        uVar14 = 0;
        do {
          if (*(uint *)(plVar7 + 3) <= uVar14) goto LAB_01f9581c;
          plVar9 = plVar7 + (long)(int)uVar14 + 4;
          plVar10 = (long *)*plVar9;
          if (plVar10 == (long *)0x0) goto LAB_01f95820;
          uVar18 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
          if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_01f9581c;
          plVar20 = plVar7 + (long)(int)uVar16 + 4;
          plVar10 = (long *)*plVar20;
          if (plVar10 == (long *)0x0) goto LAB_01f95820;
          uVar11 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
          }
          iVar5 = FUN_01f95b1c(uVar18,uVar11,param_4);
          if ((param_5 != 0) && (iVar5 == 0)) {
            if (*(uint *)(plVar7 + 3) <= uVar14) goto LAB_01f9581c;
            plVar10 = (long *)*plVar9;
            if (plVar10 == (long *)0x0) goto LAB_01f95820;
            uVar18 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_01f9581c;
            plVar10 = (long *)*plVar20;
            if (plVar10 == (long *)0x0) goto LAB_01f95820;
            uVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
            }
            iVar5 = FUN_01f95eb8(uVar18,lVar6,0,uVar11,lVar6,0,param_5,0);
          }
          if (iVar5 == 0) {
            if ((*(uint *)(plVar7 + 3) <= uVar14) || (*(uint *)(plVar7 + 3) <= uVar16))
            goto LAB_01f9581c;
            lVar17 = *plVar9;
            lVar19 = *plVar20;
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            iVar5 = FUN_01f96308(lVar17,lVar19);
            bVar4 = (bool)(bVar4 | iVar5 == 0);
          }
          uVar15 = uVar16;
          if (iVar5 != 2) {
            uVar15 = uVar14;
          }
          uVar16 = uVar16 + 1;
          bVar4 = (bool)(bVar4 & iVar5 != 2);
          uVar14 = uVar15;
        } while (local_64 != uVar16);
        if (bVar4) {
          uVar11 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar18 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar18,uVar11,0);
LAB_01f95884:
          uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar18,uVar11);
        }
      }
      if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_01f9581c;
      plVar7 = plVar7 + (int)uVar15;
    }
    lVar6 = plVar7[4];
  }
  return lVar6;
}


