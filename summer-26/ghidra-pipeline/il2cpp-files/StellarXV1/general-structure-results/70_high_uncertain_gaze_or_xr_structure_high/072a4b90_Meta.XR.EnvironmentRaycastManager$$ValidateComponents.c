/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$ValidateComponents
ENTRY_POINT: 072a4b90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentRaycastManager__ValidateComponents(long param_1,float param_2)

{
  uint uVar1;
  long lVar2;
  int in_w9;
  long in_x10;
  uint in_w11;
  int in_w12;
  long in_x13;
  long in_x14;
  long in_x15;
  float fVar3;
  float fVar4;
  
  while( true ) {
    lVar2 = in_x14 + in_x13 * 4;
    in_w12 = in_w12 + -1;
    uVar1 = (int)in_x13 + 1;
    fVar3 = *(float *)(in_x15 + 0x20);
    fVar4 = *(float *)(lVar2 + 0x20);
    *(float *)(in_x15 + 0x20) = (fVar3 + fVar4) * param_2;
    *(float *)(lVar2 + 0x20) = (fVar3 - fVar4) * param_2;
    if (in_w12 < 2) {
      return;
    }
    if ((in_w11 == uVar1) || (in_w9 == 1)) break;
    in_x14 = *(long *)(param_1 + 0x28);
    if (in_x14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_x13 = (long)(int)uVar1;
    if (*(uint *)(in_x14 + 0x18) <= uVar1) break;
    in_x15 = in_x10 + in_x13 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


