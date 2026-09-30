/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 05e946b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  FUN_03642964();
  FUN_03642964(PTR_DAT_07a17cc0);
  FUN_03642964(PTR_DAT_079fd3f8);
  FUN_03642964(PTR_DAT_079f5558);
  FUN_03642964(PTR_DAT_07a17cc8);
  FUN_03642964(PTR_DAT_07a17cd0);
  *(undefined1 *)(unaff_x20 + 0x17c) = 1;
  if (unaff_x19 == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar3 = thunk_FUN_0367fe20();
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_079ff120);
    FUN_05d7e1a0(uVar3,uVar5,0);
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a17cd8);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar3,uVar5);
  }
  if (*(int *)(*(long *)PTR_DAT_079fd0e8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar2 = FUN_05e7b144(&stack0x00000008,0);
  uVar3 = in_stack_00000008;
  puVar1 = PTR_DAT_079f5558;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_079f5558 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (DAT_07ed8cf8 == '\0') {
      FUN_03642964(PTR_DAT_079f5558);
      DAT_07ed8cf8 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar4 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_079fd3f8;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_079fd3f8 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)PTR_DAT_079fd3f8);
    }
    if (DAT_07ed8cf9 == '\0') {
      FUN_03642964(PTR_DAT_079fd3f8);
      DAT_07ed8cf9 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar5 = FUN_03f0975c(lVar4);
    uVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17cd0);
    FUN_0510c528(uVar3,uVar5,1,*(undefined8 *)PTR_DAT_07a17cc8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_079f5558 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar3 = FUN_05e9447c(uVar3);
  }
  return uVar3;
}


