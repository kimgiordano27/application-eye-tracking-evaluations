/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.JPath$$ReadRegexString
ENTRY_POINT: 05116998
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Linq_JsonPath_JPath__ReadRegexString(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  
  lVar3 = *unaff_x19;
  if (param_1 == (long *)0x0) {
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20) = 0;
  }
  else {
    bVar1 = *(byte *)(lVar3 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != lVar3)) goto LAB_05116a70;
    *(long **)(*(long *)(lVar3 + 0xb8) + 0x20) = param_1;
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != lVar3)) goto LAB_05116a70;
  }
  plVar2 = (long *)FUN_050e4454(*(undefined8 *)
                                 Unity_AppUI_UI_BaseVisualElement_UxmlSerializedData_var,0);
  lVar3 = *unaff_x19;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38) = 0;
    return;
  }
  bVar1 = *(byte *)(lVar3 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
     (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == lVar3)) {
    *(long **)(*(long *)(lVar3 + 0xb8) + 0x38) = plVar2;
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == lVar3)) {
      return;
    }
  }
LAB_05116a70:
                    /* WARNING: Subroutine does not return */
  FUN_02f08d48();
}


