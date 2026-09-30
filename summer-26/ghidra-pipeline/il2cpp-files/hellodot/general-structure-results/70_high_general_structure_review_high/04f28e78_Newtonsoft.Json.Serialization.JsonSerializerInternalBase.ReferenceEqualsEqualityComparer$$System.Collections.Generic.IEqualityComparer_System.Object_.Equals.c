/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 04f28e78
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
               (ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce570);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f8400);
    *(undefined1 *)(unaff_x19 + 0x5e9) = 1;
  }
  lVar2 = FUN_02ce7ad4(*unaff_x20,2);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined2 *)(lVar2 + 0x20) = 0x20, puVar1 = PTR_DAT_065f8400, *(int *)(lVar2 + 0x18) != 1
       )) {
      *(undefined2 *)(lVar2 + 0x22) = 0xa0;
      **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


