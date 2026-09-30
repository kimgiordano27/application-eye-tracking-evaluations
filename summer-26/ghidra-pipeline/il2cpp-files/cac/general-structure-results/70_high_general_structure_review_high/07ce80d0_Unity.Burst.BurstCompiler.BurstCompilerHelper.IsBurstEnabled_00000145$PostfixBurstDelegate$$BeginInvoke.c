/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$BeginInvoke
ENTRY_POINT: 07ce80d0
PROGRAM: cac-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__BeginInvoke
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0914fee8;
  if (*(long *)(param_1 + 0xb8) == 0) {
    thunk_FUN_03f786f8(PTR_DAT_0914fee8);
    FUN_0395b070();
    lVar2 = thunk_FUN_03f786f8(puVar1);
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    thunk_FUN_03f786f8(PTR_DAT_09127a78);
    uVar3 = thunk_FUN_03f4e68c();
    FUN_0735a1ac(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03f786f8(PTR_DAT_0915ee78);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar3,uVar4);
  }
  lVar2 = FUN_07ce8154();
  if (lVar2 != 0) {
    FUN_07ce81a8(lVar2,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


