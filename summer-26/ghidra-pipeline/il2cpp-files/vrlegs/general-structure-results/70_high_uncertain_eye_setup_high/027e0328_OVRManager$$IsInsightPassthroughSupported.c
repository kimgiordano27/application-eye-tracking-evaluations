/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 027e0328
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsInsightPassthroughSupported(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0x40) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar1 = FUN_027df9d8();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar2 = (long *)FUN_0263ef9c(lVar1,0);
    if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_03cf2780)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar2);
    }
    *(long *)(unaff_x19 + 0x20) = (long)plVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(unaff_x19 + 0x20),plVar2);
  }
  return;
}


