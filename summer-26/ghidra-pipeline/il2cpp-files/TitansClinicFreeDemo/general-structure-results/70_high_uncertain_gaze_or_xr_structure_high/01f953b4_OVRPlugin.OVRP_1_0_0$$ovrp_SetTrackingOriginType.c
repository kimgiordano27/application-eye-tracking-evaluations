/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_SetTrackingOriginType
ENTRY_POINT: 01f953b4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_0_0__ovrp_SetTrackingOriginType(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long unaff_x19;
  uint unaff_w20;
  uint uVar13;
  long *unaff_x21;
  uint uVar14;
  long *unaff_x22;
  long lVar15;
  long *unaff_x23;
  long lVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x01f953b4:
  plVar5 = (long *)(**(code **)(param_1 + 0x308))(unaff_x23,*(undefined8 *)(param_1 + 0x310));
  uVar14 = unaff_w20;
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b3ec0)) {
      plVar5 = (long *)(**(code **)(*unaff_x23 + 0x308))
                                 (unaff_x23,*(undefined8 *)(*unaff_x23 + 0x310));
      if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
      plVar6 = (long *)*unaff_x22;
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         plVar6 == (long *)0x0)) goto LAB_01f95820;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      lVar11 = *(long *)PTR_DAT_027b3ec0;
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar5);
        }
      }
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar6);
        }
      }
      uVar7 = FUN_01f958f8(plVar5,plVar6);
      if ((uVar7 & 1) != 0) goto LAB_01f95524;
    }
  }
LAB_01f9557c:
  uVar7 = unaff_x28;
  uVar12 = *(uint *)(unaff_x21 + 3);
  unaff_x28 = uVar7 + 1;
  if ((long)unaff_x28 < (long)(int)uVar12) {
    if (unaff_x19 == 0) goto LAB_01f95344;
    if (unaff_x28 < uVar12) {
      plVar5 = (long *)unaff_x21[uVar7 + 5];
      if ((plVar5 != (long *)0x0) &&
         (lVar11 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
         lVar11 != 0)) goto code_r0x01f95100;
      goto LAB_01f95820;
    }
    goto LAB_01f9581c;
  }
  if (in_stack_00000018._4_4_ == 0) {
    return 0;
  }
  if (in_stack_00000018._4_4_ == 1) {
    if (uVar12 != 0) goto LAB_01f957f8;
    goto LAB_01f9581c;
  }
  lVar11 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
  if ((int)unaff_w20 < 1) goto LAB_01f95604;
  if (lVar11 == 0) goto LAB_01f95820;
  uVar14 = *(uint *)(lVar11 + 0x18);
  uVar7 = 0;
  goto LAB_01f955ec;
code_r0x01f95100:
  uVar12 = (uint)*(undefined8 *)(lVar11 + 0x18);
  if (unaff_w20 == uVar12) {
    if ((int)unaff_w20 < 1) {
      uVar14 = 0;
LAB_01f95344:
      if (uVar14 != unaff_w20) goto LAB_01f9557c;
    }
    else {
      if (uVar12 == 0) goto LAB_01f9581c;
      lVar15 = 0;
      uVar12 = 1;
      while( true ) {
        plVar5 = *(long **)(lVar11 + lVar15 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_01f95820;
        uVar14 = uVar12 - 1;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if (*(uint *)(unaff_x19 + 0x18) <= uVar14) goto LAB_01f9581c;
        plVar6 = (long *)(unaff_x19 + lVar15 * 8 + 0x20);
        lVar15 = *plVar6;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar4 = FUN_01f7f404(plVar5,lVar15,0);
        if ((uVar4 & 1) == 0) {
          uVar8 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar8 = FUN_01f7d8a0(uVar8,0);
          uVar4 = FUN_01f7f404(plVar5,uVar8,0);
          if ((uVar4 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_01f95820;
            uVar4 = FUN_01f81644(plVar5,0);
            if (*(uint *)(unaff_x19 + 0x18) <= uVar14) goto LAB_01f9581c;
            plVar10 = (long *)*plVar6;
            if ((uVar4 & 1) == 0) {
              uVar4 = (**(code **)(*plVar5 + 0x288))
                                (plVar5,plVar10,*(undefined8 *)(*plVar5 + 0x290));
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
              if (*(uint *)(unaff_x19 + 0x18) <= uVar14) goto LAB_01f9581c;
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_01f95820;
              plVar10 = (long *)(**(code **)(*plVar6 + 0x308))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x310));
              plVar6 = (long *)(**(code **)(*plVar5 + 0x308))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x310));
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
              }
              lVar15 = *(long *)PTR_DAT_027b3ec0;
              if (plVar10 != (long *)0x0) {
                if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                    != lVar15)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01230f60(plVar10);
                }
              }
              if (plVar6 != (long *)0x0) {
                if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar15 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar15 + 0x130) * 8 + -8)
                    != lVar15)) goto LAB_01f95824;
              }
              uVar4 = FUN_01f958f8(plVar10,plVar6);
            }
            if ((uVar4 & 1) == 0) goto LAB_01f95344;
          }
        }
        if (unaff_w20 == uVar12) break;
        lVar15 = (long)(int)uVar12;
        bVar2 = *(uint *)(lVar11 + 0x18) <= uVar12;
        uVar12 = uVar12 + 1;
        if (bVar2) goto LAB_01f9581c;
      }
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f801dc(in_stack_00000010,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
      unaff_x22 = unaff_x21 + uVar7 + 5;
      plVar5 = (long *)*unaff_x22;
      if ((plVar5 == (long *)0x0) ||
         (lVar11 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         lVar11 == 0)) goto LAB_01f95820;
      uVar7 = FUN_01f81644(lVar11,0);
      if ((uVar7 & 1) != 0) goto code_r0x01f953ac;
      if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
      plVar5 = (long *)*unaff_x22;
      if ((plVar5 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         plVar5 == (long *)0x0)) goto LAB_01f95820;
      uVar7 = (**(code **)(*plVar5 + 0x288))
                        (plVar5,in_stack_00000010,*(undefined8 *)(*plVar5 + 0x290));
      uVar14 = unaff_w20;
      if ((uVar7 & 1) == 0) goto LAB_01f9557c;
    }
LAB_01f95524:
    uVar14 = *(uint *)(unaff_x21 + 3);
    if (uVar14 <= unaff_x28) goto LAB_01f9581c;
    lVar11 = unaff_x21[unaff_x28 + 4];
    if (lVar11 != 0) {
      lVar15 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar15 == 0) {
        uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar8,0);
      }
      uVar14 = (uint)unaff_x21[3];
    }
    if (uVar14 <= in_stack_00000018._4_4_) goto LAB_01f9581c;
    lVar15 = (long)(int)in_stack_00000018._4_4_;
    unaff_x21[lVar15 + 4] = lVar11;
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    thunk_FUN_01286abc(unaff_x21 + lVar15 + 4,lVar11);
    uVar14 = unaff_w20;
  }
  goto LAB_01f9557c;
code_r0x01f953ac:
  if (in_stack_00000010 == (long *)0x0) goto LAB_01f95820;
  param_1 = *in_stack_00000010;
  unaff_x23 = in_stack_00000010;
  goto code_r0x01f953b4;
  while( true ) {
    *(int *)(lVar11 + 0x20 + uVar7 * 4) = (int)uVar7;
    uVar7 = uVar7 + 1;
    if (unaff_w20 == uVar7) break;
LAB_01f955ec:
    if (uVar14 <= uVar7) goto LAB_01f9581c;
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
      plVar6 = unaff_x21 + (long)(int)uVar13 + 4;
      plVar5 = (long *)*plVar6;
      if (plVar5 == (long *)0x0) goto LAB_01f95820;
      uVar8 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
      plVar10 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar5 = (long *)*plVar10;
      if (plVar5 == (long *)0x0) goto LAB_01f95820;
      uVar9 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95b1c(uVar8,uVar9,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_01f9581c;
        plVar5 = (long *)*plVar6;
        if (plVar5 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar8 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
        plVar5 = (long *)*plVar10;
        if (plVar5 == (long *)0x0) goto LAB_01f95820;
        uVar9 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar8,lVar11,0,uVar9,lVar11,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar13) || (*(uint *)(unaff_x21 + 3) <= uVar12))
        goto LAB_01f9581c;
        lVar15 = *plVar6;
        lVar16 = *plVar10;
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
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar9 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar9,uVar8,0);
      uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar9,uVar8);
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


