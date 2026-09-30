/*
FUNCTION_NAME: OVRPlugin.OVRP_0_5_0$$.cctor
ENTRY_POINT: 01f952c4
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


long OVRPlugin_OVRP_0_5_0___cctor(undefined8 param_1,long param_2)

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
  uint unaff_w22;
  long lVar14;
  long unaff_x23;
  long *unaff_x24;
  long lVar15;
  long *unaff_x25;
  uint unaff_w26;
  uint uVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x01f952c4:
  if (unaff_x24 != (long *)0x0) {
    if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(param_2 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) !=
        param_2)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(unaff_x24);
    }
  }
  uVar4 = FUN_01f958f8(unaff_x25,unaff_x24);
  if ((uVar4 & 1) != 0) goto LAB_01f9531c;
LAB_01f95344:
  uVar4 = unaff_x28;
  if (unaff_w22 != unaff_w20) goto LAB_01f9557c;
  do {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar5 = FUN_01f801dc(in_stack_00000010,0,0);
    unaff_w22 = unaff_w20;
    if ((uVar5 & 1) == 0) {
LAB_01f95524:
      uVar12 = *(uint *)(unaff_x21 + 3);
      if (uVar12 <= uVar4) goto LAB_01f9581c;
      lVar7 = unaff_x21[uVar4 + 4];
      if (lVar7 != 0) {
        lVar14 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar14 == 0) {
          uVar9 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar9,0);
        }
        uVar12 = (uint)unaff_x21[3];
      }
      if (uVar12 <= in_stack_00000018._4_4_) goto LAB_01f9581c;
      lVar14 = (long)(int)in_stack_00000018._4_4_;
      unaff_x21[lVar14 + 4] = lVar7;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
      thunk_FUN_01286abc(unaff_x21 + lVar14 + 4,lVar7);
    }
    else {
      if (*(uint *)(unaff_x21 + 3) <= uVar4) goto LAB_01f9581c;
      plVar8 = unaff_x21 + uVar4 + 4;
      plVar6 = (long *)*plVar8;
      if ((plVar6 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         lVar7 == 0)) goto LAB_01f95820;
      uVar5 = FUN_01f81644(lVar7,0);
      if ((uVar5 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= uVar4) goto LAB_01f9581c;
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
            if (uVar4 < *(uint *)(unaff_x21 + 3)) {
              plVar8 = (long *)*plVar8;
              if ((plVar8 != (long *)0x0) &&
                 (plVar8 = (long *)(**(code **)(*plVar8 + 0x228))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x230)),
                 plVar8 != (long *)0x0)) {
                unaff_x24 = (long *)(**(code **)(*plVar8 + 0x308))
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
                if (unaff_x24 != (long *)0x0) {
                  if ((*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
                     (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 +
                               -8) != lVar7)) goto LAB_01f95824;
                }
                uVar5 = FUN_01f958f8(plVar6,unaff_x24);
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
      unaff_x28 = uVar4 + 1;
      if ((long)(int)uVar12 <= (long)unaff_x28) {
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
        uVar12 = *(uint *)(lVar7 + 0x18);
        uVar4 = 0;
        goto LAB_01f955ec;
      }
      if (unaff_x19 == 0) goto LAB_01f95344;
      if (uVar12 <= unaff_x28) goto LAB_01f9581c;
      plVar6 = (long *)unaff_x21[uVar4 + 5];
      if ((plVar6 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)),
         unaff_x23 == 0)) goto LAB_01f95820;
      uVar12 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
      uVar4 = unaff_x28;
    } while (unaff_w20 != uVar12);
    if ((int)unaff_w20 < 1) {
      unaff_w22 = 0;
      goto LAB_01f95344;
    }
    if (uVar12 == 0) goto LAB_01f9581c;
    lVar7 = 0;
    unaff_w26 = 1;
    while( true ) {
      plVar6 = *(long **)(unaff_x23 + lVar7 * 8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_01f95820;
      unaff_w22 = unaff_w26 - 1;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_01f9581c;
      plVar8 = (long *)(unaff_x19 + lVar7 * 8 + 0x20);
      lVar7 = *plVar8;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f7f404(plVar6,lVar7,0);
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
          if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_01f9581c;
          plVar11 = (long *)*plVar8;
          if ((uVar4 & 1) != 0) {
            if (plVar11 == (long *)0x0) goto LAB_01f95820;
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 == (long *)0x0) goto LAB_01f95344;
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
            if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto LAB_01f9581c;
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_01f95820;
            unaff_x25 = (long *)(**(code **)(*plVar8 + 0x308))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x310));
            unaff_x24 = (long *)(**(code **)(*plVar6 + 0x308))
                                          (plVar6,*(undefined8 *)(*plVar6 + 0x310));
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
            }
            param_2 = *(long *)PTR_DAT_027b3ec0;
            if (unaff_x25 != (long *)0x0) {
              if ((*(byte *)(*unaff_x25 + 0x130) < *(byte *)(param_2 + 0x130)) ||
                 (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8
                           ) != param_2)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(unaff_x25);
              }
            }
            goto code_r0x01f952c4;
          }
          uVar4 = (**(code **)(*plVar6 + 0x288))(plVar6,plVar11,*(undefined8 *)(*plVar6 + 0x290));
          if ((uVar4 & 1) == 0) goto LAB_01f95344;
        }
      }
LAB_01f9531c:
      uVar4 = unaff_x28;
      if (unaff_w20 == unaff_w26) break;
      lVar7 = (long)(int)unaff_w26;
      bVar2 = *(uint *)(unaff_x23 + 0x18) <= unaff_w26;
      unaff_w26 = unaff_w26 + 1;
      if (bVar2) goto LAB_01f9581c;
    }
  } while( true );
  while( true ) {
    *(int *)(lVar7 + 0x20 + uVar4 * 4) = (int)uVar4;
    uVar4 = uVar4 + 1;
    if (unaff_w20 == uVar4) break;
LAB_01f955ec:
    if (uVar12 <= uVar4) goto LAB_01f9581c;
  }
LAB_01f95604:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar12 = 0;
  }
  else {
    bVar2 = false;
    uVar16 = 1;
    uVar13 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar13) goto LAB_01f9581c;
      plVar8 = unaff_x21 + (long)(int)uVar13 + 4;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto LAB_01f95820;
      uVar9 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (*(uint *)(unaff_x21 + 3) <= uVar16) goto LAB_01f9581c;
      plVar11 = unaff_x21 + (long)(int)uVar16 + 4;
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
        if (*(uint *)(unaff_x21 + 3) <= uVar16) goto LAB_01f9581c;
        plVar6 = (long *)*plVar11;
        if (plVar6 == (long *)0x0) goto LAB_01f95820;
        uVar10 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
        }
        iVar3 = FUN_01f95eb8(uVar9,lVar7,0,uVar10,lVar7,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar13) || (*(uint *)(unaff_x21 + 3) <= uVar16))
        goto LAB_01f9581c;
        lVar14 = *plVar8;
        lVar15 = *plVar11;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar3 = FUN_01f96308(lVar14,lVar15);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar12 = uVar16;
      if (iVar3 != 2) {
        uVar12 = uVar13;
      }
      uVar16 = uVar16 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar13 = uVar12;
    } while (in_stack_00000018._4_4_ != uVar16);
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
  if (uVar12 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar12;
LAB_01f957f8:
    return unaff_x21[4];
  }
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


