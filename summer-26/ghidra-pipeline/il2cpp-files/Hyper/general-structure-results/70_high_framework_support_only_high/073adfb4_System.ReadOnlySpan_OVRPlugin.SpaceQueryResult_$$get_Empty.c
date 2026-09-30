/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$get_Empty
ENTRY_POINT: 073adfb4
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>__get_Empty
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  void *unaff_x19;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
System_ReadOnlySpan<OVRPlugin_Vector2f>___ctor:
      (*(code *)*puVar1)(&stack0x00000008);
      memcpy(unaff_x19,&stack0x00000008,0x1d8);
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_04980e68();
      goto System_ReadOnlySpan<OVRPlugin_Vector2f>___ctor;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


