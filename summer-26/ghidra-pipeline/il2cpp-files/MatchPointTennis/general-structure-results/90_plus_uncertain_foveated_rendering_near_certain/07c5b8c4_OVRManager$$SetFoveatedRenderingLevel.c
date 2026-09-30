/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 07c5b8c4
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


void OVRManager__SetFoveatedRenderingLevel(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x24;
  
  do {
    if ((bool)in_ZR) {
      return;
    }
    lVar1 = FUN_07a843dc(param_1);
    if (lVar1 != 0) {
      uVar3 = *unaff_x24;
      lVar2 = thunk_FUN_04485110(lVar1,uVar3);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar1,uVar3);
      }
    }
    lVar1 = FUN_044819d0();
    in_ZR = param_1 == lVar1;
    param_1 = lVar1;
  } while( true );
}


