/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._SubmitExplicitTimingData$$Invoke
ENTRY_POINT: 019cb340
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 in_w8;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  *(undefined1 *)(unaff_x19 + 0x6e6) = in_w8;
  puVar1 = StringLiteral_660;
  lVar5 = *unaff_x21;
                    /* try { // try from 019cb348 to 01acb353 has its CatchHandler @ 019cb354 */
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *unaff_x21;
  }
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar3 = UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_TypeInfo;
  if (lVar5 != 0) {
    FUN_01253574(lVar5,uVar7,
                 *(undefined8 *)
                  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_SerializableIntArray___TypeInfo,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar4 = 
    Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__;
    puVar2 = PTR_DAT_033f5a10;
    if (lVar6 != 0) {
      FUN_01253360(lVar6,lVar5,
                   *(undefined8 *)
                    Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__
                  );
      **(long **)(*(long *)puVar2 + 0xb8) = lVar6;
      uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        FUN_01253574(lVar5,uVar7,
                     *(undefined8 *)
                      Newtonsoft_Json_Serialization_SerializationBinderAdapter_TypeInfo,0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar1 = System_Action<PokeInteractor>_TypeInfo;
        if (lVar6 != 0) {
          FUN_01253360(lVar6,lVar5,*(undefined8 *)puVar4);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
          uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = OVRPlugin_OVRP_1_76_0_TypeInfo;
          if (lVar5 != 0) {
            FUN_01253574(lVar5,uVar7,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<IObiJobHandle>_Clear__,0);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = 
            Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
            ;
            if (lVar6 != 0) {
              FUN_01253360(lVar6,lVar5,*(undefined8 *)StringLiteral_7811);
              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar6;
              uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_033eab60;
              if (lVar5 != 0) {
                FUN_01253574(lVar5,uVar7,*(undefined8 *)StringLiteral_10402,0);
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar6 != 0) {
                  FUN_01253360(lVar6,lVar5,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_42__);
                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar6;
                  return;
                }
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


