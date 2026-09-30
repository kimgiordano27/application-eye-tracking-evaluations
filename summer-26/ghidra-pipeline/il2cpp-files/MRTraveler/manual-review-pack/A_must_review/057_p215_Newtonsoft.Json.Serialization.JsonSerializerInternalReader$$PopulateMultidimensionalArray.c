/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 07106fa0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray(void)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int in_w8;
  short *psVar5;
  int iVar6;
  short unaff_w19;
  uint unaff_w20;
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  psVar5 = (short *)(unaff_x25 + (ulong)(uint)(unaff_w22 << 1));
  iVar6 = unaff_w23 + -2;
  do {
    uVar1 = unaff_w20 & 0xf;
    sVar3 = 0x30;
    if (9 < uVar1) {
      sVar3 = unaff_w19;
    }
    unaff_w20 = unaff_w20 >> 4;
    psVar5 = psVar5 + -1;
    *psVar5 = sVar3 + (short)uVar1;
    iVar4 = iVar6 + -1;
    bVar2 = -1 < iVar6;
    iVar6 = iVar4;
  } while ((bVar2) || (unaff_w20 != 0));
  return;
}


