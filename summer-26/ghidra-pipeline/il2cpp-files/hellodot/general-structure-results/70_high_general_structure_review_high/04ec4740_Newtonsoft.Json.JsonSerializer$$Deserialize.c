/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 04ec4740
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize
               (ulong param_1,long *param_2,long param_3,int param_4,int param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7e88);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f7e90);
    *(undefined1 *)(unaff_x25 + 0x24c) = 1;
  }
  if (param_2[7] == 0) {
LAB_04ec485c:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = FUN_04e56b1c(param_2[7],0);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    puVar3 = PTR_DAT_065f7e88;
    if ((uVar1 & 1) == 0) {
      thunk_FUN_02c7737c(PTR_DAT_065c9f08);
      uVar5 = thunk_FUN_02cea894();
      uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7e98);
      FUN_04f2c64c(uVar5,uVar6,0);
    }
    else if (param_3 == 0) {
      thunk_FUN_02c7737c(PTR_DAT_065c96c8);
      uVar5 = thunk_FUN_02cea894();
      uVar6 = thunk_FUN_02c7737c(PTR_DAT_065dac10);
      FUN_04e97f6c(uVar5,uVar6,0);
    }
    else {
      if (param_5 < 0) {
        thunk_FUN_02c7737c(PTR_DAT_065cb038);
        uVar5 = thunk_FUN_02cea894();
        puVar3 = PTR_DAT_065f7c68;
      }
      else {
        if (-1 < param_4) {
          if (param_5 <= *(int *)(param_3 + 0x18) - param_4) {
            if (*(char *)((long)param_2 + 0x55) == '\0') {
              FUN_04eb9478(param_2,param_3,param_4,param_5,param_6);
              return;
            }
            lVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065f7e90);
            FUN_04ec49ac(lVar2,param_2,*(undefined8 *)puVar3);
            if (lVar2 != 0) {
              FUN_04ec4a4c(lVar2,param_3,param_4,param_5,param_6);
              return;
            }
            goto LAB_04ec485c;
          }
          thunk_FUN_02c7737c(PTR_DAT_065c96d8);
          uVar5 = thunk_FUN_02cea894();
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7ea0);
          FUN_04e9e938(uVar5,uVar6,0);
          goto LAB_04ec4994;
        }
        thunk_FUN_02c7737c(PTR_DAT_065cb038);
        uVar5 = thunk_FUN_02cea894();
        puVar3 = PTR_DAT_065e8d68;
      }
      uVar6 = thunk_FUN_02c7737c(puVar3);
      uVar4 = thunk_FUN_02c7737c(PTR_DAT_065dfd88);
      FUN_04e9b6f4(uVar5,uVar6,uVar4,0);
    }
  }
  else {
    thunk_FUN_02c7737c(PTR_DAT_065de2c8);
    uVar5 = thunk_FUN_02cea894();
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7e18);
    FUN_04f3f918(uVar5,uVar6,0);
  }
LAB_04ec4994:
  uVar6 = thunk_FUN_02c7737c(PTR_DAT_065f7ea8);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar5,uVar6);
}


