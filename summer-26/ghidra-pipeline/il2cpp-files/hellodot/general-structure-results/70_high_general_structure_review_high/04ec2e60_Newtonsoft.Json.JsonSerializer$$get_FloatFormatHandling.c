/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_FloatFormatHandling
ENTRY_POINT: 04ec2e60
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_FloatFormatHandling(void)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint unaff_w21;
  
  puVar1 = PTR_DAT_065f1670;
  if (in_ZR || in_NG != in_OV) {
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
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar2 = *(undefined8 *)PTR_DAT_065f7e08;
      uVar5 = 0x80070004;
      break;
    case 5:
      uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d78);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f0f40);
      FUN_04f4f418(uVar3,uVar2,0);
      return uVar3;
    case 6:
      uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7da0);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar5 = 0x80070006;
      break;
    default:
switchD_04ec2f34_caseD_7:
      uVar2 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065f7d70,&stack0x0000000c);
      uVar2 = FUN_04db9ab4(*(undefined8 *)PTR_DAT_065f7d90,uVar2);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar5 = unaff_w21 | 0x80070000;
      break;
    case 0xf:
      uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dc0);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar5 = 0x8007000f;
      break;
    case 0x11:
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar2 = *(undefined8 *)PTR_DAT_065f7dc8;
      uVar5 = 0x80070011;
    }
  }
  else {
    if ((int)unaff_w21 < 0x21) {
      if (unaff_w21 != 0x1d) {
        if (unaff_w21 == 0x20) {
          uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7db8);
          uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
          uVar5 = 0x80070020;
          goto LAB_04ec3224;
        }
        goto switchD_04ec2f34_caseD_7;
      }
      uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7dd0);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar5 = 0x1d;
    }
    else if (unaff_w21 == 0x21) {
      uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7df8);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar5 = 0x21;
    }
    else if (unaff_w21 == 0x27) {
      uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7de8);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar5 = 0x27;
    }
    else {
      if (unaff_w21 != 0x50) goto switchD_04ec2f34_caseD_7;
      uVar2 = FUN_04db0cfc(*(undefined8 *)PTR_DAT_065f7d80);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd98);
      uVar5 = 0x50;
    }
    uVar5 = uVar5 | 0x80070000;
  }
LAB_04ec3224:
  FUN_04e806d4(uVar3,uVar2,uVar5,0);
  return uVar3;
}


