/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 05a79558
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Serialize(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  int iStack000000000000000c;
  
  FUN_02fe925c();
  *(undefined1 *)(unaff_x20 + 0xe72) = 1;
  iStack000000000000000c = 0;
  if (unaff_x19[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar3 = FUN_05a10bdc(unaff_x19[7],0);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*unaff_x19 + 0x1b8))();
    puVar1 = PTR_DAT_06fa3aa8;
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03037804(PTR_DAT_06f6e848);
      uVar5 = thunk_FUN_0301080c();
      uVar4 = thunk_FUN_03037804(PTR_DAT_06fa9fb8);
      FUN_05aea8a4(uVar5,uVar4,0);
    }
    else {
      if ((char)unaff_x19[0xb] != '\0') {
        FUN_05a79a0c();
      }
      lVar6 = unaff_x19[7];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_05a796a4(lVar6,&stack0x0000000c);
      if (iStack000000000000000c == 0) {
        return;
      }
      uVar4 = FUN_05a787d4();
      iVar2 = iStack000000000000000c;
      thunk_FUN_03037804(PTR_DAT_06fa3aa8);
      FUN_02b0e39c();
      uVar5 = FUN_05a7884c(uVar4,iVar2);
    }
  }
  else {
    thunk_FUN_03037804(PTR_DAT_06f9a1d0);
    uVar5 = thunk_FUN_0301080c();
    uVar4 = thunk_FUN_03037804(PTR_DAT_06fa9fb0);
    FUN_05afdbbc(uVar5,uVar4,0);
  }
  uVar4 = thunk_FUN_03037804(PTR_DAT_06fa9fc0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar5,uVar4);
}


