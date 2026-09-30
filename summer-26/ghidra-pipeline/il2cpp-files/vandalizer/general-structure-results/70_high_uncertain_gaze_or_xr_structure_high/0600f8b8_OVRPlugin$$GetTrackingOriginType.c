/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 0600f8b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingOriginType
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_5 != 0) {
    lVar1 = *(long *)(param_4 + 0x20);
    uVar2 = FUN_06e6d6d4(param_5,0);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x10) = uVar2;
      *(undefined4 *)(lVar1 + 0x14) = param_2;
      *(undefined4 *)(lVar1 + 0x18) = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


