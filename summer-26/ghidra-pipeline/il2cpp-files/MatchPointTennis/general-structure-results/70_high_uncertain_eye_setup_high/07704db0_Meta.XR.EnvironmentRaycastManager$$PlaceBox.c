/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$PlaceBox
ENTRY_POINT: 07704db0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__PlaceBox(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_0952fedc(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar2 = FUN_095258d0(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
      FUN_0953d5b8(lVar2,0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return;
}


