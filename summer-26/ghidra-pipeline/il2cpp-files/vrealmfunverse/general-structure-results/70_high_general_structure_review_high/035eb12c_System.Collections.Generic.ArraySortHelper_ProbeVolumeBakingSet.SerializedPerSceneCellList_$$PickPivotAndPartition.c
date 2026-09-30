/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$PickPivotAndPartition
ENTRY_POINT: 035eb12c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void System_Collections_Generic_ArraySortHelper<ProbeVolumeBakingSet_SerializedPerSceneCellList>__PickPivotAndPartition
               (void)

{
  uint uVar1;
  bool in_CY;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  
  if (!in_CY) {
    FUN_04d9c908(0);
  }
  iVar2 = FUN_04d941cc();
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_044e9b38(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if ((int)(iVar2 - unaff_w19) < iVar3) {
      Oculus_Interaction_SecondaryInteractorConnection__Start(5,0);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar8);
    }
    lVar8 = thunk_FUN_02b79548();
    if (lVar8 != 0) {
      FUN_035eae20();
      return;
    }
    plVar4 = (long *)thunk_FUN_02b79548();
    if (plVar4 == (long *)0x0) {
      FUN_04d9c940();
    }
    lVar8 = *(long *)(unaff_x21 + 0x10);
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x20);
      if (0 < (int)uVar1) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar9 = 0;
        lVar10 = lVar8 + 0x28;
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (-1 < *(int *)(lVar10 + -8)) {
            lVar5 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                              (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40)
                              );
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar7,0);
            }
            if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar4[(long)(int)unaff_w19 + 4] = lVar5;
            thunk_FUN_02bb0e9c(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
            unaff_w19 = unaff_w19 + 1;
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 0x48;
        } while (uVar1 != uVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


