/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$Solve
ENTRY_POINT: 0298f0c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0298f1b8) */
/* WARNING: Removing unreachable block (ram,0x0298f248) */

undefined4 RootMotion_FinalIK_FBBIKHeadEffector__Solve(long param_1)

{
  undefined4 uVar1;
  long *unaff_x19;
  long *plVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000040;
  long lStack0000000000000050;
  
  lStack0000000000000050 = param_1;
  if (in_stack_00000040._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if ((lStack0000000000000050 != 0) && (*(long *)(lStack0000000000000050 + 0x58) != 0)) {
    uVar1 = *(undefined4 *)(lStack0000000000000050 + 0x54);
    plVar2 = unaff_x19 + 10;
    *plVar2 = lStack0000000000000050;
    *(undefined4 *)(unaff_x19 + 9) = uVar1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2);
    if (lStack0000000000000050 != 0) {
      (**(code **)(*unaff_x19 + 600))();
      unaff_x19[10] = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,0);
      if ((lStack0000000000000050 != 0) && (FUN_029901a4(), lStack0000000000000050 != 0)) {
        FUN_02990210();
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  return 0;
}


