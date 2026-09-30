/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_NullValueHandling
ENTRY_POINT: 071110bc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_NullValueHandling(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  long lVar4;
  long unaff_x19;
  
  if (((int)in_w8 < 0) || (*(int *)(param_1 + 0x18) <= (int)in_w8)) {
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar1 = thunk_FUN_03d2ef40();
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_0920fde8);
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_0920fdf0);
    FUN_070c848c(uVar1,uVar2,uVar3,0);
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_0920fdf8);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar1,uVar2);
  }
  lVar4 = *(long *)(unaff_x19 + 0x120);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (in_w8 < *(uint *)(lVar4 + 0x18)) {
    return *(undefined8 *)(lVar4 + (ulong)in_w8 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


