/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$.cctor
ENTRY_POINT: 01f9523c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_0_1_3___cctor(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint unaff_w22;
  long lVar13;
  long unaff_x23;
  long *unaff_x24;
  long lVar14;
  uint unaff_w26;
  uint uVar15;
  long *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  long *plVar16;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x01f9523c:
  plVar4 = (long *)*unaff_x27;
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
    plVar5 = (long *)(**(code **)(*unaff_x24 + 0x308))
                               (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x310));
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
    }
    lVar10 = *(long *)PTR_DAT_027b3ec0;
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar4);
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
    uVar6 = FUN_01f958f8(plVar4,plVar5);
    if ((uVar6 & 1) != 0) goto LAB_01f9531c;
LAB_01f95344:
    uVar6 = unaff_x28;
    if (unaff_w22 != unaff_w20) goto LAB_01f9557c;
    do {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar7 = FUN_01f801dc(in_stack_00000010,0,0);
      unaff_w22 = unaff_w20;
      if ((uVar7 & 1) == 0) {
LAB_01f95524:
        uVar11 = *(uint *)(unaff_x21 + 3);
        if (uVar11 <= uVar6) goto LAB_01f9581c;
        lVar10 = unaff_x21[uVar6 + 4];
        if (lVar10 != 0) {
          lVar13 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar13 == 0) {
            uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar8,0);
          }
          uVar11 = (uint)unaff_x21[3];
        }
        if (uVar11 <= in_stack_00000018._4_4_) goto LAB_01f9581c;
        lVar13 = (long)(int)in_stack_00000018._4_4_;
        unaff_x21[lVar13 + 4] = lVar10;
        in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
        thunk_FUN_01286abc(unaff_x21 + lVar13 + 4,lVar10);
      }
      else {
        if (*(uint *)(unaff_x21 + 3) <= uVar6) goto LAB_01f9581c;
        plVar5 = unaff_x21 + uVar6 + 4;
        plVar4 = (long *)*plVar5;
        if ((plVar4 == (long *)0x0) ||
           (lVar10 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230)),
           lVar10 == 0)) break;
        uVar7 = FUN_01f81644(lVar10,0);
        if ((uVar7 & 1) == 0) {
          if (*(uint *)(unaff_x21 + 3) <= uVar6) goto LAB_01f9581c;
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) ||
             (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x230)),
             plVar4 == (long *)0x0)) break;
          uVar7 = (**(code **)(*plVar4 + 0x288))
                            (plVar4,in_stack_00000010,*(undefined8 *)(*plVar4 + 0x290));
joined_r0x01f95520:
          if ((uVar7 & 1) != 0) goto LAB_01f95524;
        }
        else {
          if (in_stack_00000010 == (long *)0x0) break;
          plVar4 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                     (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x310))
          ;
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
            if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_027b3ec0)) {
              plVar4 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                         (in_stack_00000010,
                                          *(undefined8 *)(*in_stack_00000010 + 0x310));
              if (uVar6 < *(uint *)(unaff_x21 + 3)) {
                plVar5 = (long *)*plVar5;
                if ((plVar5 != (long *)0x0) &&
                   (plVar5 = (long *)(**(code **)(*plVar5 + 0x228))
                                               (plVar5,*(undefined8 *)(*plVar5 + 0x230)),
                   plVar5 != (long *)0x0)) {
                  plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                             (plVar5,*(undefined8 *)(*plVar5 + 0x310));
                  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                    thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                  }
                  lVar10 = *(long *)PTR_DAT_027b3ec0;
                  if (plVar4 != (long *)0x0) {
                    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 +
                                 -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01230f60(plVar4);
                    }
                  }
                  if (plVar5 != (long *)0x0) {
                    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 +
                                 -8) != lVar10)) goto LAB_01f95824;
                  }
                  uVar7 = FUN_01f958f8(plVar4,plVar5);
                  goto joined_r0x01f95520;
                }
                break;
              }
              goto LAB_01f9581c;
            }
          }
        }
      }
LAB_01f9557c:
      do {
        uVar11 = *(uint *)(unaff_x21 + 3);
        unaff_x28 = uVar6 + 1;
        if ((long)(int)uVar11 <= (long)unaff_x28) {
          if (in_stack_00000018._4_4_ == 0) {
            return 0;
          }
          if (in_stack_00000018._4_4_ == 1) {
            if (uVar11 != 0) goto LAB_01f957f8;
            goto LAB_01f9581c;
          }
          lVar10 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
          if ((int)unaff_w20 < 1) goto LAB_01f95604;
          if (lVar10 == 0) goto LAB_01f95820;
          uVar11 = *(uint *)(lVar10 + 0x18);
          uVar6 = 0;
          goto LAB_01f955ec;
        }
        if (unaff_x19 == 0) goto LAB_01f95344;
        if (uVar11 <= unaff_x28) goto LAB_01f9581c;
        plVar4 = (long *)unaff_x21[uVar6 + 5];
        if ((plVar4 == (long *)0x0) ||
           (unaff_x23 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
           unaff_x23 == 0)) goto LAB_01f95820;
        uVar11 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
        uVar6 = unaff_x28;
      } while (unaff_w20 != uVar11);
      if ((int)unaff_w20 < 1) {
        unaff_w22 = 0;
        goto LAB_01f95344;
      }
      if (uVar11 == 0) goto LAB_01f9581c;
      lVar10 = 0;
      unaff_w26 = 1;
      while( true ) {
        plVar4 = *(long **)(unaff_x23 + lVar10 * 8 + 0x20);
        if (plVar4 == (long *)0x0) goto LAB_01f95820;
        unaff_w22 = unaff_w26 - 1;
        unaff_x24 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_01f9581c;
        unaff_x27 = (long *)(unaff_x19 + lVar10 * 8 + 0x20);
        lVar10 = *unaff_x27;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar6 = FUN_01f7f404(unaff_x24,lVar10,0);
        if ((uVar6 & 1) == 0) {
          uVar8 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar8 = FUN_01f7d8a0(uVar8,0);
          uVar6 = FUN_01f7f404(unaff_x24,uVar8,0);
          if ((uVar6 & 1) == 0) {
            if (unaff_x24 == (long *)0x0) goto LAB_01f95820;
            uVar6 = FUN_01f81644(unaff_x24,0);
            if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_01f9581c;
            plVar4 = (long *)*unaff_x27;
            if ((uVar6 & 1) != 0) {
              if (plVar4 == (long *)0x0) goto LAB_01f95820;
              plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x310));
              if (plVar4 == (long *)0x0) goto LAB_01f95344;
              bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
              if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
              if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_01f9581c;
              goto code_r0x01f9523c;
            }
            uVar6 = (**(code **)(*unaff_x24 + 0x288))
                              (unaff_x24,plVar4,*(undefined8 *)(*unaff_x24 + 0x290));
            if ((uVar6 & 1) == 0) goto LAB_01f95344;
          }
        }
LAB_01f9531c:
        uVar6 = unaff_x28;
        if (unaff_w20 == unaff_w26) break;
        lVar10 = (long)(int)unaff_w26;
        bVar2 = *(uint *)(unaff_x23 + 0x18) <= unaff_w26;
        unaff_w26 = unaff_w26 + 1;
        if (bVar2) goto LAB_01f9581c;
      }
    } while( true );
  }
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
  while( true ) {
    *(int *)(lVar10 + 0x20 + uVar6 * 4) = (int)uVar6;
    uVar6 = uVar6 + 1;
    if (unaff_w20 == uVar6) break;
LAB_01f955ec:
    if (uVar11 <= uVar6) goto LAB_01f9581c;
  }
LAB_01f95604:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar11 = 0;
  }
  else {
    bVar2 = false;
    uVar15 = 1;
    uVar12 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
      plVar5 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar4 = (long *)*plVar5;
      if (plVar4 == (long *)0x0) goto LAB_01f95820;
      uVar8 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar15) goto LAB_01f9581c;
      plVar16 = unaff_x21 + (long)(int)uVar15 + 4;
      plVar4 = (long *)*plVar16;
      if (plVar4 == (long *)0x0) goto LAB_01f95820;
      uVar9 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
      }
      iVar3 = FUN_01f95b1c(uVar8,uVar9,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
        plVar4 = (long *)*plVar5;
        if (plVar4 == (long *)0x0) goto LAB_01f95820;
        uVar8 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        if (*(uint *)(unaff_x21 + 3) <= uVar15) goto LAB_01f9581c;
        plVar4 = (long *)*plVar16;
        if (plVar4 == (long *)0x0) goto LAB_01f95820;
        uVar9 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar8,lVar10,0,uVar9,lVar10,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar15))
        goto LAB_01f9581c;
        lVar13 = *plVar5;
        lVar14 = *plVar16;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar3 = FUN_01f96308(lVar13,lVar14);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar11 = uVar15;
      if (iVar3 != 2) {
        uVar11 = uVar12;
      }
      uVar15 = uVar15 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar12 = uVar11;
    } while (in_stack_00000018._4_4_ != uVar15);
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
  if (uVar11 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar11;
LAB_01f957f8:
    return unaff_x21[4];
  }
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


