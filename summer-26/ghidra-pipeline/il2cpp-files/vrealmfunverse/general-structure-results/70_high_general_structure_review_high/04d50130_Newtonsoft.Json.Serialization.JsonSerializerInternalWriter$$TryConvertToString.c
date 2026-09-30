/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 04d50130
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString(void)

{
  int iVar1;
  int in_w8;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  
  if (in_w8 == 0) {
    iVar1 = FUN_04d5023c();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 == 0) goto LAB_04d501b8;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_04d50238;
  }
  else {
    uVar2 = *(uint *)(unaff_x19 + 100);
    if (*(int *)(unaff_x19 + 0x60) <= (int)uVar2) {
      FUN_04d5035c();
      if (*(int *)(unaff_x19 + 0x60) == 0) {
        return 0xffffffff;
      }
      uVar2 = *(uint *)(unaff_x19 + 100);
    }
    lVar3 = *(long *)(unaff_x19 + 0x28);
    *(uint *)(unaff_x19 + 100) = uVar2 + 1;
    if (lVar3 == 0) {
LAB_04d501b8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
LAB_04d50238:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = lVar3 + (int)uVar2;
  }
  return (ulong)*(byte *)(lVar3 + 0x20);
}


