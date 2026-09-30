/*
FUNCTION_NAME: UnityEngine.Physics2D$$Raycast
ENTRY_POINT: 05fe5870
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 133
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_Physics2D__Raycast(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar16;
  int *piVar17;
  long unaff_x22;
  undefined8 *puVar18;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  uint *puVar19;
  long unaff_x28;
  
  puVar5 = Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__;
  puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugInterface>__;
  puVar16 = *(undefined8 **)(unaff_x21 + 0xd0);
  puVar18 = *(undefined8 **)(unaff_x22 + 0x638);
  *(undefined8 *)(unaff_x28 + 0x10) = *param_1;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x28 + 0x18) = *unaff_x20;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x28 + 0x30) = *unaff_x25;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x28 + 0x38) = *puVar16;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x28 + 0x40) = *puVar18;
  thunk_FUN_02dd37b4();
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_03aabc60(lVar7,*(undefined8 *)puVar3);
  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_05fc0954(lVar8,0);
  puVar3 = Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x10) = 0x164;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar3;
    thunk_FUN_02dd37b4();
    puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
    if (lVar7 != 0) {
      lVar12 = *(long *)(lVar7 + 0x10);
      lVar13 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar8;
          thunk_FUN_02dd37b4(plVar9,lVar8);
        }
        else {
          FUN_03aac494(lVar7,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
        FUN_05fc0954(lVar8,0);
        puVar2 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x10) = 0x264;
          *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar2;
          thunk_FUN_02dd37b4();
          lVar12 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
          puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar8;
              thunk_FUN_02dd37b4(plVar9,lVar8);
            }
            else {
              FUN_03aac494(lVar7,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x28 + 0x20) = lVar7;
            thunk_FUN_02dd37b4((long *)(unaff_x28 + 0x20),lVar7);
            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
            FUN_03aabc60(lVar7,*(undefined8 *)puVar2);
            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
            FUN_05fc094c(lVar8,0);
            puVar5 = 
            Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRenderPipelineRuntimeXRResources>__
            ;
            puVar3 = PTR_DAT_0675eb68;
            puVar2 = PTR_DAT_0675eb60;
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0x10) =
                   *(undefined8 *)System_Func<object,_object,_object>_TypeInfo;
              thunk_FUN_02dd37b4();
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar5;
              thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
              *(undefined4 *)(lVar8 + 0x18) = 0;
              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
              FUN_03aabc60(lVar12,*(undefined8 *)puVar3);
              puVar2 = PTR_DAT_0675eb70;
              if (lVar12 != 0) {
                uVar11 = *(undefined8 *)Method_VRUIP_ColorPickerController_OnSliderValueChanged__;
                lVar13 = *(long *)(lVar12 + 0x10);
                lVar14 = *(long *)PTR_DAT_0675eb70;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                    thunk_FUN_02dd37b4();
                  }
                  else {
                    FUN_03aac494(lVar12,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar8 + 0x30) = lVar12;
                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                               Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                             );
                  FUN_03aabc60(lVar12,*(undefined8 *)
                                       Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                               Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                             );
                  FUN_05fc0944(lVar13,0);
                  if (lVar13 != 0) {
                    *(undefined8 *)(lVar13 + 0x18) =
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                    ;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar13 + 0x10) =
                         *(undefined8 *)Method_System_Globalization_GregorianCalendar__ctor__;
                    thunk_FUN_02dd37b4();
                    puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                    if (lVar12 != 0) {
                      lVar14 = *(long *)(lVar12 + 0x10);
                      lVar15 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar9 = lVar13;
                          thunk_FUN_02dd37b4(plVar9,lVar13);
                        }
                        else {
                          FUN_03aac494(lVar12,lVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar8 + 0x28) = lVar12;
                        thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                        puVar5 = 
                        Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__;
                        if (lVar7 != 0) {
                          lVar12 = *(long *)
                                    Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                          ;
                          piVar17 = (int *)(lVar7 + 0x1c);
                          *piVar17 = *piVar17 + 1;
                          plVar9 = (long *)(lVar7 + 0x10);
                          lVar13 = *plVar9;
                          puVar19 = (uint *)(lVar7 + 0x18);
                          uVar1 = *puVar19;
                          if (lVar13 != 0) {
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *puVar19 = uVar1 + 1;
                              plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar10 = lVar8;
                              thunk_FUN_02dd37b4(plVar10,lVar8);
                            }
                            else {
                              FUN_03aac494(lVar7,lVar8,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                            FUN_05fc094c(lVar8,0);
                            puVar4 = 
                            Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<ProbeVolumeDebugResources>__
                            ;
                            if (lVar8 != 0) {
                              *(undefined8 *)(lVar8 + 0x10) =
                                   *(undefined8 *)
                                    Method_System_Globalization_GregorianCalendar_GetDaysInMonth__;
                              thunk_FUN_02dd37b4();
                              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar4;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                              *(undefined4 *)(lVar8 + 0x18) = 0;
                              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60);
                              FUN_03aabc60(lVar12,*(undefined8 *)PTR_DAT_0675eb68);
                              if (lVar12 != 0) {
                                lVar14 = *(long *)puVar2;
                                uVar11 = *(undefined8 *)
                                          Method_System_Linq_Expressions_Interpreter_GreaterThanInstruction_Create__
                                ;
                                lVar13 = *(long *)(lVar12 + 0x10);
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                    thunk_FUN_02dd37b4();
                                  }
                                  else {
                                    FUN_03aac494(lVar12,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar8 + 0x30) = lVar12;
                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                              );
                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                  FUN_05fc0944(lVar13,0);
                                  if (lVar13 != 0) {
                                    *(undefined8 *)(lVar13 + 0x18) =
                                         *(undefined8 *)
                                          Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRenderPipelineDebugShaders>__
                                    ;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar13 + 0x10) =
                                         *(undefined8 *)
                                          Method_System_Globalization_GregorianCalendar__ctor__;
                                    thunk_FUN_02dd37b4();
                                    if (lVar12 != 0) {
                                      lVar14 = *(long *)(lVar12 + 0x10);
                                      lVar15 = *(long *)puVar3;
                                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                          plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar10 = lVar13;
                                          thunk_FUN_02dd37b4(plVar10,lVar13);
                                        }
                                        else {
                                          FUN_03aac494(lVar12,lVar13,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar8 + 0x28) = lVar12;
                                        thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                        lVar12 = *(long *)puVar5;
                                        *piVar17 = *piVar17 + 1;
                                        lVar13 = *plVar9;
                                        if (lVar13 != 0) {
                                          uVar1 = *puVar19;
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *puVar19 = uVar1 + 1;
                                            plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar10 = lVar8;
                                            thunk_FUN_02dd37b4(plVar10,lVar8);
                                          }
                                          else {
                                            FUN_03aac494(lVar7,lVar8,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                          FUN_05fc094c(lVar8,0);
                                          puVar4 = 
                                          Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                          ;
                                          if (lVar8 != 0) {
                                            *(undefined8 *)(lVar8 + 0x10) =
                                                 *(undefined8 *)
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo
                                            ;
                                            thunk_FUN_02dd37b4();
                                            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar4;
                                            thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                            *(undefined4 *)(lVar8 + 0x18) = 0;
                                            lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                         PTR_DAT_0675eb60);
                                            FUN_03aabc60(lVar12,*(undefined8 *)PTR_DAT_0675eb68);
                                            if (lVar12 != 0) {
                                              lVar14 = *(long *)puVar2;
                                              uVar11 = *(undefined8 *)
                                                        Method_UnityEngine_Color_set_Item__;
                                              lVar13 = *(long *)(lVar12 + 0x10);
                                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                              if (lVar13 != 0) {
                                                uVar1 = *(uint *)(lVar12 + 0x18);
                                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                                  thunk_FUN_02dd37b4();
                                                }
                                                else {
                                                  FUN_03aac494(lVar12,uVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar8 + 0x30) = lVar12;
                                                thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                FUN_05fc0944(lVar13,0);
                                                if (lVar13 != 0) {
                                                  *(undefined8 *)(lVar13 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Firebase_Firestore_GeoPoint__ctor__
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = PTR_DAT_06762058;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    lVar14 = *(long *)puVar2;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Collider>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                              Method_UnityEngine_Color32_get_Item__;
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<ShaderStrippingSetting>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<RenderGraphGlobalSettings>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<RenderGraphSettings>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar_GetAbsoluteDate__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = PTR_DAT_06762060;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 1;
                                                    lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar12,*(undefined8 *)
                                                                         PTR_DAT_0675eb68);
                                                    if (lVar12 != 0) {
                                                      uVar11 = *(undefined8 *)puVar4;
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      lVar14 = *(long *)puVar2;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar12,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_Create__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                              Method_UnityEngine_Color_get_Item__;
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnParentResized__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbTeleportInteractor_OnClimbBegin__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06786500;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 2;
                                                    lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar12,*(undefined8 *)
                                                                         PTR_DAT_0675eb68);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<Canvas>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnInitialDisplay__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImage_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 2;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_VRUIP_ColorPickerController_OnColorInputTextChanged__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Properties_GeneratePropertyBagsForTypesQualifiedWithAttribute__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRendererResources>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_GraphicsSettings_TryGetRenderPipelineSettings<UniversalRenderPipelineRuntimeShaders>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Rendering_GraphicsSettings_GetDefaultShader__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Globalization_GregorianCalendar_GetDaysInYear__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceConnected__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 3;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar8 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 PTR_DAT_0675eb60);
                                                    FUN_03aabc60(lVar12,*(undefined8 *)
                                                                         PTR_DAT_0675eb68);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)puVar2;
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar10 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar10,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar8,0);
                                                  puVar4 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                               PTR_DAT_0675eb60);
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                       PTR_DAT_0675eb68);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)puVar2;
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar13 = *(long *)(lVar12 + 0x10);
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar13 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Globalization_GregorianCalendar__ctor__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02dd37b4(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar12;
                                                  thunk_FUN_02dd37b4((long *)(lVar8 + 0x28),lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                  *piVar17 = *piVar17 + 1;
                                                  lVar13 = *plVar9;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *puVar19;
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *puVar19 = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar8;
                                                      thunk_FUN_02dd37b4(plVar9,lVar8);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(unaff_x28 + 0x28),
                                                                     lVar7);
                                                  FUN_05fc0710(unaff_x26,unaff_x28,0);
                                                  return;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


