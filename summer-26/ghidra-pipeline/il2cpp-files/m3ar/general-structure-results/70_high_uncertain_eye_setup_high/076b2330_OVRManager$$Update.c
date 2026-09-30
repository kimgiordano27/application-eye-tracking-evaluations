/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 076b2330
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x24 + 0x250);
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  do {
    lVar2 = FUN_0752a63c(lVar4);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *puVar6;
      lVar3 = thunk_FUN_0406ddbc(lVar2,uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031c0c(lVar2,uVar5);
      }
    }
    lVar2 = FUN_0406a6bc(*(long *)(*unaff_x23 + 0xb8) + 8,lVar3,lVar4);
    bVar1 = lVar2 != lVar4;
    lVar4 = lVar2;
  } while (bVar1);
  return;
}


