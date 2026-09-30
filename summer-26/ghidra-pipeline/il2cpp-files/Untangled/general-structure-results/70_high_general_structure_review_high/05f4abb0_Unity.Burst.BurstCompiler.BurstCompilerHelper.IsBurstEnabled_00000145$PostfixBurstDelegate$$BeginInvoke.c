/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 05f4abb0
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__BeginInvoke
               (void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 in_w8;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  int iStack000000000000000c;
  
  *(undefined1 *)(unaff_x21 + 0x223) = in_w8;
  iStack000000000000000c = 0;
  FUN_05f461f4();
  if (*(char *)(unaff_x20 + 0x52) == '\0') {
    thunk_FUN_02f239f0(PTR_DAT_06d62148);
    uVar3 = thunk_FUN_02ef1808();
    System_Net_WebClient__UploadStringTaskAsync(uVar3,0x2749);
    uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d839d0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,uVar2);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_06d167c8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_05f45c3c(uVar3,unaff_w19,&stack0x0000000c);
  iVar1 = iStack000000000000000c;
  if ((iStack000000000000000c != 0) && (iStack000000000000000c != 0x2749)) {
    thunk_FUN_02f239f0(PTR_DAT_06d62148);
    uVar3 = thunk_FUN_02ef1808();
    System_Net_WebClient__UploadStringTaskAsync(uVar3,iVar1);
    uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d839d0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar3,uVar2);
  }
  return;
}


