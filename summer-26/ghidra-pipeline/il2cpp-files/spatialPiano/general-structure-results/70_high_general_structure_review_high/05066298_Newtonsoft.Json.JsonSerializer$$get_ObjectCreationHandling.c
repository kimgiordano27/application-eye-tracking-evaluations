/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_ObjectCreationHandling
ENTRY_POINT: 05066298
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


undefined8
Newtonsoft_Json_JsonSerializer__get_ObjectCreationHandling
          (long *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 in_stack_00000070;
  
  if ((DAT_06bb97ad & 1) == 0) {
    FUN_02f08768(PTR_DAT_067dc088);
    DAT_06bb97ad = 1;
  }
  puVar1 = PTR_DAT_067dc088;
  if (param_4 - 0x1eU < 0xffffffe3) {
    iVar2 = (**(code **)(*param_1 + 0x208))
                      (param_1,param_2,param_3,in_stack_00000070,*(undefined8 *)(*param_1 + 0x210));
    if ((param_4 < 1) || (iVar2 < param_4)) {
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar3 = FUN_05064e74();
      uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067db538);
      uVar4 = FUN_05116b30(uVar4,0);
      puVar1 = PTR_DAT_067c9338;
      param_10._4_4_ = iVar2;
      uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&param_10 + 4);
      param_10._0_4_ = param_3;
      uVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&param_10);
      uVar3 = FUN_04f7019c(uVar3,uVar4,uVar5,uVar6,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9678);
      uVar5 = thunk_FUN_02f45270();
      uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067db540);
      goto LAB_050664a0;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067dc088 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050658b4(param_2,param_3,in_stack_00000070);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar7 = FUN_050653fc(param_2,param_3,param_4);
  if (-1 < lVar7) {
    lVar8 = FUN_0503e1cc(param_5,param_6,param_7,param_8,0);
    param_12 = 0;
    FUN_050b4c70(&param_12,lVar8 + lVar7 * 864000000000,0);
    return param_12;
  }
  uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067db440);
  uVar3 = FUN_05116b30(uVar3,0);
  thunk_FUN_02f6ef30(PTR_DAT_067c9678);
  uVar5 = thunk_FUN_02f45270();
  uVar4 = 0;
LAB_050664a0:
  FUN_0505262c(uVar5,uVar4,uVar3,0);
  uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067dc0b8);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar5,uVar3);
}


