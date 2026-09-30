/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_8
ENTRY_POINT: 04f99e24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__ptr;
  long unaff_x22;
  
  puVar2 = System_Func<Collider,_Transform>_TypeInfo;
  if ((*(byte *)(unaff_x22 + 0xa50) & 1) == 0) {
    FUN_02b3c81c(System_Func<Collider,_Transform>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631e258);
    *(undefined1 *)(unaff_x22 + 0xa50) = 1;
  }
  puVar1 = PTR_DAT_0631e258;
                    /* try { // try from 04f99e6c to 05099e73 has its CatchHandler @ 04f9a138 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  __ptr = (void *)FUN_04f9c23c(param_2);
                    /* try { // try from 04f99e88 to 05099f03 has its CatchHandler @ 04f9a14c */
  FUN_04fb71fc(param_1,__ptr);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  free(__ptr);
  return;
}


