/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ConstructorHandling
ENTRY_POINT: 050dce38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ConstructorHandling(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int unaff_w20;
  long unaff_x23;
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
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x23 + 0xbe1) = 1;
  lVar4 = *unaff_x26;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
  iVar1 = *(int *)(lVar4 + 0xe4);
  *(undefined8 *)(unaff_x27 + 0x72) = 0;
  *(undefined8 *)(unaff_x27 + 0x6a) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
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
  if (unaff_w20 == 0) {
    if (iVar1 == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
LAB_050dcf64:
      FUN_050dbc00();
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_050d7f3c();
    uVar5 = FUN_0504574c();
    iVar1 = *(int *)(unaff_x29 + -0x94);
    if (((uVar3 & 0xffdf) == 0x44) || ((uVar3 & 0xffdf) == 0x47 && iVar1 < 1)) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) goto LAB_050dcf64;
    }
    else if ((uVar3 & 0xffdf) == 0x58) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        FUN_050dc190();
        return;
      }
    }
    else {
      iVar2 = *(int *)(*unaff_x26 + 0xe4);
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
      if (iVar2 == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050dd07c();
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      System_Collections_Hashtable_SyncHashtable__get_SyncRoot(unaff_x29 + -0xc0,&uStack_40,0x20,0);
      if ((uVar3 & 0xffff) == 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050d8884(unaff_x29 + -0xc0,unaff_x29 + -0x90);
      }
      else {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050d82b8(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar3,iVar1,uVar5,0);
      }
      FUN_04f86f00(unaff_x29 + -0xc0,0);
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


