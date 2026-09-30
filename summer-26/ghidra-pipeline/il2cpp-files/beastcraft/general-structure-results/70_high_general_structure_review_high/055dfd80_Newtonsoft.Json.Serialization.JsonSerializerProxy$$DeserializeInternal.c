/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 055dfd80
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal(void)

{
  undefined2 uVar1;
  long lVar2;
  long *unaff_x19;
  
  lVar2 = FUN_0564bfdc(0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x10) == 1) {
      uVar1 = FUN_05487524(lVar2,0,0);
      *(undefined2 *)(*(long *)(*unaff_x19 + 0xb8) + 8) = uVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


