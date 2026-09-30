/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatString
ENTRY_POINT: 0170f0c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatString(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(param_1 + 0x10);
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    if (lVar4 != 0) {
      uVar3 = FUN_0172ac44(lVar4,uVar1,0);
      *(undefined8 *)(param_1 + 0x120) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


