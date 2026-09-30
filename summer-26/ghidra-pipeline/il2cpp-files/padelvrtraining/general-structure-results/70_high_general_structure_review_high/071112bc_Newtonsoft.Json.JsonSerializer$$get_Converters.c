/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Converters
ENTRY_POINT: 071112bc
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


undefined8 Newtonsoft_Json_JsonSerializer__get_Converters(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  
  plVar3 = *(long **)(unaff_x19 + 0x78);
  if (plVar3 != (long *)0x0) {
    lVar5 = *(long *)(unaff_x19 + 0x10);
    uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(unaff_x19 + 0x130);
      uVar4 = FUN_0712dad0(lVar5,uVar2,0);
      *puVar1 = uVar4;
      thunk_FUN_03d1023c(puVar1,uVar4);
      return *puVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


