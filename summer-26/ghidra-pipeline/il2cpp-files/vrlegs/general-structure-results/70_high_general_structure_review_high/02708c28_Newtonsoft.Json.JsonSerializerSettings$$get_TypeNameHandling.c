/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 02708c28
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


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  int unaff_w20;
  undefined4 unaff_w21;
  long *unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02708a90(unaff_w20,unaff_w21);
  if ((unaff_w20 == 0x25c2) && (4 < unaff_w19)) {
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar3 = FUN_0271c4e0(0);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cf0148);
    uVar4 = FUN_027b3d94(uVar4,0);
    puVar1 = PTR_DAT_03cbeda8;
    uStack000000000000000c = 1;
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
    uVar5 = thunk_FUN_01a89a98(uVar5,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = 4;
    uVar2 = thunk_FUN_01a6ca08(puVar1);
    uVar2 = thunk_FUN_01a89a98(uVar2,&stack0x00000008);
    uVar3 = FUN_025be9f0(uVar3,uVar4,uVar5,uVar2,0);
  }
  else {
    if (unaff_w19 - 1U < 0xc) {
      return;
    }
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf7f10);
    uVar3 = FUN_027b3d94(uVar3,0);
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
  uVar4 = thunk_FUN_01a89e68();
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cf6230);
  FUN_026ade84(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf7fd8);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar3);
}


