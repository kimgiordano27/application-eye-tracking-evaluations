/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 050dd284
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int unaff_w23;
  long unaff_x26;
  long unaff_x27;
  long *plVar7;
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
  
  plVar7 = *(long **)(unaff_x27 + 0xd90);
  if ((*(byte *)(unaff_x26 + 0xbe2) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067dbd90);
    FUN_02f08768(PTR_DAT_067d5bb0);
    FUN_02f08768(PTR_DAT_067d6038);
    *(undefined1 *)(unaff_x26 + 0xbe2) = 1;
  }
  lVar4 = *plVar7;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  iVar1 = *(int *)(lVar4 + 0xe4);
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
  if (unaff_w23 == 0) {
    if (iVar1 == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
LAB_050dd3ec:
      uVar6 = FUN_050dc580();
      return uVar6;
    }
  }
  else {
    if (iVar1 == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_050d7f3c();
    uVar5 = FUN_0504574c();
    iVar1 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar3 & 0xffdf) == 0x44) || ((uVar3 & 0xffdf) == 0x47 && iVar1 < 1)) {
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) goto LAB_050dd3ec;
    }
    else if ((uVar3 & 0xffdf) == 0x58) {
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        uVar6 = FUN_050dcb74();
        return uVar6;
      }
    }
    else {
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar5;
      iVar2 = *(int *)(*plVar7 + 0xe4);
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
      System_Collections_Hashtable_SyncHashtable__get_SyncRoot(unaff_x29 + -0xd0,&uStack_40,0x20,0);
      if ((uVar3 & 0xffff) == 0) {
        if (*(int *)(*plVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050d8884(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
      }
      else {
        if (*(int *)(*plVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050d82b8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar3,iVar1,
                     *(undefined8 *)(unaff_x29 + -0xe0),0);
      }
      uVar3 = FUN_04f86fd0(unaff_x29 + -0xd0);
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        return (ulong)(uVar3 & 1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


