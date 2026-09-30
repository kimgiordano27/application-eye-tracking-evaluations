/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 01782850
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  
  puVar1 = Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_GetTokenValue<bool>__;
  if ((*(byte *)(unaff_x19 + 0xdec) & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_GetTokenValue<bool>__
                      );
    *(undefined1 *)(unaff_x19 + 0xdec) = 1;
  }
  uStack000000000000000c = 0;
  FUN_015e16c8(&stack0x0000000c,4,0);
  uVar2 = uStack000000000000000c;
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_0178237c(lVar3,uVar2);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


