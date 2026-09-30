/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<OVRPassthroughLayer.SerializedSurfaceGeometry>$$InsertionSort
ENTRY_POINT: 035dd60c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void System_Collections_Generic_ArraySortHelper<OVRPassthroughLayer_SerializedSurfaceGeometry>__InsertionSort
               (long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 in_stack_00000008;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02b76218(lVar6);
  }
  lVar6 = thunk_FUN_02b79548();
  if (lVar6 != 0) {
    FUN_035dd2f0();
    return;
  }
  plVar2 = (long *)thunk_FUN_02b79548();
  if (plVar2 == (long *)0x0) {
    FUN_04d9c940();
  }
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x20);
    if (0 < (int)uVar1) {
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar7 = 0;
      puVar8 = (undefined4 *)(lVar6 + 0x28);
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        if (-1 < (int)puVar8[-2]) {
          in_stack_00000008._4_4_ = *puVar8;
          lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                             (long)&stack0x00000008 + 4);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar5,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar3;
          thunk_FUN_02bb0e9c(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
          unaff_w19 = unaff_w19 + 1;
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 5;
      } while (uVar1 != uVar7);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


