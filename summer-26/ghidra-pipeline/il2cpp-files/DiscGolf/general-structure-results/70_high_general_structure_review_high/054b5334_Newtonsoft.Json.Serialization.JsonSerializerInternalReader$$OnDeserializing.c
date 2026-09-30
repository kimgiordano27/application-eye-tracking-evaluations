/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 054b5334
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
                (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  code *in_x9;
  
  uVar1 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x380));
  if ((int)uVar1 != -1) {
    return uVar1;
  }
  plVar2 = (long *)FUN_054b43e0();
  (**(code **)(*plVar2 + 0x2d8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x2e0));
  lVar3 = plVar2[3];
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      return (ulong)*(byte *)(lVar3 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


