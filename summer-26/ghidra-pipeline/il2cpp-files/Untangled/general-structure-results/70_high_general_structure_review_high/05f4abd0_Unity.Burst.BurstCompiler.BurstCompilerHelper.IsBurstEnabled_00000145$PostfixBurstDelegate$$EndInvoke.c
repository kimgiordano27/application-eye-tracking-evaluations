/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 05f4abd0
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__EndInvoke
               (long *param_1)

{
  undefined8 uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_05f45c3c(uVar2,unaff_w19,(long)&stack0x00000008 + 4);
  if ((in_stack_00000008._4_4_ != 0) && (in_stack_00000008._4_4_ != 0x2749)) {
    thunk_FUN_02f239f0(PTR_DAT_06d62148);
    uVar2 = thunk_FUN_02ef1808();
    System_Net_WebClient__UploadStringTaskAsync(uVar2,in_stack_00000008._4_4_);
    uVar1 = thunk_FUN_02f239f0(PTR_DAT_06d839d0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar2,uVar1);
  }
  return;
}


