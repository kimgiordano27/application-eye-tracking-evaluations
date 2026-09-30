/*
FUNCTION_NAME: System.Xml.Schema.Preprocessor$$Execute
ENTRY_POINT: 059bde34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 204
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6;functionality_data_collection_or_telemetry_hits_3
*/


void System_Xml_Schema_Preprocessor__Execute
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar12;
  long *unaff_x19;
  undefined8 uVar13;
  undefined8 *unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_048a088c(param_1,0,param_3,0);
  lVar10 = FUN_0365c8ec(*unaff_x25,param_1,4,0,*unaff_x26);
  if ((lVar10 != 0) &&
     (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0)) {
LAB_059bf3a0:
    uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar12,0);
  }
  puVar2 = System_Net_Http_Headers_Parser_DateTime_TypeInfo;
  if (10 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0xe] = lVar10;
    LeanTween__value(unaff_x19 + 0xe,lVar10);
    uVar12 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_048a0ae4(uVar12,0,*unaff_x27,0);
    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar2,uVar12,4,1,*unaff_x21,*unaff_x24);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
    goto LAB_059bf3a0;
    puVar2 = UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
    ;
                    /* try { // try from 059bdef0 to 05abdf9f has its CatchHandler @ 059bdef0
                       catch() { ... } // from try @ 059bdef0 with catch @ 059bdef0
                       catch() { ... } // from try @ 059be080 with catch @ 059bdef0
                       catch() { ... } // from try @ 059be0dc with catch @ 059bdef0
                       catch() { ... } // from try @ 059be0f4 with catch @ 059bdef0
                       catch() { ... } // from try @ 059be14c with catch @ 059bdef0 */
    if (0xb < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0xf] = lVar10;
      LeanTween__value(unaff_x19 + 0xf,lVar10);
      uVar12 = thunk_FUN_02dd3144(*unaff_x28);
      FUN_048a0ae4(uVar12,0,*unaff_x27,0);
      lVar10 = FUN_0365c6a0(*(undefined8 *)puVar2,uVar12,4,1,*unaff_x21,*unaff_x24);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
      goto LAB_059bf3a0;
      puVar6 = Oculus_Avatar2_OvrAvatarPrimitive_VertexBufferAccessor_TypeInfo;
      puVar5 = Oculus_Avatar2_OvrAvatarManager_OnShutdown_TypeInfo;
      puVar3 = Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass196_0_TypeInfo;
      puVar2 = PTR_DAT_06a0db58;
      if (0xc < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x10] = lVar10;
                    /* try { // try from 059bdfa0 to 05abdfbb has its CatchHandler @ 059be114 */
        LeanTween__value(unaff_x19 + 0x10,lVar10);
        uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                    /* try { // try from 059bdfbc to 05abdfc3 has its CatchHandler @ 059be108 */
        FUN_048a07c4(uVar12,0,*(undefined8 *)puVar5,0);
                    /* try { // try from 059bdfd4 to 05abdfdb has its CatchHandler @ 059be100 */
        lVar10 = FUN_0365c858(*(undefined8 *)puVar2,uVar12,4,0,*(undefined8 *)puVar3);
                    /* try { // try from 059bdfec to 05abdffb has its CatchHandler @ 059be11c */
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
        goto LAB_059bf3a0;
        puVar6 = Assets_Scripts_Player_<Simulate>d__107_TypeInfo;
        puVar5 = Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo;
        puVar3 = Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo;
        puVar2 = Oculus_Avatar2_OvrAvatarManager_FootPlantData_TypeInfo;
        if (0xd < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059be000 to 05abe007 has its CatchHandler @ 059be0fc */
                    /* try { // try from 059be018 to 05abe01f has its CatchHandler @ 059be0f4 */
          unaff_x19[0x11] = lVar10;
          LeanTween__value(unaff_x19 + 0x11,lVar10);
                    /* try { // try from 059be030 to 05abe03f has its CatchHandler @ 059be118 */
          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
          FUN_048a088c(uVar12,0,*(undefined8 *)puVar5,0);
                    /* try { // try from 059be04c to 05abe053 has its CatchHandler @ 059be110 */
          lVar10 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar12,4,0,*(undefined8 *)puVar2);
                    /* try { // try from 059be074 to 05abe07f has its CatchHandler @ 059be10c */
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
          goto LAB_059bf3a0;
          puVar6 = System_Net_PathList_PathListComparer_TypeInfo;
          puVar5 = Oculus_Skinning_GpuSkinning_OvrFreeListBufferTracker_LayoutResult_TypeInfo;
          puVar3 = Oculus_Avatar2_OvrAvatarManager_PuppeteerInfo_TypeInfo;
          puVar2 = Oculus_Avatar2_OvrAvatarLog_AssertStaticMessageBuilder_TypeInfo;
                    /* try { // try from 059be080 to 05abe0d7 has its CatchHandler @ 059bdef0 */
          if (0xe < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0x12] = lVar10;
            LeanTween__value(unaff_x19 + 0x12,lVar10);
            uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
            FUN_048a088c(uVar12,0,*(undefined8 *)puVar3,0);
                    /* try { // try from 059be0d8 to 05abe0db has its CatchHandler @ 059be114 */
                    /* try { // try from 059be0dc to 05abe0e3 has its CatchHandler @ 059bdef0 */
                    /* try { // try from 059be0e4 to 05abe0e7 has its CatchHandler @ 059be104 */
                    /* try { // try from 059be0e8 to 05abe0eb has its CatchHandler @ 059be0f8 */
                    /* try { // try from 059be0ec to 05abe0ef has its CatchHandler @ 059be110 */
            lVar10 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar12,4,0,*(undefined8 *)puVar2);
                    /* try { // try from 059be0f0 to 05abe0f3 has its CatchHandler @ 059be10c */
                    /* catch() { ... } // from try @ 059be018 with catch @ 059be0f4
                       try { // try from 059be0f4 to 05abe137 has its CatchHandler @ 059bdef0 */
                    /* catch() { ... } // from try @ 059be0e8 with catch @ 059be0f8 */
                    /* catch() { ... } // from try @ 059be000 with catch @ 059be0fc */
                    /* catch() { ... } // from try @ 059bdfd4 with catch @ 059be100 */
                    /* catch() { ... } // from try @ 059be0e4 with catch @ 059be104 */
                    /* catch() { ... } // from try @ 059bdfbc with catch @ 059be108 */
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0)
               ) goto LAB_059bf3a0;
            puVar6 = 
            UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_ConnectionChangeEvent_TypeInfo
            ;
            puVar5 = Oculus_Avatar2_OvrAvatarProfilingUtils_Categories_TypeInfo;
            puVar3 = Oculus_Avatar2_OvrAvatarLog_LogFilterDelegate_TypeInfo;
            puVar2 = 
            Oculus_Avatar2_OvrAvatarEntity_<LoadAsync_BuildPrimitives_Internal>d__327_TypeInfo;
                    /* catch() { ... } // from try @ 059be074 with catch @ 059be10c
                       catch() { ... } // from try @ 059be0f0 with catch @ 059be10c */
                    /* catch() { ... } // from try @ 059be04c with catch @ 059be110
                       catch() { ... } // from try @ 059be0ec with catch @ 059be110 */
                    /* catch() { ... } // from try @ 059bdfa0 with catch @ 059be114
                       catch() { ... } // from try @ 059be0d8 with catch @ 059be114 */
            if ((*(uint *)(unaff_x19 + 3) & 0xfffffff0) != 0) {
                    /* catch() { ... } // from try @ 059be030 with catch @ 059be118 */
                    /* catch() { ... } // from try @ 059bdfec with catch @ 059be11c */
                    /* try { // try from 059be138 to 05abe13b has its CatchHandler @ 059be140 */
                    /* catch() { ... } // from try @ 059be138 with catch @ 059be140 */
              unaff_x19[0x13] = lVar10;
                    /* try { // try from 059be144 to 05abe14b has its CatchHandler @ 059be154 */
              LeanTween__value(unaff_x19 + 0x13,lVar10);
                    /* try { // try from 059be14c to 05abe157 has its CatchHandler @ 059bdef0 */
              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                    /* catch() { ... } // from try @ 059be144 with catch @ 059be154 */
                    /* try { // try from 059be158 to 05abe1db has its CatchHandler @ 059be158
                       catch() { ... } // from try @ 059be158 with catch @ 059be158
                       catch() { ... } // from try @ 059be250 with catch @ 059be158
                       catch() { ... } // from try @ 059be2b0 with catch @ 059be158
                       catch() { ... } // from try @ 059be308 with catch @ 059be158 */
              FUN_048a088c(uVar12,0,*(undefined8 *)puVar2,0);
              lVar10 = FUN_0365c8ec(*(undefined8 *)puVar6,uVar12,4,0,*(undefined8 *)puVar3);
              if ((lVar10 != 0) &&
                 (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)),
                 lVar11 == 0)) goto LAB_059bf3a0;
              puVar6 = Oculus_Avatar2_OvrAvatarPrimitive_ProfilerMarkers_TypeInfo;
              puVar5 = Oculus_Avatar2_OvrAvatarManager_RequestDelegate_TypeInfo;
              puVar3 = Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass305_0_TypeInfo;
              puVar2 = PTR_DAT_069ff558;
              if (0x10 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0x14] = lVar10;
                LeanTween__value(unaff_x19 + 0x14,lVar10);
                uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
                    /* try { // try from 059be1dc to 05abe1e3 has its CatchHandler @ 059be2c8 */
                FUN_048a088c(uVar12,0,*(undefined8 *)puVar5,0);
                lVar10 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar12,4,0,*(undefined8 *)puVar3);
                if ((lVar10 != 0) &&
                   (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)),
                   lVar11 == 0)) goto LAB_059bf3a0;
                puVar4 = 
                Oculus_Skinning_GpuSkinning_OvrComputeAnimatorBuffer_JointsOnlyMutator_TypeInfo;
                puVar6 = Oculus_Avatar2_OvrAvatarLog_UILogListenerDelegate_TypeInfo;
                puVar5 = Oculus_Avatar2_OvrAvatarEntity_AvatarLoadFailedEvent_TypeInfo;
                puVar3 = 
                Oculus_Avatar2_OvrAvatarEntity_<LoadAsync_BuildSkeletonAndPrimitives>d__312_TypeInfo
                ;
                puVar2 = Unity_Networking_QoS_UcgQosServer_var;
                if (0x11 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059be23c to 05abe243 has its CatchHandler @ 059be2c0 */
                    /* try { // try from 059be248 to 05abe24f has its CatchHandler @ 059be2bc */
                    /* try { // try from 059be250 to 05abe29b has its CatchHandler @ 059be158 */
                  unaff_x19[0x15] = lVar10;
                  LeanTween__value(unaff_x19 + 0x15,lVar10);
                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                  FUN_048a0634(uVar12,0,*(undefined8 *)puVar3,0);
                  lVar10 = *(long *)puVar5;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    lVar10 = *(long *)puVar5;
                  }
                    /* try { // try from 059be29c to 05abe29f has its CatchHandler @ 059be2d4 */
                    /* try { // try from 059be2a0 to 05abe2a3 has its CatchHandler @ 059be2d0 */
                    /* try { // try from 059be2a4 to 05abe2a7 has its CatchHandler @ 059be2cc */
                    /* try { // try from 059be2a8 to 05abe2ab has its CatchHandler @ 059be2c4 */
                    /* try { // try from 059be2ac to 05abe2af has its CatchHandler @ 059be2b8 */
                    /* try { // try from 059be2b0 to 05abe2ef has its CatchHandler @ 059be158 */
                  lVar10 = FUN_0365c730(*(undefined8 *)puVar2,uVar12,3,
                                        **(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar6);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be2ac with catch @ 059be2b8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be248 with catch @ 059be2bc
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be23c with catch @ 059be2c0
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be2a8 with catch @ 059be2c4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be1dc with catch @ 059be2c8
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be2a4 with catch @ 059be2cc
                        */
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)),
                     lVar11 == 0)) goto LAB_059bf3a0;
                  puVar8 = UnityEngine_UIElements_PanelSettings_RuntimePanelAccess_TypeInfo;
                  puVar9 = Oculus_Avatar2_OvrAvatarPrimitive_MeshInfo_TypeInfo;
                  puVar7 = Oculus_Avatar2_OvrAvatarManager_<>c_TypeInfo;
                  puVar2 = Oculus_Avatar2_OvrAvatarEntity_LoadingStateEvent_TypeInfo;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be2a0 with catch @ 059be2d0
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 059be29c with catch @ 059be2d4
                        */
                  if (0x12 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 059be2f0 to 05abe2f3 has its CatchHandler @ 059be2fc */
                    /* catch() { ... } // from try @ 059be2f0 with catch @ 059be2fc */
                    /* try { // try from 059be300 to 05abe307 has its CatchHandler @ 059be310 */
                    unaff_x19[0x16] = lVar10;
                    /* try { // try from 059be308 to 05abe313 has its CatchHandler @ 059be158 */
                    LeanTween__value(unaff_x19 + 0x16,lVar10);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059be300 with catch @ 059be310
                        */
                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                    FUN_048a088c(uVar12,0,*(undefined8 *)puVar2,0);
                    lVar10 = FUN_0365c8ec(*(undefined8 *)puVar8,uVar12,2,0,*(undefined8 *)puVar7);
                    if ((lVar10 != 0) &&
                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)),
                       lVar11 == 0)) goto LAB_059bf3a0;
                    puVar8 = 
                    Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass11_0_TypeInfo
                    ;
                    puVar9 = Oculus_Skinning_OvrSkinningTypes_Handle_TypeInfo;
                    puVar7 = Oculus_Avatar2_OvrAvatarMaterialExtension_ExtensionEntries_TypeInfo;
                    puVar2 = 
                    Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_<BuildTextures>d__27_TypeInfo;
                    if (0x13 < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0x17] = lVar10;
                      LeanTween__value(unaff_x19 + 0x17,lVar10);
                      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                      FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar7,0);
                      lVar10 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar12,1,1,*unaff_x21,
                                            *(undefined8 *)puVar2);
                      if ((lVar10 != 0) &&
                         (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)),
                         lVar11 == 0)) goto LAB_059bf3a0;
                      puVar2 = 
                      Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo;
                      if (0x14 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x18] = lVar10;
                        LeanTween__value(unaff_x19 + 0x18,lVar10);
                        uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                        FUN_048a0634(uVar12,0,*(undefined8 *)puVar3,0);
                        lVar10 = FUN_0365c730(*(undefined8 *)puVar2,uVar12,4,
                                              **(undefined8 **)(*(long *)puVar5 + 0xb8),
                                              *(undefined8 *)puVar6);
                        if ((lVar10 != 0) &&
                           (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40)),
                           lVar11 == 0)) goto LAB_059bf3a0;
                        puVar8 = Oculus_Avatar2_PlatformHelperUtils_AndroidSysProperties_TypeInfo;
                        puVar9 = 
                        Oculus_Avatar2_OvrAvatarPrimitive_OvrAvatarGpuSkinnedPrimitiveBuilder_TypeInfo
                        ;
                        puVar7 = Oculus_Avatar2_OvrAvatarManager_CachedEntityInfo_TypeInfo;
                        puVar2 = Oculus_Avatar2_OvrAvatarEntity_EntityLoadingStateEvent_TypeInfo;
                        if (0x15 < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x19] = lVar10;
                          LeanTween__value(unaff_x19 + 0x19,lVar10);
                          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                          FUN_048a088c(uVar12,0,*(undefined8 *)puVar2,0);
                          lVar10 = FUN_0365c8ec(*(undefined8 *)puVar8,uVar12,1,0,
                                                *(undefined8 *)puVar7);
                          if ((lVar10 != 0) &&
                             (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*unaff_x19 + 0x40))
                             , lVar11 == 0)) goto LAB_059bf3a0;
                          puVar8 = Oculus_Avatar2_OvrAvatarManager_LoadRequest_TypeInfo;
                          puVar2 = OVRPlugin_OVRP_1_128_0_TypeInfo;
                          if (0x16 < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x1a] = lVar10;
                            LeanTween__value(unaff_x19 + 0x1a,lVar10);
                            uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                            FUN_048a088c(uVar12,0,*(undefined8 *)puVar8,0);
                            lVar10 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar12,1,0,
                                                  *(undefined8 *)puVar7);
                            if ((lVar10 != 0) &&
                               (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40)),
                               lVar11 == 0)) goto LAB_059bf3a0;
                            puVar8 = UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo;
                            puVar9 = 
                            Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider_TypeInfo;
                            puVar7 = Oculus_Avatar2_OvrAvatarEntity_SkeletonJoint_TypeInfo;
                            puVar2 = Oculus_Avatar2_OvrAvatarEntity_PrimitiveRenderData_TypeInfo;
                            if (0x17 < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x1b] = lVar10;
                              LeanTween__value(unaff_x19 + 0x1b,lVar10);
                              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                              FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar2,0);
                              lVar10 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar12,1,1,*unaff_x21,
                                                    *(undefined8 *)puVar7);
                              if ((lVar10 != 0) &&
                                 (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40)),
                                 lVar11 == 0)) goto LAB_059bf3a0;
                              puVar8 = 
                              Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo
                              ;
                              if (0x18 < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x1c] = lVar10;
                                LeanTween__value(unaff_x19 + 0x1c,lVar10);
                                uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                FUN_048a0634(uVar12,0,*(undefined8 *)puVar3,0);
                                lVar10 = FUN_0365c730(*(undefined8 *)puVar8,uVar12,1,
                                                      **(undefined8 **)(*(long *)puVar5 + 0xb8),
                                                      *(undefined8 *)puVar6);
                                if ((lVar10 != 0) &&
                                   (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40)),
                                   lVar11 == 0)) goto LAB_059bf3a0;
                                puVar8 = 
                                Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo
                                ;
                                if (0x19 < *(uint *)(unaff_x19 + 3)) {
                                  unaff_x19[0x1d] = lVar10;
                                  LeanTween__value(unaff_x19 + 0x1d,lVar10);
                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                  FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar2,0);
                                  lVar10 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar12,1,1,*unaff_x21,
                                                        *(undefined8 *)puVar7);
                                  if ((lVar10 != 0) &&
                                     (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40)),
                                     lVar11 == 0)) goto LAB_059bf3a0;
                                  puVar8 = PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo;
                                  puVar9 = Oculus_Avatar2_OvrAvatarPrimitive_MaterialInfo_TypeInfo;
                                  puVar7 = 
                                  Oculus_Avatar2_OvrAvatarPrimitive_<>c__DisplayClass143_0_TypeInfo;
                                  puVar2 = 
                                  Oculus_Avatar2_OvrAvatarManager_AvatarFootFallEvent_TypeInfo;
                                  if (0x1a < *(uint *)(unaff_x19 + 3)) {
                                    unaff_x19[0x1e] = lVar10;
                                    LeanTween__value(unaff_x19 + 0x1e,lVar10);
                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                    FUN_048a088c(uVar12,0,*(undefined8 *)puVar7,0);
                                    lVar10 = FUN_0365c8ec(*(undefined8 *)puVar8,uVar12,1,0,
                                                          *(undefined8 *)puVar2);
                                    if ((lVar10 != 0) &&
                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40)),
                                       lVar11 == 0)) goto LAB_059bf3a0;
                                    puVar2 = 
                                    UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
                                    ;
                                    if (0x1b < *(uint *)(unaff_x19 + 3)) {
                                      unaff_x19[0x1f] = lVar10;
                                      LeanTween__value(unaff_x19 + 0x1f,lVar10);
                                      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                      FUN_048a0634(uVar12,0,*(undefined8 *)puVar3,0);
                                      lVar10 = FUN_0365c730(*(undefined8 *)puVar2,uVar12,1,
                                                            **(undefined8 **)
                                                              (*(long *)puVar5 + 0xb8),
                                                            *(undefined8 *)puVar6);
                                      if ((lVar10 != 0) &&
                                         (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40)),
                                         lVar11 == 0)) goto LAB_059bf3a0;
                                      puVar2 = Assets_Scripts_Player_<>c__DisplayClass103_0_TypeInfo
                                      ;
                                      if (0x1c < *(uint *)(unaff_x19 + 3)) {
                                        unaff_x19[0x20] = lVar10;
                                        LeanTween__value(unaff_x19 + 0x20,lVar10);
                                        uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
                                        FUN_048a0634(uVar12,0,*(undefined8 *)puVar3,0);
                                        lVar10 = FUN_0365c730(*(undefined8 *)puVar2,uVar12,4,
                                                              **(undefined8 **)
                                                                (*(long *)puVar5 + 0xb8),
                                                              *(undefined8 *)puVar6);
                                        if ((lVar10 != 0) &&
                                           (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                           , lVar11 == 0)) goto LAB_059bf3a0;
                                        puVar4 = Mono_Security_PKCS7_SignerInfo_TypeInfo;
                                        puVar6 = 
                                        OvrAvatarSkinnedRenderable_AnimationDataCompletionHandler_TypeInfo
                                        ;
                                        puVar5 = 
                                        Oculus_Avatar2_OvrAvatarManager_FootPlantData_TypeInfo;
                                        puVar3 = 
                                        Oculus_Avatar2_Experimental_OvrAvatarLegsController_<LerpFootRotation>d__32_TypeInfo
                                        ;
                                        puVar2 = 
                                        Oculus_Avatar2_OvrAvatarEntity_<>c__DisplayClass241_0_TypeInfo
                                        ;
                                        if (0x1d < *(uint *)(unaff_x19 + 3)) {
                                          unaff_x19[0x21] = lVar10;
                                          LeanTween__value(unaff_x19 + 0x21,lVar10);
                                          uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                              
                                                  Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo
                                                  );
                                          FUN_048a088c(uVar12,0,*(undefined8 *)
                                                                                                                                  
                                                  Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo
                                                  ,0);
                                          lVar10 = FUN_0365c8ec(*(undefined8 *)puVar4,uVar12,2,0,
                                                                *(undefined8 *)puVar5);
                                          if ((lVar10 != 0) &&
                                             (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  )), lVar11 == 0))
                                          goto LAB_059bf3a0;
                                          puVar8 = 
                                          System_ParameterizedStrings_LowLevelStack_TypeInfo;
                                          puVar9 = 
                                          Oculus_Skinning_GpuSkinning_OvrExpandableTextureArray_ArrayGrowthEventHandler_TypeInfo
                                          ;
                                          puVar7 = Oculus_Avatar2_OvrAvatarManager_MeshData_TypeInfo
                                          ;
                                          puVar4 = 
                                          Oculus_Avatar2_OvrAvatarManager_<>c__DisplayClass155_0_TypeInfo
                                          ;
                                          if (0x1e < *(uint *)(unaff_x19 + 3)) {
                                            unaff_x19[0x22] = lVar10;
                                            LeanTween__value(unaff_x19 + 0x22,lVar10);
                                            uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                            FUN_048a06fc(uVar12,0,*(undefined8 *)puVar7,0);
                                            lVar10 = FUN_0365c7c4(*(undefined8 *)puVar8,uVar12,1,0,
                                                                  *(undefined8 *)puVar4);
                                            if ((lVar10 != 0) &&
                                               (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40)),
                                               lVar11 == 0)) goto LAB_059bf3a0;
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
                                            if ((*(uint *)(unaff_x19 + 3) & 0xffffffe0) != 0) {
                                              unaff_x19[0x23] = lVar10;
                                              LeanTween__value(unaff_x19 + 0x23,lVar10);
                                              uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                              FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar7,0);
                                              lVar10 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar12,3,1
                                                                    ,*unaff_x21,
                                                                    *(undefined8 *)puVar4);
                                              if ((lVar10 != 0) &&
                                                 (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40)),
                                                 lVar11 == 0)) goto LAB_059bf3a0;
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
                                                unaff_x19[0x24] = lVar10;
                                                LeanTween__value(unaff_x19 + 0x24,lVar10);
                                                uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
                                                FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar4,0);
                                                lVar10 = FUN_0365c6a0(*(undefined8 *)puVar8,uVar12,2
                                                                      ,1,*unaff_x21,
                                                                      *(undefined8 *)puVar7);
                                                if ((lVar10 != 0) &&
                                                   (lVar11 = thunk_FUN_02dd3048(lVar10,*(undefined8
                                                                                         *)(*
                                                  unaff_x19 + 0x40)), lVar11 == 0))
                                                goto LAB_059bf3a0;
                                                puVar4 = 
                                                Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
                                                ;
                                                if (0x21 < *(uint *)(unaff_x19 + 3)) {
                                                  unaff_x19[0x25] = lVar10;
                                                  LeanTween__value(unaff_x19 + 0x25,lVar10);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_048a088c(uVar12,0,*(undefined8 *)puVar2,0);
                                                  lVar10 = FUN_0365c8ec(*(undefined8 *)puVar4,uVar12
                                                                        ,1,0,*(undefined8 *)puVar3);
                                                  if ((lVar10 != 0) &&
                                                     (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x26] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x26,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_048a088c(uVar12,0,*(undefined8 *)puVar3,0);
                                                    lVar10 = FUN_0365c8ec(*(undefined8 *)puVar4,
                                                                          uVar12,1,0,
                                                                          *(undefined8 *)puVar2);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar2 = 
                                                  Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo
                                                  ;
                                                  if (0x23 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x27] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x27,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Avatar2_OvrAvatarResourceLoader_<LoadResourceAsync>d__26_TypeInfo
                                                  );
                                                  FUN_048a088c(uVar12,0,*(undefined8 *)
                                                                                                                                                  
                                                  Oculus_Skinning_OvrSkinningTypes_SkinningQuality_TypeInfo
                                                  ,0);
                                                  lVar10 = FUN_0365c8ec(*(undefined8 *)puVar2,uVar12
                                                                        ,1,0,*(undefined8 *)puVar5);
                                                  if ((lVar10 != 0) &&
                                                     (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x28] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x28,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a088c(uVar12,0,*(undefined8 *)puVar3,0);
                                                    lVar10 = FUN_0365c8ec(*(undefined8 *)puVar6,
                                                                          uVar12,2,0,
                                                                          *(undefined8 *)puVar2);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x29] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x29,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar5,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar4,
                                                                          uVar12,2,1,
                                                                          *(undefined8 *)puVar2,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x2a] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x2a,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar9);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar7,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar8,
                                                                          uVar12,1,0,*unaff_x21,
                                                                          *(undefined8 *)puVar4);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = 
                                                  Unity_Services_CloudSave_Internal_PlayerDataService_<>c_TypeInfo
                                                  ;
                                                  if (0x27 < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2b] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x2b,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                                                                                                  
                                                  Oculus_Skinning_GpuSkinning_OvrGpuSkinner_<>c__DisplayClass4_0_TypeInfo
                                                  );
                                                  FUN_048a0ae4(uVar12,0,*(undefined8 *)
                                                                                                                                                  
                                                  Oculus_Avatar2_OvrAvatarEntity_<LoadAsyncCoroutine_BuildPrimitives_Internal>d__325_TypeInfo
                                                  ,0);
                                                  lVar10 = FUN_0365c6a0(*(undefined8 *)puVar4,uVar12
                                                                        ,3,1,*unaff_x21,
                                                                        *(undefined8 *)
                                                                                                                                                  
                                                  Oculus_Avatar2_OvrAvatarImage_<>c__DisplayClass24_0_TypeInfo
                                                  );
                                                  if ((lVar10 != 0) &&
                                                     (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x2c] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x2c,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar9,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar4,
                                                                          uVar12,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar7);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x2d] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x2d,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar9);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar7,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar8,
                                                                          uVar12,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar4);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar4 = System_IO_Path_<>c_TypeInfo;
                                                  if (0x2a < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x2e] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x2e,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar5,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar4,
                                                                          uVar12,1,1,
                                                                          *(undefined8 *)puVar2,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x2f] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x2f,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar2,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar6,
                                                                          uVar12,2,1,*unaff_x21,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x30] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x30,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar5,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar6,
                                                                          uVar12,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar2);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x31] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x31,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar6,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar2,
                                                                          uVar12,3,1,*unaff_x21,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
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
                                                    unaff_x19[0x32] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x32,lVar10);
                                                    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_048a0ae4(uVar12,0,*(undefined8 *)puVar2,0);
                                                    lVar10 = FUN_0365c6a0(*(undefined8 *)puVar6,
                                                                          uVar12,2,1,*unaff_x21,
                                                                          *(undefined8 *)puVar3);
                                                    if ((lVar10 != 0) &&
                                                       (lVar11 = thunk_FUN_02dd3048(lVar10,*(
                                                  undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
                                                  goto LAB_059bf3a0;
                                                  puVar2 = PTR_DAT_06a1c780;
                                                  if (0x2f < *(uint *)(unaff_x19 + 3)) {
                                                    unaff_x19[0x33] = lVar10;
                                                    LeanTween__value(unaff_x19 + 0x33,lVar10);
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
                                                  lVar10 = *(long *)puVar2;
                                                  if (*(int *)(lVar10 + 0xe4) == 0) {
                                                    thunk_FUN_02df485c();
                                                    lVar10 = *(long *)puVar2;
                                                  }
                                                  uVar13 = *(undefined8 *)
                                                            (*(long *)(lVar10 + 0xb8) + 0x18);
                                                  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04e928a0(uVar12,uVar13,*(undefined8 *)puVar5);
                                                  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar12
                                                  ;
                                                  LeanTween__value(*(undefined8 *)
                                                                    (*(long *)puVar3 + 0xb8),uVar12)
                                                  ;
                                                  puVar2 = 
                                                  Oculus_Avatar2_OvrAvatarEntity_AvatarStateEvent_TypeInfo
                                                  ;
                                                  uVar1 = *(uint *)(unaff_x19 + 3);
                                                  if (0 < (int)uVar1) {
                                                    lVar10 = 0;
                                                    do {
                                                      if (uVar1 <= (uint)lVar10) goto LAB_059bf398;
                                                      lVar11 = unaff_x19[lVar10 + 4];
                                                      if (lVar11 == 0) {
LAB_059bf39c:
                    /* WARNING: Subroutine does not return */
                                                        FUN_02d96860();
                                                      }
                                                      if (**(long **)(*(long *)puVar3 + 0xb8) == 0)
                                                      goto LAB_059bf39c;
                                                      FUN_04e935f0(**(long **)(*(long *)puVar3 +
                                                                              0xb8),
                                                                   *(undefined8 *)(lVar11 + 0x18),
                                                                   lVar11,*(undefined8 *)puVar2);
                                                      uVar1 = *(uint *)(unaff_x19 + 3);
                                                      lVar10 = lVar10 + 1;
                                                    } while ((int)lVar10 < (int)uVar1);
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
LAB_059bf398:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


