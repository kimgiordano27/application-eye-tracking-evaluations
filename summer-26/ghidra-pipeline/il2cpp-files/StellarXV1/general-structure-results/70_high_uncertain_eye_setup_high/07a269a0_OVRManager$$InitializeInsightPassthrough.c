/*
FUNCTION_NAME: OVRManager$$InitializeInsightPassthrough
ENTRY_POINT: 07a269a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint OVRManager__InitializeInsightPassthrough(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  FUN_07a4b15c(param_1,param_2,0);
  uVar1 = FUN_07a2bd58();
  if ((uVar1 & 1) != 0) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uStack0000000000000048 = OVRPlugin__GetBoundaryVisibility();
    lVar3 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092ecfe8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_07a26a28;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a26a28:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (*(int *)(*(long *)PTR_DAT_092ecfe0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07a4b15c(&stack0x00000020,&stack0x00000048,0);
    uStack000000000000004c = uStack0000000000000048 | uStack000000000000004c;
  }
  return uStack000000000000004c;
}


