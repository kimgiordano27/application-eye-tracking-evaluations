/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 0745ce44
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(void)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 *unaff_x24;
  
  do {
    do {
      lVar2 = FUN_03d703d8();
      if (unaff_x21 == lVar2) {
        return;
      }
      lVar1 = FUN_071bfe60(lVar2);
      unaff_x21 = lVar2;
    } while (lVar1 == 0);
    uVar3 = *unaff_x24;
    lVar2 = thunk_FUN_03d2ee44(lVar1,uVar3);
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d8e4(lVar1,uVar3);
}


