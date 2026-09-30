/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_ResetAppPerfStats
ENTRY_POINT: 029060fc
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_9_0__ovrp_ResetAppPerfStats(double *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double unaff_d8;
  double in_stack_00000008;
  
  dVar3 = modf(unaff_d8,param_1);
  puVar1 = PTR_DAT_06e1ed10;
  if (0.0 <= unaff_d8) {
    if (dVar3 != 0.5) {
      in_stack_00000008 = (double)(long)(unaff_d8 + 0.5);
      goto LAB_02906160;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      in_stack_00000008 = (double)(long)(unaff_d8 + -0.5);
      goto LAB_02906160;
    }
    dVar3 = -1.0;
  }
  if (((long)in_stack_00000008 & 1U) != 0) {
    in_stack_00000008 = in_stack_00000008 + dVar3;
  }
LAB_02906160:
  if (in_stack_00000008 <= 1.8446744073709552e+19) {
    return (long)in_stack_00000008;
  }
  uVar2 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar2,*(undefined8 *)puVar1);
}


