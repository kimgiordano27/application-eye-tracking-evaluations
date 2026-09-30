/*
FUNCTION_NAME: OVA.WisteriaX.Utils.MessageFactory$$CreateColliderRequestValueChangeMessage
ENTRY_POINT: 08c4cb34
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined4
OVA_WisteriaX_Utils_MessageFactory__CreateColliderRequestValueChangeMessage
          (long param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s13;
  
  fVar2 = param_2 * param_2 + param_3 * param_3;
  fVar3 = param_4 * param_4 + (unaff_s8 - unaff_s13) * (unaff_s8 - unaff_s13);
  fVar5 = **(float **)(**(long **)(param_1 + 0xd58) + 0xb8) * 8.0;
  fVar4 = ABS(fVar2 - fVar3);
  fVar2 = fVar2 - fVar3;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = fVar4 * DAT_01aecc74;
  if (fVar4 * DAT_01aecc74 <= fVar5) {
    fVar3 = fVar5;
  }
  uVar1 = 0xffffffff;
  if (0.0 < fVar2) {
    uVar1 = 1;
  }
  if (ABS(0.0 - fVar2) < fVar3) {
    uVar1 = 0;
  }
  return uVar1;
}


