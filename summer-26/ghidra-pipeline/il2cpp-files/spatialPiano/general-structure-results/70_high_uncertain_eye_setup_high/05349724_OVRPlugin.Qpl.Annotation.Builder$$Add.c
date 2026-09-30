/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05349724
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = FadePlaneMaterial_TypeInfo;
                    /* try { // try from 05349730 to 0544975b has its CatchHandler @ 05349818 */
  if ((DAT_06bbb524 & 1) == 0) {
    FUN_02f08768(FadePlaneMaterial_TypeInfo);
    DAT_06bbb524 = 1;
  }
  FUN_05116b38(param_1,0);
  lVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05116b38(lVar2,0);
  uVar3 = *(undefined8 *)puVar1;
  *(long *)(param_1 + 0x28) = lVar2;
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = thunk_FUN_02f45270(uVar3);
  FUN_05116b38(lVar2,0);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = DAT_011b0bd0;
  *(long *)(param_1 + 0x30) = lVar2;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  return;
}


