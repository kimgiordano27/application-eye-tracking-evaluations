/*
FUNCTION_NAME: OVRManager$$get_display
ENTRY_POINT: 07c56b5c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_display(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  fVar2 = (float)FUN_07c55f14();
                    /* try { // try from 07c56b60 to 07d56b63 has its CatchHandler @ 07c56b78 */
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar7 = param_3;
    fVar5 = param_2;
                    /* catch() { ... } // from try @ 07c56b60 with catch @ 07c56b78 */
    fVar3 = (float)FUN_09539d64(*(long *)(unaff_x19 + 0x28),0);
    fVar8 = fVar7;
    fVar6 = fVar5;
    fVar4 = (float)FUN_07c56a74();
    puVar1 = PTR_DAT_09f25358;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_09539e3c(fVar2 + (fVar3 - fVar4),param_2 + (fVar5 - fVar6),param_3 + (fVar7 - fVar8),
                   *(long *)(unaff_x19 + 0x28),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_095381c0(&stack0x00000010,0);
      uStack0000000000000044 = uStack0000000000000024;
      uStack0000000000000040 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000018;
      in_stack_00000030 = in_stack_00000010;
      *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000010;
      *(undefined8 *)(unaff_x19 + 100) = uStack0000000000000024;
      *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_07c50578(uStack000000000000009c,*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_07c50514(uStack0000000000000098,uStack000000000000000c,uStack0000000000000008,
                       in_stack_00000000._4_4_,*(long *)(unaff_x19 + 0x20),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


