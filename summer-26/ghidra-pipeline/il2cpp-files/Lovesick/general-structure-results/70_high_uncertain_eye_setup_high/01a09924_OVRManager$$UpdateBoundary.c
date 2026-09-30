/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 01a09924
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 uStack0000000000000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack0000000000000070;
  
  uStack0000000000000068 = in_stack_00000008;
  uStack0000000000000060 = in_stack_00000000;
  uStack0000000000000070 = in_stack_00000010;
  (*(code *)*param_1)();
  plVar7 = *(long **)(unaff_x19 + 400);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_01a099a0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x21,5);
LAB_01a099a0:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  uVar1 = FUN_01a04184();
  uVar2 = FUN_01a048e0();
  uVar1 = (*(uint *)(unaff_x19 + 0x188) | uVar1) & (uVar2 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 0x188) = uVar1;
  if ((uVar2 != 0) && (uVar1 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x171) = 1;
  }
  return;
}


