/*
FUNCTION_NAME: OVRManager$$add_TrackingOriginChangePending
ENTRY_POINT: 05cfa940
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__add_TrackingOriginChangePending(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xa80));
  *(undefined1 *)(unaff_x21 + 0x758) = 1;
  plVar4 = (long *)(unaff_x19 + 0x48);
  lVar2 = FUN_05b36128(*plVar4);
  puVar1 = PTR_DAT_06fb5a80;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_06fb5a80;
    lVar3 = thunk_FUN_03010710(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_03010710(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_05cfa9b0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe9884(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_05cfa9b0:
  thunk_FUN_03048534(plVar4,lVar3);
  return;
}


