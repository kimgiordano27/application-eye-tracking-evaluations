/*
FUNCTION_NAME: FUN_055d8ef0
ENTRY_POINT: 055d8ef0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * FUN_055d8ef0(long param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_68;
  
  if ((DAT_06bbfbb0 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__);
    FUN_02f08768(PTR_DAT_067cb360);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                );
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(PTR_DAT_067d7c28);
    FUN_02f08768(PTR_DAT_067d5820);
    FUN_02f08768(PTR_DAT_067cab28);
    FUN_02f08768(PTR_DAT_067ce970);
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
    FUN_02f08768(
                System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__);
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                );
    FUN_02f08768(PTR_DAT_067cab38);
    FUN_02f08768(PTR_DAT_067cd778);
    FUN_02f08768(Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo);
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                );
    FUN_02f08768(Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<bool>_get_value__);
    DAT_06bbfbb0 = 1;
  }
  puVar6 = Method_UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>__ctor__;
  puVar1 = (undefined8 *)PTR_DAT_067cb360;
  local_68 = 0;
  if (param_2 == (long *)0x0) goto LAB_055d9980;
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  puVar5 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
  ;
  puVar4 = PTR_DAT_067cd6c0;
  if (iVar7 != 1) {
    puVar1 = (undefined8 *)puVar6;
  }
  if (param_3 == (long *)0x0) goto LAB_055d9980;
  uVar18 = *puVar1;
  plVar8 = (long *)(**(code **)(*param_3 + 0x5f8))
                             (param_3,*(undefined8 *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                              ,uVar18,*(undefined8 *)PTR_DAT_067cd6c0,
                              *(undefined8 *)(*param_3 + 0x600));
  uVar9 = FUN_0555e9b8(param_2,0);
  if (plVar8 == (long *)0x0) goto LAB_055d9980;
  (**(code **)(*plVar8 + 0x518))
            (plVar8,*(undefined8 *)PTR_DAT_067cd778,uVar9,*(undefined8 *)(*plVar8 + 0x520));
  lVar10 = FUN_0556053c(param_2,0);
  puVar6 = Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariable<Color>__ctor__;
  if (lVar10 == 0) goto LAB_055d9980;
  if (*(int *)(lVar10 + 0x10) == 0) {
    uVar9 = FUN_055d8de0(param_1,param_2[0xf]);
    uVar11 = FUN_0556053c(param_2,0);
    uVar12 = FUN_04f6dc3c(uVar11,uVar9,0);
    if ((uVar12 & 1) != 0) {
      (**(code **)(*plVar8 + 0x518))
                (plVar8,*(undefined8 *)
                         Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                 ,*(undefined8 *)
                   Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                 ,*(undefined8 *)(*plVar8 + 0x520));
    }
  }
  uVar9 = thunk_FUN_02f1863c(param_2,0);
  puVar3 = PTR_DAT_067c9338;
  uVar11 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  uVar11 = FUN_050e4454(uVar11,0);
  uVar12 = FUN_050edfb8(uVar9,uVar11,0);
  if ((uVar12 & 1) == 0) {
    FUN_055d87f4(param_1,param_2,plVar8);
  }
  else {
    FUN_055cd6cc(param_1,param_2,plVar8,param_3);
  }
  FUN_055ccff4(param_2[0x14],plVar8,0);
  FUN_055d83a4(param_1,param_2,param_3,plVar8);
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if (iVar7 == 4) {
    if ((char)param_2[4] == '\0') {
      (**(code **)(*plVar8 + 0x558))
                (plVar8,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                 ,*(undefined8 *)
                   UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,
                 *(undefined8 *)PTR_DAT_067cab28,*(undefined8 *)(*plVar8 + 0x560));
    }
    if (*(char *)((long)param_2 + 0x95) == '\0') {
      lVar10 = param_2[7];
      lVar19 = *(long *)(puVar3 + 0x28);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050e4454(lVar19 + 0x20,0);
      uVar12 = FUN_050ed374(lVar10,uVar9,0);
      if ((uVar12 & 1) == 0) {
        FUN_055cfb48(param_2[7]);
        uVar9 = FUN_0555ef20(param_2,0);
        uVar9 = FUN_0555ecb4(param_2,uVar9,0);
        uVar11 = *(undefined8 *)
                  Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo;
        uVar15 = *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
        pcVar17 = *(code **)(*plVar8 + 0x558);
        uVar16 = *(undefined8 *)(*plVar8 + 0x560);
      }
      else {
        plVar13 = (long *)FUN_0555ef20(param_2,0);
        if (plVar13 == (long *)0x0) goto LAB_055d9980;
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40))
        goto LAB_055d9984;
        pcVar14 = (char *)thunk_FUN_02f453b8();
        uVar15 = *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
        uVar11 = *(undefined8 *)
                  Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo;
        puVar1 = (undefined8 *)PTR_DAT_067cab28;
        if (*pcVar14 != '\0') {
          puVar1 = (undefined8 *)PTR_DAT_067cab38;
        }
        uVar16 = *(undefined8 *)(*plVar8 + 0x560);
        uVar9 = *puVar1;
        pcVar17 = *(code **)(*plVar8 + 0x558);
      }
      (*pcVar17)(plVar8,uVar11,uVar15,uVar9,uVar16);
    }
  }
  if (*(char *)((long)param_2 + 0x95) == '\0') {
    iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    if (iVar7 != 4) {
      FUN_055cfb48(param_2[7]);
      iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
      if ((iVar7 == 2) && ((char)param_2[4] == '\0')) {
        lVar10 = param_2[7];
        lVar19 = *(long *)(puVar3 + 0x28);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_050e4454(lVar19 + 0x20,0);
        uVar12 = FUN_050ed374(lVar10,uVar9,0);
        plVar13 = (long *)FUN_0555ef20(param_2,0);
        if ((uVar12 & 1) == 0) {
          uVar9 = FUN_0555ecb4(param_2,plVar13,0);
          uVar11 = *(undefined8 *)
                    Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo;
          uVar15 = *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
          pcVar17 = *(code **)(*plVar8 + 0x558);
          uVar16 = *(undefined8 *)(*plVar8 + 0x560);
        }
        else {
          if (plVar13 == (long *)0x0) goto LAB_055d9980;
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40))
          goto LAB_055d9984;
          pcVar14 = (char *)thunk_FUN_02f453b8(plVar13);
          uVar15 = *(undefined8 *)
                    UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
          uVar11 = *(undefined8 *)
                    Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo;
          puVar1 = (undefined8 *)PTR_DAT_067cab28;
          if (*pcVar14 != '\0') {
            puVar1 = (undefined8 *)PTR_DAT_067cab38;
          }
          uVar16 = *(undefined8 *)(*plVar8 + 0x560);
          uVar9 = *puVar1;
          pcVar17 = *(code **)(*plVar8 + 0x558);
        }
        (*pcVar17)(plVar8,uVar11,uVar15,uVar9,uVar16);
      }
      else {
        lVar10 = param_2[7];
        lVar19 = *(long *)(puVar3 + 0x28);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_050e4454(lVar19 + 0x20,0);
        uVar12 = FUN_050ed374(lVar10,uVar9,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_05562120(param_2,0);
          if ((uVar12 & 1) != 0) goto LAB_055d9584;
          uVar9 = FUN_0555ef20(param_2,0);
          uVar9 = FUN_0555ecb4(param_2,uVar9,0);
          lVar10 = *plVar8;
          uVar11 = *(undefined8 *)PTR_DAT_067d5820;
        }
        else {
          plVar13 = (long *)FUN_0555ef20(param_2,0);
          if (plVar13 == (long *)0x0) goto LAB_055d9980;
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40)) {
LAB_055d9984:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48();
          }
          pcVar14 = (char *)thunk_FUN_02f453b8();
          lVar10 = *plVar8;
          uVar11 = *(undefined8 *)PTR_DAT_067d5820;
          puVar1 = (undefined8 *)PTR_DAT_067cab28;
          if (*pcVar14 != '\0') {
            puVar1 = (undefined8 *)PTR_DAT_067cab38;
          }
          uVar9 = *puVar1;
        }
        (**(code **)(lVar10 + 0x518))(plVar8,uVar11,uVar9,*(undefined8 *)(lVar10 + 0x520));
      }
    }
  }
LAB_055d9584:
  iVar7 = *(int *)(param_1 + 0x5c);
  uVar9 = FUN_0556053c(param_2,0);
  if (iVar7 == 2) {
    (**(code **)(*plVar8 + 0x558))
              (plVar8,*(undefined8 *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
               ,*(undefined8 *)
                 UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar9,
               *(undefined8 *)(*plVar8 + 0x560));
  }
  else {
    if ((param_2[0xf] == 0) || (lVar10 = FUN_05548bd0(param_2[0xf],0), lVar10 == 0))
    goto LAB_055d9980;
    uVar12 = FUN_05825608(lVar10,0);
    lVar10 = param_2[0xf];
    if ((uVar12 & 1) == 0) {
      if ((lVar10 == 0) || (lVar10 = FUN_05548bd0(lVar10,0), lVar10 == 0)) goto LAB_055d9980;
      uVar11 = *(undefined8 *)(lVar10 + 0x18);
    }
    else {
      if (lVar10 == 0) goto LAB_055d9980;
      uVar11 = FUN_05546520(lVar10,0);
    }
    uVar12 = FUN_04f6dc3c(uVar9,uVar11,0);
    if ((uVar12 & 1) != 0) {
      lVar10 = FUN_0556053c(param_2,0);
      if (lVar10 == 0) goto LAB_055d9980;
      if (*(int *)(lVar10 + 0x10) != 0) {
        uVar9 = FUN_0556053c(param_2,0);
        plVar13 = (long *)FUN_055d8110(param_1,uVar9);
        uVar9 = FUN_0555e9b8(param_2,0);
        lVar10 = FUN_055d9988(uVar9,plVar13,uVar9);
        if (lVar10 == 0) {
          if (plVar13 == (long *)0x0) goto LAB_055d9980;
          (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar8,*(undefined8 *)(*plVar13 + 0x2e0));
        }
        plVar8 = *(long **)(param_1 + 0x48);
        if (plVar8 == (long *)0x0) {
LAB_055d9980:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x5f8))
                                   (plVar8,*(undefined8 *)puVar5,uVar18,*(undefined8 *)puVar4,
                                    *(undefined8 *)(*plVar8 + 0x600));
        plVar13 = *(long **)(param_1 + 0x28);
        uVar9 = FUN_0556053c(param_2,0);
        if (plVar13 == (long *)0x0) goto LAB_055d9980;
        plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                    (plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x310));
        uVar9 = *(undefined8 *)PTR_DAT_067d7c28;
        if (plVar13 == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        uVar11 = FUN_0555e9b8(param_2,0);
        uVar18 = FUN_04f6f6b4(uVar18,*(undefined8 *)PTR_DAT_067ce970,uVar11,0);
        if (plVar8 == (long *)0x0) goto LAB_055d9980;
        (**(code **)(*plVar8 + 0x518))(plVar8,uVar9,uVar18,*(undefined8 *)(*plVar8 + 0x520));
        if (param_2[0xf] == 0) goto LAB_055d9980;
        uVar9 = FUN_05546520(param_2[0xf],0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_055d9980;
        uVar12 = FUN_04f6dc3c(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),0);
        if ((uVar12 & 1) != 0) {
          plVar13 = *(long **)(param_1 + 0x28);
          uVar9 = FUN_0556053c(param_2,0);
          if (plVar13 == (long *)0x0) goto LAB_055d9980;
          (**(code **)(*plVar13 + 0x308))(plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x310));
          if (param_2[0xf] == 0) goto LAB_055d9980;
          uVar9 = FUN_05546520(param_2[0xf],0);
          FUN_055d8110(param_1,uVar9);
        }
      }
    }
  }
  bVar2 = *(byte *)(param_2 + 4) ^ 1;
  local_68 = (ulong)CONCAT14(*(byte *)(param_2 + 4),(undefined4)local_68) ^ 0x100000000;
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if ((iVar7 == 2) && (bVar2 != 0)) {
    (**(code **)(*plVar8 + 0x518))
              (plVar8,*(undefined8 *)Method_UnityEngine_UIElements_BaseField<bool>_get_value__,
               *(undefined8 *)
                System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
               ,*(undefined8 *)(*plVar8 + 0x520));
  }
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if (iVar7 == 4) {
    uVar18 = *(undefined8 *)Method_UnityEngine_UIElements_BaseField<bool>_get_value__;
    uVar9 = *(undefined8 *)
             Method_System_Dynamic_Utils_CacheDict<Type,_Func<LightLambda,_Delegate>>_set_Item__;
    pcVar17 = *(code **)(*plVar8 + 0x518);
    uVar11 = *(undefined8 *)(*plVar8 + 0x520);
  }
  else {
    iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    if ((iVar7 == 2) || (bVar2 != 0)) goto LAB_055d98d8;
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050656a0(0);
    uVar9 = FUN_050d2d8c((long)&local_68 + 4,uVar9,0);
    uVar18 = *(undefined8 *)
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
    ;
    pcVar17 = *(code **)(*plVar8 + 0x518);
    uVar11 = *(undefined8 *)(*plVar8 + 0x520);
  }
  (*pcVar17)(plVar8,uVar18,uVar9,uVar11);
LAB_055d98d8:
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if ((iVar7 == 1) && ((param_5 & 1) != 0)) {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((long)param_2 + 100));
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050656a0(0);
    uVar9 = FUN_050d2d8c(&local_68,uVar9,0);
    (**(code **)(*plVar8 + 0x558))
              (plVar8,*(undefined8 *)
                       Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
               *(undefined8 *)UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo
               ,uVar9,*(undefined8 *)(*plVar8 + 0x560));
  }
  return plVar8;
}


