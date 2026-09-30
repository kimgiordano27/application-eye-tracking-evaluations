/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.XRSimulatedHandState$$Reset
ENTRY_POINT: 06c24d6c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_Hands_XRSimulatedHandState__Reset(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  int *unaff_x27;
  uint *unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
code_r0x06c24d6c:
  if (unaff_x21 == 0) {
LAB_06c250a8:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar5 = *unaff_x27;
  puVar4 = (undefined8 *)
           System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
  ;
LAB_06c24fac:
  do {
    uVar2 = *puVar4;
    *unaff_x27 = iVar5 + 1;
    lVar6 = *unaff_x22;
    if (lVar6 == 0) goto LAB_06c250a8;
    uVar1 = *unaff_x28;
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *unaff_x28 = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      thunk_FUN_0329bf60();
    }
    else {
      FUN_047af440();
    }
LAB_06c25004:
    unaff_x20 = unaff_x20 - 1 & unaff_x20;
    if (unaff_x20 == 0) {
      if (*(int *)(unaff_x21 + 0x18) < 1) {
        uVar2 = *(undefined8 *)UnityEngine_UI_ReflectionMethodsCache_Raycast3DCallback_var;
      }
      else {
        uVar2 = System_Globalization_TaiwanCalendar__get_MinSupportedDateTime(in_stack_00000000);
      }
      return uVar2;
    }
    uVar3 = unaff_x20 & -unaff_x20;
    if (0x4000 < uVar3) break;
    if (0x80 < uVar3) {
      if (uVar3 < 0x401) {
        if (uVar3 == 0x100) {
          if (unaff_x21 == 0) goto LAB_06c250a8;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_StylePropertyAnimationSystem_TransitionState>_TypeInfo
          ;
          goto LAB_06c24fac;
        }
        if (uVar3 == 0x200) {
          if (unaff_x21 == 0) goto LAB_06c250a8;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   System_Collections_Generic_Dictionary<StunMessage_AttributeType,_object>_TypeInfo
          ;
          goto LAB_06c24fac;
        }
        if (uVar3 == 0x400) {
          if (unaff_x21 == 0) goto LAB_06c250a8;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
          ;
          goto LAB_06c24fac;
        }
      }
      else {
        if (uVar3 < 0x1001) {
          if (uVar3 == 0x800) {
            if (unaff_x21 == 0) goto LAB_06c250a8;
            iVar5 = *unaff_x27;
            puVar4 = (undefined8 *)
                     System_Collections_Generic_Dictionary<PhotonNetwork_RaiseEventBatch,_PhotonNetwork_SerializeViewBatch>_TypeInfo
            ;
          }
          else {
            if (uVar3 != 0x1000) goto switchD_06c24da0_caseD_2;
            if (unaff_x21 == 0) goto LAB_06c250a8;
            iVar5 = *unaff_x27;
            puVar4 = (undefined8 *)
                     System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo
            ;
          }
          goto LAB_06c24fac;
        }
        if (uVar3 == 0x2000) {
          if (unaff_x21 == 0) goto LAB_06c250a8;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   System_Collections_Generic_Dictionary<PunTeams_Team,_List<Player>>_TypeInfo;
          goto LAB_06c24fac;
        }
        if (uVar3 == 0x4000) {
          if (unaff_x21 == 0) goto LAB_06c250a8;
          iVar5 = *unaff_x27;
          puVar4 = (undefined8 *)
                   Oculus_Interaction_DistantCandidateComputer<DistanceGrabInteractor,_DistanceGrabInteractable>_TypeInfo
          ;
          goto LAB_06c24fac;
        }
      }
      goto switchD_06c24da0_caseD_2;
    }
    if (0x10 < uVar3) {
      if (uVar3 == 0x20) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
        ;
      }
      else if (uVar3 == 0x40) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
        ;
      }
      else {
        if (uVar3 != 0x80) goto switchD_06c24da0_caseD_2;
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_TypeInfo
        ;
      }
      goto LAB_06c24fac;
    }
    if (uVar3 - 1 < 4) {
      switch(uVar3 - 1 & 0xffffffff) {
      case 0:
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_int>_TypeInfo
        ;
        break;
      case 1:
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
        ;
        break;
      case 2:
        goto switchD_06c24da0_caseD_2;
      case 3:
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<SystemCapabilityUtils_SystemCapability,_SystemCapabilityUtils_SystemCapabilityInfo>_TypeInfo
        ;
        break;
      default:
        goto switchD_06c24da0_default;
      }
      uVar2 = *puVar4;
      *unaff_x27 = iVar5 + 1;
      lVar6 = *unaff_x22;
      goto joined_r0x06c25050;
    }
switchD_06c24da0_default:
    if (uVar3 == 8) {
      if (unaff_x21 == 0) goto LAB_06c250a8;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)
               System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TypeInfo
      ;
      goto LAB_06c24fac;
    }
    if (uVar3 != 0x10) goto switchD_06c24da0_caseD_2;
    if (unaff_x21 == 0) goto LAB_06c250a8;
    iVar5 = *unaff_x27;
    puVar4 = (undefined8 *)
             System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>_TypeInfo
    ;
  } while( true );
  if (uVar3 < unaff_x26 + 0xe0000) {
    if (uVar3 < unaff_x26) {
      if (uVar3 == 0x8000) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<fsPortableReflection_AttributeQuery,_Attribute>_TypeInfo
        ;
        goto LAB_06c24fac;
      }
      if (uVar3 == 0x10000) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
        ;
        goto LAB_06c24fac;
      }
      if (uVar3 == 0x20000) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_TypeInfo
        ;
        goto LAB_06c24fac;
      }
    }
    else {
      if (uVar3 == 0x40000) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<OpenXRInteractionFeature_InteractionProfileType,_Dictionary<string,_bool>>_TypeInfo
        ;
        goto LAB_06c24fac;
      }
      if (uVar3 == 0x80000) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<MRUKAnchor_SceneLabels,_List<MRUKAnchor>>_TypeInfo
        ;
        goto LAB_06c24fac;
      }
      if (uVar3 == 0x100000) {
        if (unaff_x21 == 0) goto LAB_06c250a8;
        iVar5 = *unaff_x27;
        puVar4 = (undefined8 *)
                 System_Collections_Generic_Dictionary<JointVelocityActiveState_JointVelocityFeatureConfig,_JointVelocityActiveState_JointVelocityFeatureState>_TypeInfo
        ;
        goto LAB_06c24fac;
      }
    }
  }
  else if (uVar3 < unaff_x26 + 0x7e0000) {
    if (uVar3 == 0x200000) {
      if (unaff_x21 == 0) goto LAB_06c250a8;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)PTR_DAT_075df658;
      goto LAB_06c24fac;
    }
    if (uVar3 == 0x400000) {
      if (unaff_x21 == 0) goto LAB_06c250a8;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)
               System_Collections_Generic_Dictionary<Pkcs12Store_CertId,_X509CertificateEntry>_TypeInfo
      ;
      goto LAB_06c24fac;
    }
    if (uVar3 == 0x800000) {
      if (unaff_x21 == 0) goto LAB_06c250a8;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)
               System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
      goto LAB_06c24fac;
    }
  }
  else if (uVar3 < 0x2000001) {
    if (uVar3 == 0x1000000) {
      if (unaff_x21 == 0) goto LAB_06c250a8;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)
               System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
      ;
      goto LAB_06c24fac;
    }
    if (uVar3 == 0x2000000) goto code_r0x06c24d6c;
  }
  else {
    if (uVar3 == 0x4000000) {
      if (unaff_x21 == 0) goto LAB_06c250a8;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)
               System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
      ;
      goto LAB_06c24fac;
    }
    if (uVar3 == 0x8000000) {
      if (unaff_x21 == 0) goto LAB_06c250a8;
      iVar5 = *unaff_x27;
      puVar4 = (undefined8 *)
               System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
      ;
      goto LAB_06c24fac;
    }
  }
switchD_06c24da0_caseD_2:
  in_stack_00000008 = *unaff_x24;
  uVar2 = FUN_05e37630(&stack0x00000008,0);
  if (unaff_x21 == 0) goto LAB_06c250a8;
  *unaff_x27 = *unaff_x27 + 1;
  lVar6 = *unaff_x22;
joined_r0x06c25050:
  if (lVar6 == 0) goto LAB_06c250a8;
  uVar1 = *unaff_x28;
  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
    *unaff_x28 = uVar1 + 1;
    *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
    thunk_FUN_0329bf60();
  }
  else {
    FUN_047af440();
  }
  goto LAB_06c25004;
}


