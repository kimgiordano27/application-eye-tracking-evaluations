/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._SubmitExplicitTimingData$$.ctor
ENTRY_POINT: 019cb284
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData___ctor(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableOutputExtensions_AddNotificationReceiver<PlayableOutput>__
                      );
    thunk_FUN_00d48444(StringLiteral_7811);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_42__);
                    /* try { // try from 019cb2b4 to 01acb2b7 has its CatchHandler @ 019cb2f4 */
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_76_0_TypeInfo);
                    /* try { // try from 019cb2c8 to 01acb2cb has its CatchHandler @ 019cb2ec */
                    /* try { // try from 019cb2cc to 01acb2cf has its CatchHandler @ 019cb2e8 */
    thunk_FUN_00d48444(PTR_DAT_033eab60);
                    /* try { // try from 019cb2d0 to 01acb2d3 has its CatchHandler @ 019cb2e4 */
                    /* try { // try from 019cb2d4 to 01acb2d7 has its CatchHandler @ 019cb2e0 */
                    /* try { // try from 019cb2d8 to 01acb2db has its CatchHandler @ 019cb2dc */
    thunk_FUN_00d48444(System_Action<PokeInteractor>_TypeInfo);
                    /* catch() { ... } // from try @ 019cb2d8 with catch @ 019cb2dc
                       try { // try from 019cb2dc to 01acb31f has its CatchHandler @ 019caf1c */
                    /* catch() { ... } // from try @ 019cb2d4 with catch @ 019cb2e0 */
                    /* catch() { ... } // from try @ 019cb2d0 with catch @ 019cb2e4 */
    thunk_FUN_00d48444(StringLiteral_660);
                    /* catch() { ... } // from try @ 019cb2cc with catch @ 019cb2e8 */
                    /* catch() { ... } // from try @ 019cb2c8 with catch @ 019cb2ec */
                    /* catch() { ... } // from try @ 019cb214 with catch @ 019cb2f0 */
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_CachedAttributeGetter<DataContractAttribute>_GetAttribute__
                      );
                    /* catch() { ... } // from try @ 019cb218 with catch @ 019cb2f4
                       catch() { ... } // from try @ 019cb2b4 with catch @ 019cb2f4 */
                    /* catch() { ... } // from try @ 019cb0d4 with catch @ 019cb2f8 */
                    /* catch() { ... } // from try @ 019cb074 with catch @ 019cb2fc */
    thunk_FUN_00d48444(PTR_DAT_033f5a10);
                    /* catch() { ... } // from try @ 019cb25c with catch @ 019cb300 */
                    /* catch() { ... } // from try @ 019cb1fc with catch @ 019cb304 */
                    /* catch() { ... } // from try @ 019cb1b0 with catch @ 019cb308 */
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB3_MeshCombinerSingle_SerializableIntArray___TypeInfo);
                    /* catch() { ... } // from try @ 019cb144 with catch @ 019cb30c */
    thunk_FUN_00d48444(Newtonsoft_Json_Serialization_SerializationBinderAdapter_TypeInfo);
                    /* try { // try from 019cb320 to 01acb323 has its CatchHandler @ 019cb33c */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IObiJobHandle>_Clear__);
                    /* try { // try from 019cb324 to 01acb347 has its CatchHandler @ 019caf1c */
    thunk_FUN_00d48444(StringLiteral_10402);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u8__);
                    /* catch() { ... } // from try @ 019cb320 with catch @ 019cb33c */
    *(undefined1 *)(unaff_x19 + 0x6e6) = 1;
  }
  puVar1 = StringLiteral_660;
  lVar5 = *unaff_x21;
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


