/*
FUNCTION_NAME: FUN_02714360
ENTRY_POINT: 02714360
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_02714360(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9
            )

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = UnityEngine_RectOffset_var;
  if ((DAT_0378823e & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_Feature_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_RectOffset_var);
    thunk_FUN_00d48444(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    thunk_FUN_00d48444(Meta_Voice_Net_PubSub_PubSubTopicSubscriptionDelegate_TypeInfo);
    DAT_0378823e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar2 = FUN_026fd83c(param_1,param_3,param_2,0);
  puVar1 = StringLiteral_302;
  if (iVar2 != 0) {
    uVar3 = FUN_01600424(*(undefined8 *)
                          Meta_Voice_Net_PubSub_PubSubTopicSubscriptionDelegate_TypeInfo,param_1,
                         *(undefined8 *)Method_OVRPlugin_PinnedArray<Guid>__ctor__,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_02660dac(uVar3,0);
    return 0;
  }
  if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_Feature_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_027144dc(0,param_4,param_5,param_6,param_7,param_8,param_9 & 1);
  return uVar3;
}


