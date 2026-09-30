/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 076759cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  int unaff_w23;
  undefined8 uVar6;
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
  
  *(undefined1 *)(unaff_x26 + 0x22c) = 1;
  lVar3 = *unaff_x19;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  iVar5 = *(int *)(lVar3 + 0xe4);
  *(undefined8 *)(unaff_x20 + 0x72) = 0;
  *(undefined8 *)(unaff_x20 + 0x6a) = 0;
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
      thunk_FUN_040d65a8();
    }
    uVar2 = FUN_0767c10c();
    lVar3 = FUN_075f4f5c();
    iVar5 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) == 0x44) || ((uVar2 & 0xffdf) == 0x47 && iVar5 < 1)) {
      if (unaff_w22 < 0) {
        if (lVar3 == 0) {
          if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
        }
        else {
          uVar6 = *(undefined8 *)(lVar3 + 0x30);
          if (*(int *)(*unaff_x19 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
            uVar4 = FUN_0767fa64(unaff_w22,iVar5,uVar6);
            return uVar4;
          }
        }
      }
      else {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) goto LAB_07675b2c;
      }
    }
    else if ((uVar2 & 0xffdf) == 0x58) {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        uVar4 = FUN_0767fc48(unaff_w22,uVar2 - 0x21,iVar5);
        return uVar4;
      }
    }
    else {
      iVar1 = *(int *)(*unaff_x19 + 0xe4);
      *(undefined8 *)(unaff_x20 + 0x72) = 0;
      *(undefined8 *)(unaff_x20 + 0x6a) = 0;
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
        thunk_FUN_040d65a8();
      }
      FUN_076880b0(unaff_w22,unaff_x29 + -0xa0,0);
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      FUN_07503a7c(unaff_x29 + -0xd0,&uStack_40,0x20,0);
      if ((uVar2 & 0xffff) == 0) {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0767ca54(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
      }
      else {
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_0767c488(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar5,lVar3,0);
      }
      uVar2 = FUN_07503b84(unaff_x29 + -0xd0);
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return (ulong)(uVar2 & 1);
      }
    }
  }
  else {
    if (iVar5 == 0) {
      thunk_FUN_040d65a8();
    }
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      iVar5 = -1;
LAB_07675b2c:
      uVar4 = FUN_0767f88c(unaff_w22,iVar5);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


