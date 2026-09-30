/*
FUNCTION_NAME: FUN_01010730
ENTRY_POINT: 01010730
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01010730(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_03775dca & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_Voice_Logging_RingDictionaryBuffer<CorrelationID,_CorrelationID>_get_Item__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(PTR_DAT_033ed0e8);
    thunk_FUN_00d48444(PTR_DAT_033f1d30);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_get_Mode__
                      );
    thunk_FUN_00d48444(Method_RoomServicePhone_PhonePickedUp__);
    thunk_FUN_00d48444(StringLiteral_6293);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f50f8);
    thunk_FUN_00d48444(OVRColocationSession_TypeInfo);
    DAT_03775dca = 1;
  }
  if ((*(long *)(param_1 + 0x98) != 0) &&
     (lVar4 = FUN_00ee688c(*(long *)(param_1 + 0x98),0), lVar4 != 0)) {
    lVar5 = *(long *)(lVar4 + 0x148);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_InputSystem_LowLevel_InputEventListener_op_Addition__
                              );
    if ((lVar4 != 0) &&
       (FUN_013df3d0(lVar4,param_1,*(undefined8 *)Method_RoomServicePhone_PhonePickedUp__,0),
       puVar1 = 
       Method_Meta_Voice_Logging_RingDictionaryBuffer<CorrelationID,_CorrelationID>_get_Item__,
       lVar5 != 0)) {
      FUN_013dfe38(lVar5,lVar4,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Collider,_IXRInteractable>_TypeInfo);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar3 = StringLiteral_6293;
      puVar2 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
      puVar1 = PTR_DAT_033f50f8;
      if (lVar4 != 0) {
        FUN_011c181c(lVar4,param_1,*(undefined8 *)PTR_DAT_033f1d30,0);
        FUN_0132e150(*(undefined8 *)puVar1,lVar4,*(undefined8 *)puVar3);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar1 = OVRColocationSession_TypeInfo;
        if (lVar4 != 0) {
          FUN_016f27fc(lVar4,param_1,*(undefined8 *)PTR_DAT_033ed0e8,0);
          FUN_00fe0764(*(undefined8 *)puVar1,lVar4,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x78);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
            if ((lVar4 != 0) &&
               (FUN_026c8404(lVar4,param_1,
                             *(undefined8 *)
                              Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<TransformFeature>_get_Mode__
                             ,0), lVar5 != 0)) {
              FUN_026c8574(lVar5,lVar4,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


