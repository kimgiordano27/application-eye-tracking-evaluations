/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 01f954a4
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


long OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(undefined8 param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint uVar13;
  long lVar14;
  long *unaff_x23;
  long *unaff_x24;
  long lVar15;
  long *plVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x01f954a4:
  if (unaff_x24 != (long *)0x0) {
    if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(param_2 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) !=
        param_2)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(unaff_x24);
    }
  }
  uVar5 = FUN_01f958f8(unaff_x23,unaff_x24);
joined_r0x01f954dc:
  uVar13 = unaff_w20;
  if ((uVar5 & 1) != 0) goto LAB_01f95524;
LAB_01f9557c:
  uVar5 = unaff_x28;
  uVar11 = *(uint *)(unaff_x21 + 3);
  unaff_x28 = uVar5 + 1;
  if ((long)unaff_x28 < (long)(int)uVar11) {
    if (unaff_x19 == 0) goto LAB_01f95344;
    if (unaff_x28 < uVar11) {
      plVar7 = (long *)unaff_x21[uVar5 + 5];
      if ((plVar7 != (long *)0x0) &&
         (lVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
         lVar6 != 0)) goto code_r0x01f95100;
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
  lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
  if ((int)unaff_w20 < 1) goto LAB_01f95604;
  if (lVar6 == 0) goto LAB_01f95820;
  uVar13 = *(uint *)(lVar6 + 0x18);
  uVar5 = 0;
  goto LAB_01f955ec;
code_r0x01f95100:
  uVar11 = (uint)*(undefined8 *)(lVar6 + 0x18);
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
      plVar7 = *(long **)(lVar6 + lVar14 * 8 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_01f95820;
      uVar13 = uVar11 - 1;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
      if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
      plVar16 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
      lVar14 = *plVar16;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f7f404(plVar7,lVar14,0);
      if ((uVar4 & 1) == 0) {
        uVar8 = *(undefined8 *)PTR_DAT_027b5b48;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar8 = FUN_01f7d8a0(uVar8,0);
        uVar4 = FUN_01f7f404(plVar7,uVar8,0);
        if ((uVar4 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_01f95820;
          uVar4 = FUN_01f81644(plVar7,0);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
          plVar10 = (long *)*plVar16;
          if ((uVar4 & 1) == 0) {
            uVar4 = (**(code **)(*plVar7 + 0x288))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x290));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_01f95820;
            plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar10 == (long *)0x0) goto LAB_01f95344;
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_01f95820;
            plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x310));
            unaff_x24 = (long *)(**(code **)(*plVar7 + 0x308))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x310));
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
            if (unaff_x24 != (long *)0x0) {
              if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                 (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8)
                  != lVar14)) goto LAB_01f95824;
            }
            uVar4 = FUN_01f958f8(plVar16,unaff_x24);
          }
          if ((uVar4 & 1) == 0) goto LAB_01f95344;
        }
      }
      if (unaff_w20 == uVar11) break;
      lVar14 = (long)(int)uVar11;
      bVar2 = *(uint *)(lVar6 + 0x18) <= uVar11;
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
    lVar6 = unaff_x21[unaff_x28 + 4];
    if (lVar6 != 0) {
      lVar14 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar14 == 0) {
        uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar8,0);
      }
      uVar13 = (uint)unaff_x21[3];
    }
    if (uVar13 <= in_stack_00000018._4_4_) goto LAB_01f9581c;
    lVar14 = (long)(int)in_stack_00000018._4_4_;
    unaff_x21[lVar14 + 4] = lVar6;
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    thunk_FUN_01286abc(unaff_x21 + lVar14 + 4,lVar6);
    uVar13 = unaff_w20;
    goto LAB_01f9557c;
  }
  if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
  plVar16 = unaff_x21 + uVar5 + 5;
  plVar7 = (long *)*plVar16;
  if ((plVar7 == (long *)0x0) ||
     (lVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)), lVar6 == 0))
  goto LAB_01f95820;
  uVar5 = FUN_01f81644(lVar6,0);
  if ((uVar5 & 1) != 0) {
    if (in_stack_00000010 == (long *)0x0) goto LAB_01f95820;
    plVar7 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                               (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
    uVar13 = unaff_w20;
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b3ec0))
      {
        unaff_x23 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                      (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310)
                                      );
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar16 + 0x228))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
           plVar7 == (long *)0x0)) goto LAB_01f95820;
        unaff_x24 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        param_2 = *(long *)PTR_DAT_027b3ec0;
        if (unaff_x23 != (long *)0x0) {
          if ((*(byte *)(*unaff_x23 + 0x130) < *(byte *)(param_2 + 0x130)) ||
             (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) !=
              param_2)) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(unaff_x23);
          }
        }
        goto code_r0x01f954a4;
      }
    }
    goto LAB_01f9557c;
  }
  if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
  plVar16 = (long *)*plVar16;
  if ((plVar16 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230)),
     plVar7 == (long *)0x0)) goto LAB_01f95820;
  uVar5 = (**(code **)(*plVar7 + 0x288))(plVar7,in_stack_00000010,*(undefined8 *)(*plVar7 + 0x290));
  goto joined_r0x01f954dc;
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (unaff_w20 == uVar5) break;
LAB_01f955ec:
    if (uVar13 <= uVar5) goto LAB_01f9581c;
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
      plVar7 = (long *)*plVar16;
      if (plVar7 == (long *)0x0) goto LAB_01f95820;
      uVar8 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f9581c;
      plVar10 = unaff_x21 + (long)(int)uVar11 + 4;
      plVar7 = (long *)*plVar10;
      if (plVar7 == (long *)0x0) goto LAB_01f95820;
      uVar9 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95b1c(uVar8,uVar9,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
        plVar7 = (long *)*plVar16;
        if (plVar7 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar8 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f9581c;
        plVar7 = (long *)*plVar10;
        if (plVar7 == (long *)0x0) goto LAB_01f95820;
        uVar9 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar8,lVar6,0,uVar9,lVar6,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar11))
        goto LAB_01f9581c;
        lVar14 = *plVar16;
        lVar15 = *plVar10;
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
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar9 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar9,uVar8,0);
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar9,uVar8);
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


