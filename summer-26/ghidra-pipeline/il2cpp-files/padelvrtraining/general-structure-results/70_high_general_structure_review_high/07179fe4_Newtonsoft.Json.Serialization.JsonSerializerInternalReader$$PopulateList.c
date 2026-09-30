/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 07179fe4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int unaff_w19;
  int unaff_w20;
  long unaff_x23;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xc68));
  FUN_03d2d2b0(PTR_DAT_091dad78);
  FUN_03d2d2b0(PTR_DAT_091fa408);
  *(undefined1 *)(unaff_x23 + 0xfb7) = 1;
  puVar3 = PTR_DAT_0920fc68;
  if (unaff_w20 < unaff_w19) {
    return -1;
  }
  if (*(int *)(*(long *)PTR_DAT_0920fc68 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (DAT_09842bf7 == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    DAT_09842bf7 = '\x01';
  }
  puVar2 = PTR_DAT_091a2ae0;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar4 = *(long *)puVar3;
  }
  cVar1 = **(char **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)puVar2);
  }
  plVar5 = (long *)FUN_071392b4(0);
  if ((plVar5 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0)), lVar4 != 0))
  {
    if (cVar1 != '\0') {
      FUN_0712ae14();
      return unaff_w19;
    }
    FUN_0712ae9c();
    return unaff_w19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


