/*
FUNCTION_NAME: FUN_066f2c14
ENTRY_POINT: 066f2c14
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x066f3700) */
/* WARNING: Removing unreachable block (ram,0x066f36f4) */

void FUN_066f2c14(undefined8 param_1,long param_2,long param_3,undefined4 param_4,
                 undefined1 (*param_5) [16])

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_150;
  long **pplStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  long local_110;
  long *local_108;
  undefined4 local_fc;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long *local_68;
  
  if ((DAT_0755827a & 1) == 0) {
    FUN_03188a78(OVRMeshRenderer_TypeInfo);
    FUN_03188a78(OVRMixedReality_TypeInfo);
    FUN_03188a78(System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
    FUN_03188a78(OVRLipSyncDebugConsole_TypeInfo);
    FUN_03188a78(Photon_Realtime_ClientState_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(OVRMixedRealityCaptureConfiguration_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_DebugManager_TypeInfo);
    FUN_03188a78(OVRNativeBuffer_TypeInfo);
    FUN_03188a78(OVRNodeStateProperties_TypeInfo);
    FUN_03188a78(OVROverlay_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_MouseOverEvent_TypeInfo);
    FUN_03188a78(Mono_Math_BigInteger___TypeInfo);
    FUN_03188a78(OVROverlayCanvas_TypeInfo);
    FUN_03188a78(OVROverlayCanvasManager_TypeInfo);
    FUN_03188a78(OVROverlayCanvasSettings_TypeInfo);
    FUN_03188a78(System_Net_Mail_MailAddress_TypeInfo);
    FUN_03188a78(OVROverlayCanvas_TMPChanged_TypeInfo);
    FUN_03188a78(OVRPassthroughColorLut_TypeInfo);
    FUN_03188a78(OVRLocatable_TypeInfo);
    FUN_03188a78(OVRManager_TypeInfo);
    FUN_03188a78(OVRPassthroughLayer_TypeInfo);
    DAT_0755827a = 1;
  }
  local_80 = 0;
  local_c0 = 0;
  local_68 = (long *)0x0;
  local_f8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_fc = 0;
  local_110 = 0;
  local_108 = (long *)0x0;
  if ((param_3 != 0) &&
     (lVar9 = FUN_066c5ab4(param_3,*(undefined8 *)
                                    System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo),
     puVar5 = System_Net_Mail_MailAddress_TypeInfo, lVar9 != 0)) {
    local_80 = *(undefined4 *)(lVar9 + 0x128);
    uStack_a8 = *(undefined8 *)(lVar9 + 0x100);
    local_b0 = *(undefined8 *)(lVar9 + 0xf8);
    uVar17 = *(undefined8 *)(lVar9 + 0x160);
    uStack_98 = *(ulong *)(lVar9 + 0x110);
    local_a0 = *(undefined8 *)(lVar9 + 0x108);
    uStack_88 = *(undefined8 *)(lVar9 + 0x120);
    local_90 = *(undefined8 *)(lVar9 + 0x118);
    if (*(int *)(*(long *)OVRLipSyncDebugConsole_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    puVar6 = OVRManager_TypeInfo;
    puVar4 = OVRLocatable_TypeInfo;
    FUN_069bba54(&local_b0,4,0);
    uStack_98 = uStack_98 & 0xffffffff;
    uStack_128 = uStack_88;
    local_130 = local_90;
    local_120 = local_80;
    pplStack_148 = (long **)uStack_a8;
    uStack_138 = uStack_98;
    uStack_140 = local_a0;
    local_150 = uVar17;
    local_b0 = uVar17;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uStack_188 = pplStack_148;
    local_190 = local_150;
    uStack_178 = uStack_138;
    uStack_180 = uStack_140;
    uStack_168 = uStack_128;
    local_170 = local_130;
    local_160 = local_120;
    auVar18 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                        (param_2,&local_190,*(undefined8 *)puVar6,1,0,1,0);
    *param_5 = auVar18;
    uStack_e8 = *(undefined8 *)(lVar9 + 0x100);
    local_f0 = *(undefined8 *)(lVar9 + 0xf8);
    uStack_d8 = *(undefined8 *)(lVar9 + 0x110);
    local_e0 = *(undefined8 *)(lVar9 + 0x108);
    uStack_c8 = *(undefined8 *)(lVar9 + 0x120);
    local_d0 = *(undefined8 *)(lVar9 + 0x118);
    local_c0 = *(undefined4 *)(lVar9 + 0x128);
    uVar17 = *(undefined8 *)(lVar9 + 0x160);
    FUN_069bba54(&local_f0,0,0);
    uStack_d8 = CONCAT44(param_4,(undefined4)uStack_d8);
    uStack_1b8 = uStack_d8;
    local_1c0 = local_e0;
    uStack_1a8 = uStack_c8;
    uStack_1b0 = local_d0;
    local_1a0 = local_c0;
    uStack_1c8 = uStack_e8;
    local_1d0 = uVar17;
    local_f0 = uVar17;
    auVar18 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                        (param_2,&local_1d0,*(undefined8 *)puVar4,0,0,1,0);
    uVar17 = FUN_066c690c(param_1,0);
    puVar5 = Photon_Realtime_ClientState_TypeInfo;
    if (param_2 != 0) {
      plVar10 = (long *)FUN_03c04e30(param_2,*(undefined8 *)OVRPassthroughColorLut_TypeInfo,
                                     &local_f8,uVar17,*(undefined8 *)OVRPassthroughLayer_TypeInfo,
                                     0xb5,*(undefined8 *)OVRNodeStateProperties_TypeInfo);
      pplStack_148 = &local_68;
      local_150 = 0;
      local_68 = plVar10;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_066f2fa4;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar5,2);
LAB_066f2fa4:
      (*(code *)*puVar11)(plVar10,1,puVar11[1]);
      plVar10 = local_68;
      puVar4 = UnityEngine_Rendering_DebugManager_TypeInfo;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_68;
      uVar17 = *(undefined8 *)*param_5;
      uVar1 = *(undefined8 *)(*param_5 + 8);
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)UnityEngine_Rendering_DebugManager_TypeInfo) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_066f3014;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_031c0d08(local_68,*(long *)UnityEngine_Rendering_DebugManager_TypeInfo,0);
LAB_066f3014:
      (*(code *)*puVar11)(plVar10,uVar17,uVar1,0,2,puVar11[1]);
      lVar12 = local_f8;
      local_fc = 1;
      auVar19 = FUN_066480cc(param_2,lVar9 + 0xd8,&local_fc,0);
      plVar10 = local_68;
      lVar14 = local_f8;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      *(undefined1 (*) [12])(lVar12 + 0x10) = auVar19;
      if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_68;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 9) * 0x10 + 0x138);
            goto LAB_066f30bc;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(local_68,*(long *)puVar5,9);
LAB_066f30bc:
      (*(code *)*puVar11)(plVar10,lVar14 + 0x10,puVar11[1]);
      plVar10 = local_68;
      puVar6 = OVROverlayCanvasSettings_TypeInfo;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_68;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_066f3134;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(local_68,*(long *)puVar4,4);
LAB_066f3134:
      (*(code *)*puVar11)(plVar10,auVar18._0_8_,auVar18._8_8_,3,puVar11[1]);
      if (*(int *)(*(long *)Mono_Math_BigInteger___TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (DAT_075577a7 == '\0') {
        FUN_03188a78(PTR_DAT_070f3548);
        DAT_075577a7 = '\x01';
      }
      puVar4 = PTR_DAT_070f3548;
      if (*(int *)(*(long *)PTR_DAT_070f3548 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (DAT_075577a8 == '\0') {
        FUN_03188a78(PTR_DAT_070f3548);
        DAT_075577a8 = '\x01';
      }
      iVar3 = (uint)*(ushort *)(*param_5 + 2) << 0x10;
      if (*(ushort *)(*param_5 + 2) != 0) {
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar12 = *(long *)puVar4;
        }
        piVar13 = *(int **)(lVar12 + 0xb8);
        if (iVar3 != *piVar13) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            piVar13 = *(int **)(*(long *)puVar4 + 0xb8);
          }
          if (iVar3 != piVar13[1]) goto LAB_066f329c;
        }
        plVar10 = local_68;
        puVar4 = UnityEngine_UIElements_MouseOverEvent_TypeInfo;
        lVar12 = *(long *)UnityEngine_UIElements_MouseOverEvent_TypeInfo;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar12 = *(long *)puVar4;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar14 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        uVar2 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0xe0);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_066f3288;
            }
            uVar15 = uVar15 - 1;
                    /* try { // try from 066f3260 to 067f336f has its CatchHandler @ 066f3260
                       catch() { ... } // from try @ 066f3260 with catch @ 066f3260
                       catch() { ... } // from try @ 066f3464 with catch @ 066f3260
                       catch() { ... } // from try @ 066f349c with catch @ 066f3260
                       catch() { ... } // from try @ 066f34e0 with catch @ 066f3260
                       catch() { ... } // from try @ 066f3504 with catch @ 066f3260 */
            piVar13 = piVar13 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar5,3);
LAB_066f3288:
        (*(code *)*puVar11)(plVar10,param_5,uVar2,puVar11[1]);
      }
LAB_066f329c:
      plVar10 = local_68;
      lVar12 = *(long *)puVar6;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar12 = *(long *)puVar6;
      }
      puVar11 = *(undefined8 **)(lVar12 + 0xb8);
      lVar14 = puVar11[1];
      if (lVar14 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar11 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
        }
        uVar17 = *puVar11;
        lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)OVRMeshRenderer_TypeInfo);
        FUN_04a59b8c(lVar14,uVar17,*(undefined8 *)OVROverlayCanvas_TypeInfo,0);
        *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = lVar14;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar10;
      lVar16 = *(long *)OVRMixedRealityCaptureConfiguration_TypeInfo;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_066f3370;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      lVar12 = FUN_031c0d08(plVar10);
LAB_066f3370:
                    /* try { // try from 066f3370 to 067f3383 has its CatchHandler @ 066f34b4 */
      lVar12 = thunk_FUN_031a5ef4(*(undefined8 *)(lVar12 + 8),lVar16);
                    /* try { // try from 066f338c to 067f339f has its CatchHandler @ 066f34b0 */
      (**(code **)(lVar12 + 8))(plVar10,lVar14,lVar12);
      plVar10 = local_68;
      puVar4 = PTR_DAT_070c2e88;
      if (local_68 != (long *)0x0) {
        lVar12 = *local_68;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
                    /* try { // try from 066f33c4 to 067f33eb has its CatchHandler @ 066f34c0 */
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_070c2e88) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_066f33f4;
            }
            uVar15 = uVar15 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_031c0d08(local_68,*(long *)PTR_DAT_070c2e88,0);
LAB_066f33f4:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      puVar8 = OVROverlayCanvas_TMPChanged_TypeInfo;
      puVar7 = OVROverlay_TypeInfo;
                    /* try { // try from 066f3404 to 067f3407 has its CatchHandler @ 066f34bc */
      uVar17 = FUN_066c690c(param_1,0);
                    /* try { // try from 066f3420 to 067f343f has its CatchHandler @ 066f349c */
      plVar10 = (long *)FUN_03c051c0(param_2,*(undefined8 *)puVar8,&local_110,uVar17,
                                     *(undefined8 *)OVRPassthroughLayer_TypeInfo,0xcd,
                                     *(undefined8 *)puVar7);
      pplStack_148 = &local_108;
      local_150 = 0;
                    /* try { // try from 066f3458 to 067f3463 has its CatchHandler @ 066f34bc */
      local_108 = plVar10;
      if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar17 = *(undefined8 *)*param_5;
                    /* try { // try from 066f3464 to 067f3487 has its CatchHandler @ 066f3260 */
      *(undefined8 *)(local_110 + 0x24) = *(undefined8 *)(*param_5 + 8);
      *(undefined8 *)(local_110 + 0x1c) = uVar17;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* try { // try from 066f3488 to 067f348b has its CatchHandler @ 066f34b8 */
                    /* try { // try from 066f348c to 067f348f has its CatchHandler @ 066f34ac */
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                    /* catch() { ... } // from try @ 066f348c with catch @ 066f34ac */
                    /* catch() { ... } // from try @ 066f338c with catch @ 066f34b0 */
                    /* catch() { ... } // from try @ 066f3370 with catch @ 066f34b4 */
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_066f34b8;
          }
                    /* try { // try from 066f3490 to 067f3493 has its CatchHandler @ 066f34a8 */
          uVar15 = uVar15 - 1;
                    /* try { // try from 066f3494 to 067f3497 has its CatchHandler @ 066f34a4 */
          piVar13 = piVar13 + 4;
                    /* try { // try from 066f3498 to 067f349b has its CatchHandler @ 066f34a0 */
        } while (uVar15 != 0);
      }
                    /* catch() { ... } // from try @ 066f3420 with catch @ 066f349c
                       try { // try from 066f349c to 067f34db has its CatchHandler @ 066f3260 */
                    /* catch() { ... } // from try @ 066f3498 with catch @ 066f34a0 */
                    /* catch() { ... } // from try @ 066f3494 with catch @ 066f34a4 */
      puVar11 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar5,0);
                    /* catch() { ... } // from try @ 066f3490 with catch @ 066f34a8 */
LAB_066f34b8:
                    /* catch() { ... } // from try @ 066f3488 with catch @ 066f34b8 */
                    /* catch() { ... } // from try @ 066f3404 with catch @ 066f34bc
                       catch() { ... } // from try @ 066f3458 with catch @ 066f34bc */
                    /* catch() { ... } // from try @ 066f33c4 with catch @ 066f34c0 */
      (*(code *)*puVar11)(plVar10,param_5,2,puVar11[1]);
      lVar12 = local_110;
      local_fc = 2;
                    /* try { // try from 066f34dc to 067f34df has its CatchHandler @ 066f34f8 */
                    /* try { // try from 066f34e0 to 067f34fb has its CatchHandler @ 066f3260 */
      auVar19 = FUN_066480cc(param_2,lVar9 + 0xd8,&local_fc,0);
      plVar10 = local_108;
      lVar9 = local_110;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
                    /* catch() { ... } // from try @ 066f34dc with catch @ 066f34f8 */
      *(undefined1 (*) [12])(lVar12 + 0x10) = auVar19;
                    /* try { // try from 066f34fc to 067f3503 has its CatchHandler @ 066f350c */
      if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
                    /* try { // try from 066f3504 to 067f350f has its CatchHandler @ 066f3260 */
      if (local_108 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar12 = *local_108;
                    /* catch() { ... } // from try @ 066f34fc with catch @ 066f350c */
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 9) * 0x10 + 0x138);
            goto LAB_066f3558;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_031c0d08(local_108,*(long *)puVar5,9);
LAB_066f3558:
      (*(code *)*puVar11)(plVar10,lVar9 + 0x10,puVar11[1]);
      plVar10 = local_108;
      lVar9 = *(long *)puVar6;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar9 = *(long *)puVar6;
      }
      puVar11 = *(undefined8 **)(lVar9 + 0xb8);
      lVar12 = puVar11[2];
      if (lVar12 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          puVar11 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
        }
        uVar17 = *puVar11;
        lVar12 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                           (*(undefined8 *)OVRMixedReality_TypeInfo);
        FUN_04a59a40(lVar12,uVar17,*(undefined8 *)OVROverlayCanvasManager_TypeInfo,0);
        *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = lVar12;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar9 = *plVar10;
      lVar14 = *(long *)OVRNativeBuffer_TypeInfo;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(lVar14 + 0x20)) {
            lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
            goto LAB_066f363c;
          }
          uVar15 = uVar15 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar15 != 0);
      }
      lVar9 = FUN_031c0d08(plVar10);
LAB_066f363c:
      lVar9 = thunk_FUN_031a5ef4(*(undefined8 *)(lVar9 + 8),lVar14);
      (**(code **)(lVar9 + 8))(plVar10,lVar12,lVar9);
      plVar10 = local_108;
      if (local_108 != (long *)0x0) {
        lVar9 = *local_108;
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_066f36b8;
            }
            uVar15 = uVar15 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_031c0d08(local_108,*(long *)puVar4,0);
LAB_066f36b8:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


