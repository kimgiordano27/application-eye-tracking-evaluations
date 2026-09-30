/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 055d68a4
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  uint in_w9;
  
  if (2 < in_w9) {
    *(char *)(param_1 + 0x22) = (char)((ulong)param_3 >> 0x10);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 != 0) {
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) == 0) goto LAB_055d6900;
      *(char *)(lVar1 + 0x23) = (char)((ulong)param_3 >> 0x18);
      plVar2 = *(long **)(param_2 + 0x10);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x055d68f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 055d68f8 to 056d6963 has its CatchHandler @ 055d68f8
                       catch() { ... } // from try @ 055d68f8 with catch @ 055d68f8
                       catch() { ... } // from try @ 055d69ac with catch @ 055d68f8
                       catch() { ... } // from try @ 055d6a24 with catch @ 055d68f8 */
        (**(code **)(*plVar2 + 0x388))
                  (plVar2,*(undefined8 *)(param_2 + 0x18),0,4,*(undefined8 *)(*plVar2 + 0x390));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
LAB_055d6900:
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
}


