/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 05d00b78
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(long param_1)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x24;
  
  do {
    uVar3 = *unaff_x24;
    lVar1 = thunk_FUN_03010710(param_1,uVar3);
    lVar2 = unaff_x21;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(param_1,uVar3);
    }
    do {
      unaff_x21 = RootMotion_Dynamics_SubBehaviourBalancer_Settings___ctor();
      if (lVar2 == unaff_x21) {
        return;
      }
      param_1 = FUN_05b36320(unaff_x21);
      lVar2 = unaff_x21;
    } while (param_1 == 0);
  } while( true );
}


