/*
FUNCTION_NAME: FUN_07c9b524
ENTRY_POINT: 07c9b524
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_07c9b524(long param_1,long param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if (DAT_09415e9e == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_09415e9e = '\x01';
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07c9b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2 + 0x18))
                (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar1 = *(undefined2 *)(param_1 + 0x30);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e69648) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto 
        Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__BeginInvoke
        ;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e69648,1);

  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__BeginInvoke
  :
                    /* WARNING: Could not recover jumptable at 0x07c9b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,param_2,param_3,uVar1,puVar2[1]);
  return;
}


