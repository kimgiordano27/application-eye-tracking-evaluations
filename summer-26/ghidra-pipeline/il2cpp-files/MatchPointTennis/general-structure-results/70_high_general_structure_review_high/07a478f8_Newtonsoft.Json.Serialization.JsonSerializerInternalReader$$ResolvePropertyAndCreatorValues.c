/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 07a478f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
          (ulong param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint *unaff_x19;
  int unaff_w21;
  
  if ((param_1 & 1) == 0) {
    puVar2 = (ushort *)FUN_07a4cba0();
    uVar3 = 0;
    do {
      do {
        unaff_w21 = unaff_w21 + -1;
        if (unaff_w21 < 0) {
          *unaff_x19 = uVar3;
          return 1;
        }
        if (0x19999999 < uVar3) {
          return 0;
        }
        uVar1 = uVar3 * 10;
        uVar3 = uVar1;
      } while (*puVar2 == 0);
      uVar3 = (uVar1 + *puVar2) - 0x30;
      puVar2 = puVar2 + 1;
    } while (uVar1 <= uVar3);
  }
  return 0;
}


