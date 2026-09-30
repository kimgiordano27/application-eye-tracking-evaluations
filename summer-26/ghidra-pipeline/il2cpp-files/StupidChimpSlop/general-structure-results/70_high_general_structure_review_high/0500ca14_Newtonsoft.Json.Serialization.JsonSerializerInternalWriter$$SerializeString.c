/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 0500ca14
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString
          (int *param_1,uint *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ulong uVar4;
  uint uVar5;
  int unaff_w22;
  
  if ((unaff_w22 < 0xb) && (*param_1 <= unaff_w22)) {
    puVar3 = (ushort *)FUN_05011f14(param_1,0);
    uVar5 = 0;
    while (unaff_w22 = unaff_w22 + -1, -1 < unaff_w22) {
      if (0xccccccc < uVar5) goto LAB_0500ca2c;
      uVar1 = *puVar3;
      uVar5 = uVar5 * 10;
      if (uVar1 != 0) {
        puVar3 = puVar3 + 1;
        uVar5 = (uVar5 + uVar1) - 0x30;
      }
    }
    uVar4 = FUN_05011ef8(param_1,0);
    if ((uVar4 & 1) == 0) {
      if ((int)uVar5 < 0) goto LAB_0500ca2c;
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
  else {
LAB_0500ca2c:
    uVar2 = 0;
  }
  return uVar2;
}


