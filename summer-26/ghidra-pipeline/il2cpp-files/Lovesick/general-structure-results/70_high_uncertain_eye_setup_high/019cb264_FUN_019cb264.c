/*
FUNCTION_NAME: FUN_019cb264
ENTRY_POINT: 019cb264
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_019cb264(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u8__;
  if ((DAT_0377a6e6 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__
                      );
    thunk_FUN_00d48444(StringLiteral_7811);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_42__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_76_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033eab60);
    thunk_FUN_00d48444(System_Action<PokeInteractor>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_660);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5a10);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB3_MeshCombinerSingle_SerializableIntArray___TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Serialization_SerializationBinderAdapter_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IObiJobHandle>_Clear__);
    thunk_FUN_00d48444(StringLiteral_10402);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u8__);
    DAT_0377a6e6 = 1;
  }
  puVar3 = StringLiteral_660;
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar4 = UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_TypeInfo;
  if (lVar6 != 0) {
    FUN_01253574(lVar6,uVar8,
                 *(undefined8 *)
                  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_SerializableIntArray___TypeInfo,0);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar5 = 
    Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__;
    puVar2 = PTR_DAT_033f5a10;
    if (lVar7 != 0) {
      FUN_01253360(lVar7,lVar6,
                   *(undefined8 *)
                    Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__
                  );
      **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
      uVar8 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar6 != 0) {
        FUN_01253574(lVar6,uVar8,
                     *(undefined8 *)
                      Newtonsoft_Json_Serialization_SerializationBinderAdapter_TypeInfo,0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar3 = System_Action<PokeInteractor>_TypeInfo;
        if (lVar7 != 0) {
          FUN_01253360(lVar7,lVar6,*(undefined8 *)puVar5);
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar7;
          uVar8 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          puVar3 = OVRPlugin_OVRP_1_76_0_TypeInfo;
          if (lVar6 != 0) {
            FUN_01253574(lVar6,uVar8,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<IObiJobHandle>_Clear__,0);
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar3 = 
            Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
            ;
            if (lVar7 != 0) {
              FUN_01253360(lVar7,lVar6,*(undefined8 *)StringLiteral_7811);
              *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar7;
              uVar8 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              puVar1 = PTR_DAT_033eab60;
              if (lVar6 != 0) {
                FUN_01253574(lVar6,uVar8,*(undefined8 *)StringLiteral_10402,0);
                lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar7 != 0) {
                  FUN_01253360(lVar7,lVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_42__);
                  *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = lVar7;
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


