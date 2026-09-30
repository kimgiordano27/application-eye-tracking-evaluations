/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 090d2084
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState(ulong param_1)

{
  long lVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w22;
  ulong unaff_x23;
  float fVar3;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  *(ulong *)(unaff_x20 + 0x40) = param_1 & (unaff_x23 ^ 0xffffffffffffffff);
  FUN_090d1f58();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  in_stack_00000048 = in_stack_00000008;
                    /* catch() { ... } // from try @ 090d209c with catch @ 090d20c0 */
  in_stack_00000040 = in_stack_00000000;
                    /* try { // try from 090d20c4 to 091d20cb has its CatchHandler @ 090d20d4 */
  in_stack_00000050 = in_stack_00000010;
  if (lVar1 != 0) {
                    /* try { // try from 090d20cc to 091d20d7 has its CatchHandler @ 090d09f0 */
                    /* catch() { ... } // from try @ 090d20c4 with catch @ 090d20d4 */
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)unaff_w22 * 0x1c;
      in_stack_00000030 = *(undefined8 *)(lVar1 + 0x30);
      in_stack_00000038 = *(undefined4 *)(lVar1 + 0x38);
      fVar3 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar1 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x18);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * fVar3,
                    (float)*(undefined8 *)(lVar1 + 0x20) * fVar3);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar3);
      if (lVar2 == 0) goto LAB_090d2158;
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
        FUN_09035ed4(&stack0x00000040,&stack0x00000020,lVar2 + (long)unaff_w22 * 0x1c + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
LAB_090d2158:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


