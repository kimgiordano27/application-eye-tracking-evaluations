/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Formatting
ENTRY_POINT: 02707e0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_JsonSerializer__get_Formatting(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint in_w9;
  uint in_w10;
  long lVar3;
  
  do {
    in_w10 = in_w10 + 1;
    if ((int)in_w9 <= (int)in_w10) {
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cf7f90);
      uVar1 = FUN_027b3d94(uVar1,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar2 = thunk_FUN_01a89e68();
      FUN_026b3fc8(uVar2,uVar1,0);
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03cf7f98);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,uVar1);
    }
    if (in_w9 <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar3 = *(long *)(param_1 + (long)(int)in_w10 * 8 + 0x20);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  } while (param_2 < *(long *)(lVar3 + 0x18));
  return *(undefined4 *)(lVar3 + 0x10);
}


