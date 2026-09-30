/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ContractResolver
ENTRY_POINT: 07111328
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_ContractResolver(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar3 = *(long *)(param_2 + 0x10);
    uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    if (lVar3 != 0) {
      uVar2 = FUN_0712dc20(lVar3,uVar1,0);
      *unaff_x19 = uVar2;
      thunk_FUN_03d1023c();
      return *unaff_x19;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


