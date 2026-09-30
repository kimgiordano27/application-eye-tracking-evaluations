/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatString
ENTRY_POINT: 0559b91c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_DateFormatString(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar2 = (**(code **)(param_1 + 0x1a8))(param_2,*(undefined8 *)(param_1 + 0x1b0));
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(unaff_x19 + 0x100);
    uVar3 = FUN_055b7c14(lVar4,uVar2,0);
    *puVar1 = uVar3;
    thunk_FUN_02f411dc(puVar1,uVar3);
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


