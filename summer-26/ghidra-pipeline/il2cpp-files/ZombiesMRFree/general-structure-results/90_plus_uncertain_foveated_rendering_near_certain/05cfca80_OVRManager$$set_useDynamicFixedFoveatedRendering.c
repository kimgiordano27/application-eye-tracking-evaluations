/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05cfca80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering(long param_1)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  
  do {
    lVar1 = thunk_FUN_03010710(param_1,unaff_x23);
    lVar2 = unaff_x21;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(param_1,unaff_x23);
    }
    do {
      unaff_x21 = RootMotion_Dynamics_SubBehaviourBalancer_Settings___ctor();
      if (lVar2 == unaff_x21) {
        return;
      }
      param_1 = FUN_05b36128(unaff_x21);
      lVar2 = unaff_x21;
    } while (param_1 == 0);
    unaff_x23 = *unaff_x24;
  } while( true );
}


