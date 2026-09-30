/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewDictionary
ENTRY_POINT: 07a42708
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewDictionary(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_07a40c18();
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x72) = 0;
  *(undefined8 *)(unaff_x20 + 0x6a) = 0;
  FUN_07a40d5c();
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_078d0a64(unaff_x29 + -0xd0,&uStack_40,0x20,0);
  if ((uVar2 & 0xffff) == 0) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a41528(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x29 + -0xa4);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a40f98(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,uVar1);
  }
  uVar2 = FUN_078d0b6c(unaff_x29 + -0xd0,*(undefined8 *)(unaff_x29 + -0xe8),
                       *(undefined8 *)(unaff_x29 + -0xe0),*(undefined8 *)(unaff_x29 + -0xd8),0);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


