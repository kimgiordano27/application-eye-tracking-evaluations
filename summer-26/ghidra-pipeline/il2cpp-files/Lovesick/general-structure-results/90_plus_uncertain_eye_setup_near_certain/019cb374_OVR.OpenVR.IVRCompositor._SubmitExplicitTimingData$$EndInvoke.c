/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._SubmitExplicitTimingData$$EndInvoke
ENTRY_POINT: 019cb374
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData__EndInvoke(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x21;
  undefined8 *unaff_x23;
  
  puVar1 = UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_TypeInfo;
  FUN_01253574();
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar3 = 
  Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__;
  puVar2 = PTR_DAT_033f5a10;
  if (lVar4 != 0) {
    FUN_01253360(lVar4,param_1,
                 *(undefined8 *)
                  Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__
                );
    **(long **)(*(long *)puVar2 + 0xb8) = lVar4;
    uVar6 = **(undefined8 **)(*unaff_x21 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*unaff_x23);
    if (lVar4 != 0) {
      FUN_01253574(lVar4,uVar6,
                   *(undefined8 *)Newtonsoft_Json_Serialization_SerializationBinderAdapter_TypeInfo,
                   0);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = System_Action<PokeInteractor>_TypeInfo;
      if (lVar5 != 0) {
        FUN_01253360(lVar5,lVar4,*(undefined8 *)puVar3);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
        uVar6 = **(undefined8 **)(*unaff_x21 + 0xb8);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = OVRPlugin_OVRP_1_76_0_TypeInfo;
        if (lVar4 != 0) {
          FUN_01253574(lVar4,uVar6,
                       *(undefined8 *)Method_System_Collections_Generic_List<IObiJobHandle>_Clear__,
                       0);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = 
          Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
          ;
          if (lVar5 != 0) {
            FUN_01253360(lVar5,lVar4,*(undefined8 *)StringLiteral_7811);
            *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar5;
            uVar6 = **(undefined8 **)(*unaff_x21 + 0xb8);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_033eab60;
            if (lVar4 != 0) {
              FUN_01253574(lVar4,uVar6,*(undefined8 *)StringLiteral_10402,0);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar5 != 0) {
                FUN_01253360(lVar5,lVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_42__);
                *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar5;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


