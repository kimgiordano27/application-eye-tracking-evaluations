/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 058fd704
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  long in_x9;
  uint in_w10;
  undefined4 in_register_00004054;
  long unaff_x19;
  byte unaff_w20;
  undefined8 uVar5;
  
  if (*(byte *)(in_x9 + 0x130) < in_w10) {
    bVar2 = false;
  }
  else {
    bVar2 = *(long *)(*(long *)(in_x9 + 200) + CONCAT44(in_register_00004054,in_w10) * 8 + -8) ==
            param_1;
  }
  *(bool *)(unaff_x19 + 0x44) = bVar2;
  puVar1 = PTR_DAT_07104580;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar4 = thunk_FUN_03196ed8(*(long *)(unaff_x19 + 0x10),0);
    uVar5 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
    }
    uVar5 = FUN_0593e698(uVar5,0);
    bVar3 = FUN_05947b18(uVar4,uVar5,0);
                    /* try { // try from 058fd78c to 059fd86f has its CatchHandler @ 058fd78c
                       catch() { ... } // from try @ 058fd78c with catch @ 058fd78c
                       catch() { ... } // from try @ 058fd8b4 with catch @ 058fd78c
                       catch() { ... } // from try @ 058fdab4 with catch @ 058fd78c
                       catch() { ... } // from try @ 058fdb00 with catch @ 058fd78c
                       catch() { ... } // from try @ 058fdb80 with catch @ 058fd78c */
    *(byte *)(unaff_x19 + 0x46) = unaff_w20 & 1;
    *(byte *)(unaff_x19 + 0x45) = bVar3 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


