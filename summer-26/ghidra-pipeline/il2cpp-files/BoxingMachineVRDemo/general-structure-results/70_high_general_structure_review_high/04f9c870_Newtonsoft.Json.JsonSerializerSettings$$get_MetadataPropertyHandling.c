/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 04f9c870
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(undefined8 param_1)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int in_w8;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  sVar1 = FUN_04e87a5c(param_1,in_w8 + -1,0);
  if (sVar1 == 0x79) {
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
    puVar5 = (undefined8 *)PTR_DAT_06778290;
  }
  else {
    if ((int)unaff_x20[3] != 4) {
      return 0;
    }
    lVar3 = (**(code **)(*unaff_x20 + 600))();
    lVar4 = (**(code **)(*unaff_x20 + 600))();
    if ((lVar4 == 0) || (lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    sVar1 = FUN_04e87a5c(lVar3,*(int *)(lVar4 + 0x10) + -1,0);
    if (sVar1 != 0x79) {
      return 0;
    }
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
    puVar5 = (undefined8 *)PTR_DAT_06778298;
  }
  FUN_04f9dc18(uVar2,*puVar5,1,0);
  *unaff_x19 = uVar2;
  thunk_FUN_02dd37b4();
  return uVar2;
}


