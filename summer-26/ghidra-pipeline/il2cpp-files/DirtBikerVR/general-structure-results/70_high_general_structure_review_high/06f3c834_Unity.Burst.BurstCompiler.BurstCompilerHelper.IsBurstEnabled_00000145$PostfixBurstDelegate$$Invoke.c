/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 06f3c834
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


uint Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__Invoke
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  
  if (*(int *)(**(long **)(param_1 + 0x748) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666b33c();
  *unaff_x24 = 0;
  if (unaff_x21 == 0) {
    if ((unaff_w23 == 0x16) || (unaff_w23 == 0)) {
      if ((unaff_w20 & 1) == 0) {
        thunk_FUN_03af1434(PTR_DAT_084cb768);
        uVar1 = thunk_FUN_03ac74bc();
        FUN_06f887ac(uVar1,-in_stack_00000018,0);
        uVar2 = thunk_FUN_03af1434(PTR_DAT_084d48d8);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar1,uVar2);
      }
      uVar1 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084c3f98);
      FUN_06b76440(uVar1,in_stack_00000010,1,0);
      FUN_06f3c5d8();
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
      *(int *)(unaff_x19 + 0x2c) = in_stack_00000018;
    }
    return unaff_w20 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8();
}


