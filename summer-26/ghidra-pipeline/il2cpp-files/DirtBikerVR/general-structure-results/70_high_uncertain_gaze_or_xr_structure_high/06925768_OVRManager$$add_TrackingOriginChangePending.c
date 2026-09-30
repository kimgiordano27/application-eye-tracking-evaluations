/*
FUNCTION_NAME: OVRManager$$add_TrackingOriginChangePending
ENTRY_POINT: 06925768
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRManager__add_TrackingOriginChangePending(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    plVar2 = (long *)FUN_065e67ac(0);
    if (plVar2 == (long *)0x0) goto LAB_06924e24;
    iVar1 = (**(code **)(*plVar2 + 0x1e8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x1f0));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_069237f8(*(long *)(param_1 + 0x10),iVar1);
    if (iVar1 < 1) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_06923b28(*(long *)(param_1 + 0x10),param_2,iVar1);
      return;
    }
  }
LAB_06924e24:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


