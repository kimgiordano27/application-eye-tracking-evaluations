/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 07102b98
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
                (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_0941c1c5 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e693f0);
    FUN_03c8f898(PTR_DAT_08ea2830);
    FUN_03c8f898(PTR_DAT_08e9bbb8);
    FUN_03c8f898(PTR_DAT_08e9c268);
    DAT_0941c1c5 = 1;
  }
  puVar3 = PTR_DAT_08ea2830;
  if ((int)param_4 < (int)param_2) {
    param_2 = 0xffffffff;
LAB_07102cc4:
    return param_2 & 0xffffffff;
  }
  if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0941be42 == '\0') {
    FUN_03c8f898(PTR_DAT_08ea2830);
    DAT_0941be42 = '\x01';
  }
  puVar2 = PTR_DAT_08e693f0;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)puVar3;
  }
  cVar1 = **(char **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar2);
  }
  plVar5 = (long *)FUN_070c20bc(0);
  if (plVar5 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    if (lVar4 != 0) {
      if (cVar1 == '\0') {
        FUN_070b3dcc(lVar4,param_1,param_2,param_3,param_4,1,0);
      }
      else {
        FUN_070b3d44(lVar4,param_1,param_2,param_3,param_4,0);
      }
      goto LAB_07102cc4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


