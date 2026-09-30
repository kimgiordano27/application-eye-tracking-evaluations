/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 055d1cdc
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
               (long *param_1,undefined1 param_2)

{
  long lVar1;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xfe8);
  if ((*(byte *)(unaff_x21 + 0x5cc) & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a2efe8);
    *(undefined1 *)(unaff_x21 + 0x5cc) = 1;
  }
  lVar1 = FUN_02e3cb08(*puVar2,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined1 *)(lVar1 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x055d1d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x388))(param_1,lVar1,0,1,*(undefined8 *)(*param_1 + 0x390));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


