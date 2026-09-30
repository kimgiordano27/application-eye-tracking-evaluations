/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 07c5b7d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_foveatedRenderingLevel(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 *unaff_x24;
  
  do {
    lVar2 = FUN_07a84204(param_1);
    if (lVar2 != 0) {
      uVar4 = *unaff_x24;
      lVar3 = thunk_FUN_04485110(lVar2,uVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar2,uVar4);
      }
    }
    param_1 = FUN_044819d0();
    bVar1 = unaff_x21 != param_1;
    unaff_x21 = param_1;
  } while (bVar1);
  return;
}


