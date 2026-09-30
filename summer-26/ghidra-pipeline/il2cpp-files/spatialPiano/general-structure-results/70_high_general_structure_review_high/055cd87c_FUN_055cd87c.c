/*
FUNCTION_NAME: FUN_055cd87c
ENTRY_POINT: 055cd87c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_15;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_055cd87c(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  
  if ((DAT_06bbfb98 & 1) == 0) {
    FUN_02f08768(UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo);
    FUN_02f08768(PTR_DAT_067dcfb0);
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(System_EventHandler<Result<ColocationState>>_TypeInfo);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                );
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02f08768(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_SubscribeAndUpdate__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__);
    FUN_02f08768(System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_get_Value__
                );
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseSlider<float>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__);
    FUN_02f08768(Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_SetPlacement__);
    FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                );
    FUN_02f08768(Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                );
    FUN_02f08768(
                UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__);
    FUN_02f08768(System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo);
    DAT_06bbfb98 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_055ce10c;
  uVar8 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  puVar3 = PTR_DAT_067c9338;
  if (param_3 == (long *)0x0) {
LAB_055cda20:
    bVar2 = false;
    bVar6 = false;
    plVar12 = (long *)0x0;
LAB_055cda2c:
    lVar15 = *(long *)(PTR_DAT_067c9338 + 0x90);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050e4454(lVar15 + 0x20,0);
    uVar10 = FUN_050edfb8(uVar8,uVar9,0);
    if ((uVar10 & 1) != 0) {
      lVar15 = *(long *)(puVar3 + 0x28);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050e4454(lVar15 + 0x20,0);
      uVar10 = FUN_050edfb8(uVar8,uVar9,0);
      if ((uVar10 & 1) != 0) {
        lVar15 = *(long *)(puVar3 + 0xe0);
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar15);
        }
        uVar9 = FUN_050e4454(lVar15 + 0x20,0);
        uVar10 = FUN_050edfb8(uVar8,uVar9,0);
        if ((uVar10 & 1) != 0) {
          lVar15 = *(long *)(puVar3 + 0x10);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_050e4454(lVar15 + 0x20,0);
          uVar10 = FUN_050edfb8(uVar8,uVar9,0);
          if ((uVar10 & 1) != 0) {
            uVar9 = *(undefined8 *)PTR_DAT_067dcfb0;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar9 = FUN_050e4454(uVar9,0);
            uVar10 = FUN_050edfb8(uVar8,uVar9,0);
            if ((uVar10 & 1) != 0) {
              lVar15 = *(long *)(puVar3 + 0x68);
              if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar9 = FUN_050e4454(lVar15 + 0x20,0);
              uVar10 = FUN_050edfb8(uVar8,uVar9,0);
              if ((uVar10 & 1) != 0) {
                lVar15 = *(long *)(puVar3 + 0x48);
                if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar9 = FUN_050e4454(lVar15 + 0x20,0);
                uVar10 = FUN_050edfb8(uVar8,uVar9,0);
                if ((uVar10 & 1) != 0) {
                  return;
                }
              }
            }
          }
        }
      }
    }
    bVar14 = false;
  }
  else {
    bVar1 = *(byte *)(*(long *)System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo +
                     0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo))
    goto LAB_055cda20;
    bVar2 = true;
    bVar14 = true;
    bVar6 = (char)param_3[0x12] != '\0';
    plVar12 = param_3;
    if (*(char *)((long)param_3 + 0x91) == '\0') goto LAB_055cda2c;
  }
  uVar10 = (**(code **)(*param_2 + 0x298))(param_2,param_3,*(undefined8 *)(*param_2 + 0x2a0));
  if ((uVar10 & 1) == 0) {
    if (!bVar6) {
      return;
    }
  }
  else {
    lVar15 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    puVar3 = 
    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
    ;
    if (*(int *)(*(long *)
                  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
                        );
    }
    if (lVar15 == 0) goto LAB_055ce10c;
    uVar7 = FUN_058cff38(lVar15,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
    if (!bVar6 && (uVar7 & 1) == 0) {
      return;
    }
  }
  plVar11 = (long *)(**(code **)(*param_2 + 600))(param_2,param_3,*(undefined8 *)(*param_2 + 0x260))
  ;
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar15 + 0x130)) &&
       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
       )) {
      return;
    }
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(lVar15 + 0x130)) &&
       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
      return;
    }
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo,4,0
                       );
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo,4,
                        0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_SetPlacement__,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_get_Value__
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                        ,4,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  if (bVar2) {
    uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    puVar3 = Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__;
    uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__
                          ,4,0);
    if ((uVar10 & 1) != 0) {
      if (plVar12 != (long *)0x0) {
        lVar15 = FUN_055ce110(plVar12[7]);
        puVar4 = PTR_DAT_067c9338;
        if (!bVar6) {
          lVar13 = plVar12[7];
          uVar8 = *(undefined8 *)
                   UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_050e4454(uVar8,0);
          uVar10 = FUN_050ed374(lVar13,uVar8,0);
          puVar5 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
          if ((uVar10 & 1) == 0) {
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x10) == 0) {
                bVar14 = true;
              }
              if ((!bVar14) &&
                 ((uVar10 = thunk_FUN_04f6d944(lVar15,*(undefined8 *)
                                                                                                              
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                               ,0), (uVar10 & 1) == 0 ||
                  (uVar10 = FUN_04f6dc3c(plVar12[0x1c],*(undefined8 *)puVar5,0), (uVar10 & 1) == 0))
                 )) {
                lVar15 = plVar12[7];
                uVar8 = *(undefined8 *)System_EventHandler<Result<ColocationState>>_TypeInfo;
                if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar8 = FUN_050e4454(uVar8,0);
                uVar10 = FUN_050ed374(lVar15,uVar8,0);
                if ((uVar10 & 1) == 0) {
                  return;
                }
              }
              FUN_055cecb4(param_1,param_4,plVar12[7]);
              return;
            }
            goto LAB_055ce10c;
          }
        }
        plVar12 = (long *)plVar12[7];
        if ((plVar12 == (long *)0x0) ||
           (uVar8 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0)),
           param_4 == (long *)0x0)) goto LAB_055ce10c;
        lVar15 = *param_4;
        uVar9 = *(undefined8 *)puVar3;
        goto LAB_055ce038;
      }
      goto LAB_055ce10c;
    }
    uVar8 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    uVar10 = FUN_04f6d990(uVar8,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_SubscribeAndUpdate__
                          ,4,0);
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  lVar15 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
  if (lVar15 != 0) {
    uVar8 = FUN_058f5468(lVar15,plVar11,0);
    uVar9 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    if (param_4 != (long *)0x0) {
      lVar15 = *param_4;
LAB_055ce038:
                    /* WARNING: Could not recover jumptable at 0x055ce05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 0x558))
                (param_4,uVar9,
                 *(undefined8 *)
                  UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo,uVar8,
                 *(undefined8 *)(lVar15 + 0x560));
      return;
    }
  }
LAB_055ce10c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


