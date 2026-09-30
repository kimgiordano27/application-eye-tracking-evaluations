/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateTimeZoneHandling
ENTRY_POINT: 04ec2c9c
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_DateTimeZoneHandling(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 in_stack_00000008;
  
  if ((DAT_06a6f260 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca230);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4400);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065db418);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cfd98);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7d70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1670);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f0f38);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f0f40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7d78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7d80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7d88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7d90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7d98);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7da0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7da8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7db0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7db8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7dc0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7dc8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7dd0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7dd8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7de0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7de8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7df0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7df8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7e00);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7e08);
    DAT_06a6f260 = 1;
  }
  puVar1 = PTR_DAT_065f1670;
  if ((int)param_2 < 0x51) {
    if ((int)param_2 < 0x12) {
      switch(param_2) {
      case 2:
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7e00,param_1,0);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065db418);
        FUN_04e801f8(uVar3,uVar2,param_1,0);
        return uVar3;
      case 3:
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d88,param_1,0);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4400);
        FUN_04e7fa28(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar4 = *(long *)PTR_DAT_065f1670;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar4 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar4 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          getpid();
        }
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar3 = *(undefined8 *)PTR_DAT_065f7e08;
        param_2 = 0x80070004;
        break;
      case 5:
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d78,param_1,0);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f0f40);
        FUN_04f4f418(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7da0,param_1,0);
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        param_2 = 0x80070006;
        break;
      default:
        goto switchD_04ec2f34_caseD_7;
      case 0xf:
        uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dc0,param_1,0);
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        param_2 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar3 = *(undefined8 *)PTR_DAT_065f7dc8;
        param_2 = 0x11;
LAB_04ec33d0:
        param_2 = param_2 | 0x80070000;
      }
      goto LAB_04ec3224;
    }
    if ((int)param_2 < 0x21) {
      if (param_2 != 0x1d) {
        if (param_2 == 0x20) {
          uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7db8,param_1,0);
          uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
          param_2 = 0x80070020;
          goto LAB_04ec3224;
        }
        goto switchD_04ec2f34_caseD_7;
      }
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dd0,param_1,0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = 0x1d;
    }
    else if (param_2 == 0x21) {
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7df8,param_1,0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = 0x21;
    }
    else if (param_2 == 0x27) {
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7de8,param_1,0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = 0x27;
    }
    else {
      if (param_2 != 0x50) goto switchD_04ec2f34_caseD_7;
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d80,param_1,0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = 0x50;
    }
  }
  else {
    if (0x91 < (int)param_2) {
      if (param_2 == 0xce) {
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7df0,param_1,0);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f0f38);
        FUN_04e83aac(uVar3,uVar2,0);
        return uVar3;
      }
      if (param_2 == 0x10b) {
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar3 = *(undefined8 *)PTR_DAT_065f7de0;
        param_2 = 0x10b;
        goto LAB_04ec33d0;
      }
      if (param_2 == 6000) {
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        param_2 = 0x80071770;
        uVar3 = *(undefined8 *)PTR_DAT_065f7d98;
        goto LAB_04ec3224;
      }
switchD_04ec2f34_caseD_7:
      in_stack_00000008._4_4_ = param_2;
      uVar2 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065f7d70,(long)&stack0x00000008 + 4);
      uVar3 = FUN_04db9ab4(*(undefined8 *)PTR_DAT_065f7d90,uVar2,param_1,0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = param_2 | 0x80070000;
      goto LAB_04ec3224;
    }
    if (param_2 == 0x52) {
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7da8,param_1,0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = 0x52;
    }
    else if (param_2 == 0x57) {
      lVar5 = *(long *)PTR_DAT_065ca230;
      lVar4 = *(long *)(lVar5 + 0x38);
      if (lVar4 == 0) {
        FUN_02ce09d4(lVar5);
        lVar4 = *(long *)(lVar5 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02ce0978();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02ce0978();
      }
      uVar3 = FUN_04db9b3c(*(undefined8 *)PTR_DAT_065f7db0,**(undefined8 **)(lVar4 + 0xb8),0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = 0x57;
    }
    else {
      if (param_2 != 0x91) goto switchD_04ec2f34_caseD_7;
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dd8,param_1,0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      param_2 = 0x91;
    }
  }
  param_2 = param_2 | 0x80070000;
LAB_04ec3224:
  FUN_04e806d4(uVar2,uVar3,param_2,0);
  return uVar2;
}


