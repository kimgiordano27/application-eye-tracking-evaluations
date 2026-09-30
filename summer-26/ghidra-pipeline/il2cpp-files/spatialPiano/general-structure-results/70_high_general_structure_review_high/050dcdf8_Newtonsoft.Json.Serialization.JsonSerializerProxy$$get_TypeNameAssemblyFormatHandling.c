/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 050dcdf8
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormatHandling
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long *plVar6;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  plVar6 = *(long **)(unaff_x26 + 0xd90);
  if ((*(byte *)(unaff_x23 + 0xbe1) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067dbd90);
    FUN_02f08768(PTR_DAT_067d5bb0);
    FUN_02f08768(PTR_DAT_067d6038);
    *(undefined1 *)(unaff_x23 + 0xbe1) = 1;
  }
  lVar3 = *plVar6;
  *(undefined4 *)(unaff_x29 + -0x94) = 0;
  iVar5 = *(int *)(lVar3 + 0xe4);
  *(undefined8 *)(unaff_x29 + -0x1e) = 0;
  *(undefined8 *)(unaff_x29 + -0x26) = 0;
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
  if ((int)param_4 == 0) {
    if (iVar5 == 0) {
      thunk_FUN_02f6670c();
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      iVar5 = -1;
LAB_050dcf64:
      FUN_050dbc00(param_2,iVar5);
      return;
    }
  }
  else {
    if (iVar5 == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_050d7f3c(param_3,param_4,unaff_x29 + -0x94);
    uVar4 = FUN_0504574c();
    iVar5 = *(int *)(unaff_x29 + -0x94);
    if (((uVar2 & 0xffdf) == 0x44) || ((uVar2 & 0xffdf) == 0x47 && iVar5 < 1)) {
      if (*(int *)(*plVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) goto LAB_050dcf64;
    }
    else if ((uVar2 & 0xffdf) == 0x58) {
      if (*(int *)(*plVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        FUN_050dc190(param_2,uVar2 - 0x21,iVar5);
        return;
      }
    }
    else {
      iVar1 = *(int *)(*plVar6 + 0xe4);
      *(undefined8 *)(unaff_x29 + -0x1e) = 0;
      *(undefined8 *)(unaff_x29 + -0x26) = 0;
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
        thunk_FUN_02f6670c();
      }
      FUN_050dd07c(param_2,unaff_x29 + -0x90);
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_8 = 0;
      uStack_10 = 0;
      System_Collections_Hashtable_SyncHashtable__get_SyncRoot(unaff_x29 + -0xc0,&uStack_40,0x20,0);
      if ((uVar2 & 0xffff) == 0) {
        if (*(int *)(*plVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050d8884(unaff_x29 + -0xc0,unaff_x29 + -0x90,param_3,param_4,uVar4);
      }
      else {
        if (*(int *)(*plVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050d82b8(unaff_x29 + -0xc0,unaff_x29 + -0x90,uVar2,iVar5,uVar4,0);
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


