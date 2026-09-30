/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 027f4e40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_01ab69ac(PTR_DAT_03cfd678);
  FUN_01ab69ac(PTR_DAT_03cfccd8);
  FUN_01ab69ac(PTR_DAT_03cfd680);
  FUN_01ab69ac(PTR_DAT_03cf6390);
  *(undefined1 *)(unaff_x20 + 0x16e) = 1;
  if (unaff_x21 != 0) {
    lVar2 = FUN_027ef754();
    if (lVar2 == 0) {
      return;
    }
    FUN_027f0230();
    lVar3 = *unaff_x19;
    if (lVar3 != 0) {
LAB_027f4f00:
      FUN_0221fd0c(lVar3,*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)PTR_DAT_03cfd680);
      return;
    }
    if (*(long *)(lVar2 + 0x90) != 0) {
      uVar1 = FUN_0206af6c(*(long *)(lVar2 + 0x90),*(undefined8 *)PTR_DAT_03cf6390);
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfccd8);
      FUN_0221f474(lVar3,uVar1,*(undefined8 *)PTR_DAT_03cfd678);
      *unaff_x19 = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar3 = *unaff_x19;
      if (lVar3 != 0) goto LAB_027f4f00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


