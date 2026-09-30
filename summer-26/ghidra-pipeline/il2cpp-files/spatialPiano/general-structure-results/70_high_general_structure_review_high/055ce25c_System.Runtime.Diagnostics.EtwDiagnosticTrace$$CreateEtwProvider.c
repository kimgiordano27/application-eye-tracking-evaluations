/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$CreateEtwProvider
ENTRY_POINT: 055ce25c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__CreateEtwProvider(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  FUN_02f08768();
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_formatString__);
  FUN_02f08768(PTR_DAT_067cd6b8);
  FUN_02f08768(PTR_DAT_067d0878);
  FUN_02f08768(PTR_DAT_067db960);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__);
  FUN_02f08768(
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float4>_Awake__
              );
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_lowValue__);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>__ctor__);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_InvokeValueChangedCallbacks__);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_highValue__);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_invalid__);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__);
  FUN_02f08768(Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__);
  FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_highValue__);
  FUN_02f08768(Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__);
  FUN_02f08768(
              Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0xb99) = 1;
  puVar1 = PTR_DAT_067c9338;
  lVar4 = *(long *)(PTR_DAT_067c9338 + 0x88);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050e4454(lVar4 + 0x20,0);
  uVar2 = FUN_050ed374();
  puVar3 = (undefined8 *)PTR_DAT_067d0878;
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)PTR_DAT_067d8d00;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050e4454(uVar5,0);
    uVar2 = FUN_050ed374();
    puVar3 = (undefined8 *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float4>_Awake__
    ;
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<AnchorCreationTask>d__21>__
      ;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_050e4454(uVar5,0);
      uVar2 = FUN_050ed374();
      puVar3 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float4>_Awake__
      ;
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)PTR_DAT_067d8b28;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_050e4454(uVar5,0);
        uVar2 = FUN_050ed374();
        puVar3 = (undefined8 *)PTR_DAT_067db960;
        if ((uVar2 & 1) == 0) {
          uVar5 = *(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<AnchorCreationTask>d__21>__
          ;
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_050e4454(uVar5,0);
          uVar2 = FUN_050ed374();
          puVar3 = (undefined8 *)PTR_DAT_067db960;
          if ((uVar2 & 1) == 0) {
            uVar5 = *(undefined8 *)PTR_DAT_067d8d70;
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_050e4454(uVar5,0);
            uVar2 = FUN_050ed374();
            puVar3 = (undefined8 *)Method_Unity_AppUI_UI_BaseSlider<float,_float>__ctor__;
            if ((uVar2 & 1) == 0) {
              uVar5 = *(undefined8 *)PTR_DAT_067d8d28;
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_050e4454(uVar5,0);
              uVar2 = FUN_050ed374();
              puVar3 = (undefined8 *)Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__;
              if ((uVar2 & 1) == 0) {
                uVar5 = *(undefined8 *)
                         UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_SettingsPanel_<>c__DisplayClass0_0_TypeInfo
                ;
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_050e4454(uVar5,0);
                uVar2 = FUN_050ed374();
                puVar3 = (undefined8 *)Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__
                ;
                if ((uVar2 & 1) == 0) {
                  uVar5 = *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetException__
                  ;
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  FUN_050e4454(uVar5,0);
                  uVar2 = FUN_050ed374();
                  puVar3 = (undefined8 *)
                           Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__;
                  if ((uVar2 & 1) == 0) {
                    lVar4 = *(long *)(puVar1 + 0x48);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02f6670c();
                    }
                    FUN_050e4454(lVar4 + 0x20,0);
                    uVar2 = FUN_050ed374();
                    puVar3 = (undefined8 *)
                             Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__;
                    if ((uVar2 & 1) == 0) {
                      lVar4 = *(long *)(puVar1 + 0x28);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                      }
                      FUN_050e4454(lVar4 + 0x20,0);
                      uVar2 = FUN_050ed374();
                      puVar3 = (undefined8 *)
                               Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
                      ;
                      if ((uVar2 & 1) == 0) {
                        uVar5 = *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_SetStateMachine__
                        ;
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        FUN_050e4454(uVar5,0);
                        uVar2 = FUN_050ed374();
                        puVar3 = (undefined8 *)
                                 Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
                        ;
                        if ((uVar2 & 1) == 0) {
                          lVar4 = *(long *)(puVar1 + 0x78);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            thunk_FUN_02f6670c();
                          }
                          FUN_050e4454(lVar4 + 0x20,0);
                          uVar2 = FUN_050ed374();
                          puVar3 = (undefined8 *)
                                   Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                          ;
                          if ((uVar2 & 1) == 0) {
                            uVar5 = *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_SetResult__
                            ;
                            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                              thunk_FUN_02f6670c();
                            }
                            FUN_050e4454(uVar5,0);
                            uVar2 = FUN_050ed374();
                            puVar3 = (undefined8 *)
                                     Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                            ;
                            if ((uVar2 & 1) == 0) {
                              lVar4 = *(long *)(puVar1 + 0x80);
                              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                thunk_FUN_02f6670c();
                              }
                              FUN_050e4454(lVar4 + 0x20,0);
                              uVar2 = FUN_050ed374();
                              puVar3 = (undefined8 *)
                                       Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__
                              ;
                              if ((uVar2 & 1) == 0) {
                                uVar5 = *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<CreateAnchor>d__20>__
                                ;
                                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                  thunk_FUN_02f6670c();
                                }
                                FUN_050e4454(uVar5,0);
                                uVar2 = FUN_050ed374();
                                puVar3 = (undefined8 *)
                                         Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__
                                ;
                                if ((uVar2 & 1) == 0) {
                                  lVar4 = *(long *)(puVar1 + 0x30);
                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                    thunk_FUN_02f6670c();
                                  }
                                  FUN_050e4454(lVar4 + 0x20,0);
                                  uVar2 = FUN_050ed374();
                                  puVar3 = (undefined8 *)
                                           Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__
                                  ;
                                  if ((uVar2 & 1) == 0) {
                                    uVar5 = *(undefined8 *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_get_Task__
                                    ;
                                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                      thunk_FUN_02f6670c();
                                    }
                                    FUN_050e4454(uVar5,0);
                                    uVar2 = FUN_050ed374();
                                    puVar3 = (undefined8 *)
                                             Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__
                                    ;
                                    if ((uVar2 & 1) == 0) {
                                      lVar4 = *(long *)(puVar1 + 0x18);
                                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                        thunk_FUN_02f6670c();
                                      }
                                      FUN_050e4454(lVar4 + 0x20,0);
                                      uVar2 = FUN_050ed374();
                                      puVar3 = (undefined8 *)
                                               Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_highValue__
                                      ;
                                      if ((uVar2 & 1) == 0) {
                                        lVar4 = *(long *)(puVar1 + 0x38);
                                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                          thunk_FUN_02f6670c();
                                        }
                                        FUN_050e4454(lVar4 + 0x20,0);
                                        uVar2 = FUN_050ed374();
                                        puVar3 = (undefined8 *)
                                                 Method_UnityEngine_UIElements_BaseSlider<float>_set_highValue__
                                        ;
                                        if ((uVar2 & 1) == 0) {
                                          uVar5 = *(undefined8 *)
                                                                                                      
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c_TypeInfo
                                          ;
                                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                            thunk_FUN_02f6670c();
                                          }
                                          FUN_050e4454(uVar5,0);
                                          uVar2 = FUN_050ed374();
                                          puVar3 = (undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_highValue__
                                          ;
                                          if ((uVar2 & 1) == 0) {
                                            lVar4 = *(long *)(puVar1 + 0x48);
                                            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                              thunk_FUN_02f6670c();
                                            }
                                            FUN_050e4454(lVar4 + 0x20,0);
                                            uVar2 = FUN_050ed374();
                                            puVar3 = (undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__
                                            ;
                                            if ((uVar2 & 1) == 0) {
                                              uVar5 = *(undefined8 *)
                                                                                                              
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass0_0_TypeInfo
                                              ;
                                              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                                                thunk_FUN_02f6670c();
                                              }
                                              FUN_050e4454(uVar5,0);
                                              uVar2 = FUN_050ed374();
                                              puVar3 = (undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__
                                              ;
                                              if ((uVar2 & 1) == 0) {
                                                lVar4 = *(long *)(puVar1 + 0x68);
                                                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0)
                                                {
                                                  thunk_FUN_02f6670c();
                                                }
                                                FUN_050e4454(lVar4 + 0x20,0);
                                                uVar2 = FUN_050ed374();
                                                puVar3 = (undefined8 *)
                                                                                                                  
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__
                                                ;
                                                if ((uVar2 & 1) == 0) {
                                                  uVar5 = *(undefined8 *)
                                                                                                                      
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass10_0_TypeInfo
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar4 = *(long *)(puVar1 + 0x40);
                                                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) ==
                                                        0) {
                                                      thunk_FUN_02f6670c();
                                                    }
                                                    FUN_050e4454(lVar4 + 0x20,0);
                                                    uVar2 = FUN_050ed374();
                                                    puVar3 = (undefined8 *)
                                                                                                                          
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_InvokeValueChangedCallbacks__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar4 = *(long *)(puVar1 + 0x50);
                                                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) ==
                                                        0) {
                                                      thunk_FUN_02f6670c();
                                                    }
                                                    FUN_050e4454(lVar4 + 0x20,0);
                                                    uVar2 = FUN_050ed374();
                                                    puVar3 = (undefined8 *)
                                                                                                                          
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_highValue__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar4 = *(long *)(puVar1 + 0x70);
                                                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) ==
                                                        0) {
                                                      thunk_FUN_02f6670c();
                                                    }
                                                    FUN_050e4454(lVar4 + 0x20,0);
                                                    uVar2 = FUN_050ed374();
                                                    puVar3 = (undefined8 *)
                                                                                                                          
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_formatString__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  System_EventHandler<ColocationDiscoveryMessage>_TypeInfo
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_invalid__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_List<XRSessionSubsystemDescriptor>_TypeInfo
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_lowValue__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar4 = *(long *)(puVar1 + 0x90);
                                                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) ==
                                                        0) {
                                                      thunk_FUN_02f6670c();
                                                    }
                                                    FUN_050e4454(lVar4 + 0x20,0);
                                                    uVar2 = FUN_050ed374();
                                                    puVar3 = (undefined8 *)PTR_DAT_067cd6b8;
                                                    if ((uVar2 & 1) == 0) {
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Create__
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)PTR_DAT_067cd6b8;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass12_0_TypeInfo
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)PTR_DAT_067cd6b8;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>,_SharedAnchorManager_<CreateAnchor>d__20>__
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)PTR_DAT_067cd6b8;
                                                  if ((uVar2 & 1) == 0) {
                                                    lVar4 = *(long *)(puVar1 + 0x10);
                                                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) ==
                                                        0) {
                                                      thunk_FUN_02f6670c();
                                                    }
                                                    FUN_050e4454(lVar4 + 0x20,0);
                                                    uVar2 = FUN_050ed374();
                                                    puVar3 = (undefined8 *)
                                                                                                                          
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  System_EventHandler<Result<ColocationState>>_TypeInfo
                                                  ;
                                                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0
                                                     ) {
                                                    thunk_FUN_02f6670c();
                                                  }
                                                  FUN_050e4454(uVar5,0);
                                                  uVar2 = FUN_050ed374();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_validateValue__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    puVar3 = *(undefined8 **)
                                                              (*(long *)(puVar1 + 0x90) + 0xb8);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return *puVar3;
}


