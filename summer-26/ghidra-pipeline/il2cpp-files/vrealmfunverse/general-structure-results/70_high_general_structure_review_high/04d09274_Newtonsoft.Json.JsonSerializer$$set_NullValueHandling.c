/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_NullValueHandling
ENTRY_POINT: 04d09274
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


uint Newtonsoft_Json_JsonSerializer__set_NullValueHandling(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined2 *unaff_x19;
  long unaff_x20;
  undefined2 uStack000000000000000c;
  
  uVar2 = thunk_FUN_04c08854(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_06330168,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = thunk_FUN_04c08854(*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x50),
                               *(undefined8 *)PTR_DAT_06330160,0);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  uStack000000000000000c = 0;
  FUN_03ad0c14(&stack0x0000000c,uVar1 & 1,*(undefined8 *)PTR_DAT_063140b0);
  *unaff_x19 = uStack000000000000000c;
  uVar1 = FUN_03ad0c2c();
  return uVar1 & 1;
}


