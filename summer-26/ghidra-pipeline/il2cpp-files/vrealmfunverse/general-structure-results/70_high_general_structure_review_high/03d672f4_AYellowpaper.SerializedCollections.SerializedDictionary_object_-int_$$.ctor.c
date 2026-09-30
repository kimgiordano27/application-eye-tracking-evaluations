/*
FUNCTION_NAME: AYellowpaper.SerializedCollections.SerializedDictionary<object,-int>$$.ctor
ENTRY_POINT: 03d672f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void AYellowpaper_SerializedCollections_SerializedDictionary<object,_int>___ctor(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  Oculus_Interaction_SecondaryInteractorConnection__Start();
  iVar1 = thunk_FUN_02b4b9cc();
  if (iVar1 != 0) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(6,0);
  }
  if ((int)unaff_w19 < 0) {
    FUN_04d9c908(0);
  }
  iVar1 = FUN_04d941cc();
  iVar2 = FUN_03d66abc();
  if ((int)(iVar1 - unaff_w19) < iVar2) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar5);
  }
  lVar5 = thunk_FUN_02b79548();
  if (lVar5 == 0) {
    plVar10 = (long *)thunk_FUN_02b4c898();
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
      }
      plVar4 = (long *)FUN_04d8a7b0(uVar11,0);
      if (plVar10 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_03d67720;
          uVar8 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar10,*(undefined8 *)(*plVar4 + 0x2a0));
          if ((uVar8 & 1) == 0) {
            FUN_04d9c940(0);
          }
        }
        plVar10 = (long *)thunk_FUN_02b79548();
        if (plVar10 == (long *)0x0) {
          FUN_04d9c940();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02b76218(lVar5);
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03d67580;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar5,0);
LAB_03d67580:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_03d67810;
              }
              lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02b76218(lVar5);
              }
              lVar6 = *plVar4;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar5) {
                    puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_03d67614;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar5,0);
LAB_03d67614:
              (*(code *)*puVar3)(&stack0x00000030,plVar4,iVar2,puVar3[1]);
              in_stack_00000018 = in_stack_00000038;
              in_stack_00000010 = in_stack_00000030;
              in_stack_00000020 = in_stack_00000040;
              lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                (*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                                 &stack0x00000010);
              if (plVar10 == (long *)0x0) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_03d67810;
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar11 = thunk_FUN_02b870ec();
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar11,0);
                }
                goto LAB_03d67810;
              }
              if (*(uint *)(plVar10 + 3) <= unaff_w19) {
                if (*(long *)(unaff_x26 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                goto LAB_03d67810;
              }
              plVar10[(long)(int)unaff_w19 + 4] = lVar5;
              thunk_FUN_02bb0e9c(plVar10 + (long)(int)unaff_w19 + 4,lVar5);
              iVar2 = iVar2 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar2 != iVar1);
          }
          if (*(long *)(unaff_x26 + 0x28) == in_stack_00000048) {
            return;
          }
          goto LAB_03d67810;
        }
      }
    }
  }
  else {
    plVar10 = *(long **)(unaff_x21 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02b76218(lVar6);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_03d67538;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar10,lVar6,5);
LAB_03d67538:
      if (*(long *)(unaff_x26 + 0x28) == in_stack_00000048) {
                    /* WARNING: Could not recover jumptable at 0x03d67570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(plVar10,lVar5,unaff_w19,puVar3[1]);
        return;
      }
      goto LAB_03d67810;
    }
  }
LAB_03d67720:
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_03d67810:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


