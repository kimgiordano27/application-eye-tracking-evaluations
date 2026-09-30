/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 058feb20
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int unaff_w19;
  long unaff_x20;
  int iVar5;
  long unaff_x23;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x23 + 0x940);
  lVar2 = FUN_03188b1c(*puVar6);
  iVar5 = 0;
  do {
    plVar3 = *(long **)(unaff_x20 + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_058febe8;
    iVar1 = (**(code **)(*plVar3 + 0x358))
                      (plVar3,lVar2,iVar5,unaff_w19,*(undefined8 *)(*plVar3 + 0x360));
    if (iVar1 == 0) break;
    unaff_w19 = unaff_w19 - iVar1;
    iVar5 = iVar1 + iVar5;
  } while (0 < unaff_w19);
  if (lVar2 != 0) {
    lVar4 = lVar2;
    if (iVar5 != *(int *)(lVar2 + 0x18)) {
      lVar4 = FUN_03188b1c(*puVar6,iVar5);
      thunk_FUN_03196f24(lVar2,0,lVar4,0,iVar5,0);
    }
    return lVar4;
  }
LAB_058febe8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


