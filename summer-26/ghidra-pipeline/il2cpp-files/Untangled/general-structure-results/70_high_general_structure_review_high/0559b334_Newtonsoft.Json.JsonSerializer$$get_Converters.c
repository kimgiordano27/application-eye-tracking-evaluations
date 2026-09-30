/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Converters
ENTRY_POINT: 0559b334
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_Converters(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  
  uVar1 = unaff_w20 - 1;
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x18) <= (int)uVar1)) {
    thunk_FUN_02f239f0(PTR_DAT_06d0e378);
    uVar2 = thunk_FUN_02ef1808();
    uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d4f348);
    uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d4f350);
    FUN_0555b650(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d4f358);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar2,uVar3);
  }
  lVar5 = *(long *)(unaff_x19 + 0x120);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
    return *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


