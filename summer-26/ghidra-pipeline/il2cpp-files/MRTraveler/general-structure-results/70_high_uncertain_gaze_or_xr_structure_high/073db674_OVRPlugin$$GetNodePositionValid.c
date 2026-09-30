/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 073db674
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetNodePositionValid
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                long param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_6 != 0) {
    fVar2 = (float)FUN_085eb388(param_6,0);
    lVar1 = *(long *)(param_5 + 0x20);
    if (lVar1 != 0) {
      fVar6 = *(float *)(lVar1 + 0x38);
      fVar4 = *(float *)(lVar1 + 0x34) * DAT_018b02e8;
      fVar5 = fVar6 * DAT_018b02e8;
      fVar3 = (float)FUN_085d262c(*(float *)(lVar1 + 0x30) * DAT_018b02e8,fVar4,fVar5,0);
      return (param_2 * fVar5 + param_4 * fVar3 + fVar2 * fVar6) - param_3 * fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


