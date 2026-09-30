/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 074e0dac
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x19;
  long *plVar6;
  int unaff_w22;
  int unaff_w23;
  undefined8 uVar7;
  long unaff_x26;
  undefined8 unaff_x27;
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
  
  plVar6 = *(long **)(unaff_x19 + 0x500);
  if ((*(byte *)(unaff_x26 + 0xeff) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f9f500);
    FUN_0403162c(PTR_DAT_08f8ca58);
    FUN_0403162c(PTR_DAT_08f8ca60);
    *(undefined1 *)(unaff_x26 + 0xeff) = 1;
  }
  lVar3 = *plVar6;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  iVar5 = *(int *)(lVar3 + 0xe4);
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
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
  if ((unaff_w22 < 0) || (unaff_w23 != 0)) {
    *(undefined8 *)(unaff_x29 + -0xe0) = unaff_x27;
    if (iVar5 == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = FUN_074e777c();
    lVar3 = FUN_074695f4();
    iVar5 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) == 0x44) || ((uVar2 & 0xffdf) == 0x47 && iVar5 < 1)) {
      if (unaff_w22 < 0) {
        if (lVar3 == 0) {
          if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
        }
        else {
          uVar7 = *(undefined8 *)(lVar3 + 0x30);
          if (*(int *)(*plVar6 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
            uVar4 = FUN_074eb0d4(unaff_w22,iVar5,uVar7);
            return uVar4;
          }
        }
      }
      else {
        if (*(int *)(*plVar6 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) goto LAB_074e0f40;
      }
    }
    else if ((uVar2 & 0xffdf) == 0x58) {
      if (*(int *)(*plVar6 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        uVar4 = FUN_074eb2b8(unaff_w22,uVar2 - 0x21,iVar5);
        return uVar4;
      }
    }
    else {
      iVar1 = *(int *)(*plVar6 + 0xe4);
      *(undefined8 *)(unaff_x29 + -0x2e) = 0;
      *(undefined8 *)(unaff_x29 + -0x36) = 0;
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
        thunk_FUN_0408f364();
      }
      FUN_074f3458(unaff_w22,unaff_x29 + -0xa0,0);
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      FUN_07386750(unaff_x29 + -0xd0,&uStack_40,0x20,0);
      if ((uVar2 & 0xffff) == 0) {
        if (*(int *)(*plVar6 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_074e80c4(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
      }
      else {
        if (*(int *)(*plVar6 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        FUN_074e7af8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar5,lVar3,0);
      }
      uVar2 = FUN_07386858(unaff_x29 + -0xd0);
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return (ulong)(uVar2 & 1);
      }
    }
  }
  else {
    if (iVar5 == 0) {
      thunk_FUN_0408f364();
    }
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      iVar5 = -1;
LAB_074e0f40:
      uVar4 = FUN_074eaefc(unaff_w22,iVar5);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


