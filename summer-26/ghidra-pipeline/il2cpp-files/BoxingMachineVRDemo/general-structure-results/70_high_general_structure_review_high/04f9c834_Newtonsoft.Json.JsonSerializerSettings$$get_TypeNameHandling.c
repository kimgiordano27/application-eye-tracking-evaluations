/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 04f9c834
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  short sVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  lVar2 = (**(code **)(*unaff_x20 + 600))();
  lVar3 = (**(code **)(*unaff_x20 + 600))();
  if ((lVar3 != 0) && (lVar2 != 0)) {
    sVar1 = FUN_04e87a5c(lVar2,*(int *)(lVar3 + 0x10) + -1,0);
    if (sVar1 == 0x79) {
      uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
      puVar5 = (undefined8 *)PTR_DAT_06778290;
    }
    else {
      if ((int)unaff_x20[3] != 4) {
        return 0;
      }
      lVar2 = (**(code **)(*unaff_x20 + 600))();
      lVar3 = (**(code **)(*unaff_x20 + 600))();
      if ((lVar3 == 0) || (lVar2 == 0))
      goto Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling;
      sVar1 = FUN_04e87a5c(lVar2,*(int *)(lVar3 + 0x10) + -1,0);
      if (sVar1 != 0x79) {
        return 0;
      }
      uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
      puVar5 = (undefined8 *)PTR_DAT_06778298;
    }
    FUN_04f9dc18(uVar4,*puVar5,1,0);
    *unaff_x19 = uVar4;
    thunk_FUN_02dd37b4();
    return uVar4;
  }
Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


