/*
FUNCTION_NAME: UnityEngine.TextEditor$$OnCursorIndexChange
ENTRY_POINT: 05fd3a64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 162
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_TextEditor__OnCursorIndexChange(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_05fc094c();
  puVar2 = Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) =
         *(undefined8 *)UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar4 = thunk_FUN_02d9d534(*unaff_x27);
    FUN_03aabc60(lVar4,*unaff_x20);
    if (lVar4 != 0) {
      lVar9 = *unaff_x29;
      uVar6 = *(undefined8 *)
               Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
      ;
      lVar7 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(param_1 + 0x30) = lVar4;
        thunk_FUN_02dd37b4((long *)(param_1 + 0x30),lVar4);
        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
        FUN_03aabc60(lVar4,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
        lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                  );
        FUN_05fc0944(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) =
               *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<LineRenderer>__;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar7 + 0x10) =
               *(undefined8 *)
                Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
          ;
          thunk_FUN_02dd37b4();
          lVar9 = thunk_FUN_02d9d534(*unaff_x27);
          FUN_03aabc60(lVar9,*unaff_x20);
          if (lVar9 != 0) {
            lVar10 = *unaff_x29;
            uVar6 = *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
            lVar8 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                thunk_FUN_02dd37b4();
              }
              else {
                FUN_03aac494(lVar9,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar7 + 0x20) = lVar9;
              thunk_FUN_02dd37b4((long *)(lVar7 + 0x20),lVar9);
              if (lVar4 != 0) {
                lVar9 = *(long *)(lVar4 + 0x10);
                lVar8 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar7;
                    thunk_FUN_02dd37b4(plVar5,lVar7);
                  }
                  else {
                    FUN_03aac494(lVar4,lVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                            );
                  FUN_05fc0944(lVar7,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) =
                         *(undefined8 *)
                          Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar7 + 0x10) =
                         *(undefined8 *)
                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                    ;
                    thunk_FUN_02dd37b4();
                    lVar9 = thunk_FUN_02d9d534(*unaff_x27);
                    FUN_03aabc60(lVar9,*unaff_x20);
                    if (lVar9 != 0) {
                      lVar10 = *unaff_x29;
                      uVar6 = *(undefined8 *)
                               Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
                      lVar8 = *(long *)(lVar9 + 0x10);
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar9 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                          thunk_FUN_02dd37b4();
                        }
                        else {
                          FUN_03aac494(lVar9,uVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar7 + 0x20) = lVar9;
                        thunk_FUN_02dd37b4((long *)(lVar7 + 0x20),lVar9);
                        lVar9 = *(long *)(lVar4 + 0x10);
                        lVar8 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar5 = lVar7;
                            thunk_FUN_02dd37b4(plVar5,lVar7);
                          }
                          else {
                            FUN_03aac494(lVar4,lVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(param_1 + 0x28) = lVar4;
                          thunk_FUN_02dd37b4((long *)(param_1 + 0x28),lVar4);
                          *unaff_x21 = *unaff_x21 + 1;
                          lVar4 = *unaff_x26;
                          if (lVar4 != 0) {
                            uVar1 = *unaff_x19;
                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                              *unaff_x19 = uVar1 + 1;
                              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar5 = param_1;
                              thunk_FUN_02dd37b4(plVar5,param_1);
                            }
                            else {
                              FUN_03aac494();
                            }
                            lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                            FUN_05fc094c(lVar4,0);
                            puVar2 = Method_Firebase_Firestore_GeoPointProxy_swigRelease__;
                            if (lVar4 != 0) {
                              *(undefined8 *)(lVar4 + 0x10) =
                                   *(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                              ;
                              thunk_FUN_02dd37b4();
                              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                              *(undefined4 *)(lVar4 + 0x18) = 0;
                              lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                              FUN_03aabc60(lVar7,*unaff_x20);
                              if (lVar7 != 0) {
                                lVar8 = *unaff_x29;
                                uVar6 = *(undefined8 *)
                                         Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                ;
                                lVar9 = *(long *)(lVar7 + 0x10);
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar9 != 0) {
                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                    thunk_FUN_02dd37b4();
                                  }
                                  else {
                                    FUN_03aac494(lVar7,uVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar4 + 0x30) = lVar7;
                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                            
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
                                         *(undefined8 *)
                                          Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                    ;
                                    thunk_FUN_02dd37b4();
                                    lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                    FUN_03aabc60(lVar8,*unaff_x20);
                                    if (lVar8 != 0) {
                                      lVar11 = *unaff_x29;
                                      uVar6 = *(undefined8 *)
                                               Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                      ;
                                      lVar10 = *(long *)(lVar8 + 0x10);
                                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar6;
                                          thunk_FUN_02dd37b4();
                                        }
                                        else {
                                          FUN_03aac494(lVar8,uVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar9 + 0x20) = lVar8;
                                        thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar8);
                                        if (lVar7 != 0) {
                                          lVar8 = *(long *)(lVar7 + 0x10);
                                          lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                          ;
                                          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar7 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar9;
                                              thunk_FUN_02dd37b4(plVar5,lVar9);
                                            }
                                            else {
                                              FUN_03aac494(lVar7,lVar9,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
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
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              lVar8 = thunk_FUN_02d9d534(*unaff_x27);
                                              FUN_03aabc60(lVar8,*unaff_x20);
                                              if (lVar8 != 0) {
                                                lVar11 = *unaff_x29;
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                ;
                                                lVar10 = *(long *)(lVar8 + 0x10);
                                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                                if (lVar10 != 0) {
                                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar8,uVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar8);
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar2 = PTR_DAT_06762060;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_0676c270;
                                                      thunk_FUN_02dd37b4();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_02dd37b4((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      *(undefined4 *)(lVar4 + 0x18) = 1;
                                                      lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                      FUN_03aabc60(lVar7,*unaff_x20);
                                                      if (lVar7 != 0) {
                                                        uVar6 = *(undefined8 *)puVar2;
                                                        lVar9 = *(long *)(lVar7 + 0x10);
                                                        lVar8 = *unaff_x29;
                                                        *(int *)(lVar7 + 0x1c) =
                                                             *(int *)(lVar7 + 0x1c) + 1;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar6;
                                                            thunk_FUN_02dd37b4();
                                                          }
                                                          else {
                                                            FUN_03aac494(lVar7,uVar6,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  puVar2 = 
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
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
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
                                                  puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                             Method_UnityEngine_Color_get_Item__;
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar7,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
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
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
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
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
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
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
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
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
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
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_03aabc60(lVar7,*unaff_x20);
                                                    if (lVar7 != 0) {
                                                      lVar8 = *unaff_x29;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsByRefImpl__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetInterface__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_AssemblyQualifiedName__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARPlaneManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Unity_VisualScripting_GetDictionaryItem_Get__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Module__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARPlaneManager>__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsCOMObjectImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_InvokeMember__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Firebase_Firestore_GeoPointProxy__ctor__;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPointerImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetProperties__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_TryGetTrackableManager<ARRaycastManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetFields__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05fc094c(lVar4,0);
                                                    puVar2 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetInterfaces__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_latitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x20));
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02d9d534(*unaff_x27);
                                                  FUN_03aabc60(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *unaff_x29;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Namespace__
                                                  ;
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Assembly__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_UnderlyingSystemType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar5,lVar9);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02dd37b4((long *)(lVar4 + 0x28),lVar7);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar7 = *unaff_x26;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02dd37b4(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(undefined8 *)(in_stack_00000000 + 0x28) =
                                                         unaff_x28;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000008,in_stack_00000000
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


