/*
FUNCTION_NAME: FUN_060fa874
ENTRY_POINT: 060fa874
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_060fa874(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DAT_06767580;
  if ((DAT_06b8a6d1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769028);
    FUN_02d6084c(PTR_DAT_06767580);
    FUN_02d6084c(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    FUN_02d6084c(Method_UnityEngine_MonoBehaviour_get_destroyCancellationToken__);
    FUN_02d6084c(Method_System_Net_MonoChunkParser_ThrowProtocolViolation__);
    FUN_02d6084c(Method_System_Net_MonoChunkStream_ThrowExpectingChunkTrailer__);
    FUN_02d6084c(Method_System_MonoCustomAttrs_GetCustomAttributes__);
    FUN_02d6084c(Method_System_MonoCustomAttrs_GetCustomAttributes__);
    FUN_02d6084c(Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_02d6084c(Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_02d6084c(Method_System_MonoCustomAttrs_IsDefined__);
    FUN_02d6084c(Method_System_MonoCustomAttrs_RetrieveAttributeUsageNoCache__);
    FUN_02d6084c(Method_System_IO_MonoLinqHelper_ToArray<string>__);
    FUN_02d6084c(Method_System_Runtime_Remoting_Messaging_MonoMethodMessage_GetMethodInfo__);
    FUN_02d6084c(
                Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                );
    FUN_02d6084c(Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                );
    FUN_02d6084c(Method_Mono_Net_Security_MonoTlsProviderFactory_CreateDefaultProviderImpl__);
    FUN_02d6084c(Method_Mono_Net_Security_MonoTlsProviderFactory_InitializeInternal__);
    FUN_02d6084c(Method_Mono_Net_Security_MonoTlsProviderFactory_LookupProvider__);
    FUN_02d6084c(Method_RootMotion_Demos_MotionAbsorb_AfterIK__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
                );
    FUN_02d6084c(Method_System_Linq_Expressions_Interpreter_MulInstruction_Create__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle_OnDestinationAnchorChanged__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<OnContextualMenuManipulator>b__67_0__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_DoLayout__);
    FUN_02d6084c(Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnAdded__)
    ;
    FUN_02d6084c(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    DAT_06b8a6d1 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar4 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
  puVar1 = PTR_DAT_0675e258;
  lVar8 = *(long *)(PTR_DAT_0675e258 + 0x30);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x88) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_06769028;
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Net_MonoChunkStream_ThrowExpectingChunkTrailer__);
    FUN_0439bfc4(lVar10,uVar11,
                 *(undefined8 *)
                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ClientCertificateRequired__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x28) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Runtime_Remoting_Messaging_MonoMethodMessage_GetMethodInfo__
                               );
    FUN_0439be3c(lVar10,uVar11,
                 *(undefined8 *)Method_Mono_Net_Security_MonoTlsProviderFactory_InitializeInternal__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x38) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_0439c14c(lVar10,uVar11,
                 *(undefined8 *)Method_Mono_Net_Security_MonoTlsProviderFactory_LookupProvider__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x48) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    FUN_0439c210(lVar10,uVar11,*(undefined8 *)Method_RootMotion_Demos_MotionAbsorb_AfterIK__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x68) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_UnityEngine_MonoBehaviour_get_destroyCancellationToken__);
    FUN_0439c2d4(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_MouseEventsHelper_SendEnterLeave<MouseLeaveEvent,_MouseEnterEvent>__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x18) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x38);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_MonoCustomAttrs_RetrieveAttributeUsageNoCache__);
    FUN_0439bf00(lVar10,uVar11,
                 *(undefined8 *)Method_System_Linq_Expressions_Interpreter_MulInstruction_Create__,0
                );
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x40) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x40);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_MonoCustomAttrs_IsDefined__);
    FUN_0439c520(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle_OnDestinationAnchorChanged__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x50) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x48);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_Net_MonoChunkParser_ThrowProtocolViolation__);
    FUN_0439c5e4(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_<OnContextualMenuManipulator>b__67_0__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x70) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x50);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_MonoCustomAttrs_GetCustomAttributes__);
    FUN_0439c6a8(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_DoLayout__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x78) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x58);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_IO_MonoLinqHelper_ToArray<string>__);
    FUN_0439c45c(lVar10,uVar11,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_OnColumnAdded__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x80) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x60);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_MonoCustomAttrs_GetCustomAttributes__);
    FUN_0439c088(lVar10,uVar11,
                 *(undefined8 *)
                  Method_Mono_Net_Security_MonoSslClientAuthenticationOptions_get_ServerCertificate__
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)(puVar1 + 0x30);
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_05015c2c(lVar8 + 0x20,0);
  uVar6 = FUN_05015c2c(*(long *)(puVar1 + 0x10) + 0x20,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
    lVar8 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x68);
  uVar9 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
      lVar8 = *(long *)puVar4;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                 Method_System_MonoCustomAttrs_GetCustomAttributesData__);
    FUN_0439c398(lVar10,uVar11,
                 *(undefined8 *)
                  Method_Mono_Net_Security_MonoTlsProviderFactory_CreateDefaultProviderImpl__,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
    *plVar7 = lVar10;
    thunk_FUN_02dd37b4(plVar7,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_060fa18c(uVar9,uVar5,uVar6,lVar10);
  return;
}


