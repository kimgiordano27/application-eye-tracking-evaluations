/*
FUNCTION_NAME: AYellowpaper.SerializedCollections.SerializedDictionary<int,-object>$$.ctor
ENTRY_POINT: 03d6550c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


void AYellowpaper_SerializedCollections_SerializedDictionary<int,_object>___ctor(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar10 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x70);
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(param_1);
  }
  plVar2 = (long *)FUN_04d8a7b0(uVar10,0);
  if (unaff_x23 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x23 + 0x298))();
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_03d657a8;
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2);
      if ((uVar3 & 1) == 0) {
        FUN_04d9c940(0);
      }
    }
    plVar2 = (long *)thunk_FUN_02b79548();
    if (plVar2 == (long *)0x0) {
      FUN_04d9c940();
    }
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03d6564c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar8,lVar5,0);
LAB_03d6564c:
      iVar1 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          plVar8 = *(long **)(unaff_x21 + 0x10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02b76218(lVar5);
          }
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03d656e0;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02b7654c(plVar8,lVar5,0);
LAB_03d656e0:
          (*(code *)*puVar4)(&stack0x00000018,plVar8,iVar9,puVar4[1]);
          lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
            uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar10,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar5;
          thunk_FUN_02bb0e9c(plVar2 + (long)(int)unaff_w19 + 4,lVar5);
          iVar9 = iVar9 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar9 != iVar1);
      }
      return;
    }
  }
LAB_03d657a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


