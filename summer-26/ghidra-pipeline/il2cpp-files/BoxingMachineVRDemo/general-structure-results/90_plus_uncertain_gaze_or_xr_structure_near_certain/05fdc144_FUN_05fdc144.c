/*
FUNCTION_NAME: FUN_05fdc144
ENTRY_POINT: 05fdc144
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_9;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_05fdc144(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar2 = Method_UnityEngine_GameObject_AddComponent<Cursor>__;
  if ((DAT_06b84e4e & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<Cursor>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugInterface>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugManager>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__);
    FUN_02d6084c(PTR_DAT_0675eb70);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<EventSystem>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
    FUN_02d6084c(PTR_DAT_0675eb68);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
    FUN_02d6084c(PTR_DAT_0675eb60);
    FUN_02d6084c(Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphPointer_EnsureValid__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphPointer_EnterParentElement__);
    FUN_02d6084c(PTR_DAT_06779338);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__);
    FUN_02d6084c(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<short,_uint>__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphPointer_ExitParentElement__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<MeshCollider>__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphPointer_Initialize__);
    FUN_02d6084c(Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphPointer_get_serializedObject__);
    FUN_02d6084c(Method_UnityEngine_Color_set_Item__);
    FUN_02d6084c(Method_UnityEngine_Color32_get_Item__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphReference_ChildReference__);
    FUN_02d6084c(PTR_DAT_06762058);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphReference_CreateGraphData__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphReference_FreeGraphData__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphReference_FreeInvalidInterns__);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__);
    FUN_02d6084c(Method_Unity_VisualScripting_GraphReference_ParentReference__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<InputField>__);
    FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<Renderer>__);
    DAT_06b84e4e = 1;
  }
  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_05fc095c(lVar9,0);
  puVar8 = Method_Unity_VisualScripting_GraphReference_ParentReference__;
  puVar6 = Method_Unity_VisualScripting_GraphPointer_Initialize__;
  puVar5 = Method_Unity_VisualScripting_GraphPointer_EnsureValid__;
  puVar7 = Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugInterface>__;
  puVar2 = PTR_DAT_0675e638;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)Method_Unity_VisualScripting_GraphReference_ChildReference__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar5;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar6;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar8;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4();
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
    FUN_03aabc60(lVar10,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_05fc0954(lVar11,0);
    puVar2 = Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x10) = 0x16c;
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_02dd37b4();
      puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_02dd37b4(plVar12,lVar11);
          }
          else {
            FUN_03aac494(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
          FUN_05fc0954(lVar11,0);
          puVar3 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x10) = 0x26c;
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_02dd37b4();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
            puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_02dd37b4(plVar12,lVar11);
              }
              else {
                FUN_03aac494(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
              FUN_03aabc60(lVar10,*(undefined8 *)puVar2);
              lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                           Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                         );
              FUN_05fc094c(lVar11,0);
              puVar4 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<short,_uint>__;
              puVar3 = PTR_DAT_0675eb68;
              puVar2 = PTR_DAT_0675eb60;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) =
                     *(undefined8 *)
                      Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo;
                thunk_FUN_02dd37b4();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
                thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
                *(undefined4 *)(lVar11 + 0x18) = 1;
                lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                puVar4 = PTR_DAT_0675eb70;
                if (lVar14 != 0) {
                  uVar13 = *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__;
                  lVar15 = *(long *)(lVar14 + 0x10);
                  lVar16 = *(long *)PTR_DAT_0675eb70;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                      FUN_03aac494(lVar14,uVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar14;
                    thunk_FUN_02dd37b4((long *)(lVar11 + 0x30),lVar14);
                    lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                 Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                               );
                    FUN_03aabc60(lVar14,*(undefined8 *)
                                         Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                 Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                               );
                    FUN_05fc0944(lVar15,0);
                    puVar7 = Method_Unity_VisualScripting_GraphPointer_Initialize__;
                    if (lVar15 != 0) {
                      *(undefined8 *)(lVar15 + 0x18) =
                           *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__;
                      thunk_FUN_02dd37b4();
                      *(undefined8 *)(lVar15 + 0x10) =
                           *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__;
                      thunk_FUN_02dd37b4();
                      puVar5 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                      if (lVar14 != 0) {
                        lVar16 = *(long *)(lVar14 + 0x10);
                        lVar17 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                        ;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar1 = *(uint *)(lVar14 + 0x18);
                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar12 = lVar15;
                            thunk_FUN_02dd37b4(plVar12,lVar15);
                          }
                          else {
                            FUN_03aac494(lVar14,lVar15,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar11 + 0x28) = lVar14;
                          thunk_FUN_02dd37b4((long *)(lVar11 + 0x28),lVar14);
                          puVar6 = 
                          Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__;
                          if (lVar10 != 0) {
                            lVar14 = *(long *)(lVar10 + 0x10);
                            lVar15 = *(long *)
                                      Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                            ;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar12 = lVar11;
                                thunk_FUN_02dd37b4(plVar12,lVar11);
                              }
                              else {
                                FUN_03aac494(lVar10,lVar11,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                              FUN_05fc094c(lVar11,0);
                              puVar8 = 
                              Method_Unity_VisualScripting_GraphPointer_get_serializedObject__;
                              if (lVar11 != 0) {
                                *(undefined8 *)(lVar11 + 0x10) =
                                     *(undefined8 *)
                                      Method_Unity_VisualScripting_GraphPointer_ExitParentElement__;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar8;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
                                *(undefined4 *)(lVar11 + 0x18) = 0;
                                lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                if (lVar14 != 0) {
                                  lVar16 = *(long *)puVar4;
                                  uVar13 = *(undefined8 *)Method_UnityEngine_Color_set_Item__;
                                  lVar15 = *(long *)(lVar14 + 0x10);
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                      ;
                                      thunk_FUN_02dd37b4();
                                    }
                                    else {
                                      FUN_03aac494(lVar14,uVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar11 + 0x30) = lVar14;
                                    thunk_FUN_02dd37b4((long *)(lVar11 + 0x30),lVar14);
                                    lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                    FUN_03aabc60(lVar14,*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                );
                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                    FUN_05fc0944(lVar15,0);
                                    if (lVar15 != 0) {
                                      *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)puVar7;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar15 + 0x10) =
                                           *(undefined8 *)
                                            Method_Unity_VisualScripting_GraphPointer_Initialize__;
                                      thunk_FUN_02dd37b4();
                                      if (lVar14 != 0) {
                                        lVar16 = *(long *)(lVar14 + 0x10);
                                        lVar17 = *(long *)puVar5;
                                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                        if (lVar16 != 0) {
                                          uVar1 = *(uint *)(lVar14 + 0x18);
                                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar12 = lVar15;
                                            thunk_FUN_02dd37b4(plVar12,lVar15);
                                          }
                                          else {
                                            FUN_03aac494(lVar14,lVar15,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar11 + 0x28) = lVar14;
                                          thunk_FUN_02dd37b4((long *)(lVar11 + 0x28),lVar14);
                                          lVar14 = *(long *)(lVar10 + 0x10);
                                          lVar15 = *(long *)puVar6;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar10 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                              plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar12 = lVar11;
                                              thunk_FUN_02dd37b4(plVar12,lVar11);
                                            }
                                            else {
                                              FUN_03aac494(lVar10,lVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                            FUN_05fc094c(lVar11,0);
                                            puVar7 = 
                                            Method_Unity_VisualScripting_GraphReference_FreeInvalidInterns__
                                            ;
                                            if (lVar11 != 0) {
                                              *(undefined8 *)(lVar11 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Unity_VisualScripting_GraphReference_FreeGraphData__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar7
                                              ;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
                                              *(undefined4 *)(lVar11 + 0x18) = 1;
                                              lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                              FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                              if (lVar14 != 0) {
                                                lVar16 = *(long *)puVar4;
                                                uVar13 = *(undefined8 *)PTR_DAT_06762058;
                                                lVar15 = *(long *)(lVar14 + 0x10);
                                                *(int *)(lVar14 + 0x1c) =
                                                     *(int *)(lVar14 + 0x1c) + 1;
                                                if (lVar15 != 0) {
                                                  uVar1 = *(uint *)(lVar14 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar14,uVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar15,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_GraphPointer_Initialize__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02dd37b4(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar11,0);
                                                  puVar8 = 
                                                  Method_Unity_VisualScripting_GraphPointer_EnterParentElement__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphReference_CreateGraphData__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                              Method_UnityEngine_Color32_get_Item__;
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar13;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_VisualScripting_GraphPointer_Initialize__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02dd37b4(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar11,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)puVar4;
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_GraphPointer_Initialize__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02dd37b4(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar11,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)puVar4;
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar15 = *(long *)(lVar14 + 0x10);
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Unity_VisualScripting_GraphPointer_Initialize__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02dd37b4(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02dd37b4((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02dd37b4(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  FUN_05fc0710(param_1,lVar9,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


