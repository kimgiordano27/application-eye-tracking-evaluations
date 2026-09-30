/*
FUNCTION_NAME: System.Runtime.Diagnostics.DiagnosticTraceSource$$.ctor
ENTRY_POINT: 055cd96c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void System_Runtime_Diagnostics_DiagnosticTraceSource___ctor(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long lVar11;
  long unaff_x23;
  bool bVar12;
  long lVar13;
  
  FUN_02f08768();
  FUN_02f08768(Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__);
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
  *(undefined1 *)(unaff_x23 + 0xb98) = 1;
  if (unaff_x21 == (long *)0x0) goto LAB_055ce10c;
  uVar7 = (**(code **)(*unaff_x21 + 0x238))();
  puVar3 = PTR_DAT_067c9338;
  if (unaff_x22 == (long *)0x0) {
LAB_055cda20:
    bVar2 = false;
    unaff_x22 = (long *)0x0;
    bVar5 = false;
LAB_055cda2c:
    lVar13 = *(long *)(PTR_DAT_067c9338 + 0x90);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_050e4454(lVar13 + 0x20,0);
    uVar9 = FUN_050edfb8(uVar7,uVar8,0);
    if ((uVar9 & 1) != 0) {
      lVar13 = *(long *)(puVar3 + 0x28);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_050e4454(lVar13 + 0x20,0);
      uVar9 = FUN_050edfb8(uVar7,uVar8,0);
      if ((uVar9 & 1) != 0) {
        lVar13 = *(long *)(puVar3 + 0xe0);
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar13);
        }
        uVar8 = FUN_050e4454(lVar13 + 0x20,0);
        uVar9 = FUN_050edfb8(uVar7,uVar8,0);
        if ((uVar9 & 1) != 0) {
          lVar13 = *(long *)(puVar3 + 0x10);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_050e4454(lVar13 + 0x20,0);
          uVar9 = FUN_050edfb8(uVar7,uVar8,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = *(undefined8 *)PTR_DAT_067dcfb0;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar8 = FUN_050e4454(uVar8,0);
            uVar9 = FUN_050edfb8(uVar7,uVar8,0);
            if ((uVar9 & 1) != 0) {
              lVar13 = *(long *)(puVar3 + 0x68);
              if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar8 = FUN_050e4454(lVar13 + 0x20,0);
              uVar9 = FUN_050edfb8(uVar7,uVar8,0);
              if ((uVar9 & 1) != 0) {
                lVar13 = *(long *)(puVar3 + 0x48);
                if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar8 = FUN_050e4454(lVar13 + 0x20,0);
                uVar9 = FUN_050edfb8(uVar7,uVar8,0);
                if ((uVar9 & 1) != 0) {
                  return;
                }
              }
            }
          }
        }
      }
    }
    bVar12 = false;
  }
  else {
    bVar1 = *(byte *)(*(long *)System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo +
                     0x130);
    if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo))
    goto LAB_055cda20;
    bVar2 = true;
    bVar12 = true;
    bVar5 = (char)unaff_x22[0x12] != '\0';
    if (*(char *)((long)unaff_x22 + 0x91) == '\0') goto LAB_055cda2c;
  }
  uVar9 = (**(code **)(*unaff_x21 + 0x298))();
  if ((uVar9 & 1) == 0) {
    if (!bVar5) {
      return;
    }
  }
  else {
    lVar13 = (**(code **)(*unaff_x21 + 0x198))();
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
    if (lVar13 == 0) goto LAB_055ce10c;
    uVar6 = FUN_058cff38(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
    if (!bVar5 && (uVar6 & 1) == 0) {
      return;
    }
  }
  plVar10 = (long *)(**(code **)(*unaff_x21 + 600))();
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar13 + 0x130)) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
       )) {
      return;
    }
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(lVar13 + 0x130)) &&
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
      return;
    }
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo,4,0)
  ;
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__,
                       4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                       ,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo,
                       4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo,4,0
                      );
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_SetPlacement__,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                       ,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_get_Value__
                       ,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                       ,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__
                       ,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                       ,4,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (bVar2) {
    uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
    uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__
                         ,4,0);
    if ((uVar9 & 1) != 0) {
      if (unaff_x22 != (long *)0x0) {
        lVar13 = FUN_055ce110(unaff_x22[7]);
        puVar3 = PTR_DAT_067c9338;
        if (!bVar5) {
          lVar11 = unaff_x22[7];
          uVar7 = *(undefined8 *)
                   UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar7 = FUN_050e4454(uVar7,0);
          uVar9 = FUN_050ed374(lVar11,uVar7,0);
          puVar4 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
          if ((uVar9 & 1) == 0) {
            if (lVar13 != 0) {
              if (*(int *)(lVar13 + 0x10) == 0) {
                bVar12 = true;
              }
              if ((!bVar12) &&
                 ((uVar9 = thunk_FUN_04f6d944(lVar13,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                              ,0), (uVar9 & 1) == 0 ||
                  (uVar9 = FUN_04f6dc3c(unaff_x22[0x1c],*(undefined8 *)puVar4,0), (uVar9 & 1) == 0))
                 )) {
                lVar13 = unaff_x22[7];
                uVar7 = *(undefined8 *)System_EventHandler<Result<ColocationState>>_TypeInfo;
                if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar7 = FUN_050e4454(uVar7,0);
                uVar9 = FUN_050ed374(lVar13,uVar7,0);
                if ((uVar9 & 1) == 0) {
                  return;
                }
              }
              FUN_055cecb4();
              return;
            }
            goto LAB_055ce10c;
          }
        }
        plVar10 = (long *)unaff_x22[7];
        if ((plVar10 == (long *)0x0) ||
           ((**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0)),
           unaff_x19 == (long *)0x0)) goto LAB_055ce10c;
        lVar13 = *unaff_x19;
        goto LAB_055ce038;
      }
      goto LAB_055ce10c;
    }
    uVar7 = (**(code **)(*unaff_x21 + 0x1a8))();
    uVar9 = FUN_04f6d990(uVar7,*(undefined8 *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_SubscribeAndUpdate__
                         ,4,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  lVar13 = (**(code **)(*unaff_x21 + 0x218))();
  if (lVar13 != 0) {
    FUN_058f5468(lVar13,plVar10,0);
    (**(code **)(*unaff_x21 + 0x1a8))();
    if (unaff_x19 != (long *)0x0) {
      lVar13 = *unaff_x19;
LAB_055ce038:
                    /* WARNING: Could not recover jumptable at 0x055ce05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x558))();
      return;
    }
  }
LAB_055ce10c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


