/*
FUNCTION_NAME: UnityEngine.SendMouseEvents.HitInfo$$Compare
ENTRY_POINT: 05fe08c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 194
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_SendMouseEvents_HitInfo__Compare(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x25;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xc08));
  FUN_02d6084c(Method_UnityEngine_GameObject_GetComponent<Renderer>__);
  *(undefined1 *)(unaff_x19 + 0xe5a) = 1;
                    /* try { // try from 05fe08dc to 060e08df has its CatchHandler @ 05fe0ae0 */
                    /* try { // try from 05fe08e0 to 060e08f3 has its CatchHandler @ 05fe0b00 */
  lVar10 = thunk_FUN_02d9d534(*unaff_x20);
  FUN_05fc095c(lVar10,0);
  puVar9 = Method_UnityEngine_GraphicsBuffer_SetData<Vector4>__;
  puVar5 = Method_UnityEngine_GraphicsBuffer_SetData<int>__;
  puVar7 = Method_UnityEngine_GameObject_AddComponent<GizmoRenderer>__;
  puVar6 = Method_UnityEngine_GameObject_AddComponent<FirebaseMonoBehaviour>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<DebugInterface>__;
  puVar3 = PTR_DAT_06786e58;
  puVar2 = PTR_DAT_0675e638;
  if (lVar10 != 0) {
                    /* try { // try from 05fe08f8 to 060e0903 has its CatchHandler @ 05fe0ae8 */
                    /* try { // try from 05fe0938 to 060e0953 has its CatchHandler @ 05fe0adc */
    *(undefined8 *)(lVar10 + 0x10) =
         *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<Vector2Int>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar5;
    thunk_FUN_02dd37b4();
                    /* try { // try from 05fe095c to 060e0967 has its CatchHandler @ 05fe0ad4 */
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar9;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar3;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02dd37b4();
    lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
    FUN_03aabc60(lVar11,*(undefined8 *)puVar6);
    lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
    FUN_05fc0954(lVar12,0);
    puVar2 = Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__;
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 0x10) = 0x164;
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar2;
      thunk_FUN_02dd37b4();
      puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
      if (lVar11 != 0) {
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugManager>__;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *plVar13 = lVar12;
            thunk_FUN_02dd37b4(plVar13,lVar12);
          }
          else {
            FUN_03aac494(lVar11,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
          FUN_05fc0954(lVar12,0);
          puVar3 = Method_UnityEngine_GameObject_AddComponent<MeshCollider>__;
          if (lVar12 != 0) {
            *(undefined4 *)(lVar12 + 0x10) = 0x264;
            *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar3;
            thunk_FUN_02dd37b4();
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            puVar3 = Method_UnityEngine_GameObject_AddComponent<GizmoRendererManager>__;
            puVar2 = Method_UnityEngine_GameObject_AddComponent<EventSystem>__;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar12;
                thunk_FUN_02dd37b4(plVar13,lVar12);
              }
              else {
                FUN_03aac494(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x20) = lVar11;
              thunk_FUN_02dd37b4((long *)(lVar10 + 0x20),lVar11);
              lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
              FUN_03aabc60(lVar11,*(undefined8 *)puVar2);
              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                           Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                         );
              FUN_05fc094c(lVar12,0);
              puVar4 = 
              Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbTeleportInteractor_OnClimbBegin__
              ;
              puVar3 = PTR_DAT_0675eb68;
              puVar2 = PTR_DAT_0675eb60;
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_06786500;
                thunk_FUN_02dd37b4();
                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar4;
                thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                *(undefined4 *)(lVar12 + 0x18) = 2;
                lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                puVar4 = PTR_DAT_0675eb70;
                if (lVar15 != 0) {
                  uVar14 = *(undefined8 *)
                            Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_Start__
                  ;
                  lVar16 = *(long *)(lVar15 + 0x10);
                  lVar17 = *(long *)PTR_DAT_0675eb70;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  puVar6 = Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__;
                  if (lVar16 != 0) {
                    uVar1 = *(uint *)(lVar15 + 0x18);
                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                      thunk_FUN_02dd37b4();
                    }
                    else {
                      FUN_03aac494(lVar15,uVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar12 + 0x30) = lVar15;
                    thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15);
                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                 Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                               );
                    FUN_03aabc60(lVar15,*(undefined8 *)
                                         Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                    lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
                    FUN_05fc0944(lVar16,0);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<Canvas>__;
                      thunk_FUN_02dd37b4();
                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar9;
                      thunk_FUN_02dd37b4();
                      puVar7 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                      if (lVar15 != 0) {
                        lVar17 = *(long *)(lVar15 + 0x10);
                        lVar18 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                        ;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar17 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar13 = lVar16;
                            thunk_FUN_02dd37b4(plVar13,lVar16);
                          }
                          else {
                            FUN_03aac494(lVar15,lVar16,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar12 + 0x28) = lVar15;
                          thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15);
                          if (lVar11 != 0) {
                            lVar15 = *(long *)(lVar11 + 0x10);
                            lVar16 = *(long *)
                                      Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                            ;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar11 + 0x18);
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar12;
                                thunk_FUN_02dd37b4(plVar13,lVar12);
                              }
                              else {
                                FUN_03aac494(lVar11,lVar12,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                              FUN_05fc094c(lVar12,0);
                              puVar5 = PTR_DAT_06762058;
                              if (lVar12 != 0) {
                                *(undefined8 *)(lVar12 + 0x10) =
                                     *(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeLogic_TypeInfo
                                ;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5;
                                thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                *(undefined4 *)(lVar12 + 0x18) = 1;
                                lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                if (lVar15 != 0) {
                                  uVar14 = *(undefined8 *)puVar5;
                                  lVar16 = *(long *)(lVar15 + 0x10);
                                  lVar17 = *(long *)puVar4;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar16 != 0) {
                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                      ;
                                      thunk_FUN_02dd37b4();
                                    }
                                    else {
                                      FUN_03aac494(lVar15,uVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar12 + 0x30) = lVar15;
                                    thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15);
                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                    FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                );
                                    lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
                                    FUN_05fc0944(lVar16,0);
                                    puVar5 = 
                                    Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                    ;
                                    if (lVar16 != 0) {
                                      *(undefined8 *)(lVar16 + 0x18) =
                                           *(undefined8 *)
                                            Method_UnityEngine_GameObject_GetComponentsInChildren<Transform>__
                                      ;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar9;
                                      thunk_FUN_02dd37b4();
                                      if (lVar15 != 0) {
                                        lVar17 = *(long *)(lVar15 + 0x10);
                                        lVar18 = *(long *)puVar7;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar17 != 0) {
                                          uVar1 = *(uint *)(lVar15 + 0x18);
                                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar13 = lVar16;
                                            thunk_FUN_02dd37b4(plVar13,lVar16);
                                          }
                                          else {
                                            FUN_03aac494(lVar15,lVar16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar12 + 0x28) = lVar15;
                                          thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15);
                                          lVar15 = *(long *)(lVar11 + 0x10);
                                          lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                          ;
                                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                          if (lVar15 != 0) {
                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                              plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar12;
                                              thunk_FUN_02dd37b4(plVar13,lVar12);
                                            }
                                            else {
                                              FUN_03aac494(lVar11,lVar12,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                  
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                            FUN_05fc094c(lVar12,0);
                                            puVar8 = 
                                            Method_UnityEngine_GameObject_TryGetComponent<Collider>__
                                            ;
                                            if (lVar12 != 0) {
                                              *(undefined8 *)(lVar12 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_XR_ARSubsystems_XRPointCloudData_TypeInfo
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar8
                                              ;
                                              thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                              *(undefined4 *)(lVar12 + 0x18) = 0;
                                              lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                              FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                              if (lVar15 != 0) {
                                                lVar17 = *(long *)puVar4;
                                                uVar14 = *(undefined8 *)
                                                          Method_UnityEngine_Color32_get_Item__;
                                                lVar16 = *(long *)(lVar15 + 0x10);
                                                *(int *)(lVar15 + 0x1c) =
                                                     *(int *)(lVar15 + 0x1c) + 1;
                                                if (lVar16 != 0) {
                                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar15,uVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_02dd37b4();
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)(lVar15 + 0x10);
                                                      lVar18 = *(long *)puVar7;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar17 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          plVar13 = (long *)(lVar17 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar13 = lVar16;
                                                  thunk_FUN_02dd37b4(plVar13,lVar16);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar15,lVar16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar18 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = PTR_DAT_06761180;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676a290;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar4;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Method_VRUIP_ColorPickerController_OnSliderValueChanged__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInChildren<ParticleSystem>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager_OnDeviceChange__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                              Method_UnityEngine_Color_set_Item__;
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<PlayableDirector>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<GraphicRaycaster>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_HasElementTypeImpl__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMinWidthProportionally>b__54_0__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsDefined__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_Firebase_Firestore_GeoPoint__ctor__
                                                    ;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_02dd37b4();
                                                    lVar17 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                    if (lVar17 != 0) {
                                                      lVar19 = *(long *)puVar4;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CharacterController>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRReferenceObject_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<RecomputeToMaxWidthProportionally>b__53_0__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<LineRenderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerObjectList>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_Firebase_Firestore_GeoPointProxy_swigRelease__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_OnSessionDiscoveredWithSpatialAnchor__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_BaseType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<OpenXRRestarter>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_GeoPointProxy_longitude__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  lVar17 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar17,*(undefined8 *)puVar3);
                                                  if (lVar17 != 0) {
                                                    lVar19 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<MeshCollider>__
                                                  ;
                                                  lVar18 = *(long *)(lVar17 + 0x10);
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar18 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar17,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02dd37b4((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar7;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar16;
                                                      thunk_FUN_02dd37b4(plVar13,lVar16);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = PTR_DAT_06762060;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0676c270;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 1;
                                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      uVar14 = *(undefined8 *)puVar5;
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      lVar17 = *(long *)puVar4;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_02dd37b4();
                                                        }
                                                        else {
                                                          FUN_03aac494(lVar15,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<JointVisualizer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<Renderer>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRRaycast_TypeInfo;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                              Method_UnityEngine_Color_get_Item__;
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02dd37b4();
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_02dd37b4();
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)(lVar15 + 0x10);
                                                      lVar18 = *(long *)puVar7;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar17 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          plVar13 = (long *)(lVar17 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar13 = lVar16;
                                                  thunk_FUN_02dd37b4(plVar13,lVar16);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar15,lVar16,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar18 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_Unity_VisualScripting_GetListItem_Get__;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethods__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetNestedType__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_0__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    *(undefined4 *)(lVar12 + 0x18) = 3;
                                                    lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      lVar17 = *(long *)puVar4;
                                                      uVar14 = *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar12,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02dd37b4((undefined8 *)(lVar12 + 0x20));
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_03aabc60(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)puVar4;
                                                    uVar14 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                                  lVar16 = *(long *)(lVar15 + 0x10);
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar14;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar15,uVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar16 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05fc0944(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02dd37b4(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_03aac494(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02dd37b4((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DisposableManagerSingleton>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02dd37b4(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  thunk_FUN_02dd37b4((long *)(lVar10 + 0x28),lVar11)
                                                  ;
                                                  FUN_05fc0710(unaff_x25,lVar10,0);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


