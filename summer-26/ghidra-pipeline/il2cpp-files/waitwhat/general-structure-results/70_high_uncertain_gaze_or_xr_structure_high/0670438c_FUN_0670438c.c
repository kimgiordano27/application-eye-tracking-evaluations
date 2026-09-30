/*
FUNCTION_NAME: FUN_0670438c
ENTRY_POINT: 0670438c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x06704fe0) */

void FUN_0670438c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  int iVar26;
  double dVar25;
  float fVar27;
  undefined1 auVar28 [16];
  ulong uStack_200;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c4;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_18c;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long **pplStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  
  if ((bRam00000000075582c4 & 1) == 0) {
    FUN_03188a78(Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1980);
    FUN_03188a78(Photon_Realtime_ClientState_TypeInfo);
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarGazeTarget_TypeInfo);
    FUN_03188a78(System_Data_LookupNode_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarGazeTargetManager_TypeInfo);
    FUN_03188a78(System_ObsoleteAttribute_TypeInfo);
    FUN_03188a78(Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_TypeInfo);
    FUN_03188a78(Fusion_Photon_Realtime_Async_OperationHandler_TypeInfo);
                    /* try { // try from 0670444c to 0680465b has its CatchHandler @ 0670444c
                       catch() { ... } // from try @ 0670444c with catch @ 0670444c
                       catch() { ... } // from try @ 0670467c with catch @ 0670444c
                       catch() { ... } // from try @ 06704774 with catch @ 0670444c
                       catch() { ... } // from try @ 067047d4 with catch @ 0670444c
                       catch() { ... } // from try @ 067047fc with catch @ 0670444c
                       catch() { ... } // from try @ 06704828 with catch @ 0670444c
                       catch() { ... } // from try @ 06704854 with catch @ 0670444c
                       catch() { ... } // from try @ 06704878 with catch @ 0670444c */
    FUN_03188a78(System_Net_Mail_MailAddress_TypeInfo);
    FUN_03188a78(POpusCodec_Enums_OpusStatusCode_TypeInfo);
    FUN_03188a78(Oculus_Skinning_GpuSkinning_OvrAvatarGpuSkinnedRenderableBase_TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo);
    FUN_03188a78(UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo);
    bRam00000000075582c4 = 1;
  }
  auStack_74[0] = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if ((*(long *)(param_1 + 0x1d0) != 0) &&
     (plVar10 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x70), plVar10 != (long *)0x0)) {
    iVar7 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else {
      if (iVar7 != 1) {
        thunk_FUN_031edd38(PTR_DAT_070c5c08);
        uVar24 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
        FUN_058a33a0(uVar24,0);
        uVar13 = thunk_FUN_031edd38(Oculus_Avatar2_OvrAvatarImage_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar24,uVar13);
      }
      iVar7 = 2;
    }
    uVar24 = NEON_sshl(*(undefined8 *)(param_1 + 0xb8),CONCAT44(-iVar7,-iVar7),4);
    uStack_200 = NEON_smax(uVar24,0x100000001,4);
    iVar26 = (int)(uStack_200 >> 0x20);
    iVar7 = (int)uStack_200;
    if ((int)uStack_200 <= iVar26) {
      iVar7 = iVar26;
    }
    if (DAT_0754df96 == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_0754df96 = '\x01';
    }
    puVar2 = PTR_DAT_070c22f8;
    if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    dVar25 = (double)FUN_05930534((double)iVar7,0x4000000000000000,0);
    if (DAT_07546c85 == '\0') {
      FUN_03188a78(PTR_DAT_070c22f8);
      DAT_07546c85 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    puVar2 = System_Data_LookupNode_TypeInfo;
    uVar9 = 0x80000000;
    if ((float)(int)((float)dVar25 + -1.0) != INFINITY) {
      uVar9 = (int)((float)dVar25 + -1.0);
    }
    if ((*(long *)(param_1 + 0x1d0) != 0) &&
       (plVar10 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x78), plVar10 != (long *)0x0)) {
      uVar8 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
      uVar1 = uVar9;
      if ((int)uVar8 <= (int)uVar9) {
        uVar1 = uVar8;
      }
      if ((int)uVar9 < 1) {
        uVar1 = 1;
      }
      uVar24 = FUN_03b9c340(0x31,*(undefined8 *)puVar2);
      FUN_065e0fa8(auStack_74,uVar24,0);
      uStack_e0 = 0;
      puStack_d8 = auStack_74;
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x58);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar21 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x40);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
      fVar22 = (float)FUN_069bf798(0);
                    /* try { // try from 0670465c to 06804663 has its CatchHandler @ 06704834 */
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x50);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
                    /* try { // try from 06704678 to 0680467b has its CatchHandler @ 06704830 */
                    /* try { // try from 0670467c to 0680476b has its CatchHandler @ 0670444c */
      fVar23 = (float)(**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
      uStack_78 = 0;
      fVar27 = 1.0;
      if (fVar23 <= 1.0) {
        fVar27 = fVar23;
      }
      uStack_80 = CONCAT44(fVar22 * 0.5,fVar22);
      fVar22 = DAT_012e388c;
      if (0.0 <= fVar23) {
        fVar22 = fVar27 * DAT_012e3460 + DAT_012e388c;
      }
      uStack_88 = CONCAT44(uVar21,fVar22);
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x68);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar6 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
      uStack_78 = CONCAT31(uStack_78._1_3_,uVar6) & 0xffffff01;
      uStack_78 = CONCAT22(uStack_78._2_2_,CONCAT11(param_5,(undefined1)uStack_78)) & 0xffff01ff;
      if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x50);
      uVar9 = FUN_0670d94c((ulong *)(param_1 + 0x268),&uStack_88,0);
      puVar2 = System_ObsoleteAttribute_TypeInfo;
      if (*(int *)(*(long *)System_ObsoleteAttribute_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar8 = FUN_069a3e48(lVar19,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),0);
      if ((uVar9 & uVar8 & 1) == 0) {
        lVar11 = *(long *)puVar2;
                    /* try { // try from 0670476c to 06804773 has its CatchHandler @ 067047dc */
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_031e5338();
                    /* try { // try from 06704774 to 068047cb has its CatchHandler @ 0670444c */
          lVar11 = *(long *)puVar2;
        }
        thunk_FUN_069a5a38(uStack_88 & 0xffffffff,uStack_88._4_4_,uStack_80 & 0xffffffff,
                           uStack_80._4_4_,lVar19,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x48),0
                          );
        uVar9 = uStack_78;
        puVar3 = PTR_DAT_070f1980;
        if (*(int *)(*(long *)PTR_DAT_070f1980 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        puVar5 = UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo;
                    /* try { // try from 067047cc to 068047cf has its CatchHandler @ 0670482c */
                    /* try { // try from 067047d0 to 068047d3 has its CatchHandler @ 067047d8 */
        FUN_066337dc(lVar19,*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo,uVar9 & 1
                     ,0);
        puVar4 = UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo;
                    /* try { // try from 067047d4 to 068047f7 has its CatchHandler @ 0670444c */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 067047d0 with catch @ 067047d8
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0670476c with catch @ 067047dc
                        */
        FUN_066337dc(lVar19,*(undefined8 *)UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo
                     ,uStack_78 >> 8 & 1,0);
                    /* try { // try from 067047f8 to 068047fb has its CatchHandler @ 0670481c */
        uVar18 = 0;
        do {
                    /* try { // try from 067047fc to 0680481f has its CatchHandler @ 0670444c */
          if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar19 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x58);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          if (*(uint *)(lVar19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
                    /* catch() { ... } // from try @ 067047f8 with catch @ 0670481c */
                    /* try { // try from 06704820 to 06804827 has its CatchHandler @ 06704880 */
          lVar19 = *(long *)(lVar19 + uVar18 * 8 + 0x20);
                    /* try { // try from 06704828 to 0680484f has its CatchHandler @ 0670444c */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 067047cc with catch @ 0670482c
                        */
            thunk_FUN_031e5338();
          }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06704678 with catch @ 06704830
                        */
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0670465c with catch @ 06704834
                        */
                    /* try { // try from 06704850 to 06804853 has its CatchHandler @ 0670486c */
                    /* try { // try from 06704854 to 0680486f has its CatchHandler @ 0670444c */
          thunk_FUN_069a5a38(uStack_88 & 0xffffffff,uStack_88._4_4_,uStack_80 & 0xffffffff,
                             uStack_80._4_4_,lVar19,
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),0);
          uVar9 = uStack_78;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 06704850 with catch @ 0670486c */
            thunk_FUN_031e5338();
          }
                    /* try { // try from 06704870 to 06804877 has its CatchHandler @ 06704880 */
                    /* try { // try from 06704878 to 06804883 has its CatchHandler @ 0670444c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06704820 with catch @ 06704880
                       catch(type#2 @ 00000000) { ... } // from try @ 06704870 with catch @ 06704880
                        */
          FUN_066337dc(lVar19,*(undefined8 *)puVar5,uVar9 & 1,0);
                    /* try { // try from 06704884 to 0680498b has its CatchHandler @ 06704884
                       catch() { ... } // from try @ 06704884 with catch @ 06704884
                       catch() { ... } // from try @ 067049f0 with catch @ 06704884
                       catch() { ... } // from try @ 06704a18 with catch @ 06704884
                       catch() { ... } // from try @ 06704a44 with catch @ 06704884
                       catch() { ... } // from try @ 06704a68 with catch @ 06704884 */
          FUN_066337dc(lVar19,*(undefined8 *)puVar4,uStack_78 >> 8 & 1,0);
          uVar18 = uVar18 + 1;
        } while (uVar18 != 0x10);
        *(ulong *)(param_1 + 0x270) = uStack_80;
        *(ulong *)(param_1 + 0x268) = uStack_88;
        *(uint *)(param_1 + 0x278) = uStack_78;
      }
      FUN_066fceb0(&uStack_118,param_1,uStack_200 & 0xffffffff,iVar26,
                   *(undefined4 *)(param_1 + 0x210),0);
      lVar19 = *(long *)(param_1 + 0x138);
      uStack_b8 = uStack_108;
      uStack_c0 = pplStack_110;
      uStack_a8 = uStack_f8;
      uStack_b0 = uStack_100;
      uStack_9c = uStack_ec;
      uStack_a4 = uStack_f4;
      uStack_a0 = uStack_f0;
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (*(long *)(lVar19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar11 = *(long *)(param_1 + 0x150);
      uVar24 = *(undefined8 *)(*(long *)(lVar19 + 0x20) + 0x58);
      if (*(int *)(*(long *)System_Net_Mail_MailAddress_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uStack_14c = (undefined4)uStack_118;
      uStack_148 = uStack_118._4_4_;
      uStack_13c = uStack_b8;
      uStack_144 = uStack_c0;
      uStack_134 = uStack_b0;
      uStack_120 = uStack_9c;
      auVar28 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                          (param_2,&uStack_14c,uVar24,0,1,1,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 (*) [16])(lVar11 + 0x20) = auVar28;
      lVar19 = *(long *)(param_1 + 0x140);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
                    /* try { // try from 0670498c to 06804993 has its CatchHandler @ 06704a20 */
      if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (*(long *)(lVar19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar11 = *(long *)(param_1 + 0x148);
      uStack_180 = (undefined4)uStack_118;
      uStack_17c = uStack_118._4_4_;
      uStack_170 = uStack_b8;
      uStack_178 = uStack_c0;
      uStack_168 = uStack_b0;
      uStack_154 = uStack_9c;
      auVar28 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                          (param_2,&uStack_180,*(undefined8 *)(*(long *)(lVar19 + 0x20) + 0x58),0,1,
                           1,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
                    /* try { // try from 067049ec to 068049ef has its CatchHandler @ 06704a1c */
                    /* try { // try from 067049f0 to 06804a13 has its CatchHandler @ 06704884 */
      *(undefined1 (*) [16])(lVar11 + 0x20) = auVar28;
      if (1 < (int)uVar1) {
        lVar11 = 0x38;
        lVar19 = 5;
        do {
                    /* try { // try from 06704a14 to 06804a17 has its CatchHandler @ 06704a24 */
          lVar17 = *(long *)(param_1 + 0x150);
                    /* try { // try from 06704a18 to 06804a3f has its CatchHandler @ 06704884 */
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 067049ec with catch @ 06704a1c
                        */
          lVar20 = *(long *)(param_1 + 0x148);
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 0670498c with catch @ 06704a20
                        */
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 06704a14 with catch @ 06704a24
                        */
          uVar9 = (int)lVar19 - 4;
          if (*(uint *)(lVar20 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar14 = *(long *)(param_1 + 0x138);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
                    /* try { // try from 06704a40 to 06804a43 has its CatchHandler @ 06704a5c */
                    /* try { // try from 06704a44 to 06804a5f has its CatchHandler @ 06704884 */
          if (*(uint *)(lVar14 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar14 = *(long *)(lVar14 + lVar19 * 8);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uVar24 = *(undefined8 *)(lVar14 + 0x58);
                    /* catch() { ... } // from try @ 06704a40 with catch @ 06704a5c */
                    /* try { // try from 06704a60 to 06804a67 has its CatchHandler @ 06704a70 */
          if (*(int *)(*(long *)System_Net_Mail_MailAddress_TypeInfo + 0xe4) == 0) {
                    /* try { // try from 06704a68 to 06804a73 has its CatchHandler @ 06704884 */
            thunk_FUN_031e5338();
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06704a60 with catch @ 06704a70
                        */
                    /* try { // try from 06704a74 to 06804bb3 has its CatchHandler @ 06704a74
                       catch() { ... } // from try @ 06704a74 with catch @ 06704a74
                       catch() { ... } // from try @ 06704c18 with catch @ 06704a74
                       catch() { ... } // from try @ 06704d0c with catch @ 06704a74
                       catch() { ... } // from try @ 06704db8 with catch @ 06704a74
                       catch() { ... } // from try @ 06704df8 with catch @ 06704a74
                       catch() { ... } // from try @ 06704e24 with catch @ 06704a74
                       catch() { ... } // from try @ 06704e40 with catch @ 06704a74
                       catch() { ... } // from try @ 06704e64 with catch @ 06704a74 */
          uStack_200 = NEON_smax(CONCAT44((uint)(uStack_200 >> 0x21),(uint)uStack_200 >> 1),
                                 0x100000001,4);
          uStack_1a8 = uStack_b8;
          uStack_1b0 = uStack_c0;
          uStack_1a0 = uStack_b0;
          uStack_18c = uStack_9c;
          uStack_1b8 = uStack_200;
          auVar28 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                              (param_2,&uStack_1b8,uVar24,0,1,1,0);
          if (*(uint *)(lVar17 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          ((undefined8 *)(lVar17 + lVar11))[-1] = auVar28._0_8_;
          *(undefined8 *)(lVar17 + lVar11) = auVar28._8_8_;
          lVar17 = *(long *)(param_1 + 0x140);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          lVar17 = *(long *)(lVar17 + lVar19 * 8);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          uStack_1e0 = uStack_b8;
          uStack_1e8 = uStack_c0;
          uStack_1d8 = uStack_b0;
          uStack_1c4 = uStack_9c;
          uStack_1f0 = uStack_200;
          auVar28 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                              (param_2,&uStack_1f0,*(undefined8 *)(lVar17 + 0x58),0,1,1,0);
          lVar19 = lVar19 + 1;
          lVar17 = lVar20 + lVar11;
          *(long *)(lVar20 + lVar11) = auVar28._8_8_;
          lVar11 = lVar11 + 0x10;
          *(long *)(lVar17 + -8) = auVar28._0_8_;
        } while ((int)lVar19 - uVar1 != 4);
      }
      FUN_065e0fb4(auStack_74,0);
      uVar24 = FUN_03b9c340(0x1a,*(undefined8 *)System_Data_LookupNode_TypeInfo);
      if (param_2 != 0) {
        plVar10 = (long *)FUN_03c051c0(param_2,*(undefined8 *)
                                                Oculus_Skinning_GpuSkinning_OvrAvatarGpuSkinnedRenderableBase_TypeInfo
                                       ,&lStack_d0,uVar24,
                                       *(undefined8 *)POpusCodec_Enums_OpusStatusCode_TypeInfo,0x1bc
                                       ,*(undefined8 *)
                                         Oculus_Avatar2_OvrAvatarGazeTargetManager_TypeInfo);
        pplStack_110 = &plStack_c8;
        uStack_118 = 0;
                    /* try { // try from 06704bb4 to 06804bbb has its CatchHandler @ 06704e28 */
        plStack_c8 = plVar10;
        if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        *(uint *)(lStack_d0 + 0x10) = uVar1;
        lVar19 = *(long *)(param_1 + 0x1a0);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar24 = *(undefined8 *)(lVar19 + 0x50);
                    /* try { // try from 06704bd0 to 06804bd3 has its CatchHandler @ 06704dc0 */
        *(undefined8 *)(lStack_d0 + 0x20) = *(undefined8 *)(lVar19 + 0x58);
        *(undefined8 *)(lStack_d0 + 0x18) = uVar24;
        uVar24 = *param_3;
        *(undefined8 *)(lStack_d0 + 0x30) = param_3[1];
        *(undefined8 *)(lStack_d0 + 0x28) = uVar24;
                    /* try { // try from 06704bdc to 06804bf7 has its CatchHandler @ 06704dc8 */
        lVar19 = *(long *)(param_1 + 0x148);
        *(undefined8 *)(lStack_d0 + 0x40) = *(undefined8 *)(param_1 + 0x150);
        *(long *)(lStack_d0 + 0x38) = lVar19;
        puVar2 = Photon_Realtime_ClientState_TypeInfo;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar19 = *plVar10;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
                    /* try { // try from 06704c10 to 06804c17 has its CatchHandler @ 06704dd4 */
            if (*(long *)(piVar16 + -2) == *(long *)Photon_Realtime_ClientState_TypeInfo) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
              goto LAB_06704c40;
            }
            uVar18 = uVar18 - 1;
                    /* try { // try from 06704c18 to 06804ca7 has its CatchHandler @ 06704a74 */
            piVar16 = piVar16 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_031c0d08(plVar10,*(long *)Photon_Realtime_ClientState_TypeInfo,0xb);
LAB_06704c40:
        (*(code *)*puVar12)(plVar10,0,puVar12[1]);
        plVar10 = plStack_c8;
        if (plStack_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar19 = *plStack_c8;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar18 != 0) {
          piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06704ca4;
            }
            uVar18 = uVar18 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_031c0d08(plStack_c8,*(long *)puVar2,0);
LAB_06704ca4:
                    /* try { // try from 06704ca8 to 06804caf has its CatchHandler @ 06704dc4 */
        (*(code *)*puVar12)(plVar10,param_3,1,puVar12[1]);
        if (0 < (int)uVar1) {
          uVar18 = 0;
          do {
            plVar10 = plStack_c8;
            lVar19 = *(long *)(param_1 + 0x150);
            if ((lVar19 == 0) || (plStack_c8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            lVar11 = *plStack_c8;
            uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar12 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06704d2c;
                }
                uVar15 = uVar15 - 1;
                    /* try { // try from 06704d08 to 06804d0b has its CatchHandler @ 06704dbc */
                piVar16 = piVar16 + 4;
                    /* try { // try from 06704d0c to 06804dab has its CatchHandler @ 06704a74 */
              } while (uVar15 != 0);
            }
            puVar12 = (undefined8 *)FUN_031c0d08(plStack_c8,*(long *)puVar2,0);
LAB_06704d2c:
            (*(code *)*puVar12)(plVar10,lVar19 + uVar18 * 0x10 + 0x20,3,puVar12[1]);
            plVar10 = plStack_c8;
            lVar19 = *(long *)(param_1 + 0x148);
            if ((lVar19 == 0) || (plStack_c8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            lVar11 = *plStack_c8;
            uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                  puVar12 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_06704dac;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar12 = (undefined8 *)FUN_031c0d08(plStack_c8,*(long *)puVar2,0);
LAB_06704dac:
                    /* try { // try from 06704dac to 06804daf has its CatchHandler @ 06704dd8 */
                    /* try { // try from 06704db0 to 06804db3 has its CatchHandler @ 06704dd0 */
                    /* try { // try from 06704db4 to 06804db7 has its CatchHandler @ 06704dcc */
                    /* try { // try from 06704db8 to 06804df3 has its CatchHandler @ 06704a74 */
                    /* catch() { ... } // from try @ 06704d08 with catch @ 06704dbc */
                    /* catch() { ... } // from try @ 06704bd0 with catch @ 06704dc0 */
            (*(code *)*puVar12)(plVar10,lVar19 + uVar18 * 0x10 + 0x20,3,puVar12[1]);
                    /* catch() { ... } // from try @ 06704ca8 with catch @ 06704dc4 */
            uVar18 = uVar18 + 1;
                    /* catch() { ... } // from try @ 06704bdc with catch @ 06704dc8 */
                    /* catch() { ... } // from try @ 06704db4 with catch @ 06704dcc */
          } while (uVar18 != uVar1);
        }
                    /* catch() { ... } // from try @ 06704db0 with catch @ 06704dd0 */
        plVar10 = plStack_c8;
        puVar2 = Fusion_Photon_Realtime_Async_OperationHandler_TypeInfo;
                    /* catch() { ... } // from try @ 06704c10 with catch @ 06704dd4 */
                    /* catch() { ... } // from try @ 06704dac with catch @ 06704dd8 */
        lVar19 = *(long *)Fusion_Photon_Realtime_Async_OperationHandler_TypeInfo;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar19 = *(long *)puVar2;
        }
        puVar12 = *(undefined8 **)(lVar19 + 0xb8);
                    /* try { // try from 06704df4 to 06804df7 has its CatchHandler @ 06704e18 */
        lVar11 = puVar12[10];
                    /* try { // try from 06704df8 to 06804e1b has its CatchHandler @ 06704a74 */
        if (lVar11 == 0) {
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
                    /* catch() { ... } // from try @ 06704df4 with catch @ 06704e18 */
          uVar24 = *puVar12;
                    /* try { // try from 06704e1c to 06804e23 has its CatchHandler @ 06704e6c */
          lVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                             (*(undefined8 *)
                               Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin_TypeInfo);
                    /* try { // try from 06704e24 to 06804e3b has its CatchHandler @ 06704a74 */
                    /* catch() { ... } // from try @ 06704bb4 with catch @ 06704e28 */
                    /* try { // try from 06704e3c to 06804e3f has its CatchHandler @ 06704e58 */
          FUN_04a59a40(lVar11,uVar24,
                       *(undefined8 *)Oculus_Avatar2_OvrAvatarGpuSkinnedPrimitive_TypeInfo,0);
                    /* try { // try from 06704e40 to 06804e5b has its CatchHandler @ 06704a74 */
          *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = lVar11;
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
                    /* catch() { ... } // from try @ 06704e3c with catch @ 06704e58 */
        lVar19 = *plVar10;
                    /* try { // try from 06704e5c to 06804e63 has its CatchHandler @ 06704e6c */
        lVar17 = *(long *)Oculus_Avatar2_OvrAvatarGazeTarget_TypeInfo;
        uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
                    /* try { // try from 06704e64 to 06804e6f has its CatchHandler @ 06704a74 */
                    /* catch() { ... } // from try @ 06704e1c with catch @ 06704e6c
                       catch() { ... } // from try @ 06704e5c with catch @ 06704e6c */
        if (uVar18 != 0) {
          piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)(lVar17 + 0x20)) {
              lVar19 = lVar19 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06704eac;
            }
            uVar18 = uVar18 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar18 != 0);
        }
        lVar19 = FUN_031c0d08(plVar10);
LAB_06704eac:
        lVar19 = thunk_FUN_031a5ef4(*(undefined8 *)(lVar19 + 8),lVar17);
        (**(code **)(lVar19 + 8))(plVar10,lVar11,lVar19);
        plVar10 = plStack_c8;
        if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar19 = *(long *)(lStack_d0 + 0x38);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        uVar24 = *(undefined8 *)(lVar19 + 0x20);
        param_4[1] = *(undefined8 *)(lVar19 + 0x28);
        *param_4 = uVar24;
        if (plStack_c8 != (long *)0x0) {
          lVar19 = *plStack_c8;
          uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar18 != 0) {
            piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_070c2e88) {
                puVar12 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_06704f54;
              }
              uVar18 = uVar18 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_031c0d08(plStack_c8,*(long *)PTR_DAT_070c2e88,0);
LAB_06704f54:
          (*(code *)*puVar12)(plVar10,puVar12[1]);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


