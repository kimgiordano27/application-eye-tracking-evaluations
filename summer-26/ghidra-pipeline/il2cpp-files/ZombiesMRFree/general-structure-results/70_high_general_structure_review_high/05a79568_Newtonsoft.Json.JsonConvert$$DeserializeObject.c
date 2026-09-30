/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 05a79568
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long lVar5;
  undefined8 in_stack_00000008;
  
  if (unaff_x19[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar2 = FUN_05a10bdc(unaff_x19[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
    puVar1 = PTR_DAT_06fa3aa8;
    if ((uVar2 & 1) == 0) {
      thunk_FUN_03037804(PTR_DAT_06f6e848);
      uVar4 = thunk_FUN_0301080c();
      uVar3 = thunk_FUN_03037804(PTR_DAT_06fa9fb8);
      FUN_05aea8a4(uVar4,uVar3,0);
    }
    else {
      if ((char)unaff_x19[0xb] != '\0') {
        FUN_05a79a0c();
      }
      lVar5 = unaff_x19[7];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_05a796a4(lVar5,(long)&stack0x00000008 + 4);
      if (in_stack_00000008._4_4_ == 0) {
        return;
      }
      uVar3 = FUN_05a787d4();
      thunk_FUN_03037804(PTR_DAT_06fa3aa8);
      FUN_02b0e39c();
      uVar4 = FUN_05a7884c(uVar3,in_stack_00000008._4_4_);
    }
  }
  else {
    thunk_FUN_03037804(PTR_DAT_06f9a1d0);
    uVar4 = thunk_FUN_0301080c();
    uVar3 = thunk_FUN_03037804(PTR_DAT_06fa9fb0);
    FUN_05afdbbc(uVar4,uVar3,0);
  }
  uVar3 = thunk_FUN_03037804(PTR_DAT_06fa9fc0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar4,uVar3);
}


