/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils.<>c$$.cctor
ENTRY_POINT: 014599ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c___cctor(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_03776a93 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_1650);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<UIHoverEventArgs>__ctor__
                      );
    DAT_03776a93 = 1;
  }
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<UIHoverEventArgs>__ctor__;
  switch(param_1) {
  case 1:
  case 2:
  case 5:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo
                              );
    if (lVar2 == 0) {
LAB_01459ad0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0143afc0(lVar2,0);
    break;
  case 3:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_1650);
    if (lVar2 == 0) goto LAB_01459ad0;
    FUN_0143d898(lVar2,0);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    break;
  case 4:
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_1650);
    if (lVar2 == 0) goto LAB_01459ad0;
    FUN_0143d898(lVar2,0);
    *(undefined4 *)(lVar2 + 0x18) = 1;
    break;
  default:
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar1,0);
    lVar2 = 0;
  }
  return lVar2;
}


