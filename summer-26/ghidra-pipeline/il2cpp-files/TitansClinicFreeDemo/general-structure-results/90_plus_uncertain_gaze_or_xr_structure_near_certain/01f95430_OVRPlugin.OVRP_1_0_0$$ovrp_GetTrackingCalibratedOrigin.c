/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 01f95430
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  code *in_x9;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint uVar13;
  long lVar14;
  long *unaff_x23;
  long lVar15;
  long *plVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x01f95430:
  plVar5 = (long *)(*in_x9)(param_2,*(undefined8 *)(param_1 + 0x230));
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
    }
    lVar10 = *(long *)PTR_DAT_027b3ec0;
    if (unaff_x23 != (long *)0x0) {
      if ((*(byte *)(*unaff_x23 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
          lVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(unaff_x23);
      }
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)
         ) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar5);
      }
    }
    uVar6 = FUN_01f958f8(unaff_x23,plVar5);
joined_r0x01f954dc:
    uVar13 = unaff_w20;
    if ((uVar6 & 1) != 0) goto LAB_01f95524;
LAB_01f9557c:
    uVar6 = unaff_x28;
    uVar11 = *(uint *)(unaff_x21 + 3);
    unaff_x28 = uVar6 + 1;
    if ((long)unaff_x28 < (long)(int)uVar11) {
      if (unaff_x19 == 0) goto LAB_01f95344;
      if (unaff_x28 < uVar11) {
        plVar5 = (long *)unaff_x21[uVar6 + 5];
        if ((plVar5 != (long *)0x0) &&
           (lVar10 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
           lVar10 != 0)) goto code_r0x01f95100;
        goto LAB_01f95820;
      }
      goto LAB_01f9581c;
    }
    if (in_stack_00000018._4_4_ == 0) {
      return 0;
    }
    if (in_stack_00000018._4_4_ == 1) {
      if (uVar11 == 0) goto LAB_01f9581c;
      goto LAB_01f957f8;
    }
    lVar10 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
    if ((int)unaff_w20 < 1) goto LAB_01f95604;
    if (lVar10 == 0) goto LAB_01f95820;
    uVar13 = *(uint *)(lVar10 + 0x18);
    uVar6 = 0;
    goto LAB_01f955ec;
  }
  goto LAB_01f95820;
code_r0x01f95100:
  uVar11 = (uint)*(undefined8 *)(lVar10 + 0x18);
  if (unaff_w20 != uVar11) goto LAB_01f9557c;
  if ((int)unaff_w20 < 1) {
    uVar13 = 0;
LAB_01f95344:
    if (uVar13 != unaff_w20) goto LAB_01f9557c;
  }
  else {
    if (uVar11 == 0) goto LAB_01f9581c;
    lVar14 = 0;
    uVar11 = 1;
    while( true ) {
      plVar5 = *(long **)(lVar10 + lVar14 * 8 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_01f95820;
      uVar13 = uVar11 - 1;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
      if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
      plVar16 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
      lVar14 = *plVar16;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f7f404(plVar5,lVar14,0);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_027b5b48;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar7 = FUN_01f7d8a0(uVar7,0);
        uVar4 = FUN_01f7f404(plVar5,uVar7,0);
        if ((uVar4 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_01f95820;
          uVar4 = FUN_01f81644(plVar5,0);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
          plVar9 = (long *)*plVar16;
          if ((uVar4 & 1) == 0) {
            uVar4 = (**(code **)(*plVar5 + 0x288))(plVar5,plVar9,*(undefined8 *)(*plVar5 + 0x290));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_01f95820;
            plVar9 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310))
            ;
            if (plVar9 == (long *)0x0) goto LAB_01f95344;
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_01f95820;
            plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x310));
            plVar5 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310))
            ;
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
            }
            lVar14 = *(long *)PTR_DAT_027b3ec0;
            if (plVar16 != (long *)0x0) {
              if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                  != lVar14)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(plVar16);
              }
            }
            if (plVar5 != (long *)0x0) {
              if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                  lVar14)) goto LAB_01f95824;
            }
            uVar4 = FUN_01f958f8(plVar16,plVar5);
          }
          if ((uVar4 & 1) == 0) goto LAB_01f95344;
        }
      }
      if (unaff_w20 == uVar11) break;
      lVar14 = (long)(int)uVar11;
      bVar2 = *(uint *)(lVar10 + 0x18) <= uVar11;
      uVar11 = uVar11 + 1;
      if (bVar2) goto LAB_01f9581c;
    }
  }
  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar4 = FUN_01f801dc(in_stack_00000010,0,0);
  if ((uVar4 & 1) == 0) {
LAB_01f95524:
    uVar13 = *(uint *)(unaff_x21 + 3);
    if (uVar13 <= unaff_x28) goto LAB_01f9581c;
    lVar10 = unaff_x21[unaff_x28 + 4];
    if (lVar10 != 0) {
      lVar14 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar14 == 0) {
        uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar7,0);
      }
      uVar13 = (uint)unaff_x21[3];
    }
    if (uVar13 <= in_stack_00000018._4_4_) goto LAB_01f9581c;
    lVar14 = (long)(int)in_stack_00000018._4_4_;
    unaff_x21[lVar14 + 4] = lVar10;
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    thunk_FUN_01286abc(unaff_x21 + lVar14 + 4,lVar10);
    uVar13 = unaff_w20;
    goto LAB_01f9557c;
  }
  if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
  param_2 = unaff_x21 + uVar6 + 5;
  plVar5 = (long *)*param_2;
  if ((plVar5 == (long *)0x0) ||
     (lVar10 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)), lVar10 == 0)
     ) goto LAB_01f95820;
  uVar6 = FUN_01f81644(lVar10,0);
  if ((uVar6 & 1) != 0) {
    if (in_stack_00000010 == (long *)0x0) goto LAB_01f95820;
    plVar5 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                               (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
    uVar13 = unaff_w20;
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b3ec0))
      {
        unaff_x23 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                      (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310)
                                      );
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_01f95820;
        param_1 = *param_2;
        in_x9 = *(code **)(param_1 + 0x228);
        goto code_r0x01f95430;
      }
    }
    goto LAB_01f9557c;
  }
  if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
  param_2 = (long *)*param_2;
  if ((param_2 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230)),
     plVar5 == (long *)0x0)) goto LAB_01f95820;
  uVar6 = (**(code **)(*plVar5 + 0x288))(plVar5,in_stack_00000010,*(undefined8 *)(*plVar5 + 0x290));
  goto joined_r0x01f954dc;
  while( true ) {
    *(int *)(lVar10 + 0x20 + uVar6 * 4) = (int)uVar6;
    uVar6 = uVar6 + 1;
    if (unaff_w20 == uVar6) break;
LAB_01f955ec:
    if (uVar13 <= uVar6) goto LAB_01f9581c;
  }
LAB_01f95604:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar13 = 0;
  }
  else {
    bVar2 = false;
    uVar11 = 1;
    uVar12 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
      plVar16 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar5 = (long *)*plVar16;
      if (plVar5 == (long *)0x0) goto LAB_01f95820;
      uVar7 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f9581c;
      plVar9 = unaff_x21 + (long)(int)uVar11 + 4;
      plVar5 = (long *)*plVar9;
      if (plVar5 == (long *)0x0) goto LAB_01f95820;
      uVar8 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95b1c(uVar7,uVar8,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
        plVar5 = (long *)*plVar16;
        if (plVar5 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar7 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f9581c;
        plVar5 = (long *)*plVar9;
        if (plVar5 == (long *)0x0) goto LAB_01f95820;
        uVar8 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar7,lVar10,0,uVar8,lVar10,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar11))
        goto LAB_01f9581c;
        lVar14 = *plVar16;
        lVar15 = *plVar9;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar3 = FUN_01f96308(lVar14,lVar15);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar13 = uVar11;
      if (iVar3 != 2) {
        uVar13 = uVar12;
      }
      uVar11 = uVar11 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar12 = uVar13;
    } while (in_stack_00000018._4_4_ != uVar11);
    if (bVar2) {
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar8 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar8,uVar7,0);
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar8,uVar7);
    }
  }
  if (uVar13 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar13;
LAB_01f957f8:
    return unaff_x21[4];
  }
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


