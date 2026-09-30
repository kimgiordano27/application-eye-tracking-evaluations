/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$CheckMouseEvents
ENTRY_POINT: 05fdc1f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_9;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_InputForUI_InputManagerProvider__CheckMouseEvents(void)

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
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x28;
  
  FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
  FUN_02d6084c(PTR_DAT_0675eb68);
  FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__);
  FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__);
  FUN_02d6084c(Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
  FUN_02d6084c(PTR_DAT_0675eb60);
  FUN_02d6084c(Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo);
  FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__);
                    /* try { // try from 05fdc258 to 060dc3c3 has its CatchHandler @ 05fdc258
                       catch() { ... } // from try @ 05fdc258 with catch @ 05fdc258
                       catch() { ... } // from try @ 05fdc590 with catch @ 05fdc258
                       catch() { ... } // from try @ 05fdc5f8 with catch @ 05fdc258
                       catch() { ... } // from try @ 05fdc68c with catch @ 05fdc258
                       catch() { ... } // from try @ 05fdc6f0 with catch @ 05fdc258
                       catch() { ... } // from try @ 05fdc730 with catch @ 05fdc258
                       catch() { ... } // from try @ 05fdc74c with catch @ 05fdc258
                       catch() { ... } // from try @ 05fdc7a0 with catch @ 05fdc258 */
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
  *(undefined1 *)(unaff_x19 + 0xe4e) = 1;
  lVar9 = thunk_FUN_02d9d534(*unaff_x20);
  FUN_05fc095c(lVar9,0);
  puVar8 = Method_Unity_VisualScripting_GraphReference_ParentReference__;
  puVar6 = Method_Unity_VisualScripting_GraphPointer_Initialize__;
  puVar5 = Method_Unity_VisualScripting_GraphPointer_EnsureValid__;
  puVar7 = Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugInterface>__;
  puVar2 = PTR_DAT_0675e638;
  if (lVar9 != 0) {
                    /* try { // try from 05fdc3c4 to 060dc3c7 has its CatchHandler @ 05fdc600 */
                    /* try { // try from 05fdc3e4 to 060dc3eb has its CatchHandler @ 05fdc60c */
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)Method_Unity_VisualScripting_GraphReference_ChildReference__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar5;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar6;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar8;
    thunk_FUN_02dd37b4();
                    /* try { // try from 05fdc43c to 060dc443 has its CatchHandler @ 05fdc6fc */
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4();
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
    FUN_03aabc60(lVar10,*(undefined8 *)puVar4);
                    /* try { // try from 05fdc458 to 060dc45b has its CatchHandler @ 05fdc62c */
                    /* try { // try from 05fdc45c to 060dc46b has its CatchHandler @ 05fdc6a0 */
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
    FUN_05fc0954(lVar11,0);
    puVar2 = Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
    if (lVar11 != 0) {
                    /* try { // try from 05fdc47c to 060dc483 has its CatchHandler @ 05fdc634 */
      *(undefined4 *)(lVar11 + 0x10) = 0x16c;
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_02dd37b4();
      puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
                    /* try { // try from 05fdc490 to 060dc497 has its CatchHandler @ 05fdc620 */
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
                    /* try { // try from 05fdc4a8 to 060dc4ab has its CatchHandler @ 05fdc600 */
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
                    /* try { // try from 05fdc4c0 to 060dc4c7 has its CatchHandler @ 05fdc61c */
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    /* try { // try from 05fdc4d0 to 060dc4d7 has its CatchHandler @ 05fdc604 */
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_02dd37b4(plVar12,lVar11);
          }
          else {
                    /* try { // try from 05fdc4ec to 060dc4f3 has its CatchHandler @ 05fdc6a4 */
            FUN_03aac494(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                    /* try { // try from 05fdc508 to 060dc50b has its CatchHandler @ 05fdc69c */
          FUN_05fc0954(lVar11,0);
          puVar3 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x10) = 0x26c;
                    /* try { // try from 05fdc524 to 060dc52b has its CatchHandler @ 05fdc618 */
            *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_02dd37b4();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
            puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
            if (lVar14 != 0) {
                    /* try { // try from 05fdc548 to 060dc54f has its CatchHandler @ 05fdc5f8 */
              uVar1 = *(uint *)(lVar10 + 0x18);
                    /* try { // try from 05fdc564 to 060dc56b has its CatchHandler @ 05fdc63c */
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    /* try { // try from 05fdc574 to 060dc57b has its CatchHandler @ 05fdc638 */
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_02dd37b4(plVar12,lVar11);
              }
              else {
                    /* try { // try from 05fdc588 to 060dc58f has its CatchHandler @ 05fdc614 */
                    /* try { // try from 05fdc590 to 060dc5c7 has its CatchHandler @ 05fdc258 */
                FUN_03aac494(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_02dd37b4((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
              FUN_03aabc60(lVar10,*(undefined8 *)puVar2);
                    /* try { // try from 05fdc5c8 to 060dc5cb has its CatchHandler @ 05fdc698 */
                    /* try { // try from 05fdc5cc to 060dc5cf has its CatchHandler @ 05fdc630 */
              lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                           Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                         );
                    /* try { // try from 05fdc5d0 to 060dc5d3 has its CatchHandler @ 05fdc610 */
                    /* try { // try from 05fdc5d4 to 060dc5db has its CatchHandler @ 05fdc620 */
              FUN_05fc094c(lVar11,0);
              puVar4 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<short,_uint>__;
              puVar3 = PTR_DAT_0675eb68;
              puVar2 = PTR_DAT_0675eb60;
                    /* try { // try from 05fdc5dc to 060dc5df has its CatchHandler @ 05fdc608 */
              if (lVar11 != 0) {
                    /* try { // try from 05fdc5e0 to 060dc5e3 has its CatchHandler @ 05fdc61c */
                    /* try { // try from 05fdc5e4 to 060dc5eb has its CatchHandler @ 05fdc618 */
                    /* try { // try from 05fdc5ec to 060dc5ef has its CatchHandler @ 05fdc5fc */
                    /* try { // try from 05fdc5f0 to 060dc5f7 has its CatchHandler @ 05fdc614 */
                    /* catch() { ... } // from try @ 05fdc548 with catch @ 05fdc5f8
                       try { // try from 05fdc5f8 to 060dc657 has its CatchHandler @ 05fdc258 */
                    /* catch() { ... } // from try @ 05fdc5ec with catch @ 05fdc5fc */
                    /* catch() { ... } // from try @ 05fdc3c4 with catch @ 05fdc600
                       catch() { ... } // from try @ 05fdc4a8 with catch @ 05fdc600 */
                    /* catch() { ... } // from try @ 05fdc4d0 with catch @ 05fdc604 */
                    /* catch() { ... } // from try @ 05fdc5dc with catch @ 05fdc608 */
                *(undefined8 *)(lVar11 + 0x10) =
                     *(undefined8 *)
                      Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgs_TypeInfo;
                    /* catch() { ... } // from try @ 05fdc3e4 with catch @ 05fdc60c */
                thunk_FUN_02dd37b4();
                    /* catch() { ... } // from try @ 05fdc5d0 with catch @ 05fdc610 */
                    /* catch() { ... } // from try @ 05fdc588 with catch @ 05fdc614
                       catch() { ... } // from try @ 05fdc5f0 with catch @ 05fdc614 */
                    /* catch() { ... } // from try @ 05fdc524 with catch @ 05fdc618
                       catch() { ... } // from try @ 05fdc5e4 with catch @ 05fdc618 */
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
                    /* catch() { ... } // from try @ 05fdc4c0 with catch @ 05fdc61c
                       catch() { ... } // from try @ 05fdc5e0 with catch @ 05fdc61c */
                    /* catch() { ... } // from try @ 05fdc490 with catch @ 05fdc620
                       catch() { ... } // from try @ 05fdc5d4 with catch @ 05fdc620 */
                thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x20));
                *(undefined4 *)(lVar11 + 0x18) = 1;
                    /* catch() { ... } // from try @ 05fdc458 with catch @ 05fdc62c */
                    /* catch() { ... } // from try @ 05fdc5cc with catch @ 05fdc630 */
                lVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 05fdc47c with catch @ 05fdc634 */
                    /* catch() { ... } // from try @ 05fdc574 with catch @ 05fdc638 */
                    /* catch() { ... } // from try @ 05fdc564 with catch @ 05fdc63c */
                FUN_03aabc60(lVar14,*(undefined8 *)puVar3);
                puVar4 = PTR_DAT_0675eb70;
                if (lVar14 != 0) {
                    /* try { // try from 05fdc658 to 060dc65b has its CatchHandler @ 05fdc68c */
                  uVar13 = *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__;
                  lVar15 = *(long *)(lVar14 + 0x10);
                  lVar16 = *(long *)PTR_DAT_0675eb70;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    /* try { // try from 05fdc678 to 060dc68b has its CatchHandler @ 05fdc7b4 */
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 05fdc658 with catch @ 05fdc68c
                       try { // try from 05fdc68c to 060dc6bf has its CatchHandler @ 05fdc258 */
                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                    /* catch() { ... } // from try @ 05fdc5c8 with catch @ 05fdc698 */
                    /* catch() { ... } // from try @ 05fdc508 with catch @ 05fdc69c */
                    /* catch() { ... } // from try @ 05fdc45c with catch @ 05fdc6a0 */
                    /* catch() { ... } // from try @ 05fdc4ec with catch @ 05fdc6a4 */
                      FUN_03aac494(lVar14,uVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar14;
                    thunk_FUN_02dd37b4((long *)(lVar11 + 0x30),lVar14);
                    /* try { // try from 05fdc6c0 to 060dc6c3 has its CatchHandler @ 05fdc6f0 */
                    lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                                 Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                               );
                    /* try { // try from 05fdc6dc to 060dc6ef has its CatchHandler @ 05fdc7b4 */
                    FUN_03aabc60(lVar14,*(undefined8 *)
                                         Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                 Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                               );
                    /* catch() { ... } // from try @ 05fdc6c0 with catch @ 05fdc6f0
                       try { // try from 05fdc6f0 to 060dc717 has its CatchHandler @ 05fdc258 */
                    FUN_05fc0944(lVar15,0);
                    puVar7 = Method_Unity_VisualScripting_GraphPointer_Initialize__;
                    /* catch() { ... } // from try @ 05fdc43c with catch @ 05fdc6fc */
                    if (lVar15 != 0) {
                      *(undefined8 *)(lVar15 + 0x18) =
                           *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__;
                      thunk_FUN_02dd37b4();
                    /* try { // try from 05fdc718 to 060dc71b has its CatchHandler @ 05fdc77c */
                    /* try { // try from 05fdc728 to 060dc72f has its CatchHandler @ 05fdc7b4 */
                      *(undefined8 *)(lVar15 + 0x10) =
                           *(undefined8 *)Method_Unity_VisualScripting_GraphPointer_Initialize__;
                      thunk_FUN_02dd37b4();
                      puVar5 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                    /* try { // try from 05fdc730 to 060dc747 has its CatchHandler @ 05fdc258 */
                      if (lVar14 != 0) {
                        lVar16 = *(long *)(lVar14 + 0x10);
                        lVar17 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                        ;
                    /* try { // try from 05fdc748 to 060dc74b has its CatchHandler @ 05fdc788 */
                    /* try { // try from 05fdc74c to 060dc773 has its CatchHandler @ 05fdc258 */
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar1 = *(uint *)(lVar14 + 0x18);
                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar12 = lVar15;
                    /* try { // try from 05fdc774 to 060dc79f has its CatchHandler @ 05fdc7b4 */
                            thunk_FUN_02dd37b4(plVar12,lVar15);
                    /* catch() { ... } // from try @ 05fdc718 with catch @ 05fdc77c */
                          }
                          else {
                    /* catch() { ... } // from try @ 05fdc748 with catch @ 05fdc788 */
                            FUN_03aac494(lVar14,lVar15,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar11 + 0x28) = lVar14;
                    /* try { // try from 05fdc7a0 to 060dc7ab has its CatchHandler @ 05fdc258 */
                          thunk_FUN_02dd37b4((long *)(lVar11 + 0x28),lVar14);
                          puVar6 = 
                          Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__;
                    /* try { // try from 05fdc7ac to 060dc7b3 has its CatchHandler @ 05fdc7b4 */
                          if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 05fdc678 with catch @ 05fdc7b4
                       catch() { ... } // from try @ 05fdc6dc with catch @ 05fdc7b4
                       catch() { ... } // from try @ 05fdc728 with catch @ 05fdc7b4
                       catch() { ... } // from try @ 05fdc774 with catch @ 05fdc7b4
                       catch() { ... } // from try @ 05fdc7ac with catch @ 05fdc7b4 */
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
                                                  FUN_05fc0710(unaff_x28,lVar9,0);
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


