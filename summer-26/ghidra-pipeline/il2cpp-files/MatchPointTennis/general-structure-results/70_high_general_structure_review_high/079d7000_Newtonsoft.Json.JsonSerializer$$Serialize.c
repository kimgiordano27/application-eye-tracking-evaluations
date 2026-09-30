/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 079d7000
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Serialize(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  iVar1 = *(int *)(unaff_x19 + 0x20);
  iVar2 = *(int *)(param_1 + 0x18) - (int)param_2;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  FUN_07a612b4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0,iVar2,0);
  if (0 < iVar1 - iVar2) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07a612b4(lVar3,0,*(undefined8 *)(unaff_x20 + 0x10),
                 *(int *)(lVar3 + 0x18) - *(int *)(unaff_x19 + 0x18),iVar1 - iVar2,0);
  }
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  return;
}


