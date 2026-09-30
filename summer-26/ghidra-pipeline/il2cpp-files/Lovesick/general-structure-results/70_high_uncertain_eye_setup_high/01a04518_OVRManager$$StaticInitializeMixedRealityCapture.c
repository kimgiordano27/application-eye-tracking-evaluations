/*
FUNCTION_NAME: OVRManager$$StaticInitializeMixedRealityCapture
ENTRY_POINT: 01a04518
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticInitializeMixedRealityCapture(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  FUN_01a04684();
  FUN_01a047cc(&stack0x00000040);
  uVar4 = uStack0000000000000050;
  uVar3 = in_stack_00000048;
  uVar2 = in_stack_00000040;
  puVar1 = Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__;
  plVar11 = *(long **)(unaff_x19 + 0x178);
  uStack0000000000000034 = uStack0000000000000054;
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_01a045ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(plVar11,*(long *)
                                   Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>_GetBatch__,3);
LAB_01a045ac:
    in_stack_00000068 = uVar3;
    in_stack_00000060 = uVar2;
    uStack0000000000000074 = uStack0000000000000054;
    uStack0000000000000070 = uVar4;
    (*(code *)*puVar7)(plVar11,&stack0x00000060,puVar7[1]);
    plVar11 = *(long **)(unaff_x19 + 0x178);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
            goto LAB_01a04628;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,5);
LAB_01a04628:
      (*(code *)*puVar7)(plVar11,puVar7[1]);
      uVar5 = FUN_01a04184();
      uVar6 = FUN_01a048e0();
      uVar5 = (*(uint *)(unaff_x19 + 0x170) | uVar5) & (uVar6 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 0x170) = uVar5;
      if ((uVar6 != 0) && (uVar5 == 0)) {
        *(undefined1 *)(unaff_x19 + 0x161) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


