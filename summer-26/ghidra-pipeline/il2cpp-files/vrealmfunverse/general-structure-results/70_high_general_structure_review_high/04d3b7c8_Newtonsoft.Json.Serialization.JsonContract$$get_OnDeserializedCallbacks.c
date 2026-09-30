/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 04d3b7c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(long param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  plVar2 = (long *)thunk_FUN_02b79644(*unaff_x20);
  FUN_04c14a48(plVar2,0x1000,0);
  if (param_1 != 0) {
    iVar1 = (**(code **)(*unaff_x19 + 0x1e8))();
    while (iVar1 != 0) {
      if (plVar2 == (long *)0x0) goto LAB_04d3b86c;
      FUN_04c160b0(plVar2,param_1,0,iVar1,0);
      iVar1 = (**(code **)(*unaff_x19 + 0x1e8))();
    }
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04d3b868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      return;
    }
  }
LAB_04d3b86c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


