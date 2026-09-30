/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 055cfa30
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
               (undefined8 param_1,long param_2)

{
  int iVar1;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  long lStack0000000000000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = param_1;
  lStack0000000000000018 = param_2;
  while( true ) {
    if (lStack0000000000000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    iVar1 = (**(code **)(*unaff_x20 + 0x358))();
    if (iVar1 == 0) break;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    (**(code **)(*unaff_x19 + 0x388))();
  }
  FUN_02db8b2c(&stack0x00000008);
  return;
}


