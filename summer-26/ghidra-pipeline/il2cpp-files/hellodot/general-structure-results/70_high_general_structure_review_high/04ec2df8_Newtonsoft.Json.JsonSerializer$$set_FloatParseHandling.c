/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatParseHandling
ENTRY_POINT: 04ec2df8
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


undefined8 Newtonsoft_Json_JsonSerializer__set_FloatParseHandling(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  uint unaff_w21;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x20 + 0x260) = 1;
  puVar1 = PTR_DAT_065f1670;
  if ((int)unaff_w21 < 0x51) {
    if ((int)unaff_w21 < 0x12) {
      switch(unaff_w21) {
      case 2:
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7e00);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065db418);
        FUN_04e801f8(uVar3,uVar2);
        return uVar3;
      case 3:
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d88);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4400);
        FUN_04e7fa28(uVar3,uVar2,0);
        return uVar3;
      case 4:
        lVar5 = *(long *)PTR_DAT_065f1670;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar5 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          getpid();
        }
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar3 = *(undefined8 *)PTR_DAT_065f7e08;
        uVar4 = 0x80070004;
        break;
      case 5:
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d78);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f0f40);
        FUN_04f4f418(uVar3,uVar2,0);
        return uVar3;
      case 6:
        uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7da0);
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar4 = 0x80070006;
        break;
      default:
        goto switchD_04ec2f34_caseD_7;
      case 0xf:
        uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dc0);
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar4 = 0x8007000f;
        break;
      case 0x11:
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar3 = *(undefined8 *)PTR_DAT_065f7dc8;
        uVar4 = 0x11;
LAB_04ec33d0:
        uVar4 = uVar4 | 0x80070000;
      }
      goto LAB_04ec3224;
    }
    if ((int)unaff_w21 < 0x21) {
      if (unaff_w21 != 0x1d) {
        if (unaff_w21 == 0x20) {
          uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7db8);
          uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
          uVar4 = 0x80070020;
          goto LAB_04ec3224;
        }
        goto switchD_04ec2f34_caseD_7;
      }
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dd0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = 0x1d;
    }
    else if (unaff_w21 == 0x21) {
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7df8);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = 0x21;
    }
    else if (unaff_w21 == 0x27) {
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7de8);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = 0x27;
    }
    else {
      if (unaff_w21 != 0x50) goto switchD_04ec2f34_caseD_7;
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d80);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = 0x50;
    }
  }
  else {
    if (0x91 < (int)unaff_w21) {
      if (unaff_w21 == 0xce) {
        uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7df0);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f0f38);
        FUN_04e83aac(uVar3,uVar2,0);
        return uVar3;
      }
      if (unaff_w21 == 0x10b) {
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar3 = *(undefined8 *)PTR_DAT_065f7de0;
        uVar4 = 0x10b;
        goto LAB_04ec33d0;
      }
      if (unaff_w21 == 6000) {
        uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
        uVar4 = 0x80071770;
        uVar3 = *(undefined8 *)PTR_DAT_065f7d98;
        goto LAB_04ec3224;
      }
switchD_04ec2f34_caseD_7:
      uVar2 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065f7d70,&stack0x0000000c);
      uVar3 = FUN_04db9ab4(*(undefined8 *)PTR_DAT_065f7d90,uVar2);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = unaff_w21 | 0x80070000;
      goto LAB_04ec3224;
    }
    if (unaff_w21 == 0x52) {
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7da8);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = 0x52;
    }
    else if (unaff_w21 == 0x57) {
      lVar6 = *(long *)PTR_DAT_065ca230;
      lVar5 = *(long *)(lVar6 + 0x38);
      if (lVar5 == 0) {
        FUN_02ce09d4(lVar6);
        lVar5 = *(long *)(lVar6 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02ce0978();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02ce0978();
      }
      uVar3 = FUN_04db9b3c(*(undefined8 *)PTR_DAT_065f7db0,**(undefined8 **)(lVar5 + 0xb8),0);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = 0x57;
    }
    else {
      if (unaff_w21 != 0x91) goto switchD_04ec2f34_caseD_7;
      uVar3 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dd8);
      uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar4 = 0x91;
    }
  }
  uVar4 = uVar4 | 0x80070000;
LAB_04ec3224:
  FUN_04e806d4(uVar2,uVar3,uVar4,0);
  return uVar2;
}


