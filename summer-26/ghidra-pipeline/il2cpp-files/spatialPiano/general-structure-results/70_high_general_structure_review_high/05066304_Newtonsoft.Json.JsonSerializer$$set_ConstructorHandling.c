/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ConstructorHandling
ENTRY_POINT: 05066304
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializer__set_ConstructorHandling
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  int unaff_w24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  long *unaff_x28;
  undefined4 uStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000018;
  
  iVar2 = (**(code **)(param_1 + 0x208))
                    (param_2,param_3,unaff_w19,unaff_w26,*(undefined8 *)(param_1 + 0x210));
  if ((unaff_w24 < 1) || (iVar2 < unaff_w24)) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar3 = FUN_05064e74();
    uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067db538);
    uVar4 = FUN_05116b30(uVar4,0);
    puVar1 = PTR_DAT_067c9338;
    iStack000000000000000c = iVar2;
    uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&stack0x00000008 + 4);
    uStack0000000000000008 = unaff_w19;
    uVar6 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    uVar3 = FUN_04f7019c(uVar3,uVar4,uVar5,uVar6,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar5 = thunk_FUN_02f45270();
    uVar4 = thunk_FUN_02f6ef30(PTR_DAT_067db540);
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar7 = FUN_050653fc(unaff_w25,unaff_w19,unaff_w24);
    if (-1 < lVar7) {
      lVar8 = FUN_0503e1cc(unaff_w23,unaff_w22,unaff_w21,unaff_w20,0);
      in_stack_00000018 = 0;
      FUN_050b4c70(&stack0x00000018,lVar8 + lVar7 * 864000000000,0);
      return in_stack_00000018;
    }
    uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067db440);
    uVar3 = FUN_05116b30(uVar3,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar5 = thunk_FUN_02f45270();
    uVar4 = 0;
  }
  FUN_0505262c(uVar5,uVar4,uVar3,0);
  uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067dc0b8);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar5,uVar3);
}


