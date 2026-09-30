/*
FUNCTION_NAME: Newtonsoft.Json.JsonObjectAttribute$$set_ItemRequired
ENTRY_POINT: 05e1f63c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonObjectAttribute__set_ItemRequired(undefined1 param_1 [16])

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int in_w8;
  int unaff_w20;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar5 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x30) = uVar4;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar5;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar4;
  if (unaff_w20 == 0) {
    if (in_w8 == 0) {
      thunk_FUN_036a1978();
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
LAB_05e1f740:
      FUN_05e1e3dc();
      return;
    }
  }
  else {
    if (in_w8 == 0) {
      thunk_FUN_036a1978();
    }
    uVar3 = FUN_05e1a718();
    uVar4 = FUN_05d973f4();
    iVar2 = *(int *)(unaff_x29 + -0x94);
    if (((uVar3 & 0xffdf) == 0x44) || ((uVar3 & 0xffdf) == 0x47 && iVar2 < 1)) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) goto LAB_05e1f740;
    }
    else if ((uVar3 & 0xffdf) == 0x58) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        Newtonsoft_Json_JsonConvert__DeserializeXNode();
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
        thunk_FUN_036a1978();
      }
      FUN_05e1f858();
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      FUN_05cb1d20(unaff_x29 + -0xc0,&uStack_40,0x20,0);
      if ((uVar3 & 0xffff) == 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        Newtonsoft_Json_JsonContainerAttribute__set_ItemConverterType
                  (unaff_x29 + -0xc0,unaff_x29 + -0x90);
      }
      else {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_05e1aa94(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar3,iVar2,uVar4,0);
      }
      FUN_05cb1d58(unaff_x29 + -0xc0,0);
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


