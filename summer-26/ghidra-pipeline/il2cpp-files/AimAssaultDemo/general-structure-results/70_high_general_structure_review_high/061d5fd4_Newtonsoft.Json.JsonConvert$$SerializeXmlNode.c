/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 061d5fd4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeXmlNode(long param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  lVar1 = (**(code **)(param_1 + 0x218))();
  if (lVar1 != 0) {
    plVar2 = (long *)System_Text_ASCIIEncoding__GetByteCount(lVar1,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == *(long *)PTR_DAT_07daa5b0)) {
      (**(code **)(*unaff_x20 + 0x228))();
      lVar1 = (**(code **)(*unaff_x19 + 0x238))();
      if (lVar1 == 0) goto LAB_061d6098;
      plVar2 = (long *)FUN_0618ff7c(lVar1,0);
      if ((plVar2 == (long *)0x0) || (*plVar2 == *(long *)PTR_DAT_07daa500)) {
        (**(code **)(*unaff_x20 + 0x248))();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(plVar2);
  }
LAB_061d6098:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


