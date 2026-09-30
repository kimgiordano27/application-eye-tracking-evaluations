/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 050dc510
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (short *param_1)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  ulong uVar4;
  uint in_w9;
  short in_w10;
  ulong in_x12;
  int in_w14;
  long unaff_x19;
  long unaff_x20;
  short *unaff_x21;
  ulong unaff_x23;
  
  while( true ) {
    psVar3 = param_1 + -1;
    *param_1 = (short)in_x12 + (short)unaff_x23 * in_w10 + 0x30;
    if ((in_w14 < 0) && ((uint)in_x12 < 10)) break;
    in_x12 = unaff_x23 & 0xffffffff;
    unaff_x23 = (unaff_x23 & 0xffffffff) * (ulong)in_w9 >> 0x23;
    param_1 = psVar3;
    unaff_x21 = psVar3;
    in_w14 = in_w14 + -1;
  }
  uVar4 = unaff_x20 - (long)unaff_x21;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 >> 1;
  *(int *)(unaff_x19 + 4) = (int)uVar4;
  psVar2 = (short *)FUN_050e41e0();
  psVar3 = psVar2;
  if (-1 < (int)uVar4 + -1) {
    do {
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
      psVar2 = psVar3 + 1;
      *psVar3 = *unaff_x21;
      psVar3 = psVar2;
      unaff_x21 = unaff_x21 + 1;
    } while (uVar1 != 0);
  }
  *psVar2 = 0;
  return;
}


