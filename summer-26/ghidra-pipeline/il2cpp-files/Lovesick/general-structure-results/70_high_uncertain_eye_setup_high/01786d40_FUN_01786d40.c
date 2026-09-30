/*
FUNCTION_NAME: FUN_01786d40
ENTRY_POINT: 01786d40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_01786d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__;
  if ((DAT_03778e26 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_20__);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
    DAT_03778e26 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03778a3f == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractable>_Invoke__);
    DAT_03778a3f = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) != '\0') {
    uVar3 = FUN_00be4690(param_1,param_2,param_3,param_4,
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_20__);
    return uVar3;
  }
  if ((int)param_2 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    uVar3 = thunk_FUN_0170bdc4(param_5,param_1,param_2,param_3,param_4,0,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


