/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 01f9534c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_17;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  long unaff_x19;
  uint unaff_w20;
  uint uVar13;
  long *unaff_x21;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x01f9534c:
  do {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar5 = FUN_01f801dc(in_stack_00000010,0,0);
    uVar14 = unaff_w20;
    if ((uVar5 & 1) == 0) {
LAB_01f95524:
      uVar12 = *(uint *)(unaff_x21 + 3);
      if (uVar12 <= unaff_x28) goto LAB_01f9581c;
      lVar7 = unaff_x21[unaff_x28 + 4];
      if (lVar7 != 0) {
        lVar15 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar15 == 0) {
          uVar9 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar9,0);
        }
        uVar12 = (uint)unaff_x21[3];
      }
      if (uVar12 <= in_stack_00000018._4_4_) goto LAB_01f9581c;
      lVar15 = (long)(int)in_stack_00000018._4_4_;
      unaff_x21[lVar15 + 4] = lVar7;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
      thunk_FUN_01286abc(unaff_x21 + lVar15 + 4,lVar7);
    }
    else {
      if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
      plVar8 = unaff_x21 + unaff_x28 + 4;
      plVar6 = (long *)*plVar8;
      if ((plVar6 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         lVar7 == 0)) goto LAB_01f95820;
      uVar5 = FUN_01f81644(lVar7,0);
      if ((uVar5 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
        plVar8 = (long *)*plVar8;
        if ((plVar8 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230))
           , plVar6 == (long *)0x0)) goto LAB_01f95820;
        uVar5 = (**(code **)(*plVar6 + 0x288))
                          (plVar6,in_stack_00000010,*(undefined8 *)(*plVar6 + 0x290));
joined_r0x01f95520:
        if ((uVar5 & 1) != 0) goto LAB_01f95524;
      }
      else {
        if (in_stack_00000010 == (long *)0x0) goto LAB_01f95820;
        plVar6 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                   (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
        if (plVar6 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_027b3ec0)) {
            plVar6 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                       (in_stack_00000010,
                                        *(undefined8 *)(*in_stack_00000010 + 0x310));
            if (unaff_x28 < *(uint *)(unaff_x21 + 3)) {
              plVar8 = (long *)*plVar8;
              if ((plVar8 != (long *)0x0) &&
                 (plVar8 = (long *)(**(code **)(*plVar8 + 0x228))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x230)),
                 plVar8 != (long *)0x0)) {
                plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x310));
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                }
                lVar7 = *(long *)PTR_DAT_027b3ec0;
                if (plVar6 != (long *)0x0) {
                  if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8)
                      != lVar7)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01230f60(plVar6);
                  }
                }
                if (plVar8 != (long *)0x0) {
                  if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8)
                      != lVar7)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
                    FUN_01230f60(plVar8);
                  }
                }
                uVar5 = FUN_01f958f8(plVar6,plVar8);
                goto joined_r0x01f95520;
              }
              goto LAB_01f95820;
            }
            goto LAB_01f9581c;
          }
        }
      }
    }
LAB_01f9557c:
    do {
      uVar12 = *(uint *)(unaff_x21 + 3);
      uVar5 = unaff_x28 + 1;
      if ((long)(int)uVar12 <= (long)uVar5) {
        if (in_stack_00000018._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000018._4_4_ == 1) {
          if (uVar12 != 0) goto LAB_01f957f8;
          goto LAB_01f9581c;
        }
        lVar7 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
        if ((int)unaff_w20 < 1) goto LAB_01f95604;
        if (lVar7 == 0) goto LAB_01f95820;
        uVar14 = *(uint *)(lVar7 + 0x18);
        uVar5 = 0;
        goto LAB_01f955ec;
      }
      if (unaff_x19 != 0) {
        if (uVar12 <= uVar5) goto LAB_01f9581c;
        plVar6 = (long *)unaff_x21[unaff_x28 + 5];
        if ((plVar6 == (long *)0x0) ||
           (lVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)),
           lVar7 == 0)) goto LAB_01f95820;
        uVar12 = (uint)*(undefined8 *)(lVar7 + 0x18);
        unaff_x28 = uVar5;
        if (unaff_w20 != uVar12) goto LAB_01f9557c;
        if (0 < (int)unaff_w20) {
          if (uVar12 != 0) {
            lVar15 = 0;
            uVar12 = 1;
            do {
              plVar6 = *(long **)(lVar7 + lVar15 * 8 + 0x20);
              if (plVar6 == (long *)0x0) goto LAB_01f95820;
              uVar14 = uVar12 - 1;
              plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar14) break;
              plVar8 = (long *)(unaff_x19 + lVar15 * 8 + 0x20);
              lVar15 = *plVar8;
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar4 = FUN_01f7f404(plVar6,lVar15,0);
              if ((uVar4 & 1) == 0) {
                uVar9 = *(undefined8 *)PTR_DAT_027b5b48;
                if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar9 = FUN_01f7d8a0(uVar9,0);
                uVar4 = FUN_01f7f404(plVar6,uVar9,0);
                if ((uVar4 & 1) == 0) {
                  if (plVar6 == (long *)0x0) goto LAB_01f95820;
                  uVar4 = FUN_01f81644(plVar6,0);
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar14) break;
                  plVar11 = (long *)*plVar8;
                  if ((uVar4 & 1) == 0) {
                    uVar4 = (**(code **)(*plVar6 + 0x288))
                                      (plVar6,plVar11,*(undefined8 *)(*plVar6 + 0x290));
                  }
                  else {
                    if (plVar11 == (long *)0x0) goto LAB_01f95820;
                    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                                (plVar11,*(undefined8 *)(*plVar11 + 0x310));
                    if (plVar11 == (long *)0x0) goto LAB_01f95344;
                    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar14) break;
                    plVar8 = (long *)*plVar8;
                    if (plVar8 == (long *)0x0) goto LAB_01f95820;
                    plVar11 = (long *)(**(code **)(*plVar8 + 0x308))
                                                (plVar8,*(undefined8 *)(*plVar8 + 0x310));
                    plVar8 = (long *)(**(code **)(*plVar6 + 0x308))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x310));
                    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                    }
                    lVar15 = *(long *)PTR_DAT_027b3ec0;
                    if (plVar11 != (long *)0x0) {
                      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8
                                   + -8) != lVar15)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(plVar11);
                      }
                    }
                    if (plVar8 != (long *)0x0) {
                      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8
                                   + -8) != lVar15)) goto LAB_01f95824;
                    }
                    uVar4 = FUN_01f958f8(plVar11,plVar8);
                  }
                  if ((uVar4 & 1) == 0) goto LAB_01f95344;
                }
              }
              if (unaff_w20 == uVar12) goto code_r0x01f9534c;
              lVar15 = (long)(int)uVar12;
              bVar2 = *(uint *)(lVar7 + 0x18) <= uVar12;
              uVar12 = uVar12 + 1;
              if (bVar2) break;
            } while( true );
          }
          goto LAB_01f9581c;
        }
        uVar14 = 0;
      }
LAB_01f95344:
      unaff_x28 = uVar5;
    } while (uVar14 != unaff_w20);
  } while( true );
  while( true ) {
    *(int *)(lVar7 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (unaff_w20 == uVar5) break;
LAB_01f955ec:
    if (uVar14 <= uVar5) goto LAB_01f9581c;
  }
LAB_01f95604:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar14 = 0;
  }
  else {
    bVar2 = false;
    uVar12 = 1;
    uVar13 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_01f9581c;
      plVar8 = unaff_x21 + (long)(int)uVar13 + 4;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto LAB_01f95820;
      uVar9 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
      plVar11 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar6 = (long *)*plVar11;
      if (plVar6 == (long *)0x0) goto LAB_01f95820;
      uVar10 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95b1c(uVar9,uVar10,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_01f9581c;
        plVar6 = (long *)*plVar8;
        if (plVar6 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar9 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
        plVar6 = (long *)*plVar11;
        if (plVar6 == (long *)0x0) goto LAB_01f95820;
        uVar10 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar9,lVar7,0,uVar10,lVar7,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar13) || (*(uint *)(unaff_x21 + 3) <= uVar12))
        goto LAB_01f9581c;
        lVar15 = *plVar8;
        lVar16 = *plVar11;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar3 = FUN_01f96308(lVar15,lVar16);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar14 = uVar12;
      if (iVar3 != 2) {
        uVar14 = uVar13;
      }
      uVar12 = uVar12 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar13 = uVar14;
    } while (in_stack_00000018._4_4_ != uVar12);
    if (bVar2) {
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar10 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar10,uVar9,0);
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar10,uVar9);
    }
  }
  if (uVar14 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar14;
LAB_01f957f8:
    return unaff_x21[4];
  }
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


