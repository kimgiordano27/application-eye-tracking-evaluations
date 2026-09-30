/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 074ec6b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  thunk_FUN_0408f364();
  uVar3 = FUN_074e777c();
  uVar4 = FUN_074695f4();
  iVar2 = *(int *)(unaff_x29 + -0x94);
  if (((uVar3 & 0xffdf) == 0x44) || ((uVar3 & 0xffdf) == 0x47 && iVar2 < 1)) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      FUN_074eb440();
      return;
    }
  }
  else if ((uVar3 & 0xffdf) == 0x58) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      FUN_074eb9d0();
      return;
    }
  }
  else {
    iVar1 = *(int *)(*unaff_x26 + 0xe4);
    *(undefined8 *)(unaff_x27 + 0x72) = 0;
    *(undefined8 *)(unaff_x27 + 0x6a) = 0;
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
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    *(undefined8 *)(unaff_x29 + -0x30) = 0;
    *(undefined8 *)(unaff_x29 + -0x88) = 0;
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    if (iVar1 == 0) {
      thunk_FUN_0408f364();
    }
    FUN_074ec8bc();
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    FUN_07386750(unaff_x29 + -0xc0,&uStack_40,0x20,0);
    if ((uVar3 & 0xffff) == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_074e80c4(unaff_x29 + -0xc0,unaff_x29 + -0x90);
    }
    else {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      FUN_074e7af8(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar3,iVar2,uVar4,0);
    }
    FUN_07386788(unaff_x29 + -0xc0,0);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


