/*
FUNCTION_NAME: FUN_01580b84
ENTRY_POINT: 01580b84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_01580b84(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_03777ca6 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_SetInputWeight<AnimationLayerMixerPlayable>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_f64_s64__);
    thunk_FUN_00d48444(System_Collections_Generic_List<XRNodeState>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__)
    ;
    thunk_FUN_00d48444(StringLiteral_8940);
    thunk_FUN_00d48444(System_Collections_Generic_HashSet<PlayableDirector>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_ValueTask<int>_AsTask__);
    thunk_FUN_00d48444(
                      Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName__ctor__
                      );
    thunk_FUN_00d48444(Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__);
    thunk_FUN_00d48444(System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03777ca6 = 1;
  }
  puVar2 = System_Collections_Generic_List<XRNodeState>_TypeInfo;
  uStack_48 = 0;
  local_40 = 0;
  local_60._8_8_ = 0;
  local_50 = 0;
  local_60._0_8_ = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Collections_Generic_HashSet<PlayableDirector>_TypeInfo);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01320e50(lVar5,*(undefined8 *)
                        Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__
                );
    puVar4 = Method_System_Net_Security_SslStream_SetAndVerifyValidationCallback__;
    puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    *(long *)(param_1 + 8) = lVar5;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uVar8 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_c0 = FUN_01780344(uVar8,0);
    uStack_a8 = uStack_78;
    local_b0 = local_80;
    uStack_98 = uStack_68;
    local_a0 = uStack_70;
    if (*(int *)(*(long *)Method_System_Threading_Tasks_ValueTask<int>_AsTask__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uStack_b8 = 0;
    uStack_d8 = uStack_a8;
    local_e0 = local_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = local_a0;
    local_90 = FUN_01a92b9c(lVar5,&local_e0,0,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__ + 0xe0)
        == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Collections_Generic_List<IColliderWorldImpl>__ctor__
                        );
    }
    local_60 = FUN_01353c78(local_90,*(undefined8 *)
                                      System_ComponentModel_ISynchronizeInvoke_TypeInfo);
    uVar6 = FUN_011cf2a4(local_60,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext__
                        );
    auVar1 = local_90;
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = local_60;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098c58(param_1 + 2,local_60,param_1,
                   *(undefined8 *)
                    Method_UnityEngine_Playables_PlayableExtensions_SetInputWeight<AnimationLayerMixerPlayable>__
                  );
      return;
    }
  }
  local_90 = auVar1;
  FUN_011cf420(local_60,&local_b0,
               *(undefined8 *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__);
  uStack_48 = uStack_a8;
  local_50 = local_b0;
  local_40 = local_a0;
  uVar6 = FUN_0134cb6c(&local_50,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_X509Certificates_X500DistinguishedName__ctor__
                      );
  if ((uVar6 & 1) == 0) {
    bVar7 = false;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar7 = 0 < *(int *)(*(long *)(param_1 + 8) + 0x18);
  }
  *param_1 = -2;
  param_1[8] = 0;
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtd_f64_s64__;
  param_1[9] = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_b0 = CONCAT71(local_b0._1_7_,bVar7);
  FUN_011ccb9c(param_1 + 2,&local_b0,*(undefined8 *)puVar3);
  return;
}


