/*
FUNCTION_NAME: FUN_05fdee6c
ENTRY_POINT: 05fdee6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 154
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_05fdee6c(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  lVar3 = thunk_FUN_02d9d534(*unaff_x19);
  FUN_05fc094c(lVar3,0);
  puVar2 = Method_UnityEngine_Graphics_DrawMeshInstancedIndirect__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)System_Xml_Schema_XmlAnyListConverter_TypeInfo;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
    *(undefined4 *)(lVar3 + 0x18) = 0;
    lVar4 = thunk_FUN_02d9d534(*unaff_x25);
    FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68);
    if (lVar4 != 0) {
      lVar8 = *unaff_x26;
      uVar6 = *(undefined8 *)Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__;
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
          FUN_03aac494(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(lVar3 + 0x30) = lVar4;
        thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
        lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
        FUN_03aabc60(lVar4,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
        lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                  );
        FUN_05fc0944(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) =
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
          thunk_FUN_02dd37b4();
          if (lVar4 != 0) {
            lVar8 = *(long *)(lVar4 + 0x10);
            lVar9 = *unaff_x27;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar5 = lVar7;
                thunk_FUN_02dd37b4(plVar5,lVar7);
              }
              else {
                FUN_03aac494(lVar4,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar3 + 0x28) = lVar4;
              thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
              lVar4 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar3;
                  thunk_FUN_02dd37b4(plVar5,lVar3);
                }
                else {
                  FUN_03aac494();
                }
                lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                FUN_05fc094c(lVar3,0);
                puVar2 = Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__;
                if (lVar3 != 0) {
                  *(undefined8 *)(lVar3 + 0x10) =
                       *(undefined8 *)UnityEngine_XR_ARSubsystems_XRTrackedObject_TypeInfo;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                  *(undefined4 *)(lVar3 + 0x18) = 0;
                  lVar4 = thunk_FUN_02d9d534(*unaff_x25);
                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68);
                  if (lVar4 != 0) {
                    lVar8 = *unaff_x26;
                    uVar6 = *(undefined8 *)
                             Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnDestroy__
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
                        FUN_03aac494(lVar4,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x30) = lVar4;
                      thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                );
                      FUN_03aabc60(lVar4,*(undefined8 *)
                                          Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                      lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                );
                      FUN_05fc0944(lVar7,0);
                      if (lVar7 != 0) {
                        *(undefined8 *)(lVar7 + 0x18) =
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                        thunk_FUN_02dd37b4();
                        if (lVar4 != 0) {
                          lVar8 = *(long *)(lVar4 + 0x10);
                          lVar9 = *unaff_x27;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar1 = *(uint *)(lVar4 + 0x18);
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar5 = lVar7;
                              thunk_FUN_02dd37b4(plVar5,lVar7);
                            }
                            else {
                              FUN_03aac494(lVar4,lVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar3 + 0x28) = lVar4;
                            thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                            lVar4 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar4 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar3;
                                thunk_FUN_02dd37b4(plVar5,lVar3);
                              }
                              else {
                                FUN_03aac494();
                              }
                              lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                              FUN_05fc094c(lVar3,0);
                              puVar2 = Method_UnityEngine_Graphics_DrawMesh__;
                              if (lVar3 != 0) {
                                *(undefined8 *)(lVar3 + 0x10) =
                                     *(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_TypeInfo
                                ;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                *(undefined4 *)(lVar3 + 0x18) = 0;
                                lVar4 = thunk_FUN_02d9d534(*unaff_x25);
                                FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68);
                                if (lVar4 != 0) {
                                  lVar8 = *unaff_x26;
                                  uVar6 = *(undefined8 *)
                                           Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionCreatedWithSpatialAnchor__
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
                                      FUN_03aac494(lVar4,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x30) = lVar4;
                                    thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                    FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                );
                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                    FUN_05fc0944(lVar7,0);
                                    if (lVar7 != 0) {
                                      *(undefined8 *)(lVar7 + 0x18) =
                                           *(undefined8 *)
                                            Method_UnityEngine_UIElements_GenericDropdownMenu_OnPointerMove__
                                      ;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                      thunk_FUN_02dd37b4();
                                      if (lVar4 != 0) {
                                        lVar8 = *(long *)(lVar4 + 0x10);
                                        lVar9 = *unaff_x27;
                                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar5 = lVar7;
                                            thunk_FUN_02dd37b4(plVar5,lVar7);
                                          }
                                          else {
                                            FUN_03aac494(lVar4,lVar7,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar3 + 0x28) = lVar4;
                                          thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                          lVar4 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar4 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar3;
                                              thunk_FUN_02dd37b4(plVar5,lVar3);
                                            }
                                            else {
                                              FUN_03aac494();
                                            }
                                            lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                            FUN_05fc094c(lVar3,0);
                                            puVar2 = 
                                            Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                            ;
                                            if (lVar3 != 0) {
                                              *(undefined8 *)(lVar3 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                              *(undefined4 *)(lVar3 + 0x18) = 3;
                                              lVar4 = thunk_FUN_02d9d534(*unaff_x25);
                                              FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68);
                                              if (lVar4 != 0) {
                                                lVar8 = *unaff_x26;
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                ;
                                                lVar7 = *(long *)(lVar4 + 0x10);
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar7 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar4,uVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02dd37b4(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                    FUN_05fc094c(lVar3,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_02d9d534(*unaff_x25);
                                                    FUN_03aabc60(lVar4,*(undefined8 *)
                                                                        PTR_DAT_0675eb68);
                                                    if (lVar4 != 0) {
                                                      lVar8 = *unaff_x26;
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02dd37b4(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar3 = thunk_FUN_02d9d534(*unaff_x19);
                                                    FUN_05fc094c(lVar3,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02d9d534(*unaff_x25);
                                                  FUN_03aabc60(lVar4,*(undefined8 *)PTR_DAT_0675eb68
                                                              );
                                                  if (lVar4 != 0) {
                                                    lVar8 = *unaff_x26;
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02dd37b4(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


