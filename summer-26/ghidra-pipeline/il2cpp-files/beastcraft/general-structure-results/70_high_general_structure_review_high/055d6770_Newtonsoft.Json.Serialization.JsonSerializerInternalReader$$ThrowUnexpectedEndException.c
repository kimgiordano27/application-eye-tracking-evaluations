/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 055d6770
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  *(char *)(param_1 + 0x20) = (char)param_3;
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(char *)(lVar1 + 0x21) = (char)((ulong)param_3 >> 8);
    plVar2 = *(long **)(param_2 + 0x10);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x055d67b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x388))
                (plVar2,*(undefined8 *)(param_2 + 0x18),0,2,*(undefined8 *)(*plVar2 + 0x390));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


