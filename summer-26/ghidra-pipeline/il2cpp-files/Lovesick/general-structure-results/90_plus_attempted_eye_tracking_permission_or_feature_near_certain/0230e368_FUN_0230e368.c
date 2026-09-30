/*
FUNCTION_NAME: FUN_0230e368
ENTRY_POINT: 0230e368
PROGRAM: Lovesick-libil2cpp.so
SCORE: 149
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_10;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_10;functionality_possible_biometrics_hits_2
*/


void FUN_0230e368(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 local_70 [2];
  
  if ((DAT_03781bb9 & 1) == 0) {
    thunk_FUN_00d48444(Method_MetaXRAcousticGeometry_ColliderGatherer_<>c_<visit>b__0_0__);
    thunk_FUN_00d48444(StringLiteral_10064);
    thunk_FUN_00d48444(Oculus_Interaction_HandGrab_IHandGrabInteractable_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4679);
    thunk_FUN_00d48444(System_Collections_Generic_List<ProbeBrickIndex_ReservedBrick>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_Dispose__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                      );
    thunk_FUN_00d48444(Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7763);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_OnRawResponse__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_03781bb9 = 1;
  }
  puVar6 = StringLiteral_10064;
  puVar7 = StringLiteral_4679;
  puVar5 = 
  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_OnRawResponse__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
  puVar3 = OVREyeGaze_TypeInfo;
  puVar2 = Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo;
  puVar1 = Oculus_Interaction_HandGrab_IHandGrabInteractable_TypeInfo;
  lVar10 = *(long *)(param_1 + 0x48);
  if (lVar10 != 0) {
    iVar11 = 0;
    while (iVar11 < *(int *)(lVar10 + 0x18)) {
      lVar12 = *(long *)(param_1 + 0x18);
      FUN_0132138c(lVar10,iVar11,local_70,*(undefined8 *)puVar2);
      uVar9 = local_70[0];
      if ((*(long *)(param_1 + 0x78) == 0) ||
         (FUN_0132138c(*(long *)(param_1 + 0x78),iVar11,local_70,*(undefined8 *)puVar5), lVar12 == 0
         )) goto LAB_0230e754;
      FUN_0129a054(lVar12,uVar9,local_70,*(undefined8 *)puVar1);
      lVar10 = *(long *)(param_1 + 0x48);
      iVar11 = iVar11 + 1;
      if (lVar10 == 0) goto LAB_0230e754;
    }
    lVar10 = *(long *)(param_1 + 0x50);
    if (lVar10 != 0) {
      iVar11 = 0;
      goto LAB_0230e4f4;
    }
  }
  goto LAB_0230e754;
LAB_0230e4f4:
  if (*(int *)(lVar10 + 0x18) <= iVar11) {
    lVar10 = *(long *)(param_1 + 0x58);
    if (lVar10 != 0) {
      iVar11 = 0;
      goto LAB_0230e56c;
    }
    goto LAB_0230e754;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  FUN_0132138c(lVar10,iVar11,local_70,*(undefined8 *)puVar2);
  uVar9 = local_70[0];
  if ((*(long *)(param_1 + 0x80) == 0) ||
     (FUN_0132138c(*(long *)(param_1 + 0x80),iVar11,local_70,*(undefined8 *)puVar4), lVar12 == 0))
  goto LAB_0230e754;
  FUN_0129a054(lVar12,uVar9,local_70,*(undefined8 *)puVar6);
  lVar10 = *(long *)(param_1 + 0x50);
  iVar11 = iVar11 + 1;
  if (lVar10 == 0) goto LAB_0230e754;
  goto LAB_0230e4f4;
LAB_0230e56c:
  puVar8 = StringLiteral_7763;
  puVar6 = Method_MetaXRAcousticGeometry_ColliderGatherer_<>c_<visit>b__0_0__;
  puVar5 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_Dispose__;
  puVar1 = System_Collections_Generic_List<ProbeBrickIndex_ReservedBrick>_TypeInfo;
  if (*(int *)(lVar10 + 0x18) <= iVar11) {
    lVar10 = *(long *)(param_1 + 0x60);
    if (lVar10 != 0) {
      iVar11 = 0;
      goto LAB_0230e60c;
    }
    goto LAB_0230e754;
  }
  lVar12 = *(long *)(param_1 + 0x28);
  FUN_0132138c(lVar10,iVar11,local_70,*(undefined8 *)puVar2);
  uVar9 = local_70[0];
  if ((*(long *)(param_1 + 0x88) == 0) ||
     (FUN_0132138c(*(long *)(param_1 + 0x88),iVar11,local_70,*(undefined8 *)puVar3), lVar12 == 0))
  goto LAB_0230e754;
  FUN_0129a054(lVar12,uVar9,local_70,*(undefined8 *)puVar7);
  lVar10 = *(long *)(param_1 + 0x58);
  iVar11 = iVar11 + 1;
  if (lVar10 == 0) goto LAB_0230e754;
  goto LAB_0230e56c;
LAB_0230e60c:
  if (*(int *)(lVar10 + 0x18) <= iVar11) {
    lVar10 = *(long *)(param_1 + 0x68);
    if (lVar10 != 0) {
      iVar11 = 0;
      goto LAB_0230e67c;
    }
    goto LAB_0230e754;
  }
  lVar12 = *(long *)(param_1 + 0x30);
  FUN_0132138c(lVar10,iVar11,local_70,*(undefined8 *)puVar2);
  uVar9 = local_70[0];
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (FUN_0132138c(*(long *)(param_1 + 0x90),iVar11,local_70,*(undefined8 *)puVar2), lVar12 == 0))
  goto LAB_0230e754;
  FUN_0129a054(lVar12,uVar9,local_70[0],*(undefined8 *)puVar1);
  lVar10 = *(long *)(param_1 + 0x60);
  iVar11 = iVar11 + 1;
  if (lVar10 == 0) goto LAB_0230e754;
  goto LAB_0230e60c;
LAB_0230e67c:
  if (*(int *)(lVar10 + 0x18) <= iVar11) {
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 != 0) {
      iVar11 = 0;
      goto LAB_0230e6f4;
    }
    goto LAB_0230e754;
  }
  lVar12 = *(long *)(param_1 + 0x38);
  FUN_0132138c(lVar10,iVar11,local_70,*(undefined8 *)puVar2);
  uVar9 = local_70[0];
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (FUN_0132138c(*(long *)(param_1 + 0x98),iVar11,local_70,*(undefined8 *)puVar5), lVar12 == 0))
  goto LAB_0230e754;
  FUN_0129a054(lVar12,uVar9,local_70,*(undefined8 *)puVar6);
  lVar10 = *(long *)(param_1 + 0x68);
  iVar11 = iVar11 + 1;
  if (lVar10 == 0) goto LAB_0230e754;
  goto LAB_0230e67c;
  while( true ) {
    FUN_0129a054(lVar12,uVar9,local_70[0],*(undefined8 *)puVar4);
    lVar10 = *(long *)(param_1 + 0x70);
    iVar11 = iVar11 + 1;
    if (lVar10 == 0) break;
LAB_0230e6f4:
    if (*(int *)(lVar10 + 0x18) <= iVar11) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x40);
    FUN_0132138c(lVar10,iVar11,local_70,*(undefined8 *)puVar2);
    uVar9 = local_70[0];
    if ((*(long *)(param_1 + 0xa0) == 0) ||
       (FUN_0132138c(*(long *)(param_1 + 0xa0),iVar11,local_70,*(undefined8 *)puVar8), lVar12 == 0))
    break;
  }
LAB_0230e754:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


