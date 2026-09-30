/*
FUNCTION_NAME: UnityEngine.InputForUI.NavigationEvent$$set_playerId
ENTRY_POINT: 05fd7638
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputForUI_NavigationEvent__set_playerId(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  undefined8 *unaff_x20;
  int *piVar14;
  long unaff_x22;
  undefined8 *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  
  FUN_03aabc60(param_1,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
  FUN_05fc0944(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) =
         *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<Canvas>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar4 + 0x10) =
         *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__;
    thunk_FUN_02dd37b4();
    if (param_1 != 0) {
      lVar8 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_02dd37b4(plVar5,lVar4);
        }
        else {
          FUN_03aac494(param_1,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(unaff_x22 + 0x28) = param_1;
        thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),param_1);
        if (unaff_x28 != 0) {
          piVar14 = (int *)(unaff_x28 + 0x1c);
          *piVar14 = *piVar14 + 1;
          plVar5 = (long *)(unaff_x28 + 0x10);
          lVar4 = *plVar5;
          puVar13 = (uint *)(unaff_x28 + 0x18);
          uVar1 = *puVar13;
          if (lVar4 != 0) {
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *puVar13 = uVar1 + 1;
              *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494();
            }
            lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
            FUN_05fc094c(lVar4,0);
            puVar3 = PTR_DAT_06762058;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) =
                   *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo;
              thunk_FUN_02dd37b4();
              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
              thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
              *(undefined4 *)(lVar4 + 0x18) = 1;
              lVar8 = thunk_FUN_02d9d534(*unaff_x27);
              FUN_03aabc60(lVar8,*unaff_x20);
              if (lVar8 != 0) {
                uVar7 = *(undefined8 *)puVar3;
                lVar9 = *(long *)(lVar8 + 0x10);
                lVar10 = *unaff_x29;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                    thunk_FUN_02dd37b4();
                  }
                  else {
                    FUN_03aac494(lVar8,uVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar4 + 0x30) = lVar8;
                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                            );
                  FUN_03aabc60(lVar8,*(undefined8 *)
                                      Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                            );
                  FUN_05fc0944(lVar9,0);
                  puVar3 = Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__;
                  if (lVar9 != 0) {
                    *(undefined8 *)(lVar9 + 0x18) =
                         *(undefined8 *)
                          Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar9 + 0x10) =
                         *(undefined8 *)
                          Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__;
                    thunk_FUN_02dd37b4();
                    if (lVar8 != 0) {
                      lVar10 = *(long *)(lVar8 + 0x10);
                      lVar11 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar10 != 0) {
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                          plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar6 = lVar9;
                          thunk_FUN_02dd37b4(plVar6,lVar9);
                        }
                        else {
                          FUN_03aac494(lVar8,lVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar4 + 0x28) = lVar8;
                        thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                        *piVar14 = *piVar14 + 1;
                        lVar8 = *plVar5;
                        if (lVar8 != 0) {
                          uVar1 = *puVar13;
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *puVar13 = uVar1 + 1;
                            plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar6 = lVar4;
                            thunk_FUN_02dd37b4(plVar6,lVar4);
                          }
                          else {
                            FUN_03aac494();
                          }
                          lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                          FUN_05fc094c(lVar4,0);
                          puVar2 = Method_UnityEngine_GameObject_TryGetComponent<Collider>__;
                          if (lVar4 != 0) {
                            *(undefined8 *)(lVar4 + 0x10) =
                                 *(undefined8 *)
                                  UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo;
                            thunk_FUN_02dd37b4();
                            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                            *(undefined4 *)(lVar4 + 0x18) = 0;
                            lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                            FUN_03aabc60(lVar8,*unaff_x20);
                            if (lVar8 != 0) {
                              lVar10 = *unaff_x29;
                              uVar7 = *(undefined8 *)Method_UnityEngine_Color32_get_Item__;
                              lVar9 = *(long *)(lVar8 + 0x10);
                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar8 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                  thunk_FUN_02dd37b4();
                                }
                                else {
                                  FUN_03aac494(lVar8,uVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(lVar4 + 0x30) = lVar8;
                                thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                            );
                                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                FUN_05fc0944(lVar9,0);
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar3;
                                  thunk_FUN_02dd37b4();
                                  puVar3 = 
                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__;
                                  *(undefined8 *)(lVar9 + 0x10) =
                                       *(undefined8 *)
                                        Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                  ;
                                  thunk_FUN_02dd37b4();
                                  if (lVar8 != 0) {
                                    lVar10 = *(long *)(lVar8 + 0x10);
                                    lVar11 = *(long *)
                                              Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                    ;
                                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                    if (lVar10 != 0) {
                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar6 = lVar9;
                                        thunk_FUN_02dd37b4(plVar6,lVar9);
                                      }
                                      else {
                                        FUN_03aac494(lVar8,lVar9,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar4 + 0x28) = lVar8;
                                      thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                      *piVar14 = *piVar14 + 1;
                                      lVar8 = *plVar5;
                                      if (lVar8 != 0) {
                                        uVar1 = *puVar13;
                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                          *puVar13 = uVar1 + 1;
                                          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar6 = lVar4;
                                          thunk_FUN_02dd37b4(plVar6,lVar4);
                                        }
                                        else {
                                          FUN_03aac494();
                                        }
                                        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                        FUN_05fc094c(lVar4,0);
                                        puVar2 = PTR_DAT_06761180;
                                        if (lVar4 != 0) {
                                          *(undefined8 *)(lVar4 + 0x10) =
                                               *(undefined8 *)PTR_DAT_0676a290;
                                          thunk_FUN_02dd37b4();
                                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                          *(undefined4 *)(lVar4 + 0x18) = 0;
                                          lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                          FUN_03aabc60(lVar8,*unaff_x20);
                                          if (lVar8 != 0) {
                                            lVar10 = *unaff_x29;
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                                            ;
                                            lVar9 = *(long *)(lVar8 + 0x10);
                                            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                            if (lVar9 != 0) {
                                              uVar1 = *(uint *)(lVar8 + 0x18);
                                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar7;
                                                thunk_FUN_02dd37b4();
                                              }
                                              else {
                                                FUN_03aac494(lVar8,uVar7,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar4 + 0x30) = lVar8;
                                              thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                              lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                              FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                              lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                              FUN_05fc0944(lVar9,0);
                                              if (lVar9 != 0) {
                                                *(undefined8 *)(lVar9 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                                                ;
                                                thunk_FUN_02dd37b4();
                                                *(undefined8 *)(lVar9 + 0x10) =
                                                     *(undefined8 *)puVar3;
                                                thunk_FUN_02dd37b4();
                                                lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                FUN_03aabc60(lVar10,*unaff_x20);
                                                if (lVar10 != 0) {
                                                  lVar12 = *unaff_x29;
                                                  uVar7 = *(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                             Method_UnityEngine_Color_set_Item__;
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar8,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<PlayableDirector>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Firebase_Firestore_GeoPoint__ctor__
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4();
                                                    lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_03aabc60(lVar10,*unaff_x20);
                                                    if (lVar10 != 0) {
                                                      lVar12 = *unaff_x29;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<LineRenderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  lVar10 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar10,*unaff_x20);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar11 = *(long *)(lVar10 + 0x10);
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar7;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar8 + 0x10);
                                                  lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar3 = PTR_DAT_06762060;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 1;
                                                    lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_03aabc60(lVar8,*unaff_x20);
                                                    if (lVar8 != 0) {
                                                      uVar7 = *(undefined8 *)puVar3;
                                                      lVar9 = *(long *)(lVar8 + 0x10);
                                                      lVar10 = *unaff_x29;
                                                      *(int *)(lVar8 + 0x1c) =
                                                           *(int *)(lVar8 + 0x1c) + 1;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar7;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar8,uVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                             Method_UnityEngine_Color_get_Item__;
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar8,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4();
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *unaff_x29;
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar8,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar8);
                                                  *piVar14 = *piVar14 + 1;
                                                  lVar8 = *plVar5;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *puVar13;
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *puVar13 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_03aabc60(lVar8,*unaff_x20);
                                                    if (lVar8 != 0) {
                                                      lVar10 = *unaff_x29;
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar9 = *(long *)(lVar8 + 0x10);
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar8);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    FUN_0638a154(*(undefined8 *)(lVar4 + 0x10));
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


