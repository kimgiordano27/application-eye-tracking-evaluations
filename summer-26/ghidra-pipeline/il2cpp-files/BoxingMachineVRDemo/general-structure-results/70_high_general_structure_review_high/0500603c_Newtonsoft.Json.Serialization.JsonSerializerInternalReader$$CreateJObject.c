/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 0500603c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject(long param_1)

{
  int iVar1;
  bool in_ZR;
  uint uVar2;
  long lVar3;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  long unaff_x22;
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
  
  if ((in_ZR) || ((in_w8 & in_w9) != 0)) {
    if (unaff_x22 < 0) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0500dfc8();
    }
    else {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar2 = FUN_0500dd44();
    }
  }
  else if ((unaff_w26 & 0xffdf) == 0x58) {
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_0500e294();
  }
  else {
    lVar3 = *unaff_x27;
    *(undefined8 *)(unaff_x19 + 0x72) = 0;
    *(undefined8 *)(unaff_x19 + 0x6a) = 0;
    *(undefined8 *)(unaff_x29 + -0x48) = 0;
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
    *(undefined8 *)(unaff_x29 + -0x38) = 0;
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(undefined8 *)(unaff_x29 + -0x68) = 0;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    *(undefined8 *)(unaff_x29 + -0x58) = 0;
    *(undefined8 *)(unaff_x29 + -0x60) = 0;
    *(undefined8 *)(unaff_x29 + -0x88) = 0;
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    *(undefined8 *)(unaff_x29 + -0x98) = 0;
    *(undefined8 *)(unaff_x29 + -0xa0) = 0;
    iVar1 = *(int *)(lVar3 + 0xe4);
    *(long *)(unaff_x29 + -0xe0) = param_1;
    if (iVar1 == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0500db9c();
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    FUN_04ea55d8(unaff_x29 + -0xd0,&uStack_40,0x20,0);
    if ((unaff_w26 & 0xffff) == 0) {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0500a31c(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
    }
    else {
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05009d8c(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w26,unaff_w25,
                   *(undefined8 *)(unaff_x29 + -0xe0),0);
    }
    uVar2 = FUN_04ea56e0(unaff_x29 + -0xd0);
  }
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


