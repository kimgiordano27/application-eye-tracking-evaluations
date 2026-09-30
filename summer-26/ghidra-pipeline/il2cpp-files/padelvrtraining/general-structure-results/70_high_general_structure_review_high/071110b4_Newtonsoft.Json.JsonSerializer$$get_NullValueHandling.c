/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_NullValueHandling
ENTRY_POINT: 071110b4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_NullValueHandling(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  
  if (param_1 != 0) {
    uVar1 = unaff_w20 - 1;
    if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x18) <= (int)uVar1)) {
      thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
      uVar2 = thunk_FUN_03d2ef40();
      uVar3 = thunk_FUN_03d1e194(PTR_DAT_0920fde8);
      uVar4 = thunk_FUN_03d1e194(PTR_DAT_0920fdf0);
      FUN_070c848c(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_03d1e194(PTR_DAT_0920fdf8);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar2,uVar3);
    }
    lVar5 = *(long *)(unaff_x19 + 0x120);
    if (lVar5 != 0) {
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        return *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


