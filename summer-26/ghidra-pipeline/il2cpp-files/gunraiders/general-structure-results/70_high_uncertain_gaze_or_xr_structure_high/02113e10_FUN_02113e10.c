/*
FUNCTION_NAME: FUN_02113e10
ENTRY_POINT: 02113e10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


long FUN_02113e10(undefined4 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = OVRPlugin_TrackingConfidence___TypeInfo;
  if ((DAT_0452f716 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_TrackingConfidence___TypeInfo);
    DAT_0452f716 = 1;
  }
  lVar2 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_02115ee8(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    *(undefined4 *)(lVar2 + 0x20) = param_1;
    *(byte *)(lVar2 + 0x30) = param_3 & 1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


