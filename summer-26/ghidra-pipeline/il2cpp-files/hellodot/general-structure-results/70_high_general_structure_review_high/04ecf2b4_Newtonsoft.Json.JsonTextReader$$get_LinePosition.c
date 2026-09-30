/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$get_LinePosition
ENTRY_POINT: 04ecf2b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


ulong Newtonsoft_Json_JsonTextReader__get_LinePosition(ulong param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  long unaff_x25;
  
  lVar2 = param_2;
  if ((param_1 & 1) == 0) {
    lVar2 = AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f80f8);
    *(undefined1 *)(unaff_x25 + 0x2c5) = 1;
  }
  puVar4 = PTR_DAT_065f80f8;
  if (param_3 == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar5 = thunk_FUN_02cea894();
    puVar4 = PTR_DAT_065dc700;
  }
  else {
    if (unaff_x21 != 0) {
      iVar1 = *(int *)(param_3 + 0x10);
      if (iVar1 < unaff_w20) {
LAB_04ecf410:
        thunk_FUN_02c7737c(PTR_DAT_065cb038);
        uVar5 = thunk_FUN_02cea894();
        uVar6 = thunk_FUN_02c7737c(PTR_DAT_065dc6f8);
        puVar4 = PTR_DAT_065dc778;
      }
      else {
        if (iVar1 == 0) {
          return (ulong)-(uint)(*(int *)(unaff_x21 + 0x10) != 0);
        }
        if (unaff_w20 < 0) goto LAB_04ecf410;
        if ((-1 < unaff_w19) && (unaff_w20 <= iVar1 - unaff_w19)) {
          if (unaff_w23 == 0x10000000) {
LAB_04ecf3b4:
            uVar3 = FUN_04ecf538(lVar2,param_3);
            return uVar3;
          }
          if ((unaff_w23 < 0x20) || (unaff_w23 == 0x40000000)) {
            if (*(int *)(*(long *)PTR_DAT_065f80f8 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            if (DAT_06a6f33b == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f80f8);
              DAT_06a6f33b = '\x01';
            }
            lVar2 = *(long *)puVar4;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar2 = *(long *)puVar4;
            }
            if (**(char **)(lVar2 + 0xb8) == '\0') {
              uVar3 = FUN_04ed0aa8(param_2,param_3,unaff_w20,unaff_w19);
              return uVar3;
            }
            goto LAB_04ecf3b4;
          }
          thunk_FUN_02c7737c(PTR_DAT_065c96d8);
          uVar5 = thunk_FUN_02cea894();
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f30e0);
          uVar7 = thunk_FUN_02c7737c(PTR_DAT_065de380);
          FUN_04e97fd8(uVar5,uVar6,uVar7,0);
          goto LAB_04ecf4d8;
        }
        thunk_FUN_02c7737c(PTR_DAT_065cb038);
        uVar5 = thunk_FUN_02cea894();
        uVar6 = thunk_FUN_02c7737c(PTR_DAT_065dacd8);
        puVar4 = PTR_DAT_065dc770;
      }
      uVar7 = thunk_FUN_02c7737c(puVar4);
      FUN_04e9b6f4(uVar5,uVar6,uVar7,0);
      goto LAB_04ecf4d8;
    }
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar5 = thunk_FUN_02cea894();
    puVar4 = PTR_DAT_065d00e0;
  }
  uVar6 = thunk_FUN_02c7737c(puVar4);
  FUN_04e97f6c(uVar5,uVar6,0);
LAB_04ecf4d8:
  uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f8178);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar5,uVar6);
}


