/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryVisible
ENTRY_POINT: 02905adc
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


long OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible(double param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double in_stack_00000008;
  
  puVar2 = PTR_DAT_06e1a840;
  if ((bRam0000000007233c8f & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e4dfb8);
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    bRam0000000007233c8f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  dVar4 = modf(param_1,&stack0x00000008);
  puVar2 = PTR_DAT_06e4dfb8;
  if (0.0 <= param_1) {
    if (dVar4 != 0.5) {
      dVar4 = (double)(long)(param_1 + 0.5);
      goto LAB_02905b90;
    }
    dVar5 = 1.0;
  }
  else {
    if (dVar4 != -0.5) {
      dVar4 = (double)(long)(param_1 + -0.5);
      goto LAB_02905b90;
    }
    dVar5 = -1.0;
  }
  dVar4 = in_stack_00000008;
  if (((long)in_stack_00000008 & 1U) != 0) {
    dVar4 = in_stack_00000008 + dVar5;
  }
LAB_02905b90:
  if (dVar4 <= 9.223372036854776e+18) {
    lVar1 = -0x8000000000000000;
    if (dVar4 != INFINITY) {
      lVar1 = (long)dVar4;
    }
    return lVar1;
  }
  uVar3 = FUN_0160eec4();
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar3,*(undefined8 *)puVar2);
}


