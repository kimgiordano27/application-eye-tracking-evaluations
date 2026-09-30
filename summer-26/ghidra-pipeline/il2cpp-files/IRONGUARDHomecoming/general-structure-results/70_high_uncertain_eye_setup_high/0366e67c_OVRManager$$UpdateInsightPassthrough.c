/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 0366e67c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateInsightPassthrough(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x24;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(unaff_x24 + 0x2a0);
  do {
    lVar2 = FUN_035afcfc(unaff_x21);
    if (lVar2 != 0) {
      uVar4 = *puVar5;
      lVar3 = thunk_FUN_01f116d0(lVar2,uVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar2,uVar4);
      }
    }
    lVar2 = FUN_01ec97e0();
    bVar1 = unaff_x21 != lVar2;
    unaff_x21 = lVar2;
  } while (bVar1);
  return;
}


