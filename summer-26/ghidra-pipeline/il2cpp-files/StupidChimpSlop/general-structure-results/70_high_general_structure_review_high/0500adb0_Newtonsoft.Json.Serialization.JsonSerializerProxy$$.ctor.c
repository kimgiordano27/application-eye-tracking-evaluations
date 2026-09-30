/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 0500adb0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(undefined8 param_1)

{
  int iVar1;
  bool in_ZR;
  uint uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined4 unaff_w25;
  uint unaff_w26;
  long *unaff_x27;
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
  
  if (in_ZR) {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      uVar3 = FUN_0500a5e0();
      return uVar3;
    }
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xe0) = param_1;
    iVar1 = *(int *)(*unaff_x27 + 0xe4);
    *(undefined8 *)(unaff_x19 + 0x72) = 0;
    *(undefined8 *)(unaff_x19 + 0x6a) = 0;
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
    *(undefined8 *)(unaff_x29 + -0x98) = 0;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0;
    if (iVar1 == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_0500aae8();
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    FUN_04e98268(unaff_x29 + -0xd0,&uStack_40,0x20,0);
    if ((unaff_w26 & 0xffff) == 0) {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_050062f0(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
    }
    else {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05005d24(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w26,unaff_w25,
                   *(undefined8 *)(unaff_x29 + -0xe0),0);
    }
    uVar2 = FUN_04e98370(unaff_x29 + -0xd0);
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      return (ulong)(uVar2 & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


