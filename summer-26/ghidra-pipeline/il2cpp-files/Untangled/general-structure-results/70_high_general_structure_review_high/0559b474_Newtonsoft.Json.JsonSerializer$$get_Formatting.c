/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Formatting
ENTRY_POINT: 0559b474
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_Formatting(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  
  lVar5 = *(long *)(unaff_x19 + 0x128);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar1 = param_1 - 1;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)*(uint *)(lVar5 + 0x18))) {
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      return *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  thunk_FUN_02f239f0(PTR_DAT_06d0e378);
  uVar2 = thunk_FUN_02ef1808();
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d4f348);
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d4f350);
  FUN_0555b650(uVar2,uVar3,uVar4,0);
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d4f360);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,uVar3);
}


