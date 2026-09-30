/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 05008b90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
                (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_06b791d6 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_06775f20);
    FUN_02d6084c(PTR_DAT_06770f78);
    FUN_02d6084c(PTR_DAT_067714a8);
    DAT_06b791d6 = 1;
  }
  puVar3 = PTR_DAT_06775f20;
  if ((int)param_4 < (int)param_2) {
    param_2 = 0xffffffff;
LAB_05008cc0:
    return param_2 & 0xffffffff;
  }
  if (*(int *)(*(long *)PTR_DAT_06775f20 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b78ba0 == '\0') {
    FUN_02d6084c(PTR_DAT_06775f20);
    DAT_06b78ba0 = '\x01';
  }
  puVar2 = PTR_DAT_0675eef8;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar3;
  }
  cVar1 = **(char **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar2);
  }
  plVar5 = (long *)FUN_04f8e414(0);
  if (plVar5 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    if (lVar4 != 0) {
      if (cVar1 == '\0') {
        FUN_04f70334(lVar4,param_1,param_2,param_3,param_4,1,0);
      }
      else {
        FUN_04f702ac(lVar4,param_1,param_2,param_3,param_4,0);
      }
      goto LAB_05008cc0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


