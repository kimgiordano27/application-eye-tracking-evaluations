/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$.cctor
ENTRY_POINT: 01f95520
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_0_0___cctor(ulong param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
joined_r0x01f95520:
  uVar13 = unaff_w20;
  if ((param_1 & 1) == 0) goto LAB_01f9557c;
LAB_01f95524:
  uVar13 = *(uint *)(unaff_x21 + 3);
  if (unaff_x28 < uVar13) {
    lVar14 = unaff_x21[unaff_x28 + 4];
    if (lVar14 != 0) {
      lVar5 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar5 == 0) {
        uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar7,0);
      }
      uVar13 = (uint)unaff_x21[3];
    }
    if (in_stack_00000018._4_4_ < uVar13) {
      lVar5 = (long)(int)in_stack_00000018._4_4_;
      unaff_x21[lVar5 + 4] = lVar14;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
      thunk_FUN_01286abc(unaff_x21 + lVar5 + 4,lVar14);
      uVar13 = unaff_w20;
LAB_01f9557c:
      uVar11 = unaff_x28;
      uVar10 = *(uint *)(unaff_x21 + 3);
      unaff_x28 = uVar11 + 1;
      if ((long)unaff_x28 < (long)(int)uVar10) {
        if (unaff_x19 == 0) goto LAB_01f95344;
        if (unaff_x28 < uVar10) {
          plVar6 = (long *)unaff_x21[uVar11 + 5];
          if ((plVar6 != (long *)0x0) &&
             (lVar14 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)),
             lVar14 != 0)) goto code_r0x01f95100;
          goto LAB_01f95820;
        }
        goto LAB_01f9581c;
      }
      if (in_stack_00000018._4_4_ == 0) {
        return 0;
      }
      if (in_stack_00000018._4_4_ == 1) {
        if (uVar10 != 0) goto LAB_01f957f8;
        goto LAB_01f9581c;
      }
      lVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
      if ((int)unaff_w20 < 1) goto LAB_01f95604;
      if (lVar14 == 0) goto LAB_01f95820;
      uVar13 = *(uint *)(lVar14 + 0x18);
      uVar11 = 0;
      goto LAB_01f955ec;
    }
  }
  goto LAB_01f9581c;
code_r0x01f95100:
  uVar10 = (uint)*(undefined8 *)(lVar14 + 0x18);
  if (unaff_w20 == uVar10) {
    if ((int)unaff_w20 < 1) {
      uVar13 = 0;
LAB_01f95344:
      if (uVar13 != unaff_w20) goto LAB_01f9557c;
    }
    else {
      if (uVar10 == 0) goto LAB_01f9581c;
      lVar5 = 0;
      uVar10 = 1;
      while( true ) {
        plVar6 = *(long **)(lVar14 + lVar5 * 8 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_01f95820;
        uVar13 = uVar10 - 1;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
        plVar16 = (long *)(unaff_x19 + lVar5 * 8 + 0x20);
        lVar5 = *plVar16;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar4 = FUN_01f7f404(plVar6,lVar5,0);
        if ((uVar4 & 1) == 0) {
          uVar7 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar7 = FUN_01f7d8a0(uVar7,0);
          uVar4 = FUN_01f7f404(plVar6,uVar7,0);
          if ((uVar4 & 1) == 0) {
            if (plVar6 == (long *)0x0) goto LAB_01f95820;
            uVar4 = FUN_01f81644(plVar6,0);
            if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_01f9581c;
            plVar9 = (long *)*plVar16;
            if ((uVar4 & 1) == 0) {
              uVar4 = (**(code **)(*plVar6 + 0x288))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x290))
              ;
            }
            else {
              if (plVar9 == (long *)0x0) goto LAB_01f95820;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x310));
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
              plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x310));
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
              }
              lVar5 = *(long *)PTR_DAT_027b3ec0;
              if (plVar16 != (long *)0x0) {
                if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8)
                    != lVar5)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01230f60(plVar16);
                }
              }
              if (plVar6 != (long *)0x0) {
                if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8)
                    != lVar5)) goto LAB_01f95824;
              }
              uVar4 = FUN_01f958f8(plVar16,plVar6);
            }
            if ((uVar4 & 1) == 0) goto LAB_01f95344;
          }
        }
        if (unaff_w20 == uVar10) break;
        lVar5 = (long)(int)uVar10;
        bVar2 = *(uint *)(lVar14 + 0x18) <= uVar10;
        uVar10 = uVar10 + 1;
        if (bVar2) goto LAB_01f9581c;
      }
    }
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f801dc(in_stack_00000010,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
      plVar16 = unaff_x21 + uVar11 + 5;
      plVar6 = (long *)*plVar16;
      if ((plVar6 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         lVar14 == 0)) goto LAB_01f95820;
      uVar11 = FUN_01f81644(lVar14,0);
      if ((uVar11 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
        plVar16 = (long *)*plVar16;
        if ((plVar16 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar16 + 0x228))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
           plVar6 == (long *)0x0)) goto LAB_01f95820;
        param_1 = (**(code **)(*plVar6 + 0x288))
                            (plVar6,in_stack_00000010,*(undefined8 *)(*plVar6 + 0x290));
        goto joined_r0x01f95520;
      }
      if (in_stack_00000010 == (long *)0x0) goto LAB_01f95820;
      plVar6 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                 (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310));
      uVar13 = unaff_w20;
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b3ec0
           )) {
          plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                     (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310))
          ;
          if (*(uint *)(unaff_x21 + 3) <= unaff_x28) goto LAB_01f9581c;
          plVar16 = (long *)*plVar16;
          if ((plVar16 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar16 + 0x228))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
             plVar6 == (long *)0x0)) goto LAB_01f95820;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
          }
          lVar14 = *(long *)PTR_DAT_027b3ec0;
          if (plVar9 != (long *)0x0) {
            if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) {
                    /* WARNING: Subroutine does not return */
              FUN_01230f60(plVar9);
            }
          }
          if (plVar6 != (long *)0x0) {
            if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) !=
                lVar14)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
              FUN_01230f60(plVar6);
            }
          }
          param_1 = FUN_01f958f8(plVar9,plVar6);
          goto joined_r0x01f95520;
        }
      }
      goto LAB_01f9557c;
    }
    goto LAB_01f95524;
  }
  goto LAB_01f9557c;
  while( true ) {
    *(int *)(lVar14 + 0x20 + uVar11 * 4) = (int)uVar11;
    uVar11 = uVar11 + 1;
    if (unaff_w20 == uVar11) break;
LAB_01f955ec:
    if (uVar13 <= uVar11) goto LAB_01f9581c;
  }
LAB_01f95604:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar13 = 0;
  }
  else {
    bVar2 = false;
    uVar10 = 1;
    uVar12 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
      plVar16 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar6 = (long *)*plVar16;
      if (plVar6 == (long *)0x0) goto LAB_01f95820;
      uVar7 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_01f9581c;
      plVar9 = unaff_x21 + (long)(int)uVar10 + 4;
      plVar6 = (long *)*plVar9;
      if (plVar6 == (long *)0x0) goto LAB_01f95820;
      uVar8 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95b1c(uVar7,uVar8,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
        plVar6 = (long *)*plVar16;
        if (plVar6 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_01f9581c;
        plVar6 = (long *)*plVar9;
        if (plVar6 == (long *)0x0) goto LAB_01f95820;
        uVar8 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar7,lVar14,0,uVar8,lVar14,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar10))
        goto LAB_01f9581c;
        lVar5 = *plVar16;
        lVar15 = *plVar9;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar3 = FUN_01f96308(lVar5,lVar15);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar13 = uVar10;
      if (iVar3 != 2) {
        uVar13 = uVar12;
      }
      uVar10 = uVar10 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar12 = uVar13;
    } while (in_stack_00000018._4_4_ != uVar10);
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


