/*
FUNCTION_NAME: UnityEngine.GUILayoutGroup$$CalcWidth
ENTRY_POINT: 05fcd084
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_GUILayoutGroup__CalcWidth(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar10;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  puVar10 = *(undefined8 **)(unaff_x23 + 0xb88);
  *(undefined8 *)(unaff_x22 + 0x10) = *param_1;
  thunk_FUN_02dd37b4();
  *(undefined8 *)(unaff_x22 + 0x20) = *puVar10;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x22 + 0x20));
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
                    /* try { // try from 05fcd0b4 to 060cd237 has its CatchHandler @ 05fcd0b4
                       catch() { ... } // from try @ 05fcd0b4 with catch @ 05fcd0b4
                       catch() { ... } // from try @ 05fcd2e8 with catch @ 05fcd0b4
                       catch() { ... } // from try @ 05fcd3b4 with catch @ 05fcd0b4
                       catch() { ... } // from try @ 05fcd404 with catch @ 05fcd0b4
                       catch() { ... } // from try @ 05fcd434 with catch @ 05fcd0b4 */
  lVar3 = thunk_FUN_02d9d534(*unaff_x29);
  FUN_03aabc60(lVar3,*unaff_x27);
  if (lVar3 != 0) {
    lVar7 = *unaff_x19;
    uVar5 = *(undefined8 *)Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__;
    lVar6 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x22 + 0x30) = lVar3;
      thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x30),lVar3);
      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__);
      FUN_03aabc60(lVar3,*unaff_x25);
      lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                );
      FUN_05fc0944(lVar6,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x18) =
             *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__;
        thunk_FUN_02dd37b4();
        *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
        thunk_FUN_02dd37b4();
        if (lVar3 != 0) {
          lVar7 = *(long *)(lVar3 + 0x10);
          lVar8 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *plVar4 = lVar6;
              thunk_FUN_02dd37b4(plVar4,lVar6);
            }
            else {
              FUN_03aac494(lVar3,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar3;
            thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar3);
            lVar3 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar3 != 0) {
              uVar1 = *(uint *)(unaff_x21 + 0x18);
                    /* try { // try from 05fcd238 to 060cd23f has its CatchHandler @ 05fcd3e8 */
              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                    /* try { // try from 05fcd254 to 060cd257 has its CatchHandler @ 05fcd3d0 */
                    /* try { // try from 05fcd258 to 060cd267 has its CatchHandler @ 05fcd3e4 */
                thunk_FUN_02dd37b4();
              }
              else {
                    /* try { // try from 05fcd270 to 060cd27b has its CatchHandler @ 05fcd3e0 */
                FUN_03aac494();
              }
              lVar3 = thunk_FUN_02d9d534(*unaff_x26);
                    /* try { // try from 05fcd280 to 060cd287 has its CatchHandler @ 05fcd3d4 */
              FUN_05fc094c(lVar3,0);
              puVar2 = Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
                    /* try { // try from 05fcd28c to 060cd297 has its CatchHandler @ 05fcd3cc */
              if (lVar3 != 0) {
                    /* try { // try from 05fcd29c to 060cd2a7 has its CatchHandler @ 05fcd3c8 */
                *(undefined8 *)(lVar3 + 0x10) =
                     *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
                thunk_FUN_02dd37b4();
                    /* try { // try from 05fcd2b4 to 060cd2bb has its CatchHandler @ 05fcd3b8 */
                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                *(undefined4 *)(lVar3 + 0x18) = 3;
                    /* try { // try from 05fcd2d0 to 060cd2db has its CatchHandler @ 05fcd3c4 */
                lVar6 = thunk_FUN_02d9d534(*unaff_x29);
                FUN_03aabc60(lVar6,*unaff_x27);
                    /* try { // try from 05fcd2e0 to 060cd2e7 has its CatchHandler @ 05fcd3c0 */
                if (lVar6 != 0) {
                    /* try { // try from 05fcd2e8 to 060cd3a7 has its CatchHandler @ 05fcd0b4 */
                  lVar8 = *unaff_x19;
                  uVar5 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<InputField>__;
                  lVar7 = *(long *)(lVar6 + 0x10);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                      FUN_03aac494(lVar6,uVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar3 + 0x30) = lVar6;
                    thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar6);
                    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                              );
                    FUN_03aabc60(lVar6,*unaff_x25);
                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                              );
                    FUN_05fc0944(lVar7,0);
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x18) =
                           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Renderer>__;
                      thunk_FUN_02dd37b4();
                    /* try { // try from 05fcd3a8 to 060cd3ab has its CatchHandler @ 05fcd3dc */
                    /* try { // try from 05fcd3ac to 060cd3af has its CatchHandler @ 05fcd3d8 */
                    /* try { // try from 05fcd3b0 to 060cd3b3 has its CatchHandler @ 05fcd3bc */
                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                    /* try { // try from 05fcd3b4 to 060cd3ff has its CatchHandler @ 05fcd0b4 */
                      thunk_FUN_02dd37b4();
                    /* catch() { ... } // from try @ 05fcd2b4 with catch @ 05fcd3b8 */
                      if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 05fcd3b0 with catch @ 05fcd3bc */
                    /* catch() { ... } // from try @ 05fcd2e0 with catch @ 05fcd3c0 */
                    /* catch() { ... } // from try @ 05fcd2d0 with catch @ 05fcd3c4 */
                        lVar8 = *(long *)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 05fcd29c with catch @ 05fcd3c8 */
                    /* catch() { ... } // from try @ 05fcd28c with catch @ 05fcd3cc */
                    /* catch() { ... } // from try @ 05fcd254 with catch @ 05fcd3d0 */
                        lVar9 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                    /* catch() { ... } // from try @ 05fcd280 with catch @ 05fcd3d4 */
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 05fcd3ac with catch @ 05fcd3d8 */
                        if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 05fcd3a8 with catch @ 05fcd3dc */
                          uVar1 = *(uint *)(lVar6 + 0x18);
                    /* catch() { ... } // from try @ 05fcd270 with catch @ 05fcd3e0 */
                    /* catch() { ... } // from try @ 05fcd258 with catch @ 05fcd3e4 */
                    /* catch() { ... } // from try @ 05fcd238 with catch @ 05fcd3e8 */
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                            plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar7;
                    /* try { // try from 05fcd400 to 060cd403 has its CatchHandler @ 05fcd424 */
                            thunk_FUN_02dd37b4(plVar4,lVar7);
                    /* try { // try from 05fcd404 to 060cd42b has its CatchHandler @ 05fcd0b4 */
                          }
                          else {
                            FUN_03aac494(lVar6,lVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                    /* catch() { ... } // from try @ 05fcd400 with catch @ 05fcd424 */
                          *(long *)(lVar3 + 0x28) = lVar6;
                    /* try { // try from 05fcd42c to 060cd433 has its CatchHandler @ 05fcd448 */
                          thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar6);
                    /* try { // try from 05fcd434 to 060cd43f has its CatchHandler @ 05fcd0b4 */
                          lVar6 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 05fcd440 to 060cd447 has its CatchHandler @ 05fcd448 */
                    /* catch() { ... } // from try @ 05fcd42c with catch @ 05fcd448
                       catch() { ... } // from try @ 05fcd440 with catch @ 05fcd448 */
                          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                              plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar4 = lVar3;
                              thunk_FUN_02dd37b4(plVar4,lVar3);
                            }
                            else {
                              FUN_03aac494();
                            }
                            lVar3 = thunk_FUN_02d9d534(*unaff_x26);
                            FUN_05fc094c(lVar3,0);
                            puVar2 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
                            if (lVar3 != 0) {
                              *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
                              thunk_FUN_02dd37b4();
                              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                              *(undefined4 *)(lVar3 + 0x18) = 3;
                              lVar6 = thunk_FUN_02d9d534(*unaff_x29);
                              FUN_03aabc60(lVar6,*unaff_x27);
                              if (lVar6 != 0) {
                                lVar8 = *unaff_x19;
                                uVar5 = *(undefined8 *)
                                         Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
                                lVar7 = *(long *)(lVar6 + 0x10);
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                if (lVar7 != 0) {
                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                    thunk_FUN_02dd37b4();
                                  }
                                  else {
                                    FUN_03aac494(lVar6,uVar5,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar3 + 0x30) = lVar6;
                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar6);
                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                  FUN_03aabc60(lVar6,*unaff_x25);
                                  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                  FUN_05fc0944(lVar7,0);
                                  if (lVar7 != 0) {
                                    *(undefined8 *)(lVar7 + 0x18) =
                                         *(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                    thunk_FUN_02dd37b4();
                                    if (lVar6 != 0) {
                                      lVar8 = *(long *)(lVar6 + 0x10);
                                      lVar9 = *(long *)
                                               Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                      ;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      if (lVar8 != 0) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                          plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar4 = lVar7;
                                          thunk_FUN_02dd37b4(plVar4,lVar7);
                                        }
                                        else {
                                          FUN_03aac494(lVar6,lVar7,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        *(long *)(lVar3 + 0x28) = lVar6;
                                        thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar6);
                                        lVar6 = *(long *)(unaff_x21 + 0x10);
                                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                        if (lVar6 != 0) {
                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                            plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar4 = lVar3;
                                            thunk_FUN_02dd37b4(plVar4,lVar3);
                                          }
                                          else {
                                            FUN_03aac494();
                                          }
                                          lVar3 = thunk_FUN_02d9d534(*unaff_x26);
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
                                            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                            thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                            *(undefined4 *)(lVar3 + 0x18) = 4;
                                            lVar6 = thunk_FUN_02d9d534(*unaff_x29);
                                            FUN_03aabc60(lVar6,*unaff_x27);
                                            if (lVar6 != 0) {
                                              lVar8 = *unaff_x19;
                                              uVar5 = *(undefined8 *)
                                                                                                              
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                              lVar7 = *(long *)(lVar6 + 0x10);
                                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                              if (lVar7 != 0) {
                                                uVar1 = *(uint *)(lVar6 + 0x18);
                                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                                  thunk_FUN_02dd37b4();
                                                }
                                                else {
                                                  FUN_03aac494(lVar6,uVar5,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                *(long *)(lVar3 + 0x30) = lVar6;
                                                thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar6);
                                                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                FUN_03aabc60(lVar6,*unaff_x25);
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
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar6,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar4,lVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


