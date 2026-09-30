/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 07484ab4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0x2e8);
  if ((*(byte *)(unaff_x20 + 0xa4f) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_092212e8);
    *(undefined1 *)(unaff_x20 + 0xa4f) = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = thunk_FUN_03d2ef40(*puVar4);
  FUN_07484714();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x40);
    *puVar3 = uVar1;
    thunk_FUN_03d1023c(puVar3,uVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = thunk_FUN_03d2ef40(*puVar4);
    FUN_07484714();
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x48);
      *puVar4 = uVar1;
      thunk_FUN_03d1023c(puVar4,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


