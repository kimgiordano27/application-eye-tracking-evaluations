/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MaxDepth
ENTRY_POINT: 04ec5acc
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


void Newtonsoft_Json_JsonSerializerSettings__set_MaxDepth(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iStack000000000000000c;
  
  if ((DAT_06a6f252 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1670);
    DAT_06a6f252 = 1;
  }
  iStack000000000000000c = 0;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar2 = FUN_04e56b1c(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_02c7737c(PTR_DAT_065c9f08);
      uVar5 = thunk_FUN_02cea894();
      puVar3 = PTR_DAT_065f7e20;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      puVar3 = PTR_DAT_065f1670;
      if ((uVar2 & 1) != 0) {
        if (param_2 < 0) {
          thunk_FUN_02c7737c(PTR_DAT_065cb038);
          uVar5 = thunk_FUN_02cea894();
          uVar4 = thunk_FUN_02c7737c(PTR_DAT_065f7f38);
          FUN_04e9ff98(uVar5,uVar4,0);
        }
        else {
          FUN_04ec3e1c(param_1);
          lVar6 = param_1[7];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_04ec5cc8(lVar6,param_2,&stack0x0000000c);
          if (iStack000000000000000c == 0) {
            lVar6 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
            if (param_2 < lVar6) {
              (**(code **)(*param_1 + 0x218))(param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
            }
            return;
          }
          uVar4 = FUN_04ec2c20(param_1,param_1[6]);
          iVar1 = iStack000000000000000c;
          thunk_FUN_02c7737c(PTR_DAT_065f1670);
          FUN_028be084();
          uVar5 = FUN_04ec2c98(uVar4,iVar1);
        }
        goto LAB_04ec5cb0;
      }
      thunk_FUN_02c7737c(PTR_DAT_065c9f08);
      uVar5 = thunk_FUN_02cea894();
      puVar3 = PTR_DAT_065f7f30;
    }
    uVar4 = thunk_FUN_02c7737c(puVar3);
    FUN_04f2c64c(uVar5,uVar4,0);
  }
  else {
    thunk_FUN_02c7737c(PTR_DAT_065de2c8);
    uVar5 = thunk_FUN_02cea894();
    uVar4 = thunk_FUN_02c7737c(PTR_DAT_065f7e18);
    FUN_04f3f918(uVar5,uVar4,0);
  }
LAB_04ec5cb0:
  uVar4 = thunk_FUN_02c7737c(PTR_DAT_065f7f40);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar5,uVar4);
}


