/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_CheckAdditionalContent
ENTRY_POINT: 061d5f90
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


void Newtonsoft_Json_JsonSerializerSettings__get_CheckAdditionalContent
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long in_x9;
  long *unaff_x19;
  long *unaff_x20;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  unaff_x20[0x17] = 0;
  *(undefined1 *)(unaff_x20 + 2) = 0;
  thunk_FUN_037aeb94(unaff_x20 + 0x17,0);
  uVar1 = (**(code **)(*unaff_x19 + 0x208))();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = (**(code **)(*unaff_x19 + 0x218))();
  if (lVar2 == 0) {
LAB_061d6098:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar3 = (long *)System_Text_ASCIIEncoding__GetByteCount(lVar2,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == *(long *)PTR_DAT_07daa5b0)) {
    (**(code **)(*unaff_x20 + 0x228))();
    lVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (lVar2 == 0) goto LAB_061d6098;
    plVar3 = (long *)FUN_0618ff7c(lVar2,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == *(long *)PTR_DAT_07daa500)) {
      (**(code **)(*unaff_x20 + 0x248))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54(plVar3);
}


