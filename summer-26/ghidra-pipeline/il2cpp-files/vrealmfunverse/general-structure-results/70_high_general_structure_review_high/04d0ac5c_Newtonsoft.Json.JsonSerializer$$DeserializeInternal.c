/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 04d0ac5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__DeserializeInternal(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04ce5a0c();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_02b79548(), lVar2 == 0)) {
    uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar3,0);
  }
  puVar1 = PTR_DAT_063301a8;
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x20) = unaff_x20;
    thunk_FUN_02bb0e9c();
    **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
    thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


