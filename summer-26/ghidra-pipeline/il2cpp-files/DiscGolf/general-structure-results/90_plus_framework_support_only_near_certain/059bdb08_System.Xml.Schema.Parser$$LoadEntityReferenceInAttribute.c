/*
FUNCTION_NAME: System.Xml.Schema.Parser$$LoadEntityReferenceInAttribute
ENTRY_POINT: 059bdb08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 216
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_9;functionality_data_collection_or_telemetry_hits_3;functionality_possible_biometrics_hits_1
*/


void System_Xml_Schema_Parser__LoadEntityReferenceInAttribute(void)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  undefined8 uVar13;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  uVar10 = thunk_FUN_02dd3144();
  FUN_048a0ae4(uVar10,0,*unaff_x27,0);
  lVar11 = FUN_0365c6a0(*unaff_x22,uVar10,2,1,*unaff_x21,*unaff_x24);
  if ((lVar11 != 0) &&
     (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0)) {
LAB_059bf3a0:
    uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar10,0);
  }
  puVar6 = UnityEngine_EventSystems_PhysicsRaycaster_RaycastHitComparer_TypeInfo;
  puVar5 = Oculus_Avatar2_OvrAvatarResourceLoader_ProfilerMarkers_TypeInfo;
  puVar3 = Oculus_Avatar2_OvrAvatarPrimitive_<PrepareLoadMaterialAsync>d__146_TypeInfo;
  puVar2 = Oculus_Avatar2_OvrAvatarManager_EntityFootPlantData_TypeInfo;
  if (4 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[8] = lVar11;
    LeanTween__value(unaff_x19 + 8,lVar11);
    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_048a0954(uVar10,0,*(undefined8 *)puVar3,0);
    lVar11 = FUN_0365c980(*(undefined8 *)puVar6,uVar10,2,0,*(undefined8 *)puVar2);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
    goto LAB_059bf3a0;
    puVar2 = System_Net_Http_Headers_Parser_MD5_TypeInfo;
    if (5 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[9] = lVar11;
      LeanTween__value(unaff_x19 + 9,lVar11);
      uVar10 = thunk_FUN_02dd3144(*unaff_x28);
      FUN_048a0ae4(uVar10,0,*unaff_x27,0);
      lVar11 = FUN_0365c6a0(*(undefined8 *)puVar2,uVar10,4,0,*unaff_x21,*unaff_x24);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
      goto LAB_059bf3a0;
      puVar6 = 
      Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
      ;
      puVar5 = OvrAvatarSkinnedRenderable_AnimationDataCompletionHandler_TypeInfo;
      puVar3 = Oculus_Avatar2_Experimental_OvrAvatarLegsController_<LerpFootRotation>d__32_TypeInfo;
      puVar2 = Oculus_Avatar2_OvrAvatarEntity_<>c__DisplayClass241_0_TypeInfo;
      if (6 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[10] = lVar11;
        LeanTween__value(unaff_x19 + 10,lVar11);
        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                    /* try { // try from 059bdcac to 05abdcaf has its CatchHandler @ 059bdccc */
        FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
                    /* try { // try from 059bdcb4 to 05abdcb7 has its CatchHandler @ 059bdcbc */
                    /* try { // try from 059bdcb8 to 05abdceb has its CatchHandler @ 059bd5f4 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bdcb4 with catch @ 059bdcbc
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bd9a8 with catch @ 059bdcc0
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bd998 with catch @ 059bdcc4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bd968 with catch @ 059bdcc8
                        */
        lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,1,0,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bdcac with catch @ 059bdccc
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bd930 with catch @ 059bdcd0
                        */
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
        goto LAB_059bf3a0;
        puVar6 = UnityEngine_Physics_ContactEventDelegate_TypeInfo;
        puVar5 = 
        Oculus_Avatar2_OvrAvatarResourceLoader_<CreateResourcePrimitivesAsync>d__23_TypeInfo;
        puVar3 = Oculus_Avatar2_OvrAvatarLog_ELogLevel_TypeInfo;
        puVar2 = Oculus_Avatar2_OvrAvatarEntity_<LoadASync_BuildSkeleton>d__315_TypeInfo;
                    /* try { // try from 059bdcec to 05abdcef has its CatchHandler @ 059bdd38 */
        if ((*(uint *)(unaff_x19 + 3) & 0xfffffff8) != 0) {
          unaff_x19[0xb] = lVar11;
          LeanTween__value(unaff_x19 + 0xb,lVar11);
          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
          FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
          lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,3,0,*(undefined8 *)puVar3);
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
          goto LAB_059bf3a0;
          puVar2 = OVRPlugin_OVRP_1_119_0_TypeInfo;
          if (8 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0xc] = lVar11;
            LeanTween__value(unaff_x19 + 0xc,lVar11);
            uVar10 = thunk_FUN_02dd3144(*unaff_x28);
            FUN_048a0ae4(uVar10,0,*unaff_x27,0);
            lVar11 = FUN_0365c6a0(*(undefined8 *)puVar2,uVar10,3,1,*unaff_x21,*unaff_x24);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0)
               ) goto LAB_059bf3a0;
            puVar6 = 
            Assets_Scripts_PlayerBehavior_<<PlayerStart>g__SpawnDiscEnabledRoutine_15_0>d_TypeInfo;
            puVar5 = 
            Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphAndJointsMutator_TypeInfo;
            puVar3 = Oculus_Avatar2_OvrAvatarLog_LogDelegate_TypeInfo;
            puVar2 = Oculus_Avatar2_OvrAvatarEntity_<LoadAsync_BuildPrimitives>d__313_TypeInfo;
            if (9 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0xd] = lVar11;
              LeanTween__value(unaff_x19 + 0xd,lVar11);
              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
              FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
              lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,4,0,*(undefined8 *)puVar3);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                 lVar12 == 0)) goto LAB_059bf3a0;
              puVar2 = System_Net_Http_Headers_Parser_DateTime_TypeInfo;
              if (10 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xe] = lVar11;
                LeanTween__value(unaff_x19 + 0xe,lVar11);
                uVar10 = thunk_FUN_02dd3144(*unaff_x28);
                FUN_048a0ae4(uVar10,0,*unaff_x27,0);
                lVar11 = FUN_0365c6a0(*(undefined8 *)puVar2,uVar10,4,1,*unaff_x21,*unaff_x24);
                if ((lVar11 != 0) &&
                   (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                   lVar12 == 0)) goto LAB_059bf3a0;
                puVar2 = 
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                ;
                if (0xb < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xf] = lVar11;
                  LeanTween__value(unaff_x19 + 0xf,lVar11);
                  uVar10 = thunk_FUN_02dd3144(*unaff_x28);
                  FUN_048a0ae4(uVar10,0,*unaff_x27,0);
                  lVar11 = FUN_0365c6a0(*(undefined8 *)puVar2,uVar10,4,1,*unaff_x21,*unaff_x24);
                  if ((lVar11 != 0) &&
                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar12 == 0)) goto LAB_059bf3a0;
                  puVar6 = Oculus_Avatar2_OvrAvatarPrimitive_VertexBufferAccessor_TypeInfo;
                  puVar5 = Oculus_Avatar2_OvrAvatarManager_OnShutdown_TypeInfo;
                  puVar3 = Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass196_0_TypeInfo;
                  puVar2 = PTR_DAT_06a0db58;
                  if (0xc < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x10] = lVar11;
                    LeanTween__value(unaff_x19 + 0x10,lVar11);
                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                    FUN_048a07c4(uVar10,0,*(undefined8 *)puVar5,0);
                    lVar11 = FUN_0365c858(*(undefined8 *)puVar2,uVar10,4,0,*(undefined8 *)puVar3);
                    if ((lVar11 != 0) &&
                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar12 == 0)) goto LAB_059bf3a0;
                    puVar6 = Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
                    puVar5 = Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo;
                    puVar3 = 
                    Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo;
                    puVar2 = Oculus_Avatar2_OvrAvatarManager_FootPlantData_TypeInfo;
                    if (0xd < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0x11] = lVar11;
                      LeanTween__value(unaff_x19 + 0x11,lVar11);
                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                      FUN_048a088c(uVar10,0,*(undefined8 *)puVar5,0);
                      lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,4,0,*(undefined8 *)puVar2);
                      if ((lVar11 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar12 == 0)) goto LAB_059bf3a0;
                      puVar6 = System_Net_PathList_PathListComparer_TypeInfo;
                      puVar5 = 
                      Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo;
                      puVar3 = Oculus_Avatar2_OvrAvatarManager_PuppeteerInfo_TypeInfo;
                      puVar2 = Oculus_Avatar2_OvrAvatarLog_AssertStaticMessageBuilder_TypeInfo;
                      if (0xe < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x12] = lVar11;
                        LeanTween__value(unaff_x19 + 0x12,lVar11);
                        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                        FUN_048a088c(uVar10,0,*(undefined8 *)puVar3,0);
                        lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,4,0,*(undefined8 *)puVar2
                                             );
                        if ((lVar11 != 0) &&
                           (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar12 == 0)) goto LAB_059bf3a0;
                        puVar6 = 
                        UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
                        ;
                        puVar5 = Oculus_Avatar2_OvrAvatarProfilingUtils_Categories_TypeInfo;
                        puVar3 = Oculus_Avatar2_OvrAvatarLog_LogFilterDelegate_TypeInfo;
                        puVar2 = 
                        Oculus_Avatar2_OvrAvatarEntity_<LoadAsync_BuildPrimitives_Internal>d__327_TypeInfo
                        ;
                        if ((*(uint *)(unaff_x19 + 3) & 0xfffffff0) != 0) {
                          unaff_x19[0x13] = lVar11;
                          LeanTween__value(unaff_x19 + 0x13,lVar11);
                          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                          FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
                          lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,4,0,
                                                *(undefined8 *)puVar3);
                          if ((lVar11 != 0) &&
                             (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40))
                             , lVar12 == 0)) goto LAB_059bf3a0;
                          puVar6 = Oculus_Avatar2_OvrAvatarPrimitive_ProfilerMarkers_TypeInfo;
                          puVar5 = Oculus_Avatar2_OvrAvatarManager_RequestDelegate_TypeInfo;
                          puVar3 = Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass305_0_TypeInfo;
                          puVar2 = PTR_DAT_069ff558;
                          if (0x10 < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x14] = lVar11;
                            LeanTween__value(unaff_x19 + 0x14,lVar11);
                            uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                            FUN_048a088c(uVar10,0,*(undefined8 *)puVar5,0);
                            lVar11 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar10,4,0,
                                                  *(undefined8 *)puVar3);
                            if ((lVar11 != 0) &&
                               (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)),
                               lVar12 == 0)) goto LAB_059bf3a0;
                            puVar4 = 
                            Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_JointsOnlyMutator_TypeInfo
                            ;
                            puVar6 = Oculus_Avatar2_OvrAvatarLog_UILogListenerDelegate_TypeInfo;
                            puVar5 = Oculus_Avatar2_OvrAvatarEntity_AvatarLoadFailedEvent_TypeInfo;
                            puVar3 = 
                            Oculus_Avatar2_OvrAvatarEntity_<LoadAsync_BuildSkeletonAndPrimitives>d__312_TypeInfo
                            ;
                            puVar2 = Unity_Networking_QoS_UcgQosServer_var;
                            if (0x11 < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x15] = lVar11;
                              LeanTween__value(unaff_x19 + 0x15,lVar11);
                              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                              FUN_048a0634(uVar10,0,*(undefined8 *)puVar3,0);
                              lVar11 = *(long *)puVar5;
                              if (*(int *)(lVar11 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                                lVar11 = *(long *)puVar5;
                              }
                              lVar11 = FUN_0365c730(*(undefined8 *)puVar2,uVar10,3,
                                                    **(undefined8 **)(lVar11 + 0xb8),
                                                    *(undefined8 *)puVar6);
                              if ((lVar11 != 0) &&
                                 (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                 lVar12 == 0)) goto LAB_059bf3a0;
                              puVar8 = 
                              UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo;
                              puVar9 = Oculus_Avatar2_OvrAvatarPrimitive_MeshInfo_TypeInfo;
                              puVar7 = Oculus_Avatar2_OvrAvatarManager_<>c_TypeInfo;
                              puVar2 = Oculus_Avatar2_OvrAvatarEntity_LoadingStateEvent_TypeInfo;
                              if (0x12 < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x16] = lVar11;
                                LeanTween__value(unaff_x19 + 0x16,lVar11);
                                uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
                                lVar11 = FUN_0365c8ec(*(undefined8 *)puVar8,uVar10,2,0,
                                                      *(undefined8 *)puVar7);
                                if ((lVar11 != 0) &&
                                   (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                   lVar12 == 0)) goto LAB_059bf3a0;
                                puVar8 = 
                                Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo
                                ;
                                puVar9 = Oculus_Skinning_OvrSkinningTypes_Handle_TypeInfo;
                                puVar7 = 
                                Oculus_Avatar2_OvrAvatarMaterialExtension_ExtensionEntries_TypeInfo;
                                puVar2 = 
                                Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_<BuildTextures>d__27_TypeInfo
                                ;
                                if (0x13 < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x17] = lVar11;
                                  LeanTween__value(unaff_x19 + 0x17,lVar11);
                                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                  FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar7,0);
                                  lVar11 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar10,1,1,*unaff_x21,
                                                        *(undefined8 *)puVar2);
                                  if ((lVar11 != 0) &&
                                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                     lVar12 == 0)) goto LAB_059bf3a0;
                                  puVar2 = 
                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo
                                  ;
                                  if (0x14 < *(uint *)(unaff_x19 + 3)) {
                                    unaff_x19[0x18] = lVar11;
                                    LeanTween__value(unaff_x19 + 0x18,lVar11);
                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                    FUN_048a0634(uVar10,0,*(undefined8 *)puVar3,0);
                                    lVar11 = FUN_0365c730(*(undefined8 *)puVar2,uVar10,4,
                                                          **(undefined8 **)(*(long *)puVar5 + 0xb8),
                                                          *(undefined8 *)puVar6);
                                    if ((lVar11 != 0) &&
                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40)),
                                       lVar12 == 0)) goto LAB_059bf3a0;
                                    puVar8 = 
                                    Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo
                                    ;
                                    puVar9 = 
                                    Oculus_Avatar2_OvrAvatarPrimitive_OvrAvatarGpuSkinnedPrimitiveBuilder_TypeInfo
                                    ;
                                    puVar7 = 
                                    Oculus_Avatar2_OvrAvatarManager_CachedEntityInfo_TypeInfo;
                                    puVar2 = 
                                    Oculus_Avatar2_OvrAvatarEntity_EntityLoadingStateEvent_TypeInfo;
                                    if (0x15 < *(uint *)(unaff_x19 + 3)) {
                                      unaff_x19[0x19] = lVar11;
                                      LeanTween__value(unaff_x19 + 0x19,lVar11);
                                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                      FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
                                      lVar11 = FUN_0365c8ec(*(undefined8 *)puVar8,uVar10,1,0,
                                                            *(undefined8 *)puVar7);
                                      if ((lVar11 != 0) &&
                                         (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40)),
                                         lVar12 == 0)) goto LAB_059bf3a0;
                                      puVar8 = Oculus_Avatar2_OvrAvatarManager_LoadRequest_TypeInfo;
                                      puVar2 = OVRPlugin_OVRP_1_128_0_TypeInfo;
                                      if (0x16 < *(uint *)(unaff_x19 + 3)) {
                                        unaff_x19[0x1a] = lVar11;
                                        LeanTween__value(unaff_x19 + 0x1a,lVar11);
                                        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                        FUN_048a088c(uVar10,0,*(undefined8 *)puVar8,0);
                                        lVar11 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar10,1,0,
                                                              *(undefined8 *)puVar7);
                                        if ((lVar11 != 0) &&
                                           (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                           , lVar12 == 0)) goto LAB_059bf3a0;
                                        puVar8 = 
                                        UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo
                                        ;
                                        puVar9 = 
                                        Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo
                                        ;
                                        puVar7 = 
                                        Oculus_Avatar2_OvrAvatarEntity_SkeletonJoint_TypeInfo;
                                        puVar2 = 
                                        Oculus_Avatar2_OvrAvatarEntity_PrimitiveRenderData_TypeInfo;
                                        if (0x17 < *(uint *)(unaff_x19 + 3)) {
                                          unaff_x19[0x1b] = lVar11;
                                          LeanTween__value(unaff_x19 + 0x1b,lVar11);
                                          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                          FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar2,0);
                                          lVar11 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar10,1,1,
                                                                *unaff_x21,*(undefined8 *)puVar7);
                                          if ((lVar11 != 0) &&
                                             (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  )), lVar12 == 0))
                                          goto LAB_059bf3a0;
                                          puVar8 = 
                                          Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo
                                          ;
                                          if (0x18 < *(uint *)(unaff_x19 + 3)) {
                                            unaff_x19[0x1c] = lVar11;
                                            LeanTween__value(unaff_x19 + 0x1c,lVar11);
                                            uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                            FUN_048a0634(uVar10,0,*(undefined8 *)puVar3,0);
                                            lVar11 = FUN_0365c730(*(undefined8 *)puVar8,uVar10,1,
                                                                  **(undefined8 **)
                                                                    (*(long *)puVar5 + 0xb8),
                                                                  *(undefined8 *)puVar6);
                                            if ((lVar11 != 0) &&
                                               (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40)),
                                               lVar12 == 0)) goto LAB_059bf3a0;
                                            puVar8 = 
                                            Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo
                                            ;
                                            if (0x19 < *(uint *)(unaff_x19 + 3)) {
                                              unaff_x19[0x1d] = lVar11;
                                              LeanTween__value(unaff_x19 + 0x1d,lVar11);
                                              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                              FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar2,0);
                                              lVar11 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar10,1,1
                                                                    ,*unaff_x21,
                                                                    *(undefined8 *)puVar7);
                                              if ((lVar11 != 0) &&
                                                 (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40)),
                                                 lVar12 == 0)) goto LAB_059bf3a0;
                                              puVar8 = 
                                              PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo
                                              ;
                                              puVar9 = 
                                              Oculus_Avatar2_OvrAvatarPrimitive_MaterialInfo_TypeInfo
                                              ;
                                              puVar7 = 
                                              Oculus_Avatar2_OvrAvatarPrimitive_<>c__DisplayClass143_0_TypeInfo
                                              ;
                                              puVar2 = 
                                              Oculus_Avatar2_OvrAvatarManager_AvatarFootFallEvent_TypeInfo
                                              ;
                                              if (0x1a < *(uint *)(unaff_x19 + 3)) {
                                                unaff_x19[0x1e] = lVar11;
                                                LeanTween__value(unaff_x19 + 0x1e,lVar11);
                                                uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                                FUN_048a088c(uVar10,0,*(undefined8 *)puVar7,0);
                                                lVar11 = FUN_0365c8ec(*(undefined8 *)puVar8,uVar10,1
                                                                      ,0,*(undefined8 *)puVar2);
                                                if ((lVar11 != 0) &&
                                                   (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar12 == 0))
                                                goto LAB_059bf3a0;
                                                puVar2 = 
                                                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                                ;
                                                if (0x1b < *(uint *)(unaff_x19 + 3)) {
                                                  unaff_x19[0x1f] = lVar11;
                                                  LeanTween__value(unaff_x19 + 0x1f,lVar11);
                                                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_048a0634(uVar10,0,*(undefined8 *)puVar3,0);
                                                  lVar11 = FUN_0365c730(*(undefined8 *)puVar2,uVar10
                                                                        ,1,**(undefined8 **)
                                                                             (*(long *)puVar5 + 0xb8
                                                                             ),*(undefined8 *)puVar6
                                                                       );
                                                  if ((lVar11 != 0) &&
                                                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar2 = 
                                                  Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo
                                                  ;
                                                  if (0x1c < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x20] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x20,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_048a0634(uVar10,0,*(undefined8 *)puVar3,0);
                                                    lVar11 = FUN_0365c730(*(undefined8 *)puVar2,
                                                                          uVar10,4,**(undefined8 **)
                                                                                     (*(long *)
                                                  puVar5 + 0xb8),*(undefined8 *)puVar6);
                                                  if ((lVar11 != 0) &&
                                                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = Mono_Security_PKCS7_SignerInfo_TypeInfo;
                                                  puVar6 = 
                                                  OvrAvatarSkinnedRenderable_AnimationDataCompletionHandler_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  Oculus_Avatar2_OvrAvatarManager_FootPlantData_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_Experimental_OvrAvatarLegsController_<LerpFootRotation>d__32_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_<>c__DisplayClass241_0_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x21] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x21,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo
                                                  );
                                                  FUN_048a088c(uVar10,0,*(undefined8 *)
                                                                                                                                                  
                                                  Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo
                                                  ,0);
                                                  lVar11 = FUN_0365c8ec(*(undefined8 *)puVar4,uVar10
                                                                        ,2,0,*(undefined8 *)puVar5);
                                                  if ((lVar11 != 0) &&
                                                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar8 = 
                                                  System_ParameterizedStrings_LowLevelStack_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  Oculus_Skinning_GpuSkinning_OvrExpandableTextureArray_ArrayGrowthEventHandler_TypeInfo
                                                  ;
                                                  puVar7 = 
                                                  Oculus_Avatar2_OvrAvatarManager_MeshData_TypeInfo;
                                                  puVar4 = 
                                                  Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass155_0_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x22] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x22,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar9);
                                                    FUN_048a06fc(uVar10,0,*(undefined8 *)puVar7,0);
                                                    lVar11 = FUN_0365c7c4(*(undefined8 *)puVar8,
                                                                          uVar10,1,0,
                                                                          *(undefined8 *)puVar4);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar8 = 
                                                  UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinnerMorphTargetsOnly_<>c_TypeInfo
                                                  ;
                                                  puVar7 = 
                                                  Oculus_Avatar2_OvrAvatarManager_RigInfo_TypeInfo;
                                                  puVar4 = 
                                                  Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_<>c__DisplayClass32_0_TypeInfo
                                                  ;
                                                  if ((*(uint *)(unaff_x19 + 3) & 0xffffffe0) != 0)
                                                  {
                                                    unaff_x19[0x23] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x23,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar9);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar7,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar8,
                                                                          uVar10,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar4);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar8 = 
                                                  UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData_TypeInfo
                                                  ;
                                                  puVar7 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_ProfilerMarkers_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_<BuildNewPrimitiveRenderablesASync>d__322_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x24] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x24,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar9);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar4,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar8,
                                                                          uVar10,2,1,*unaff_x21,
                                                                          *(undefined8 *)puVar7);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = 
                                                  Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x25] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x25,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
                                                    lVar11 = FUN_0365c8ec(*(undefined8 *)puVar4,
                                                                          uVar10,1,0,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo
                                                  ;
                                                  puVar6 = 
                                                  Oculus_Avatar2_OvrAvatarShaderConfiguration_<>c__DisplayClass51_0_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_OvrAvatarPrimitive_<FindTextures>d__154_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarManager_AvatarMeshLoadHandler_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x26] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x26,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_048a088c(uVar10,0,*(undefined8 *)puVar3,0);
                                                    lVar11 = FUN_0365c8ec(*(undefined8 *)puVar4,
                                                                          uVar10,1,0,
                                                                          *(undefined8 *)puVar2);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar2 = 
                                                  Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo
                                                  ;
                                                  if (0x23 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x27] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x27,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo
                                                  );
                                                  FUN_048a088c(uVar10,0,*(undefined8 *)
                                                                                                                                                  
                                                  Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo
                                                  ,0);
                                                  lVar11 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar10
                                                                        ,1,0,*(undefined8 *)puVar5);
                                                  if ((lVar11 != 0) &&
                                                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar6 = 
                                                  Mono_Security_PKCS7_EncryptedData_TypeInfo;
                                                  puVar5 = 
                                                  Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphsOnlyMutator_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_OvrAvatarPrimitive_<LoadMaterialAsync>d__147_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarManager_BoneTransformInfo_TypeInfo
                                                  ;
                                                  if (0x24 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x28] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x28,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a088c(uVar10,0,*(undefined8 *)puVar3,0);
                                                    lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,
                                                                          uVar10,2,0,
                                                                          *(undefined8 *)puVar2);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = Mono_Security_PKCS7_SignedData_TypeInfo;
                                                  puVar6 = 
                                                  Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  Oculus_Avatar2_OvrAvatarPrimitive_<>c__DisplayClass142_0_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_SourceTextureMetaData_TypeInfo
                                                  ;
                                                  puVar2 = PTR_DAT_069fb9e8;
                                                  if (0x25 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x29] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x29,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar5,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,
                                                                          uVar10,2,1,
                                                                          *(undefined8 *)puVar2,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar8 = 
                                                  PauseMenuController_<BuildSceneList>d__25_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinnerJointsOnly_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  puVar7 = 
                                                  Oculus_Avatar2_OvrAvatarPrimitive_<_WaitForCancellation>d__137_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Oculus_Avatar2_OvrAvatarImage_<LoadTextureAsync>d__21_TypeInfo
                                                  ;
                                                  if (0x26 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2a] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x2a,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar9);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar7,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar8,
                                                                          uVar10,1,0,*unaff_x21,
                                                                          *(undefined8 *)puVar4);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo
                                                  ;
                                                  if (0x27 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2b] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x2b,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinner_<>c__DisplayClass4_0_TypeInfo
                                                  );
                                                  FUN_048a0ae4(uVar10,0,*(undefined8 *)
                                                                                                                                                  
                                                  Oculus_Avatar2_OvrAvatarEntity_<LoadAsyncCoroutine_BuildPrimitives_Internal>d__325_TypeInfo
                                                  ,0);
                                                  lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,uVar10
                                                                        ,3,1,*unaff_x21,
                                                                        *(undefined8 *)
                                                                                                                                                  
                                                  Oculus_Avatar2_OvrAvatarImage_<>c__DisplayClass24_0_TypeInfo
                                                  );
                                                  if ((lVar11 != 0) &&
                                                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar8 = 
                                                  Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  Oculus_Avatar2_OvrAvatarPrimitive_<StartLoad>d__131_TypeInfo
                                                  ;
                                                  puVar7 = 
                                                  Oculus_Avatar2_OvrAvatarImage_<>c__DisplayClass24_1_TypeInfo
                                                  ;
                                                  puVar4 = OVRPlugin_OVRP_1_129_0_TypeInfo;
                                                  if (0x28 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2c] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x2c,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar9,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,
                                                                          uVar10,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar7);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar8 = 
                                                  Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo
                                                  ;
                                                  puVar9 = 
                                                  Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo
                                                  ;
                                                  puVar7 = 
                                                  Oculus_Avatar2_OvrAvatarMaterialExtensionConfig_StringListWrapper_TypeInfo
                                                  ;
                                                  puVar4 = 
                                                  Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_<CreateMorphTargetSourceTex>d__32_TypeInfo
                                                  ;
                                                  if (0x29 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2d] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x2d,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar9);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar7,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar8,
                                                                          uVar10,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar4);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = System_IO_Path_<>c_TypeInfo;
                                                  if (0x2a < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2e] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x2e,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar5,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,
                                                                          uVar10,1,1,
                                                                          *(undefined8 *)puVar2,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar6 = 
                                                  PauseMenuController_<HideInstructionsOverlay>d__33_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinner_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_OvrAvatarImage_<>c__DisplayClass24_0_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_<LoadAsyncCoroutine_BuildPrimitives_Internal>d__325_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2f] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x2f,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar2,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar6,
                                                                          uVar10,2,1,*unaff_x21,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar6 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                                                  ;
                                                  puVar5 = Oculus_Avatar2_OvrTime_SliceStep_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarImage_ProfilerMarkers_TypeInfo
                                                  ;
                                                  if (0x2c < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x30] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x30,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar5,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar6,
                                                                          uVar10,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar2);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar6 = 
                                                  Mono_Security_X509_PKCS12_DeriveBytes_TypeInfo;
                                                  puVar5 = 
                                                  Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_TrackerNodeComparer_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_OvrAvatarInputManagerBehavior_BodyTrackingContextStateEvent_TypeInfo
                                                  ;
                                                  puVar2 = PTR_DAT_06a122e8;
                                                  if (0x2d < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x31] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x31,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar6,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar2,
                                                                          uVar10,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar6 = 
                                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_ProfilerMarkers_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_<BuildNewPrimitiveRenderablesASync>d__322_TypeInfo
                                                  ;
                                                  if (0x2e < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x32] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x32,lVar11);
                                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar2,0);
                                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar6,
                                                                          uVar10,2,1,*unaff_x21,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar11 != 0) &&
                                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar2 = PTR_DAT_06a1c780;
                                                  if (0x2f < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x33] = lVar11;
                                                    LeanTween__value(unaff_x19 + 0x33,lVar11);
                                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                                      thunk_FUN_02df485c();
                                                    }
                                                    if (DAT_06dba778 == '\0') {
                                                      FUN_02d965b8(PTR_DAT_06a1c780);
                                                      DAT_06dba778 = '\x01';
                                                    }
                                                    puVar6 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_EntityAnimatorMotionSmoothing_TypeInfo
                                                  ;
                                                  puVar5 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_EntityAnimatorDefault_TypeInfo
                                                  ;
                                                  puVar3 = PTR_DAT_06a0db88;
                                                  lVar11 = *(long *)puVar2;
                                                  if (*(int *)(lVar11 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar11 = *(long *)puVar2;
                                                  }
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(lVar11 + 0xb8) + 0x18);
                                                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04e928a0(uVar10,uVar13,*(undefined8 *)puVar5);
                                                  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar10
                                                  ;
                                                  LeanTween__value(*(undefined8 *)
                                                                    (*(long *)puVar3 + 0xb8),uVar10)
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_AvatarStateEvent_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(unaff_x19 + 3);
                                                  if (0 < (int)uVar1) {
                                                    lVar11 = 0;
                                                    do {
                                                      if (uVar1 <= (uint)lVar11) goto LAB_059bf398;
                                                      lVar12 = unaff_x19[lVar11 + 4];
                                                      if (lVar12 == 0) {
LAB_059bf39c:
                    /* WARNING: Subroutine does not return */
                                                        FUN_02d96860();
                                                      }
                                                      if (**(long **)(*(long *)puVar3 + 0xb8) == 0)
                                                      goto LAB_059bf39c;
                                                      FUN_04e935f0(**(long **)(*(long *)puVar3 +
                                                                              0xb8),
                                                                   *(undefined8 *)(lVar12 + 0x18),
                                                                   lVar12,*(undefined8 *)puVar2);
                                                      uVar1 = *(uint *)(unaff_x19 + 3);
                                                      lVar11 = lVar11 + 1;
                                                    } while ((int)lVar11 < (int)uVar1);
                                                  }
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
LAB_059bf398:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


