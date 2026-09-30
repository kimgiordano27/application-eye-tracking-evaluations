/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
ENTRY_POINT: 058feb2c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int unaff_w19;
  long unaff_x20;
  int iVar4;
  undefined8 *unaff_x23;
  
  iVar4 = 0;
  do {
    plVar2 = *(long **)(unaff_x20 + 0x10);
    if (plVar2 == (long *)0x0) goto LAB_058febe8;
    iVar1 = (**(code **)(*plVar2 + 0x358))
                      (plVar2,param_1,iVar4,unaff_w19,*(undefined8 *)(*plVar2 + 0x360));
    if (iVar1 == 0) break;
    unaff_w19 = unaff_w19 - iVar1;
    iVar4 = iVar1 + iVar4;
  } while (0 < unaff_w19);
  if (param_1 != 0) {
    lVar3 = param_1;
    if (iVar4 != *(int *)(param_1 + 0x18)) {
      lVar3 = FUN_03188b1c(*unaff_x23,iVar4);
      thunk_FUN_03196f24(param_1,0,lVar3,0,iVar4,0);
    }
    return lVar3;
  }
LAB_058febe8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


