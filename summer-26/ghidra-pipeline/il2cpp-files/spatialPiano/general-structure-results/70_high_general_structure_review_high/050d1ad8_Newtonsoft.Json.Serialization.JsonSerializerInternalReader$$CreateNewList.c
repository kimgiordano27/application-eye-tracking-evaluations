/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 050d1ad8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  undefined8 uVar6;
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
  
  lVar4 = FUN_0504574c();
  iVar2 = *(int *)(unaff_x29 + -0xa4);
  if (((param_1 & 0xffdf) == 0x44) || ((param_1 & 0xffdf) == 0x47 && iVar2 < 1)) {
    if (unaff_w22 < 0) {
      if (lVar4 == 0) {
        if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      else {
        uVar6 = *(undefined8 *)(lVar4 + 0x30);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
          uVar5 = FUN_050db894(unaff_w22,iVar2,uVar6);
          return uVar5;
        }
      }
    }
    else {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
        uVar5 = FUN_050db6bc(unaff_w22,iVar2);
        return uVar5;
      }
    }
  }
  else if ((param_1 & 0xffdf) == 0x58) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      uVar5 = FUN_050dba78(unaff_w22,param_1 - 0x21,iVar2);
      return uVar5;
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
      thunk_FUN_02f6670c();
    }
    FUN_050e3c18(unaff_w22,unaff_x29 + -0xa0,0);
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    System_Collections_Hashtable_SyncHashtable__get_SyncRoot(unaff_x29 + -0xd0,&uStack_40,0x20,0);
    if ((param_1 & 0xffff) == 0) {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050d8884(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
    }
    else {
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050d82b8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,param_1,iVar2,lVar4,0);
    }
                    /* try { // try from 050d1ce8 to 051d1d73 has its CatchHandler @ 050d1ce8
                       catch() { ... } // from try @ 050d1ce8 with catch @ 050d1ce8
                       catch() { ... } // from try @ 050d1ebc with catch @ 050d1ce8
                       catch() { ... } // from try @ 050d1f10 with catch @ 050d1ce8
                       catch() { ... } // from try @ 050d1f68 with catch @ 050d1ce8 */
    uVar3 = FUN_04f86fd0(unaff_x29 + -0xd0);
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
      return (ulong)(uVar3 & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


