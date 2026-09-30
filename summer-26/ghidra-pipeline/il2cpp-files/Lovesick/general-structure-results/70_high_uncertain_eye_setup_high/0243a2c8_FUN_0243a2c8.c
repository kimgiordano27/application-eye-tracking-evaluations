/*
FUNCTION_NAME: FUN_0243a2c8
ENTRY_POINT: 0243a2c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0243a2c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = StringLiteral_1618;
  if ((DAT_03782413 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_GroupBoxUtility_RegisterGroupBoxOptionCallbacks<RadioButton>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef860);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRInteractable>_Clear__);
    thunk_FUN_00d48444(StringLiteral_1618);
    DAT_03782413 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = 
  Method_UnityEngine_UIElements_GroupBoxUtility_RegisterGroupBoxOptionCallbacks<RadioButton>__;
  puVar1 = PTR_DAT_033ef860;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar1 = Method_OVRObjectPool_TaskScope<OVRPlugin_Result>_Dispose__;
    if (lVar4 != 0) {
      FUN_0136b58c(lVar4,lVar3,
                   *(undefined8 *)Method_System_Collections_Generic_List<IXRInteractable>_Clear__,0)
      ;
      FUN_010ad5f0(uVar5,lVar4,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


