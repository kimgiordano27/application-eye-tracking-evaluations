/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 076137b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings___cctor(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long in_x9;
  long unaff_x19;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)(param_1 + in_x9 * 8 + 0x20);
  uVar5 = *puVar4;
  *puVar4 = 0;
  thunk_FUN_040ec700(puVar4,0);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar2 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
    iVar1 = *(int *)(unaff_x19 + 0x18) + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + -1;
    *(int *)(unaff_x19 + 0x18) = iVar1 - iVar3 * iVar2;
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + 1;
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


