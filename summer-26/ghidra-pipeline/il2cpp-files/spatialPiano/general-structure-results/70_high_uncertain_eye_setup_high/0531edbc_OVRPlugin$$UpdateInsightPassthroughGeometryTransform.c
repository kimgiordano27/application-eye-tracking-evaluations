/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 0531edbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  long unaff_x19;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar5;
  
  fVar3 = unaff_s9 * param_3;
  fVar2 = unaff_s9 * param_2;
  fVar4 = (unaff_s10 * param_3 + param_5 + param_6) - fVar2;
  fVar5 = ((unaff_s11 * param_4 - unaff_s8 * param_1) - unaff_s10 * param_2) - fVar3;
  uVar1 = FUN_0531e944();
  FUN_060dfb18(fVar4,(unaff_s9 * param_1 + unaff_s11 * param_2 + unaff_s10 * param_4) -
                     unaff_s8 * param_3,
               (unaff_s8 * param_2 + unaff_s11 * param_3 + unaff_s9 * param_4) - unaff_s10 * param_1
               ,fVar5,uVar1,fVar2,fVar3,0);
  if (unaff_x19 != 0) {
    FUN_061010f4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


