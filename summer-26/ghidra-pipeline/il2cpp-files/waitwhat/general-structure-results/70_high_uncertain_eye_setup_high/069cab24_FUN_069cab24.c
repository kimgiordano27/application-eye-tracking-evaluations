/*
FUNCTION_NAME: FUN_069cab24
ENTRY_POINT: 069cab24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_069cab24(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,undefined4 param_8,long param_9)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  puVar3 = Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__;
  puVar2 = 
  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__;
  if ((DAT_0755c473 & 1) == 0) {
    FUN_03188a78(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
                );
    FUN_03188a78(Method_Photon_Voice_BufferReaderPushAdapterAsyncPool<short>__ctor__);
    FUN_03188a78(Method_Photon_Voice_BufferReaderPushAdapterAsyncPool<float>__ctor__);
    DAT_0755c473 = 1;
  }
  auVar4 = FUN_03b268cc(param_2,param_8,0,*(undefined8 *)puVar2);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_8;
  }
  auVar5 = FUN_03b268cc(param_3,uVar1,0,*(undefined8 *)puVar2);
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = param_8;
  }
  auVar6 = FUN_03b26950(param_4,uVar1,0,*(undefined8 *)puVar3);
  puVar2 = Method_Photon_Voice_BufferReaderPushAdapterAsyncPool<float>__ctor__;
  uVar1 = 0;
  if (param_5 != 0) {
    uVar1 = param_8;
  }
  auVar7 = FUN_03b26b60(param_5,uVar1,0,
                        *(undefined8 *)
                         Method_Photon_Voice_BufferReaderPushAdapterAsyncPool<float>__ctor__);
  uVar1 = 0;
  if (param_6 != 0) {
    uVar1 = param_8;
  }
  local_80 = FUN_03b26a34(param_6,uVar1,0,
                          *(undefined8 *)
                           Method_Photon_Voice_BufferReaderPushAdapterAsyncPool<short>__ctor__);
  uVar1 = 0;
  if (param_7 != 0) {
    uVar1 = param_8;
  }
  local_70 = FUN_03b26b60(param_7,uVar1,0,*(undefined8 *)puVar2);
  if (param_9 != 0) {
    local_c0 = auVar4;
    local_b0 = auVar5;
    local_a0 = auVar6;
    local_90 = auVar7;
    (**(code **)(param_9 + 0x18))
              (*(undefined8 *)(param_9 + 0x40),local_c0,*(undefined8 *)(param_9 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


