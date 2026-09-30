/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatString
ENTRY_POINT: 079d8028
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatString(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_0a524d56 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f22e40);
    FUN_04447ba8(PTR_DAT_09f20d20);
    DAT_0a524d56 = 1;
  }
  iVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
  puVar2 = PTR_DAT_09f22e40;
  puVar1 = PTR_DAT_09f20d20;
  if (param_2 < iVar3) {
    thunk_FUN_044adef4(PTR_DAT_09f25200);
    uVar6 = thunk_FUN_0448520c();
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09f22268);
    uVar8 = thunk_FUN_044adef4(PTR_DAT_09f29d88);
    FUN_0799a4bc(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_044adef4(PTR_DAT_09f42df8);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar6,uVar7);
  }
  plVar9 = param_1 + 2;
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(*plVar9 + 0x18) == param_2) {
    return;
  }
  if (param_2 < 1) {
    lVar4 = *(long *)PTR_DAT_09f22e40;
    lVar5 = *(long *)(lVar4 + 0x38);
    if (lVar5 == 0) {
      FUN_04482014(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    *plVar9 = **(long **)(lVar5 + 0xb8);
    thunk_FUN_044bb4b4(plVar9);
    lVar4 = *(long *)puVar2;
    lVar5 = *(long *)(lVar4 + 0x38);
    if (lVar5 == 0) {
      FUN_04482014(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    param_1[3] = lVar5;
  }
  else {
    lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,param_2);
    lVar5 = FUN_04447c90(*(undefined8 *)puVar1,param_2);
    if (0 < (int)param_1[4]) {
      FUN_07a612b4(param_1[2],0,lVar4,0,(int)param_1[4],0);
      FUN_07a612b4(param_1[3],0,lVar5,0,(int)param_1[4],0);
    }
    param_1[2] = lVar4;
    thunk_FUN_044bb4b4(plVar9,lVar4);
    param_1[3] = lVar5;
  }
  thunk_FUN_044bb4b4(param_1 + 3,lVar5);
  return;
}


