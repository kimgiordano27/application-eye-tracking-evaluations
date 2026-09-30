/*
FUNCTION_NAME: System.Runtime.Diagnostics.TraceRecord$$.ctor
ENTRY_POINT: 055cd9fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void System_Runtime_Diagnostics_TraceRecord___ctor(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long in_x9;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar3 = PTR_DAT_067c9338;
  if ((*(byte *)(in_x9 + 0x130) < *(byte *)(param_1 + 0x130)) ||
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1)) {
    bVar2 = false;
    unaff_x22 = 0;
    bVar5 = false;
LAB_055cda2c:
    lVar11 = *(long *)(PTR_DAT_067c9338 + 0x90);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050e4454(lVar11 + 0x20,0);
    uVar7 = FUN_050edfb8();
    if ((uVar7 & 1) != 0) {
      lVar11 = *(long *)(puVar3 + 0x28);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050e4454(lVar11 + 0x20,0);
      uVar7 = FUN_050edfb8();
      if ((uVar7 & 1) != 0) {
        lVar11 = *(long *)(puVar3 + 0xe0);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar11);
        }
        FUN_050e4454(lVar11 + 0x20,0);
        uVar7 = FUN_050edfb8();
        if ((uVar7 & 1) != 0) {
          lVar11 = *(long *)(puVar3 + 0x10);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050e4454(lVar11 + 0x20,0);
          uVar7 = FUN_050edfb8();
          if ((uVar7 & 1) != 0) {
            uVar12 = *(undefined8 *)PTR_DAT_067dcfb0;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_050e4454(uVar12,0);
            uVar7 = FUN_050edfb8();
            if ((uVar7 & 1) != 0) {
              lVar11 = *(long *)(puVar3 + 0x68);
              if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_050e4454(lVar11 + 0x20,0);
              uVar7 = FUN_050edfb8();
              if ((uVar7 & 1) != 0) {
                lVar11 = *(long *)(puVar3 + 0x48);
                if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_050e4454(lVar11 + 0x20,0);
                uVar7 = FUN_050edfb8();
                if ((uVar7 & 1) != 0) {
                  return;
                }
              }
            }
          }
        }
      }
    }
    bVar10 = false;
  }
  else {
    bVar2 = true;
    bVar10 = true;
    bVar5 = *(char *)(unaff_x22 + 0x90) != '\0';
    if (*(char *)(unaff_x22 + 0x91) == '\0') goto LAB_055cda2c;
  }
  uVar7 = (**(code **)(*unaff_x21 + 0x298))();
  if ((uVar7 & 1) == 0) {
    if (!bVar5) {
      return;
    }
  }
  else {
    lVar11 = (**(code **)(*unaff_x21 + 0x198))();
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
    if (lVar11 == 0) goto LAB_055ce10c;
    uVar6 = FUN_058cff38(lVar11,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
    if (!bVar5 && (uVar6 & 1) == 0) {
      return;
    }
  }
  plVar8 = (long *)(**(code **)(*unaff_x21 + 600))();
  if (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
       )) {
      return;
    }
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo)) {
      return;
    }
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)System_Xml_XmlBaseReader_XmlEndElementNode_TypeInfo,4,0
                      );
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<float>__ctor__
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass20_0_TypeInfo
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)System_Xml_XmlBaseReader_XmlComplexTextNode_TypeInfo,4,
                       0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Method_Unity_AppUI_UI_AnchorPopup<MenuBuilder>_SetPlacement__,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_get_Value__
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_set_Value__
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseSlider<float>_SetHighValueWithoutNotify__
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
  uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                               Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                       ,4,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (bVar2) {
    uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
    uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__
                         ,4,0);
    if ((uVar7 & 1) != 0) {
      if (unaff_x22 != 0) {
        lVar11 = FUN_055ce110(*(undefined8 *)(unaff_x22 + 0x38));
        puVar3 = PTR_DAT_067c9338;
        if (!bVar5) {
          uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
          uVar9 = *(undefined8 *)
                   UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo;
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_050e4454(uVar9,0);
          uVar7 = FUN_050ed374(uVar12,uVar9,0);
          puVar4 = Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__;
          if ((uVar7 & 1) == 0) {
            if (lVar11 != 0) {
              if (*(int *)(lVar11 + 0x10) == 0) {
                bVar10 = true;
              }
              if ((!bVar10) &&
                 ((uVar7 = thunk_FUN_04f6d944(lVar11,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                              ,0), (uVar7 & 1) == 0 ||
                  (uVar7 = FUN_04f6dc3c(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)puVar4,0),
                  (uVar7 & 1) == 0)))) {
                uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
                uVar9 = *(undefined8 *)System_EventHandler<Result<ColocationState>>_TypeInfo;
                if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar9 = FUN_050e4454(uVar9,0);
                uVar7 = FUN_050ed374(uVar12,uVar9,0);
                if ((uVar7 & 1) == 0) {
                  return;
                }
              }
              FUN_055cecb4();
              return;
            }
            goto LAB_055ce10c;
          }
        }
        plVar8 = *(long **)(unaff_x22 + 0x38);
        if ((plVar8 == (long *)0x0) ||
           ((**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0)),
           unaff_x19 == (long *)0x0)) goto LAB_055ce10c;
        lVar11 = *unaff_x19;
        goto LAB_055ce038;
      }
      goto LAB_055ce10c;
    }
    uVar12 = (**(code **)(*unaff_x21 + 0x1a8))();
    uVar7 = FUN_04f6d990(uVar12,*(undefined8 *)
                                 Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<bool>_SubscribeAndUpdate__
                         ,4,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  lVar11 = (**(code **)(*unaff_x21 + 0x218))();
  if (lVar11 != 0) {
    FUN_058f5468(lVar11,plVar8,0);
    (**(code **)(*unaff_x21 + 0x1a8))();
    if (unaff_x19 != (long *)0x0) {
      lVar11 = *unaff_x19;
LAB_055ce038:
                    /* WARNING: Could not recover jumptable at 0x055ce05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar11 + 0x558))();
      return;
    }
  }
LAB_055ce10c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


