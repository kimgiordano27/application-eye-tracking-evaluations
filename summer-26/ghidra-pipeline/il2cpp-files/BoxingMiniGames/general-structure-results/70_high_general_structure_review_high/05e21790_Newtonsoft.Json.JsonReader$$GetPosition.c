/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$GetPosition
ENTRY_POINT: 05e21790
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonReader__GetPosition(undefined8 param_1,uint *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ulong uVar4;
  int in_w8;
  uint uVar5;
  int unaff_w22;
  
  if (unaff_w22 < in_w8) {
LAB_05e2179c:
    uVar2 = 0;
  }
  else {
    puVar3 = (ushort *)FUN_05e26c84(param_1,0);
    uVar5 = 0;
    while (unaff_w22 = unaff_w22 + -1, -1 < unaff_w22) {
      if (0xccccccc < uVar5) goto LAB_05e2179c;
      uVar1 = *puVar3;
      uVar5 = uVar5 * 10;
      if (uVar1 != 0) {
        puVar3 = puVar3 + 1;
        uVar5 = (uVar5 + uVar1) - 0x30;
      }
    }
    uVar4 = FUN_05e26c68(param_1,0);
    if ((uVar4 & 1) == 0) {
      if ((int)uVar5 < 0) goto LAB_05e2179c;
    }
    else {
      uVar5 = -uVar5;
      if (0 < (int)uVar5) {
        return 0;
      }
    }
    uVar2 = 1;
    *param_2 = uVar5;
  }
  return uVar2;
}


