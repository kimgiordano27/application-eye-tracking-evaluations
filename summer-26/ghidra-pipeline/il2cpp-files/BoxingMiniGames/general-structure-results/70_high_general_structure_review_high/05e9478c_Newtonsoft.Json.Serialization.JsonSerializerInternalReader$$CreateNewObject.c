/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 05e9478c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    param_1 = *unaff_x20;
  }
  puVar1 = PTR_DAT_079fd3f8;
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x28);
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
  if (lVar4 != 0) {
    uVar2 = FUN_03f0975c(lVar4);
    uVar3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17cd0);
    FUN_0510c528(uVar3,uVar2,1,*(undefined8 *)PTR_DAT_07a17cc8);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


