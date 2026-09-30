/*
FUNCTION_NAME: FUN_070d1a30
ENTRY_POINT: 070d1a30
PROGRAM: vandalizer-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;functionality_gaze_retrieval_or_extraction
*/


void FUN_070d1a30(long param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *__src;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  undefined1 auStack_350 [96];
  undefined1 auStack_2f0 [96];
  undefined1 auStack_290 [96];
  undefined1 auStack_230 [96];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  
  __src = auStack_350;
  if ((DAT_07a5a9bd & 1) == 0) {
    FUN_031f20f4(OVRPlugin_Size3f_TypeInfo);
    FUN_031f20f4(OVRPlugin_Sizef_TypeInfo);
    FUN_031f20f4(MyBox_ColliderGizmoPreset_TypeInfo);
    FUN_031f20f4(OVRPlugin_Sizei_TypeInfo);
    FUN_031f20f4(OVRPlugin_SkeletonType_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759d370);
    FUN_031f20f4(PTR_DAT_075d88c8);
    FUN_031f20f4(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_031f20f4(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_031f20f4(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_031f20f4(OVRPlugin_TrackedKeyboardFlags_TypeInfo);
    FUN_031f20f4(OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo);
    FUN_031f20f4(OVRPlugin_TrackingConfidence_TypeInfo);
    FUN_031f20f4(OVRPlugin_UnityOpenXR_TypeInfo);
    FUN_031f20f4(OVRPlugin_Vector3f_TypeInfo);
    FUN_031f20f4(OVRPlugin_Vector4f_TypeInfo);
    FUN_031f20f4(OVRPlugin_Vector4s_TypeInfo);
    DAT_07a5a9bd = 1;
  }
  puVar5 = MyBox_ColliderGizmoPreset_TypeInfo;
  puVar4 = PTR_DAT_075d88c8;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  iVar18 = param_2[0x14];
  iVar19 = param_2[2];
  iVar17 = param_2[3];
  iVar1 = param_2[8];
  fVar21 = (float)param_2[4];
  fVar20 = (float)param_2[5];
  if (iVar18 == 5) {
    lVar7 = *(long *)PTR_DAT_075d88c8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar4;
    }
    piVar10 = (int *)(*(long *)(lVar7 + 0xb8) + 0xc);
  }
  else {
    lVar7 = *(long *)PTR_DAT_075d88c8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar4;
    }
    if (iVar18 == 4) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb8) + 0x14);
    }
    else {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb8) + 8);
    }
  }
  lVar7 = *(long *)puVar5;
  iVar22 = *piVar10;
  iVar18 = param_2[1];
  lVar13 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar5;
  }
  fVar23 = 0.0;
  if (lVar13 != **(long **)(lVar7 + 0xb8)) {
    lVar13 = *(long *)(param_2 + 0x12);
    lVar14 = *(long *)(param_1 + 0x18);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (DAT_07a5aa1a == '\0') {
                    /* try { // try from 070d1c20 to 071d1d7f has its CatchHandler @ 070d1c20
                       catch() { ... } // from try @ 070d1c20 with catch @ 070d1c20
                       catch() { ... } // from try @ 070d1e34 with catch @ 070d1c20
                       catch() { ... } // from try @ 070d1ecc with catch @ 070d1c20
                       catch() { ... } // from try @ 070d1f5c with catch @ 070d1c20
                       catch() { ... } // from try @ 070d1f8c with catch @ 070d1c20 */
      FUN_031f20f4(MyBox_ColliderGizmoPreset_TypeInfo);
      DAT_07a5aa1a = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar23 = (float)((double)(lVar13 - lVar14) / DAT_014bbc88);
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x12);
  if (*param_2 - 1U < 6) {
    iVar18 = iVar18 + iVar22;
    switch(*param_2) {
    case 1:
      if (DAT_07a3fba2 == '\0') {
        FUN_031f20f4(PTR_DAT_075b9420);
        DAT_07a3fba2 = '\x01';
      }
      fVar15 = ABS(fVar21);
      if (ABS(fVar21) <= 0.0) {
        fVar15 = 0.0;
      }
      fVar16 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) * 8.0;
      fVar3 = fVar15 * DAT_014bab34;
      if (fVar15 * DAT_014bab34 <= fVar16) {
        fVar3 = fVar16;
      }
      if (ABS(0.0 - fVar21) < fVar3) {
        fVar15 = ABS(fVar20);
        if (ABS(fVar20) <= 0.0) {
          fVar15 = 0.0;
        }
        fVar3 = fVar15 * DAT_014bab34;
        if (fVar15 * DAT_014bab34 <= fVar16) {
          fVar3 = fVar16;
        }
        if (ABS(0.0 - fVar20) < fVar3) {
          return;
        }
      }
      lVar13 = *(long *)(param_1 + 0x10);
      local_f8 = 0;
      FUN_04b9f170(&local_f8,iVar1,*(undefined8 *)PTR_DAT_0759d370);
      puVar4 = OVRPlugin_TrackingConfidence_TypeInfo;
      lVar7 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
                    /* try { // try from 070d1d80 to 071d1d87 has its CatchHandler @ 070d1f40 */
        lVar14 = thunk_FUN_0322f148(*(undefined8 *)OVRPlugin_Sizei_TypeInfo);
                    /* try { // try from 070d1d94 to 071d1da7 has its CatchHandler @ 070d1f3c */
        FUN_042e31c4(lVar14,uVar12,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo,0);
                    /* try { // try from 070d1db0 to 071d1dbb has its CatchHandler @ 070d1f38 */
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar9 = lVar14;
        thunk_FUN_0329bf60(plVar9,lVar14);
      }
                    /* try { // try from 070d1dc4 to 071d1dcb has its CatchHandler @ 070d1f2c */
      memcpy(auStack_230,param_2,0x60);
      __src = auStack_230;
      uVar12 = *(undefined8 *)OVRPlugin_Vector3f_TypeInfo;
      break;
    case 2:
                    /* try { // try from 070d1df4 to 071d1e03 has its CatchHandler @ 070d1f28 */
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 != 0) {
        iVar17 = param_2[6];
        iVar18 = param_2[7];
        if (*(char *)(lVar7 + 0x3b) != '\0') {
          local_100 = *(undefined8 *)(param_2 + 6);
          uVar8 = FUN_04baff6c(&local_100,0,0,0);
                    /* try { // try from 070d1e2c to 071d1e33 has its CatchHandler @ 070d1f24 */
                    /* try { // try from 070d1e34 to 071d1eb7 has its CatchHandler @ 070d1c20 */
          uVar8 = FUN_05c7e0d4(*(undefined8 *)OVRPlugin_Vector4s_TypeInfo,uVar8,0);
          FUN_070d128c(lVar7,uVar8);
          lVar7 = *(long *)(param_1 + 0x10);
        }
        lVar13 = *(long *)puVar4;
        iVar22 = param_2[2];
        iVar19 = param_2[3];
        iVar25 = param_2[4];
        iVar24 = param_2[5];
        if (*(int *)(lVar13 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar13 = *(long *)puVar4;
        }
        uVar2 = *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 8);
        local_f8 = 0;
        FUN_04b9f170(&local_f8,iVar1,*(undefined8 *)PTR_DAT_0759d370);
        puVar4 = OVRPlugin_TrackingConfidence_TypeInfo;
        lVar13 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar13 = *(long *)puVar4;
        }
        uVar8 = local_f8;
        lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
                    /* try { // try from 070d1eb8 to 071d1ebb has its CatchHandler @ 070d1f34 */
        if (lVar14 == 0) {
                    /* try { // try from 070d1ebc to 071d1ebf has its CatchHandler @ 070d1f30 */
                    /* try { // try from 070d1ec0 to 071d1ec3 has its CatchHandler @ 070d1f20 */
          if (*(int *)(lVar13 + 0xe4) == 0) {
                    /* try { // try from 070d1ec4 to 071d1ec7 has its CatchHandler @ 070d1f1c */
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    /* try { // try from 070d1ec8 to 071d1ecb has its CatchHandler @ 070d1f18 */
            lVar13 = *(long *)puVar4;
          }
                    /* try { // try from 070d1ecc to 071d1f57 has its CatchHandler @ 070d1c20 */
          uVar12 = **(undefined8 **)(lVar13 + 0xb8);
          lVar14 = thunk_FUN_0322f148(*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
          FUN_042e2fe0(lVar14,uVar12,*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
          *plVar9 = lVar14;
          lVar13 = thunk_FUN_0329bf60(plVar9,lVar14);
        }
                    /* catch() { ... } // from try @ 070d1ec8 with catch @ 070d1f18 */
        uVar6 = FUN_070d2df0(lVar13,param_2[0x16]);
                    /* catch() { ... } // from try @ 070d1ec4 with catch @ 070d1f1c */
                    /* catch() { ... } // from try @ 070d1ec0 with catch @ 070d1f20 */
                    /* catch() { ... } // from try @ 070d1e2c with catch @ 070d1f24 */
                    /* catch() { ... } // from try @ 070d1df4 with catch @ 070d1f28 */
                    /* catch() { ... } // from try @ 070d1dc4 with catch @ 070d1f2c */
                    /* catch() { ... } // from try @ 070d1ebc with catch @ 070d1f30 */
                    /* catch() { ... } // from try @ 070d1eb8 with catch @ 070d1f34 */
                    /* catch() { ... } // from try @ 070d1db0 with catch @ 070d1f38 */
        local_f0 = 0;
                    /* catch() { ... } // from try @ 070d1d94 with catch @ 070d1f3c */
        local_f8 = 0;
                    /* catch() { ... } // from try @ 070d1d80 with catch @ 070d1f40 */
        FUN_052e9cd0(iVar17,iVar18,&local_f8,uVar6,*(undefined8 *)OVRPlugin_UnityOpenXR_TypeInfo);
        if (lVar7 != 0) {
                    /* try { // try from 070d1f58 to 071d1f5b has its CatchHandler @ 070d1f7c */
                    /* try { // try from 070d1f5c to 071d1f83 has its CatchHandler @ 070d1c20 */
                    /* catch() { ... } // from try @ 070d1f58 with catch @ 070d1f7c */
                    /* try { // try from 070d1f84 to 071d1f8b has its CatchHandler @ 070d1fa0 */
          FUN_03da0438(iVar22,iVar19,0,iVar25,iVar24,0,lVar7,uVar2,uVar8,lVar14,local_f8,local_f0,0,
                       *(undefined8 *)OVRPlugin_Size3f_TypeInfo);
          return;
                    /* try { // try from 070d1f8c to 071d1f97 has its CatchHandler @ 070d1c20 */
        }
      }
      goto LAB_070d2398;
    case 3:
      lVar13 = *(long *)(param_1 + 0x10);
                    /* try { // try from 070d1f98 to 071d1f9f has its CatchHandler @ 070d1fa0 */
                    /* catch() { ... } // from try @ 070d1f84 with catch @ 070d1fa0
                       catch() { ... } // from try @ 070d1f98 with catch @ 070d1fa0 */
      local_f8 = 0;
      FUN_04b9f170(&local_f8,iVar1,*(undefined8 *)PTR_DAT_0759d370);
      puVar4 = OVRPlugin_TrackingConfidence_TypeInfo;
      lVar7 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_0322f148(*(undefined8 *)OVRPlugin_Sizei_TypeInfo);
        FUN_042e31c4(lVar14,uVar12,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar9 = lVar14;
        thunk_FUN_0329bf60(plVar9,lVar14);
      }
      memcpy(auStack_290,param_2,0x60);
      uVar12 = *(undefined8 *)OVRPlugin_Vector3f_TypeInfo;
      __src = auStack_290;
      break;
    case 4:
      lVar13 = *(long *)(param_1 + 0x10);
      local_f8 = 0;
      FUN_04b9f170(&local_f8,iVar1,*(undefined8 *)PTR_DAT_0759d370);
      puVar4 = OVRPlugin_TrackingConfidence_TypeInfo;
      lVar7 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_0322f148(*(undefined8 *)OVRPlugin_Sizei_TypeInfo);
        FUN_042e31c4(lVar14,uVar12,*(undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        *plVar9 = lVar14;
        thunk_FUN_0329bf60(plVar9,lVar14);
      }
      memcpy(auStack_2f0,param_2,0x60);
      local_170 = 0;
      uVar12 = *(undefined8 *)OVRPlugin_Vector3f_TypeInfo;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      memcpy(&local_f8,auStack_2f0,0x60);
      FUN_053152cc(fVar23,&local_1d0,&local_f8,iVar18,uVar12);
      if (lVar13 == 0) goto LAB_070d2398;
      uVar11 = *(undefined8 *)OVRPlugin_Sizef_TypeInfo;
      memcpy(&local_f8,&local_1d0,0x68);
      uVar12 = 1;
      goto LAB_070d2364;
    case 5:
      goto switchD_070d1c88_caseD_5;
    case 6:
      lVar13 = *(long *)(param_1 + 0x10);
      local_f8 = 0;
      FUN_04b9f170(&local_f8,iVar1,*(undefined8 *)PTR_DAT_0759d370);
      puVar4 = OVRPlugin_TrackingConfidence_TypeInfo;
      lVar7 = *(long *)OVRPlugin_TrackingConfidence_TypeInfo;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar4;
      }
      uVar8 = local_f8;
      lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar4;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar14 = thunk_FUN_0322f148(*(undefined8 *)OVRPlugin_Sizei_TypeInfo);
        FUN_042e31c4(lVar14,uVar12,*(undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        *plVar9 = lVar14;
        thunk_FUN_0329bf60(plVar9,lVar14);
      }
      memcpy(auStack_350,param_2,0x60);
      uVar12 = *(undefined8 *)OVRPlugin_Vector3f_TypeInfo;
    }
    local_170 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    memcpy(&local_f8,__src,0x60);
    FUN_053152cc(fVar23,&local_1d0,&local_f8,iVar18,uVar12);
    if (lVar13 != 0) {
      uVar11 = *(undefined8 *)OVRPlugin_Sizef_TypeInfo;
      memcpy(&local_f8,&local_1d0,0x68);
      uVar12 = 0;
LAB_070d2364:
      FUN_03da1324(iVar19,iVar17,0,fVar21,fVar20,0,lVar13,iVar18,uVar8,lVar14,&local_f8,uVar12,
                   uVar11);
      return;
    }
  }
  else {
switchD_070d1c88_caseD_5:
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      if (*(char *)(lVar7 + 0x3b) == '\0') {
        return;
      }
      memcpy(&local_160,param_2,0x60);
      uVar8 = FUN_06ed1db0(&local_160,0);
      uVar8 = FUN_05c7e0d4(*(undefined8 *)OVRPlugin_Vector4f_TypeInfo,uVar8,0);
      FUN_070d128c(lVar7,uVar8);
      return;
    }
  }
LAB_070d2398:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


