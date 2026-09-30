/*
FUNCTION_NAME: System.Xml.Schema.Preprocessor$$LoadExternals
ENTRY_POINT: 059be474
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 229
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_5;functionality_data_collection_or_telemetry_hits_2
*/


void System_Xml_Schema_Preprocessor__LoadExternals(void)

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
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *unaff_x21;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  puVar6 = Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo;
  puVar5 = Oculus_Avatar2_OvrAvatarPrimitive_OvrAvatarGpuSkinnedPrimitiveBuilder_TypeInfo;
  puVar3 = Oculus_Avatar2_OvrAvatarManager_CachedEntityInfo_TypeInfo;
  puVar2 = Oculus_Avatar2_OvrAvatarEntity_EntityLoadingStateEvent_TypeInfo;
                    /* try { // try from 059be494 to 05abe4ab has its CatchHandler @ 059be4d4 */
  unaff_x19[0x19] = unaff_x20;
  LeanTween__value();
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                    /* try { // try from 059be4b8 to 05abe4c3 has its CatchHandler @ 059be4e0 */
  FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
                    /* try { // try from 059be4c4 to 05abe4fb has its CatchHandler @ 059be380 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be494 with catch @ 059be4d4
                        */
  lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,1,0,*(undefined8 *)puVar3);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be4b8 with catch @ 059be4e0
                        */
  if ((lVar11 != 0) &&
     (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0)) {
LAB_059bf3a0:
    uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar10,0);
  }
  puVar6 = Oculus_Avatar2_OvrAvatarManager_LoadRequest_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_128_0_TypeInfo;
                    /* try { // try from 059be4fc to 05abe4ff has its CatchHandler @ 059be518 */
  if (0x16 < *(uint *)(unaff_x19 + 3)) {
                    /* catch() { ... } // from try @ 059be4fc with catch @ 059be518 */
    unaff_x19[0x1a] = lVar11;
                    /* try { // try from 059be51c to 05abe523 has its CatchHandler @ 059be57c */
    LeanTween__value(unaff_x19 + 0x1a,lVar11);
                    /* try { // try from 059be524 to 05abe543 has its CatchHandler @ 059be380 */
    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be410 with catch @ 059be528
                        */
    FUN_048a088c(uVar10,0,*(undefined8 *)puVar6,0);
                    /* try { // try from 059be544 to 05abe547 has its CatchHandler @ 059be568 */
                    /* try { // try from 059be548 to 05abe56b has its CatchHandler @ 059be380 */
    lVar11 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar10,1,0,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 059be544 with catch @ 059be568 */
                    /* try { // try from 059be56c to 05abe573 has its CatchHandler @ 059be57c */
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
    goto LAB_059bf3a0;
    puVar6 = UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo;
    puVar5 = Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo;
    puVar3 = Oculus_Avatar2_OvrAvatarEntity_SkeletonJoint_TypeInfo;
    puVar2 = Oculus_Avatar2_OvrAvatarEntity_PrimitiveRenderData_TypeInfo;
                    /* try { // try from 059be574 to 05abe57f has its CatchHandler @ 059be380 */
    if (0x17 < *(uint *)(unaff_x19 + 3)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059be51c with catch @ 059be57c
                       catch(type#2 @ 00000000) { ... } // from try @ 059be56c with catch @ 059be57c
                        */
      unaff_x19[0x1b] = lVar11;
      LeanTween__value(unaff_x19 + 0x1b,lVar11);
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar2,0);
      lVar11 = FUN_0365c6a0(*(undefined8 *)puVar6,uVar10,1,1,*unaff_x21,*(undefined8 *)puVar3);
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
      goto LAB_059bf3a0;
      puVar6 = Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo;
      if (0x18 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x1c] = lVar11;
        LeanTween__value(unaff_x19 + 0x1c,lVar11);
        uVar10 = thunk_FUN_02dd3144(*unaff_x29);
        FUN_048a0634(uVar10,0,*unaff_x28,0);
        lVar11 = FUN_0365c730(*(undefined8 *)puVar6,uVar10,1,**(undefined8 **)(*unaff_x27 + 0xb8),
                              *unaff_x26);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
        goto LAB_059bf3a0;
        puVar6 = Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo;
        if (0x19 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0x1d] = lVar11;
          LeanTween__value(unaff_x19 + 0x1d,lVar11);
          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
          FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar2,0);
          lVar11 = FUN_0365c6a0(*(undefined8 *)puVar6,uVar10,1,1,*unaff_x21,*(undefined8 *)puVar3);
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0))
          goto LAB_059bf3a0;
          puVar6 = PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo;
          puVar5 = Oculus_Avatar2_OvrAvatarPrimitive_MaterialInfo_TypeInfo;
          puVar3 = Oculus_Avatar2_OvrAvatarPrimitive_<>c__DisplayClass143_0_TypeInfo;
          puVar2 = Oculus_Avatar2_OvrAvatarManager_AvatarFootFallEvent_TypeInfo;
          if (0x1a < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0x1e] = lVar11;
            LeanTween__value(unaff_x19 + 0x1e,lVar11);
            uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
            FUN_048a088c(uVar10,0,*(undefined8 *)puVar3,0);
            lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,1,0,*(undefined8 *)puVar2);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)), lVar12 == 0)
               ) goto LAB_059bf3a0;
            puVar2 = 
            UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo;
            if (0x1b < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0x1f] = lVar11;
              LeanTween__value(unaff_x19 + 0x1f,lVar11);
              uVar10 = thunk_FUN_02dd3144(*unaff_x29);
              FUN_048a0634(uVar10,0,*unaff_x28,0);
              lVar11 = FUN_0365c730(*(undefined8 *)puVar2,uVar10,1,
                                    **(undefined8 **)(*unaff_x27 + 0xb8),*unaff_x26);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                 lVar12 == 0)) goto LAB_059bf3a0;
              puVar2 = Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo;
              if (0x1c < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0x20] = lVar11;
                LeanTween__value(unaff_x19 + 0x20,lVar11);
                uVar10 = thunk_FUN_02dd3144(*unaff_x29);
                FUN_048a0634(uVar10,0,*unaff_x28,0);
                lVar11 = FUN_0365c730(*(undefined8 *)puVar2,uVar10,4,
                                      **(undefined8 **)(*unaff_x27 + 0xb8),*unaff_x26);
                if ((lVar11 != 0) &&
                   (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                   lVar12 == 0)) goto LAB_059bf3a0;
                puVar4 = Mono_Security_PKCS7_SignerInfo_TypeInfo;
                puVar6 = OvrAvatarSkinnedRenderable_AnimationDataCompletionHandler_TypeInfo;
                puVar5 = Oculus_Avatar2_OvrAvatarManager_FootPlantData_TypeInfo;
                puVar3 = 
                Oculus_Avatar2_Experimental_OvrAvatarLegsController_<LerpFootRotation>d__32_TypeInfo
                ;
                puVar2 = Oculus_Avatar2_OvrAvatarEntity_<>c__DisplayClass241_0_TypeInfo;
                if (0x1d < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0x21] = lVar11;
                  LeanTween__value(unaff_x19 + 0x21,lVar11);
                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                               Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo
                                             );
                  FUN_048a088c(uVar10,0,*(undefined8 *)
                                         Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo,0
                              );
                  lVar11 = FUN_0365c8ec(*(undefined8 *)puVar4,uVar10,2,0,*(undefined8 *)puVar5);
                  if ((lVar11 != 0) &&
                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar12 == 0)) goto LAB_059bf3a0;
                  puVar9 = System_ParameterizedStrings_LowLevelStack_TypeInfo;
                  puVar8 = 
                  Oculus_Skinning_GpuSkinning_OvrExpandableTextureArray_ArrayGrowthEventHandler_TypeInfo
                  ;
                  puVar7 = Oculus_Avatar2_OvrAvatarManager_MeshData_TypeInfo;
                  puVar4 = Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass155_0_TypeInfo;
                  if (0x1e < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x22] = lVar11;
                    LeanTween__value(unaff_x19 + 0x22,lVar11);
                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                    FUN_048a06fc(uVar10,0,*(undefined8 *)puVar7,0);
                    lVar11 = FUN_0365c7c4(*(undefined8 *)puVar9,uVar10,1,0,*(undefined8 *)puVar4);
                    if ((lVar11 != 0) &&
                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar12 == 0)) goto LAB_059bf3a0;
                    puVar9 = UnityEngine_UIElements_Painter2D_Painter2DJobData_TypeInfo;
                    puVar8 = Oculus_Skinning_GpuSkinning_OvrGpuSkinnerMorphTargetsOnly_<>c_TypeInfo;
                    puVar7 = Oculus_Avatar2_OvrAvatarManager_RigInfo_TypeInfo;
                    puVar4 = 
                    Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_<>c__DisplayClass32_0_TypeInfo;
                    if ((*(uint *)(unaff_x19 + 3) & 0xffffffe0) != 0) {
                      unaff_x19[0x23] = lVar11;
                      LeanTween__value(unaff_x19 + 0x23,lVar11);
                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                      FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar7,0);
                      lVar11 = FUN_0365c6a0(*(undefined8 *)puVar9,uVar10,3,1,*unaff_x21,
                                            *(undefined8 *)puVar4);
                      if ((lVar11 != 0) &&
                         (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar12 == 0)) goto LAB_059bf3a0;
                      puVar9 = 
                      UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                      ;
                      puVar8 = 
                      Oculus_Skinning_GpuSkinning_OvrGpuSkinnerMorphTargetsOnlyDrawCall_PerBlockData_TypeInfo
                      ;
                      puVar7 = Oculus_Avatar2_OvrAvatarEntity_ProfilerMarkers_TypeInfo;
                      puVar4 = 
                      Oculus_Avatar2_OvrAvatarEntity_<BuildNewPrimitiveRenderablesASync>d__322_TypeInfo
                      ;
                      if (0x20 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x24] = lVar11;
                        LeanTween__value(unaff_x19 + 0x24,lVar11);
                        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                        FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar4,0);
                        lVar11 = FUN_0365c6a0(*(undefined8 *)puVar9,uVar10,2,1,*unaff_x21,
                                              *(undefined8 *)puVar7);
                        if ((lVar11 != 0) &&
                           (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar12 == 0)) goto LAB_059bf3a0;
                        puVar4 = 
                        Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo;
                        if (0x21 < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x25] = lVar11;
                          LeanTween__value(unaff_x19 + 0x25,lVar11);
                          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                          FUN_048a088c(uVar10,0,*(undefined8 *)puVar2,0);
                          lVar11 = FUN_0365c8ec(*(undefined8 *)puVar4,uVar10,1,0,
                                                *(undefined8 *)puVar3);
                          if ((lVar11 != 0) &&
                             (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*unaff_x19 + 0x40))
                             , lVar12 == 0)) goto LAB_059bf3a0;
                          puVar4 = 
                          Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo
                          ;
                          puVar6 = 
                          Oculus_Avatar2_OvrAvatarShaderConfiguration_<>c__DisplayClass51_0_TypeInfo
                          ;
                          puVar3 = Oculus_Avatar2_OvrAvatarPrimitive_<FindTextures>d__154_TypeInfo;
                          puVar2 = Oculus_Avatar2_OvrAvatarManager_AvatarMeshLoadHandler_TypeInfo;
                          if (0x22 < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x26] = lVar11;
                            LeanTween__value(unaff_x19 + 0x26,lVar11);
                            uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                            FUN_048a088c(uVar10,0,*(undefined8 *)puVar3,0);
                            lVar11 = FUN_0365c8ec(*(undefined8 *)puVar4,uVar10,1,0,
                                                  *(undefined8 *)puVar2);
                            if ((lVar11 != 0) &&
                               (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)),
                               lVar12 == 0)) goto LAB_059bf3a0;
                            puVar2 = Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo;
                            if (0x23 < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x27] = lVar11;
                              LeanTween__value(unaff_x19 + 0x27,lVar11);
                              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                      
                                                  Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo
                                                  );
                              FUN_048a088c(uVar10,0,*(undefined8 *)
                                                                                                          
                                                  Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo
                                           ,0);
                              lVar11 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar10,1,0,
                                                    *(undefined8 *)puVar5);
                              if ((lVar11 != 0) &&
                                 (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                 lVar12 == 0)) goto LAB_059bf3a0;
                              puVar6 = Mono_Security_PKCS7_EncryptedData_TypeInfo;
                              puVar5 = 
                              Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_MorphsOnlyMutator_TypeInfo
                              ;
                              puVar3 = 
                              Oculus_Avatar2_OvrAvatarPrimitive_<LoadMaterialAsync>d__147_TypeInfo;
                              puVar2 = Oculus_Avatar2_OvrAvatarManager_BoneTransformInfo_TypeInfo;
                              if (0x24 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059bec6c to 05abed63 has its CatchHandler @ 059bec6c
                       catch() { ... } // from try @ 059bec6c with catch @ 059bec6c
                       catch() { ... } // from try @ 059bed94 with catch @ 059bec6c
                       catch() { ... } // from try @ 059bee58 with catch @ 059bec6c
                       catch() { ... } // from try @ 059bee64 with catch @ 059bec6c
                       catch() { ... } // from try @ 059beea4 with catch @ 059bec6c */
                                unaff_x19[0x28] = lVar11;
                                LeanTween__value(unaff_x19 + 0x28,lVar11);
                                uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                                FUN_048a088c(uVar10,0,*(undefined8 *)puVar3,0);
                                lVar11 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar10,2,0,
                                                      *(undefined8 *)puVar2);
                                if ((lVar11 != 0) &&
                                   (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                   lVar12 == 0)) goto LAB_059bf3a0;
                                puVar4 = Mono_Security_PKCS7_SignedData_TypeInfo;
                                puVar6 = 
                                Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate_TypeInfo;
                                puVar5 = 
                                Oculus_Avatar2_OvrAvatarPrimitive_<>c__DisplayClass142_0_TypeInfo;
                                puVar3 = 
                                Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_SourceTextureMetaData_TypeInfo
                                ;
                                puVar2 = PTR_DAT_069fb9e8;
                                if (0x25 < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x29] = lVar11;
                                  LeanTween__value(unaff_x19 + 0x29,lVar11);
                                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                  FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar5,0);
                                  lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,uVar10,2,1,
                                                        *(undefined8 *)puVar2,*(undefined8 *)puVar3)
                                  ;
                    /* try { // try from 059bed64 to 05abed7f has its CatchHandler @ 059bee74 */
                                  if ((lVar11 != 0) &&
                                     (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                     lVar12 == 0)) goto LAB_059bf3a0;
                                  puVar9 = PauseMenuController_<BuildSceneList>d__25_TypeInfo;
                                  puVar8 = 
                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinnerJointsOnly_<>c__DisplayClass4_0_TypeInfo
                                  ;
                                  puVar7 = 
                                  Oculus_Avatar2_OvrAvatarPrimitive_<_WaitForCancellation>d__137_TypeInfo
                                  ;
                                  puVar4 = 
                                  Oculus_Avatar2_OvrAvatarImage_<LoadTextureAsync>d__21_TypeInfo;
                                  if (0x26 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059bed84 to 05abed93 has its CatchHandler @ 059bee70 */
                    /* try { // try from 059bed94 to 05abede7 has its CatchHandler @ 059bec6c */
                                    unaff_x19[0x2a] = lVar11;
                                    LeanTween__value(unaff_x19 + 0x2a,lVar11);
                                    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                                    FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar7,0);
                                    lVar11 = FUN_0365c6a0(*(undefined8 *)puVar9,uVar10,1,0,
                                                          *unaff_x21,*(undefined8 *)puVar4);
                    /* try { // try from 059bede8 to 05abee17 has its CatchHandler @ 059bee6c */
                                    if ((lVar11 != 0) &&
                                       (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40)),
                                       lVar12 == 0)) goto LAB_059bf3a0;
                                    puVar4 = 
                                    Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo
                                    ;
                                    if (0x27 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059bee18 to 05abee2f has its CatchHandler @ 059bee68 */
                                      unaff_x19[0x2b] = lVar11;
                                      LeanTween__value(unaff_x19 + 0x2b,lVar11);
                    /* try { // try from 059bee30 to 05abee57 has its CatchHandler @ 059bee64 */
                                      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                      
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinner_<>c__DisplayClass4_0_TypeInfo
                                                  );
                                      FUN_048a0ae4(uVar10,0,*(undefined8 *)
                                                                                                                          
                                                  Oculus_Avatar2_OvrAvatarEntity_<LoadAsyncCoroutine_BuildPrimitives_Internal>d__325_TypeInfo
                                                  ,0);
                    /* try { // try from 059bee58 to 05abee5f has its CatchHandler @ 059bec6c */
                    /* try { // try from 059bee60 to 05abee63 has its CatchHandler @ 059bee70 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bee30 with catch @ 059bee64
                       try { // try from 059bee64 to 05abee8f has its CatchHandler @ 059bec6c */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bee18 with catch @ 059bee68
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bede8 with catch @ 059bee6c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bed84 with catch @ 059bee70
                       catch(type#1 @ 066567d8) { ... } // from try @ 059bee60 with catch @ 059bee70
                        */
                                      lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,uVar10,3,1,
                                                            *unaff_x21,
                                                            *(undefined8 *)
                                                                                                                          
                                                  Oculus_Avatar2_OvrAvatarImage_<>c__DisplayClass24_0_TypeInfo
                                                  );
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059bed64 with catch @ 059bee74
                        */
                                      if ((lVar11 != 0) &&
                                         (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40)),
                                         lVar12 == 0)) goto LAB_059bf3a0;
                                      puVar9 = 
                                      Oculus_Skinning_GpuSkinning_OvrGpuMorphTargetsCombiner_ArrayGrowthEventHandler_TypeInfo
                                      ;
                                      puVar8 = 
                                      Oculus_Avatar2_OvrAvatarPrimitive_<StartLoad>d__131_TypeInfo;
                                      puVar7 = 
                                      Oculus_Avatar2_OvrAvatarImage_<>c__DisplayClass24_1_TypeInfo;
                                      puVar4 = OVRPlugin_OVRP_1_129_0_TypeInfo;
                    /* try { // try from 059bee90 to 05abee93 has its CatchHandler @ 059bee98 */
                    /* catch() { ... } // from try @ 059bee90 with catch @ 059bee98 */
                                      if (0x28 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059bee9c to 05abeea3 has its CatchHandler @ 059beeac */
                    /* try { // try from 059beea4 to 05abeeaf has its CatchHandler @ 059bec6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059bee9c with catch @ 059beeac
                        */
                    /* try { // try from 059beeb0 to 05abefbb has its CatchHandler @ 059beeb0
                       catch() { ... } // from try @ 059beeb0 with catch @ 059beeb0
                       catch() { ... } // from try @ 059bf134 with catch @ 059beeb0
                       catch() { ... } // from try @ 059bf1b4 with catch @ 059beeb0
                       catch() { ... } // from try @ 059bf1d4 with catch @ 059beeb0
                       catch() { ... } // from try @ 059bf240 with catch @ 059beeb0 */
                                        unaff_x19[0x2c] = lVar11;
                                        LeanTween__value(unaff_x19 + 0x2c,lVar11);
                                        uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                        FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar8,0);
                                        lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,uVar10,3,1,
                                                              *unaff_x21,*(undefined8 *)puVar7);
                                        if ((lVar11 != 0) &&
                                           (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                           , lVar12 == 0)) goto LAB_059bf3a0;
                                        puVar9 = 
                                        Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo
                                        ;
                                        puVar8 = 
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
                                          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
                                          FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar7,0);
                                          lVar11 = FUN_0365c6a0(*(undefined8 *)puVar9,uVar10,3,1,
                                                                *unaff_x21,*(undefined8 *)puVar4);
                                          if ((lVar11 != 0) &&
                                             (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  )), lVar12 == 0))
                                          goto LAB_059bf3a0;
                                          puVar4 = System_IO_Path_<>c_TypeInfo;
                                          if (0x2a < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059befbc to 05abefd3 has its CatchHandler @ 059bf208 */
                                            unaff_x19[0x2e] = lVar11;
                                            LeanTween__value(unaff_x19 + 0x2e,lVar11);
                    /* try { // try from 059befd8 to 05abefeb has its CatchHandler @ 059bf200 */
                                            uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                                            FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar5,0);
                                            lVar11 = FUN_0365c6a0(*(undefined8 *)puVar4,uVar10,1,1,
                                                                  *(undefined8 *)puVar2,
                                                                  *(undefined8 *)puVar3);
                    /* try { // try from 059bf018 to 05abf02f has its CatchHandler @ 059bf204 */
                                            if ((lVar11 != 0) &&
                                               (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40)),
                                               lVar12 == 0)) goto LAB_059bf3a0;
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
                    /* try { // try from 059bf034 to 05abf047 has its CatchHandler @ 059bf1fc */
                                            if (0x2b < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059bf05c to 05abf06b has its CatchHandler @ 059bf1ec */
                                              unaff_x19[0x2f] = lVar11;
                                              LeanTween__value(unaff_x19 + 0x2f,lVar11);
                                              uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                    /* try { // try from 059bf078 to 05abf083 has its CatchHandler @ 059bf1e8 */
                                              FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar2,0);
                    /* try { // try from 059bf088 to 05abf093 has its CatchHandler @ 059bf1d8 */
                    /* try { // try from 059bf094 to 05abf0ab has its CatchHandler @ 059bf1e4 */
                                              lVar11 = FUN_0365c6a0(*(undefined8 *)puVar6,uVar10,2,1
                                                                    ,*unaff_x21,
                                                                    *(undefined8 *)puVar3);
                    /* try { // try from 059bf0b0 to 05abf0bb has its CatchHandler @ 059bf1d4 */
                                              if ((lVar11 != 0) &&
                                                 (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40)),
                                                 lVar12 == 0)) goto LAB_059bf3a0;
                                              puVar6 = 
                                              Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_1_TypeInfo
                                              ;
                                              puVar5 = Oculus_Avatar2_OvrTime_SliceStep_TypeInfo;
                                              puVar3 = 
                                              Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider_TypeInfo
                                              ;
                                              puVar2 = 
                                              Oculus_Avatar2_OvrAvatarImage_ProfilerMarkers_TypeInfo
                                              ;
                                              if (0x2c < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059bf0c4 to 05abf0cf has its CatchHandler @ 059bf1e0 */
                    /* try { // try from 059bf0dc to 05abf0f3 has its CatchHandler @ 059bf1f8 */
                                                unaff_x19[0x30] = lVar11;
                                                LeanTween__value(unaff_x19 + 0x30,lVar11);
                    /* try { // try from 059bf0f8 to 05abf10b has its CatchHandler @ 059bf1f4 */
                                                uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                                                FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar5,0);
                                                lVar11 = FUN_0365c6a0(*(undefined8 *)puVar6,uVar10,3
                                                                      ,1,*unaff_x21,
                                                                      *(undefined8 *)puVar2);
                                                if ((lVar11 != 0) &&
                                                   (lVar12 = thunk_FUN_02dd3048(lVar11,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar12 == 0))
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
                                                  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_048a0ae4(uVar10,0,*(undefined8 *)puVar6,0);
                                                  lVar11 = FUN_0365c6a0(*(undefined8 *)puVar2,uVar10
                                                                        ,3,1,*unaff_x21,
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
LAB_059bf398:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


