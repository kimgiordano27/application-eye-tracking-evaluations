/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 067caee8
PROGRAM: Waifu-libil2cpp.so
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
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (unaff_w19 < 5) {
    if (unaff_w19 - 1U < 0xc) {
                    /* catch() { ... } // from try @ 067cabec with catch @ 067caf08
                       catch() { ... } // from try @ 067cac88 with catch @ 067caf08
                       catch() { ... } // from try @ 067cae50 with catch @ 067caf08
                       catch() { ... } // from try @ 067caed4 with catch @ 067caf08 */
      return;
    }
    uVar2 = FUN_033d1ba8(&DAT_08440c98);
  }
  else {
    FUN_033d1ba8(&DAT_083c9fc0);
    FUN_02e06fb0();
    uVar2 = FUN_067d0c18(0);
    uVar3 = FUN_033d1ba8(&DAT_0844be60);
    uStack000000000000000c = 1;
    uVar4 = FUN_033d1ba8(&DAT_083cda98);
    uVar4 = thunk_FUN_03398650(uVar4,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = 4;
    uVar1 = FUN_033d1ba8(&DAT_083cda98);
    uVar1 = thunk_FUN_03398650(uVar1,&stack0x00000008);
    uVar2 = FUN_0666f2f0(uVar2,uVar3,uVar4,uVar1,0);
  }
  FUN_033d1ba8(&DAT_083c8a18);
  uVar3 = thunk_FUN_03398a84();
  uVar4 = FUN_033d1ba8(&DAT_08455c38);
  FUN_06782c1c(uVar3,uVar4,uVar2,0);
  uVar2 = FUN_033d1ba8(&DAT_0840ddb8);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar3,uVar2);
}


