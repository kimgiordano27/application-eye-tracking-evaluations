/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 04f2fd58
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
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
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x28 + 0x28);
  puVar2 = PTR_DAT_065f73a8;
  if ((DAT_06a6f69b & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f73a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e9d88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1c50);
    DAT_06a6f69b = 1;
  }
  lVar4 = *(long *)puVar2;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
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
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  if ((param_1 < 0) || ((int)param_3 != 0)) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar3 = FUN_04f33bec(param_2,param_3,unaff_x29 + -0xa4);
    lVar4 = FUN_04ee855c(param_4,0);
    iVar6 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar3 & 0xffdf) != 0x44) && ((uVar3 & 0xffdf) != 0x47 || 0 < iVar6)) {
      if ((uVar3 & 0xffdf) == 0x58) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar3 = FUN_04f38468(param_1,uVar3 - 0x21,iVar6,param_5,param_6,
                             *(undefined8 *)(unaff_x29 + -0xd8));
      }
      else {
        lVar5 = *(long *)puVar2;
        *(undefined8 *)(unaff_x29 + -0x2e) = 0;
        *(undefined8 *)(unaff_x29 + -0x36) = 0;
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
        iVar1 = *(int *)(lVar5 + 0xe0);
        *(long *)(unaff_x29 + -0xe0) = lVar4;
        if (iVar1 == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04f37d70(param_1,unaff_x29 + -0xa0);
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_04dd502c(unaff_x29 + -0xd0,&uStack_40,0x20,0);
        if ((uVar3 & 0xffff) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04f344fc(unaff_x29 + -0xd0,unaff_x29 + -0xa0,param_2,param_3,
                       *(undefined8 *)(unaff_x29 + -0xe0));
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04f33f6c(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar3,iVar6,
                       *(undefined8 *)(unaff_x29 + -0xe0),0);
        }
        uVar3 = FUN_04dd5134(unaff_x29 + -0xd0,param_5,param_6,*(undefined8 *)(unaff_x29 + -0xd8),0)
        ;
      }
      goto LAB_04f2fec4;
    }
    if (param_1 < 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar3 = FUN_04f3819c(param_1,iVar6,uVar7,param_5,param_6,*(undefined8 *)(unaff_x29 + -0xd8));
      goto LAB_04f2fec4;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
  }
  else {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    iVar6 = -1;
  }
  uVar3 = FUN_04f37f18(param_1,iVar6,param_5,param_6,*(undefined8 *)(unaff_x29 + -0xd8));
LAB_04f2fec4:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


