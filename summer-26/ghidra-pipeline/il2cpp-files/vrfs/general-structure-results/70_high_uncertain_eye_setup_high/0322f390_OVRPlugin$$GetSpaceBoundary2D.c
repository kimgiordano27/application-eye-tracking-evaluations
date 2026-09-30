/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 0322f390
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__GetSpaceBoundary2D(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x5f0);
  auVar5 = thunk_FUN_0487c7f4(param_1,0);
  lVar3 = FUN_0160edfc(*puVar4,1);
  puVar2 = PTR_DAT_06e44f90;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(undefined4 *)(lVar3 + 0x20) = 2;
    in_stack_000000a8 = lVar3;
    thunk_FUN_01656ef8(&stack0x000000a8);
    in_stack_000000b0 = FUN_0160edfc(*(undefined8 *)puVar2,1);
    thunk_FUN_01656ef8(&stack0x000000b0);
    uVar1 = _DAT_053e2888;
    in_stack_000000b8 = _DAT_053e2888;
    *(undefined8 *)(unaff_x19 + 0x60) = 0xffffffff00000000;
    *(long *)(unaff_x19 + 0x58) = auVar5._8_8_;
    *(long *)(unaff_x19 + 0x70) = in_stack_000000a8;
    *(ulong *)(unaff_x19 + 0x68) = CONCAT44(in_stack_000000a0._4_4_,0xffffffff);
    *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x78) = in_stack_000000b0;
    *(long *)(unaff_x19 + 0x50) = auVar5._0_8_;
    *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000080;
    thunk_FUN_01656ef8(unaff_x19 + 0x48,0);
    if (*(int *)(*(long *)PTR_DAT_06db0370 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_0487f954();
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_04889200(*(long *)(unaff_x19 + 0x38),0,0);
      FUN_048806dc(0,3,2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


