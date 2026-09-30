/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateTimeZoneHandling
ENTRY_POINT: 05066630
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_JsonSerializer__get_DateTimeZoneHandling(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_w8;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if (in_w8 < 0xb7) {
    return param_2;
  }
  thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
  FUN_02a7d698();
  uVar2 = FUN_05064e74();
  uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067d5e68);
  uVar3 = FUN_05116b30(uVar3,0);
  puVar1 = PTR_DAT_067c9338;
  uStack000000000000000c = 0x526;
  uVar4 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x0000000c);
  in_stack_00000008 = 0x5dc;
  uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
  uVar2 = FUN_04f7019c(uVar2,uVar3,uVar4,uVar5,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c9678);
  uVar3 = thunk_FUN_02f45270();
  uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067db110);
  FUN_0505262c(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_02f6ef30(PTR_DAT_067dc0c8);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar3,uVar2);
}


