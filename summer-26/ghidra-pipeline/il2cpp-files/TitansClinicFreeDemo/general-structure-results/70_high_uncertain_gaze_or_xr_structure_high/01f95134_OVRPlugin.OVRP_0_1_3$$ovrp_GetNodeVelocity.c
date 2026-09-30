/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeVelocity
ENTRY_POINT: 01f95134
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_18;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_0_1_3__ovrp_GetNodeVelocity(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x19;
  uint unaff_w20;
  uint uVar10;
  uint uVar11;
  long *unaff_x21;
  long lVar12;
  long unaff_x23;
  long lVar13;
  long unaff_x25;
  long lVar14;
  undefined8 uVar15;
  uint unaff_w26;
  long *plVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    uVar11 = unaff_w26 - 1;
    plVar4 = (long *)(**(code **)(param_1 + 0x1d8))(param_2,*(undefined8 *)(param_1 + 0x1e0));
    if (*(uint *)(unaff_x19 + 0x18) <= uVar11) break;
    plVar16 = (long *)(unaff_x19 + unaff_x25 * 8 + 0x20);
    lVar14 = *plVar16;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar5 = FUN_01f7f404(plVar4,lVar14,0);
    if ((uVar5 & 1) == 0) {
      uVar15 = *(undefined8 *)PTR_DAT_027b5b48;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar15 = FUN_01f7d8a0(uVar15,0);
      uVar5 = FUN_01f7f404(plVar4,uVar15,0);
      if ((uVar5 & 1) != 0) goto LAB_01f9531c;
      if (plVar4 == (long *)0x0) goto LAB_01f95820;
      uVar5 = FUN_01f81644(plVar4,0);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar11) break;
      plVar8 = (long *)*plVar16;
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,plVar8,*(undefined8 *)(*plVar4 + 0x290));
joined_r0x01f95318:
        if ((uVar5 & 1) != 0) goto LAB_01f9531c;
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_01f95820;
        plVar8 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,*(undefined8 *)(*plVar8 + 0x310));
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_027b3ec0)) {
            if (uVar11 < *(uint *)(unaff_x19 + 0x18)) {
              plVar16 = (long *)*plVar16;
              if (plVar16 != (long *)0x0) {
                plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                            (plVar16,*(undefined8 *)(*plVar16 + 0x310));
                plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x310));
                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                  thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                }
                lVar14 = *(long *)PTR_DAT_027b3ec0;
                if (plVar16 != (long *)0x0) {
                  if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                               -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01230f60(plVar16);
                  }
                }
                if (plVar4 != (long *)0x0) {
                  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8
                               ) != lVar14)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
                    FUN_01230f60(plVar4);
                  }
                }
                uVar5 = FUN_01f958f8(plVar16,plVar4);
                goto joined_r0x01f95318;
              }
              goto LAB_01f95820;
            }
            break;
          }
        }
      }
LAB_01f95344:
      uVar5 = unaff_x28;
      if (uVar11 != unaff_w20) goto LAB_01f9557c;
OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType:
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01f801dc(in_stack_00000010,0,0);
      uVar11 = unaff_w20;
      if ((uVar6 & 1) == 0) {
LAB_01f95524:
        uVar9 = *(uint *)(unaff_x21 + 3);
        if (uVar9 <= uVar5) break;
        lVar14 = unaff_x21[uVar5 + 4];
        if (lVar14 != 0) {
          lVar12 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar12 == 0) {
            uVar15 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar15,0);
          }
          uVar9 = (uint)unaff_x21[3];
        }
        if (uVar9 <= in_stack_00000018._4_4_) break;
        lVar12 = (long)(int)in_stack_00000018._4_4_;
        unaff_x21[lVar12 + 4] = lVar14;
        in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
        thunk_FUN_01286abc(unaff_x21 + lVar12 + 4,lVar14);
      }
      else {
        if (*(uint *)(unaff_x21 + 3) <= uVar5) break;
        plVar16 = unaff_x21 + uVar5 + 4;
        plVar4 = (long *)*plVar16;
        if ((plVar4 == (long *)0x0) ||
           (lVar14 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230)),
           lVar14 == 0)) goto LAB_01f95820;
        uVar6 = FUN_01f81644(lVar14,0);
        if ((uVar6 & 1) == 0) {
          if (*(uint *)(unaff_x21 + 3) <= uVar5) break;
          plVar16 = (long *)*plVar16;
          if ((plVar16 == (long *)0x0) ||
             (plVar4 = (long *)(**(code **)(*plVar16 + 0x228))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
             plVar4 == (long *)0x0)) goto LAB_01f95820;
          uVar6 = (**(code **)(*plVar4 + 0x288))
                            (plVar4,in_stack_00000010,*(undefined8 *)(*plVar4 + 0x290));
joined_r0x01f95520:
          if ((uVar6 & 1) != 0) goto LAB_01f95524;
        }
        else {
          if (in_stack_00000010 == (long *)0x0) goto LAB_01f95820;
          plVar4 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                     (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310))
          ;
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
            if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_027b3ec0)) {
              plVar8 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                         (in_stack_00000010,
                                          *(undefined8 *)(*in_stack_00000010 + 0x310));
              if (uVar5 < *(uint *)(unaff_x21 + 3)) {
                plVar16 = (long *)*plVar16;
                if ((plVar16 != (long *)0x0) &&
                   (plVar4 = (long *)(**(code **)(*plVar16 + 0x228))
                                               (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
                   plVar4 != (long *)0x0)) {
                  plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                             (plVar4,*(undefined8 *)(*plVar4 + 0x310));
                  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                    thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                  }
                  lVar14 = *(long *)PTR_DAT_027b3ec0;
                  if (plVar8 != (long *)0x0) {
                    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                                 -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01230f60(plVar8);
                    }
                  }
                  if (plVar4 != (long *)0x0) {
                    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                                 -8) != lVar14)) goto LAB_01f95824;
                  }
                  uVar6 = FUN_01f958f8(plVar8,plVar4);
                  goto joined_r0x01f95520;
                }
                goto LAB_01f95820;
              }
              break;
            }
          }
        }
      }
LAB_01f9557c:
      do {
        uVar9 = *(uint *)(unaff_x21 + 3);
        unaff_x28 = uVar5 + 1;
        if ((long)(int)uVar9 <= (long)unaff_x28) {
          if (in_stack_00000018._4_4_ == 0) {
            return 0;
          }
          if (in_stack_00000018._4_4_ == 1) {
            if (uVar9 != 0) goto LAB_01f957f8;
            goto LAB_01f9581c;
          }
          lVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
          if ((int)unaff_w20 < 1) goto LAB_01f95604;
          if (lVar14 == 0) goto LAB_01f95820;
          uVar11 = *(uint *)(lVar14 + 0x18);
          uVar5 = 0;
          goto LAB_01f955ec;
        }
        if (unaff_x19 == 0) goto LAB_01f95344;
        if (uVar9 <= unaff_x28) goto LAB_01f9581c;
        plVar4 = (long *)unaff_x21[uVar5 + 5];
        if ((plVar4 == (long *)0x0) ||
           (unaff_x23 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
           unaff_x23 == 0)) goto LAB_01f95820;
        uVar9 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
        uVar5 = unaff_x28;
      } while (unaff_w20 != uVar9);
      if ((int)unaff_w20 < 1) {
        uVar11 = 0;
        goto LAB_01f95344;
      }
      if (uVar9 == 0) break;
      unaff_x25 = 0;
      unaff_w26 = 1;
    }
    else {
LAB_01f9531c:
      uVar5 = unaff_x28;
      if (unaff_w20 == unaff_w26) goto OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType;
      unaff_x25 = (long)(int)unaff_w26;
      bVar2 = *(uint *)(unaff_x23 + 0x18) <= unaff_w26;
      unaff_w26 = unaff_w26 + 1;
      if (bVar2) break;
    }
    param_2 = *(long **)(unaff_x23 + unaff_x25 * 8 + 0x20);
    if (param_2 == (long *)0x0) goto LAB_01f95820;
    param_1 = *param_2;
  }
  goto LAB_01f9581c;
  while( true ) {
    *(int *)(lVar14 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (unaff_w20 == uVar5) break;
LAB_01f955ec:
    if (uVar11 <= uVar5) goto LAB_01f9581c;
  }
LAB_01f95604:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar11 = 0;
  }
  else {
    bVar2 = false;
    uVar9 = 1;
    uVar10 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_01f9581c;
      plVar16 = unaff_x21 + (long)(int)uVar10 + 4;
      plVar4 = (long *)*plVar16;
      if (plVar4 == (long *)0x0) goto LAB_01f95820;
      uVar15 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar9) goto LAB_01f9581c;
      plVar8 = unaff_x21 + (long)(int)uVar9 + 4;
      plVar4 = (long *)*plVar8;
      if (plVar4 == (long *)0x0) goto LAB_01f95820;
      uVar7 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95b1c(uVar15,uVar7,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_01f9581c;
        plVar4 = (long *)*plVar16;
        if (plVar4 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar15 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar9) goto LAB_01f9581c;
        plVar4 = (long *)*plVar8;
        if (plVar4 == (long *)0x0) goto LAB_01f95820;
        uVar7 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar15,lVar14,0,uVar7,lVar14,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar10) || (*(uint *)(unaff_x21 + 3) <= uVar9))
        goto LAB_01f9581c;
        lVar12 = *plVar16;
        lVar13 = *plVar8;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar3 = FUN_01f96308(lVar12,lVar13);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar11 = uVar9;
      if (iVar3 != 2) {
        uVar11 = uVar10;
      }
      uVar9 = uVar9 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar10 = uVar11;
    } while (in_stack_00000018._4_4_ != uVar9);
    if (bVar2) {
      uVar15 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar7 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar7,uVar15,0);
      uVar15 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar7,uVar15);
    }
  }
  if (uVar11 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar11;
LAB_01f957f8:
    return unaff_x21[4];
  }
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


