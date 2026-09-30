/*
FUNCTION_NAME: OVRManager$$remove_HMDLost
ENTRY_POINT: 05ba1f60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDLost(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  if (param_1 != 0) {
    fVar3 = (float)(**(code **)(param_1 + 0x18))
                             (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar1 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0);
      fVar3 = (float)FUN_069c53ec(unaff_s8 * fVar3,fStack0000000000000000,fStack0000000000000004,
                                  in_stack_00000008,0);
      if (((*(long *)(unaff_x20 + 0x20) != 0) &&
          (fVar5 = fStack0000000000000000, fVar6 = fStack0000000000000004, fVar7 = in_stack_00000008
          , lVar2 = FUN_069d3a80(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) &&
         (fVar4 = (float)FUN_069e5200(lVar2,0), lVar1 != 0)) {
        FUN_069e7254((fStack0000000000000000 * fVar6 + in_stack_00000008 * fVar4 + fVar3 * fVar7) -
                     fStack0000000000000004 * fVar5,
                     (fStack0000000000000004 * fVar4 +
                     in_stack_00000008 * fVar5 + fStack0000000000000000 * fVar7) - fVar3 * fVar6,
                     (fVar3 * fVar5 + in_stack_00000008 * fVar6 + fStack0000000000000004 * fVar7) -
                     fStack0000000000000000 * fVar4,
                     ((in_stack_00000008 * fVar7 - fVar3 * fVar4) - fStack0000000000000000 * fVar5)
                     - fStack0000000000000004 * fVar6,lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


