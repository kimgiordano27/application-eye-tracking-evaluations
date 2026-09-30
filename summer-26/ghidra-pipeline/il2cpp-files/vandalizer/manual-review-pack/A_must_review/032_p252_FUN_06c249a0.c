/*
FUNCTION_NAME: FUN_06c249a0
ENTRY_POINT: 06c249a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 134
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_15;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_6
*/


undefined8 FUN_06c249a0(ulong param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  puVar6 = PTR_DAT_0759bc40;
  puVar5 = PTR_DAT_0759bc38;
  if ((DAT_07a5028d & 1) == 0) {
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_0759bc60);
    FUN_031f20f4(PTR_DAT_0759bc40);
    FUN_031f20f4(PTR_DAT_0759ca18);
    FUN_031f20f4(PTR_DAT_0759bc38);
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_031f20f4(UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_var);
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo)
    ;
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<Pkcs12Store_CertId,_X509CertificateEntry>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_Dictionary<PunTeams_Team,_List<Player>>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo
                );
    FUN_031f20f4(System_Collections_Generic_Dictionary<StunMessage_AttributeType,_object>_TypeInfo);
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<SystemCapabilityUtils_SystemCapability,_SystemCapabilityUtils_SystemCapabilityInfo>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
                );
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<fsPortableReflection_AttributeQuery,_Attribute>_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075df658);
    FUN_031f20f4(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    FUN_031f20f4(
                Oculus_Interaction_DistantCandidateComputer<DistanceGrabInteractor,_DistanceGrabInteractable>_TypeInfo
                );
    DAT_07a5028d = 1;
  }
  lVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_047aec0c(lVar7,*(undefined8 *)puVar6);
  puVar6 = System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
  ;
  puVar5 = PTR_DAT_0759bc60;
  if (param_1 == 0) {
    if (lVar7 == 0) {
LAB_06c250a8:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
LAB_06c2505c:
    if (*(int *)(lVar7 + 0x18) < 1) {
      uVar8 = *(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_var;
    }
    else {
      uVar8 = System_Globalization_TaiwanCalendar__get_MinSupportedDateTime(param_2,lVar7,0);
    }
    return uVar8;
  }
  piVar1 = (int *)(lVar7 + 0x1c);
  plVar2 = (long *)(lVar7 + 0x10);
  puVar3 = (uint *)(lVar7 + 0x18);
LAB_06c24bc4:
  uVar9 = param_1 & -param_1;
  if (uVar9 < 0x4001) {
    if (uVar9 < 0x81) {
      if (uVar9 < 0x11) {
        if (uVar9 - 1 < 4) {
          switch(uVar9 - 1 & 0xffffffff) {
          case 0:
            if (lVar7 == 0) goto LAB_06c250a8;
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
            ;
            break;
          case 1:
            if (lVar7 == 0) goto LAB_06c250a8;
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
            ;
            break;
          case 2:
            goto switchD_06c24da0_caseD_2;
          case 3:
            if (lVar7 == 0) goto LAB_06c250a8;
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      System_Collections_Generic_Dictionary<SystemCapabilityUtils_SystemCapability,_SystemCapabilityUtils_SystemCapabilityInfo>_TypeInfo
            ;
            break;
          default:
            goto switchD_06c24da0_default;
          }
          uVar8 = *puVar11;
          lVar10 = *(long *)puVar5;
          *piVar1 = iVar12 + 1;
          lVar13 = *plVar2;
          if (lVar13 == 0) goto LAB_06c250a8;
LAB_06c24e44:
          uVar4 = *puVar3;
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *puVar3 = uVar4 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar8;
            thunk_FUN_0329bf60();
          }
          else {
            FUN_047af440(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_06c25004;
        }
switchD_06c24da0_default:
        if (uVar9 != 8) {
          if (uVar9 != 0x10) goto switchD_06c24da0_caseD_2;
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TypeInfo
            ;
            goto LAB_06c24fac;
          }
          goto LAB_06c250a8;
        }
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TypeInfo
        ;
      }
      else if (uVar9 == 0x20) {
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
        ;
      }
      else {
        if (uVar9 != 0x40) {
          if (uVar9 != 0x80) goto switchD_06c24da0_caseD_2;
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_TypeInfo
            ;
            goto LAB_06c24fac;
          }
          goto LAB_06c250a8;
        }
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
        ;
      }
    }
    else if (uVar9 < 0x401) {
      if (uVar9 == 0x100) {
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_TypeInfo
        ;
      }
      else if (uVar9 == 0x200) {
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<StunMessage_AttributeType,_object>_TypeInfo;
      }
      else {
        if (uVar9 != 0x400) goto switchD_06c24da0_caseD_2;
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
        ;
      }
    }
    else if (uVar9 < 0x1001) {
      if (uVar9 != 0x800) {
        if (uVar9 == 0x1000) {
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo
            ;
            goto LAB_06c24fac;
          }
        }
        else {
switchD_06c24da0_caseD_2:
          local_78 = *(undefined8 *)puVar6;
          uStack_70 = 0xffffffffffffffff;
          local_68 = uVar9;
          uVar8 = FUN_05e37630(&local_78,0);
          if (lVar7 != 0) {
            lVar10 = *(long *)puVar5;
            *piVar1 = *piVar1 + 1;
            lVar13 = *plVar2;
            if (lVar13 != 0) goto LAB_06c24e44;
          }
        }
        goto LAB_06c250a8;
      }
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_TypeInfo
      ;
    }
    else if (uVar9 == 0x2000) {
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<PunTeams_Team,_List<Player>>_TypeInfo;
    }
    else {
      if (uVar9 != 0x4000) goto switchD_06c24da0_caseD_2;
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                Oculus_Interaction_DistantCandidateComputer<DistanceGrabInteractor,_DistanceGrabInteractable>_TypeInfo
      ;
    }
  }
  else if (uVar9 < 0x100001) {
    if (uVar9 < 0x20001) {
      if (uVar9 == 0x8000) {
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<fsPortableReflection_AttributeQuery,_Attribute>_TypeInfo
        ;
      }
      else {
        if (uVar9 != 0x10000) {
          if (uVar9 != 0x20000) goto switchD_06c24da0_caseD_2;
          if (lVar7 != 0) {
            iVar12 = *piVar1;
            puVar11 = (undefined8 *)
                      System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_TypeInfo
            ;
            goto LAB_06c24fac;
          }
          goto LAB_06c250a8;
        }
        if (lVar7 == 0) goto LAB_06c250a8;
        iVar12 = *piVar1;
        puVar11 = (undefined8 *)
                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
        ;
      }
    }
    else if (uVar9 == 0x40000) {
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
      ;
    }
    else if (uVar9 == 0x80000) {
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_TypeInfo
      ;
    }
    else {
      if (uVar9 != 0x100000) goto switchD_06c24da0_caseD_2;
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
      ;
    }
  }
  else if (uVar9 < 0x800001) {
    if (uVar9 == 0x200000) {
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)PTR_DAT_075df658;
    }
    else if (uVar9 == 0x400000) {
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<Pkcs12Store_CertId,_X509CertificateEntry>_TypeInfo
      ;
    }
    else {
      if (uVar9 != 0x800000) goto switchD_06c24da0_caseD_2;
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
    }
  }
  else if (uVar9 < 0x2000001) {
    if (uVar9 == 0x1000000) {
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
      ;
    }
    else {
      if (uVar9 != 0x2000000) goto switchD_06c24da0_caseD_2;
      if (lVar7 == 0) goto LAB_06c250a8;
      iVar12 = *piVar1;
      puVar11 = (undefined8 *)
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
      ;
    }
  }
  else if (uVar9 == 0x4000000) {
    if (lVar7 == 0) goto LAB_06c250a8;
    iVar12 = *piVar1;
    puVar11 = (undefined8 *)
              System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
    ;
  }
  else {
    if (uVar9 != 0x8000000) goto switchD_06c24da0_caseD_2;
    if (lVar7 == 0) goto LAB_06c250a8;
    iVar12 = *piVar1;
    puVar11 = (undefined8 *)
              System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
    ;
  }
LAB_06c24fac:
  uVar8 = *puVar11;
  lVar10 = *(long *)puVar5;
  *piVar1 = iVar12 + 1;
  lVar13 = *plVar2;
  if (lVar13 == 0) goto LAB_06c250a8;
  uVar4 = *puVar3;
  if (uVar4 < *(uint *)(lVar13 + 0x18)) {
    *puVar3 = uVar4 + 1;
    *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar8;
    thunk_FUN_0329bf60();
  }
  else {
    FUN_047af440(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
LAB_06c25004:
  param_1 = param_1 - 1 & param_1;
  if (param_1 == 0) goto LAB_06c2505c;
  goto LAB_06c24bc4;
}


