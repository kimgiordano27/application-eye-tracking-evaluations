/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 017020e4
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


void Newtonsoft_Json_JsonConvert__SerializeXNode(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  undefined4 unaff_w19;
  int unaff_w20;
  undefined4 unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  
  if (in_w8 < (int)unaff_w22) {
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar1 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar2 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__
                              );
    uVar3 = thunk_FUN_00d48444(
                              Method_System_Runtime_CompilerServices_AsyncTaskCache_CreateCacheableTask<int>__
                              );
    FUN_016efd4c(uVar1,uVar2,uVar3);
    uVar2 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<VelocityTimePair>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar1,uVar2);
  }
  if ((unaff_w22 < *(uint *)(unaff_x23 + 0x18)) && (*(int *)(unaff_x24 + 0x18) != 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01701d6c(unaff_x23 + (long)(int)unaff_w22 * 2 + 0x20,unaff_x24 + 0x20,unaff_w21,unaff_w19,
                 unaff_w20 == 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


