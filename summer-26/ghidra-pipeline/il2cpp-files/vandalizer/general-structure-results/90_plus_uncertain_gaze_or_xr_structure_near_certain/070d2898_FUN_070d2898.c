/*
FUNCTION_NAME: FUN_070d2898
ENTRY_POINT: 070d2898
PROGRAM: vandalizer-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_8;functionality_gaze_retrieval_or_extraction
*/


void FUN_070d2898(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar5 = param_1;
  if ((DAT_07a5a9be & 1) == 0) {
    FUN_031f20f4(OVRSceneManager_Metrics_TypeInfo);
    FUN_031f20f4(OVRSceneManager_RoomLayoutInformation_TypeInfo);
    FUN_031f20f4(OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo);
    FUN_031f20f4(OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo);
    FUN_031f20f4(OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
    FUN_031f20f4(OVRScreenFade_<Fade>d__25_TypeInfo);
    FUN_031f20f4(OVRSkeleton_BoneId_TypeInfo);
    FUN_031f20f4(OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo);
    FUN_031f20f4(OVRSkeletonRenderer_BoneVisualization_TypeInfo);
    FUN_031f20f4(OVRSkeletonRenderer_CapsuleVisualization_TypeInfo);
    FUN_031f20f4(OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_TypeInfo);
                    /* catch() { ... } // from try @ 070d296c with catch @ 070d294c
                       catch() { ... } // from try @ 070d2990 with catch @ 070d294c */
    FUN_031f20f4(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_031f20f4(OVRSpace_StorageLocation_TypeInfo);
                    /* try { // try from 070d2968 to 071d296b has its CatchHandler @ 070d297c */
    FUN_031f20f4(OVRSpatialAnchor_<>c_TypeInfo);
                    /* try { // try from 070d296c to 071d298b has its CatchHandler @ 070d294c */
    lVar5 = FUN_031f20f4(OVRSpatialAnchor_<>c__DisplayClass65_0_TypeInfo);
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 070d2968 with catch @ 070d297c
                        */
    DAT_07a5a9be = 1;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) goto LAB_070d2db4;
                    /* try { // try from 070d298c to 071d298f has its CatchHandler @ 070d29a8 */
  if (*(char *)(lVar9 + 0x3b) != '\0') {
                    /* try { // try from 070d2990 to 071d29b3 has its CatchHandler @ 070d294c */
    local_60 = *(undefined8 *)(param_2 + 8);
    uStack_78 = *(ulong *)(param_2 + 2);
    local_80 = *(undefined8 *)param_2;
    uStack_68 = *(undefined8 *)(param_2 + 6);
    uStack_70 = *(undefined8 *)(param_2 + 4);
                    /* catch() { ... } // from try @ 070d298c with catch @ 070d29a8 */
    uVar6 = thunk_FUN_0322ed78(*(undefined8 *)OVRSkeleton_BoneId_TypeInfo,&local_80);
                    /* try { // try from 070d29b4 to 071d29bb has its CatchHandler @ 070d29bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 070d29b4 with catch @ 070d29bc
                        */
    lVar5 = FUN_070d128c(lVar9,uVar6);
  }
  uVar4 = FUN_070d2df0(lVar5,param_2[8]);
  puVar3 = OVRPlugin_TrackingConfidence_TypeInfo;
  iVar1 = *param_2;
  iVar2 = (uint)(param_2[6] != 0) << 1;
  if (param_2[6] == 1) {
    iVar2 = 1;
  }
  if (iVar1 == 3) {
    lVar9 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar3;
    }
    lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x48);
    if (lVar10 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *(long *)puVar3;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                   OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
      FUN_042d09c8(lVar10,uVar6,*(undefined8 *)OVRSkeletonRenderer_BoneVisualization_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
      *plVar7 = lVar10;
LAB_070d2b54:
      thunk_FUN_0329bf60(plVar7,lVar10);
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return;
      }
      if (DAT_07a3ca88 == '\0') {
        FUN_031f20f4(PTR_DAT_0759ba78);
        DAT_07a3ca88 = '\x01';
      }
      puVar3 = OVRPlugin_TrackingConfidence_TypeInfo;
      iVar1 = param_2[1];
      fVar12 = **(float **)(*(long *)PTR_DAT_0759ba78 + 0xb8);
      fVar11 = (*(float **)(*(long *)PTR_DAT_0759ba78 + 0xb8))[1];
      fVar13 = fVar11;
      if (iVar1 == 1) {
        fVar14 = -1.0;
      }
      else {
        fVar14 = fVar12;
        if (iVar1 == 2) {
          fVar13 = 1.0;
        }
        else if (iVar1 == 3) {
          fVar14 = 1.0;
        }
        else {
          fVar13 = -1.0;
          if (iVar1 != 4) {
            fVar13 = fVar11;
          }
        }
      }
      if (DAT_014ba560 <=
          (fVar14 - fVar12) * (fVar14 - fVar12) + (fVar13 - fVar11) * (fVar13 - fVar11)) {
        lVar9 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
        if (lVar10 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar5 = *(long *)puVar3;
          }
          uVar6 = **(undefined8 **)(lVar5 + 0xb8);
          lVar10 = thunk_FUN_0322f148(*(undefined8 *)OVRScreenFade_<Fade>d__25_TypeInfo);
          FUN_042d0f6c(lVar10,uVar6,*(undefined8 *)OVRSkeletonRenderer_CapsuleVisualization_TypeInfo
                       ,0);
          plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
          *plVar7 = lVar10;
          thunk_FUN_0329bf60(plVar7,lVar10);
        }
        local_80 = 0;
        uStack_78 = 0;
        FUN_05317938(fVar14,fVar13,&local_80,iVar2,uVar4,
                     *(undefined8 *)OVRSpatialAnchor_<>c_TypeInfo);
        if (lVar9 != 0) {
          FUN_03d9eb70(lVar9,lVar10,local_80,uStack_78,
                       *(undefined8 *)OVRSceneModelLoader_<>c__DisplayClass9_0_TypeInfo);
          return;
        }
      }
      else {
        lVar9 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
        uVar8 = 5;
        if (param_2[1] == 6) {
          uVar8 = 6;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *(long *)puVar3;
        }
        lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
        if (lVar10 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar5 = *(long *)puVar3;
          }
          uVar6 = **(undefined8 **)(lVar5 + 0xb8);
          lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                       OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7_TypeInfo);
          FUN_042d0e00(lVar10,uVar6,
                       *(undefined8 *)OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_TypeInfo,
                       0);
          plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          *plVar7 = lVar10;
          thunk_FUN_0329bf60(plVar7,lVar10);
        }
        uStack_78 = uStack_78 & 0xffffffff00000000;
        local_80 = 0;
        FUN_0530d560(&local_80,uVar8,iVar2,uVar4,
                     *(undefined8 *)OVRSpatialAnchor_<>c__DisplayClass65_0_TypeInfo);
        if (lVar9 != 0) {
          FUN_03d9e05c(lVar9,lVar10,local_80,uStack_78 & 0xffffffff,
                       *(undefined8 *)OVRSceneManager_RoomLayoutInformation_TypeInfo);
          return;
        }
      }
      goto LAB_070d2db4;
    }
    lVar9 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *(long *)puVar3;
    }
    lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
    if (lVar10 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *(long *)puVar3;
      }
      uVar6 = **(undefined8 **)(lVar5 + 0xb8);
      lVar10 = thunk_FUN_0322f148(*(undefined8 *)
                                   OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
      FUN_042d09c8(lVar10,uVar6,*(undefined8 *)OVRSkeleton_IOVRSkeletonDataProvider_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
      *plVar7 = lVar10;
      goto LAB_070d2b54;
    }
  }
  local_80 = 0;
  FUN_052e80a4(&local_80,iVar2,uVar4,*(undefined8 *)OVRSpace_StorageLocation_TypeInfo);
  if (lVar9 != 0) {
    FUN_03d9dae8(lVar9,lVar10,local_80,*(undefined8 *)OVRSceneManager_Metrics_TypeInfo);
    return;
  }
LAB_070d2db4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


