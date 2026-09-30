/*
FUNCTION_NAME: UnityEngine.Rendering.ReceiverPlanes$$LightFacingFrustumPlaneSubArray
ENTRY_POINT: 06584fd4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_Rendering_ReceiverPlanes__LightFacingFrustumPlaneSubArray(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  bool in_ZR;
  undefined4 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar26;
  int iVar27;
  long lVar28;
  long *unaff_x25;
  uint unaff_w26;
  uint *puVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int in_stack_00000090;
  undefined8 in_stack_000000a8;
  int in_stack_000000b0;
  int in_stack_000000e0;
  undefined8 in_stack_000000f8;
  int in_stack_00000100;
  
  iVar2 = in_stack_00000100;
  iVar14 = in_stack_000000b0;
  uStack000000000000000c = unaff_w26;
  if (in_ZR) {
    if (in_stack_000000b0 < in_stack_00000100) {
      iVar27 = (in_stack_000000f8._4_4_ + in_stack_00000100) - in_stack_000000a8._4_4_;
      iVar3 = in_stack_000000b0;
    }
    else {
      iVar27 = (in_stack_000000b0 - in_stack_00000100) + in_stack_000000a8._4_4_;
      iVar3 = in_stack_00000100;
    }
    iVar1 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar1 = iVar1 >> 3;
    _in_stack_00000070 = FUN_065a7bc0();
    puVar11 = System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo;
    auVar31 = FUN_065a7fb8(&stack0x00000070,
                           *(undefined8 *)
                            System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a8000(&stack0x00000070,*(undefined8 *)puVar11,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a81b0(&stack0x00000070,iVar3 % 8,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a8168(&stack0x00000070,iVar1,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a8318(&stack0x00000070,iVar27,0);
    _in_stack_00000070 = auVar31;
    lVar16 = FUN_03188b1c(*(undefined8 *)
                           System_Collections_Generic_IEnumerable<StringOrRegex>_TypeInfo,1);
    puVar11 = System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
    lVar21 = *(long *)System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar21);
      lVar21 = *(long *)puVar11;
    }
    if (lVar16 == 0) goto LAB_06585834;
    if (*(int *)(lVar16 + 0x18) == 0) {
LAB_06585830:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar17 = **(undefined8 **)(lVar21 + 0xb8);
    *(undefined8 *)(lVar16 + 0x28) = (*(undefined8 **)(lVar21 + 0xb8))[1];
    *(undefined8 *)(lVar16 + 0x20) = uVar17;
    FUN_065a83fc(&stack0x00000070,lVar16,0);
    uVar17 = FUN_06585838(&stack0x000000d0);
    uVar18 = FUN_06585838(&stack0x00000080);
    auVar31 = FUN_065a7bc0();
    puVar11 = PTR_DAT_070f1f80;
    lVar16 = *(long *)PTR_DAT_070f1f80;
    _in_stack_00000070 = auVar31;
    if (in_stack_000000e0 < 0) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar16 = *(long *)puVar11;
      }
      puVar22 = (undefined4 *)(*(long *)(lVar16 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar16 = *(long *)puVar11;
      }
      puVar22 = (undefined4 *)(*(long *)(lVar16 + 0xb8) + 4);
    }
    auVar31 = FUN_065a80ec(&stack0x00000070,*puVar22,0);
    iVar27 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar27 = iVar2;
    }
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a8168(&stack0x00000070,(iVar27 >> 3) - iVar1,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a81b0(&stack0x00000070,iVar2 % 8,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a8318(&stack0x00000070,in_stack_000000f8._4_4_,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a86f8(&stack0x00000070,uVar17,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_06585974(&stack0x000000d0);
    auVar31 = FUN_065a888c(&stack0x00000070,auVar31._0_8_,auVar31._8_8_,0);
    _in_stack_00000070 = auVar31;
    uVar19 = FUN_06585a40(&stack0x000000d0);
    FUN_065a87b4(&stack0x00000070,uVar19,0);
    auVar31 = FUN_065a7bc0();
    lVar16 = *(long *)puVar11;
    _in_stack_00000070 = auVar31;
    if (in_stack_00000090 < 0) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar16 = *(long *)puVar11;
      }
      puVar22 = (undefined4 *)(*(long *)(lVar16 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar16 = *(long *)puVar11;
      }
      puVar22 = (undefined4 *)(*(long *)(lVar16 + 0xb8) + 4);
    }
    auVar31 = FUN_065a80ec(&stack0x00000070,*puVar22,0);
    iVar2 = iVar14 + 7;
    if (-1 < iVar14) {
      iVar2 = iVar14;
    }
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a8168(&stack0x00000070,(iVar2 >> 3) - iVar1,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a81b0(&stack0x00000070,iVar14 % 8,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a8318(&stack0x00000070,in_stack_000000a8._4_4_,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_065a86f8(&stack0x00000070,uVar18,0);
    _in_stack_00000070 = auVar31;
    auVar31 = FUN_06585974(&stack0x00000080);
    auVar31 = FUN_065a888c(&stack0x00000070,auVar31._0_8_,auVar31._8_8_,0);
    _in_stack_00000070 = auVar31;
    uVar19 = FUN_06585a40(&stack0x00000080);
    FUN_065a87b4(&stack0x00000070,uVar19,0);
    auVar31 = FUN_065a7bc0();
    puVar11 = PTR_DAT_070c28d8;
    _in_stack_00000070 = auVar31;
    lVar16 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,2);
    unaff_w26 = uStack000000000000000c;
    auVar7._8_8_ = in_stack_00000068;
    auVar7._0_8_ = in_stack_00000060;
    auVar31._8_8_ = in_stack_00000020;
    auVar31._0_8_ = in_stack_00000018;
    if (lVar16 == 0) goto LAB_06585834;
    if ((*(int *)(lVar16 + 0x18) == 0) ||
       (*(undefined8 *)(lVar16 + 0x20) = uVar18,
       puVar13 = UnityEngine_TextCore_Text_FastAction<bool,_Material>_TypeInfo,
       puVar12 = PTR_DAT_070cb828, _in_stack_00000018 = auVar31, _in_stack_00000060 = auVar7,
       *(int *)(lVar16 + 0x18) == 1)) goto LAB_06585830;
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo;
    uVar19 = FUN_03c457d4(*(undefined8 *)puVar12,lVar16,*(undefined8 *)puVar13);
    FUN_065a86f8(&stack0x00000070,uVar19,0);
    auVar31 = FUN_065a7bc0();
    _in_stack_00000070 = auVar31;
    lVar16 = FUN_03188b1c(*(undefined8 *)puVar11,2);
    auVar8._8_8_ = in_stack_00000068;
    auVar8._0_8_ = in_stack_00000060;
    auVar4._8_8_ = in_stack_00000020;
    auVar4._0_8_ = in_stack_00000018;
    if (lVar16 == 0) goto LAB_06585834;
    if ((*(int *)(lVar16 + 0x18) == 0) ||
       (*(undefined8 *)(lVar16 + 0x20) = uVar18, _in_stack_00000018 = auVar4,
       _in_stack_00000060 = auVar8, *(int *)(lVar16 + 0x18) == 1)) goto LAB_06585830;
    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo
    ;
    uVar18 = FUN_03c457d4(*(undefined8 *)puVar12,lVar16,*(undefined8 *)puVar13);
    FUN_065a86f8(&stack0x00000070,uVar18,0);
    auVar31 = FUN_065a7bc0();
    _in_stack_00000070 = auVar31;
    lVar16 = FUN_03188b1c(*(undefined8 *)puVar11,2);
    auVar9._8_8_ = in_stack_00000068;
    auVar9._0_8_ = in_stack_00000060;
    auVar5._8_8_ = in_stack_00000020;
    auVar5._0_8_ = in_stack_00000018;
    if (lVar16 == 0) goto LAB_06585834;
    if ((*(int *)(lVar16 + 0x18) == 0) ||
       (*(undefined8 *)(lVar16 + 0x20) = uVar17, _in_stack_00000018 = auVar5,
       _in_stack_00000060 = auVar9, *(int *)(lVar16 + 0x18) == 1)) goto LAB_06585830;
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)System_Predicate<EnvironmentReferences_Reference>_TypeInfo;
    uVar18 = FUN_03c457d4(*(undefined8 *)puVar12,lVar16,*(undefined8 *)puVar13);
    FUN_065a86f8(&stack0x00000070,uVar18,0);
    auVar31 = FUN_065a7bc0();
    _in_stack_00000070 = auVar31;
    lVar16 = FUN_03188b1c(*(undefined8 *)puVar11,2);
    auVar10._8_8_ = in_stack_00000068;
    auVar10._0_8_ = in_stack_00000060;
    auVar6._8_8_ = in_stack_00000020;
    auVar6._0_8_ = in_stack_00000018;
    if (lVar16 == 0) goto LAB_06585834;
    if ((*(int *)(lVar16 + 0x18) == 0) ||
       (*(undefined8 *)(lVar16 + 0x20) = uVar17, _in_stack_00000018 = auVar6,
       _in_stack_00000060 = auVar10, *(int *)(lVar16 + 0x18) == 1)) goto LAB_06585830;
    *(undefined8 *)(lVar16 + 0x28) =
         *(undefined8 *)System_Predicate<EventProvider_Registration>_TypeInfo;
    uVar17 = FUN_03c457d4(*(undefined8 *)puVar12,lVar16,*(undefined8 *)puVar13);
    FUN_065a86f8(&stack0x00000070,uVar17,0);
  }
  lVar16 = *(long *)(unaff_x20 + 0x38);
  if (lVar16 != 0) {
    uVar23 = *(ulong *)(lVar16 + 0x18);
    if (0 < (int)uVar23) {
      uVar30 = 0;
      puVar29 = (uint *)(lVar16 + 0x50);
      do {
        if (*(uint *)(lVar16 + 0x18) <= uVar30) goto LAB_06585830;
        if (((puVar29[-4] == 1) &&
            (((puVar26 = puVar29 + -0xc, (unaff_w26 & 1) != 0 || (puVar29[-0xb] != 1)) ||
             ((*puVar26 & 0xfffffffe) != 0x30)))) && (lVar21 = FUN_06585ad4(puVar26), lVar21 != 0))
        {
          uVar17 = FUN_06585bdc(puVar26);
          auVar31 = FUN_065a7b58(unaff_x19,0);
          _in_stack_00000018 = auVar31;
          uVar18 = thunk_FUN_031c39fc(*(undefined8 *)System_Predicate<VisualElement>_TypeInfo,
                                      &stack0x00000018);
          lVar24 = *unaff_x25;
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_031e5338(lVar24);
            lVar24 = *unaff_x25;
          }
          puVar25 = *(undefined8 **)(lVar24 + 0xb8);
          lVar28 = puVar25[3];
          if (lVar28 == 0) {
            if (*(int *)(lVar24 + 0xe4) == 0) {
              thunk_FUN_031e5338(lVar24);
              puVar25 = *(undefined8 **)(*unaff_x25 + 0xb8);
            }
            uVar19 = *puVar25;
            lVar28 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)System_Predicate<Transform>_TypeInfo);
            FUN_03e02e04(lVar28,uVar19,
                         *(undefined8 *)
                          System_Predicate<AvatarLODManager_ContributingCamera>_TypeInfo,0);
            *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18) = lVar28;
            unaff_w26 = uStack000000000000000c;
          }
          uVar17 = FUN_03c468e8(uVar17,uVar18,lVar28,
                                *(undefined8 *)System_Predicate<Volume>_TypeInfo);
          auVar31 = FUN_065a7bc0(unaff_x19,uVar17,0);
          _in_stack_00000070 = auVar31;
          uVar18 = FUN_06585dd4(puVar26);
          auVar31 = FUN_065a7fb8(&stack0x00000070,uVar18,0);
          _in_stack_00000070 = auVar31;
          auVar31 = FUN_065a8000(&stack0x00000070,lVar21,0);
          _in_stack_00000070 = auVar31;
          auVar31 = FUN_065a8168(&stack0x00000070,*puVar29 >> 3,0);
          _in_stack_00000070 = auVar31;
          auVar31 = FUN_065a81b0(&stack0x00000070,*puVar29 & 7,0);
          _in_stack_00000070 = auVar31;
          auVar31 = FUN_065a8318(&stack0x00000070,puVar29[-1],0);
          _in_stack_00000070 = auVar31;
          uVar15 = FUN_06585ec4(puVar26);
          auVar31 = FUN_065a80ec(&stack0x00000070,uVar15,0);
          _in_stack_00000070 = auVar31;
          auVar31 = FUN_06585974(puVar26);
          auVar31 = FUN_065a888c(&stack0x00000070,auVar31._0_8_,auVar31._8_8_,0);
          _in_stack_00000070 = auVar31;
          uVar18 = FUN_06585a40(puVar26);
          auVar31 = FUN_065a87b4(&stack0x00000070,uVar18,0);
          _in_stack_00000060 = auVar31;
          uVar18 = FUN_06585838(puVar26);
          uVar20 = FUN_057bebf8(uVar18,0);
          if ((uVar20 & 1) == 0) {
            FUN_065a86f8(&stack0x00000060,uVar18,0);
          }
          lVar21 = FUN_06586018(puVar26);
          if (lVar21 != 0) {
            FUN_065a83fc(&stack0x00000060,lVar21,0);
          }
          FUN_065861c8(puVar26,puVar26,uVar17,&stack0x00000118);
        }
        uVar30 = uVar30 + 1;
        puVar29 = puVar29 + 0x12;
      } while ((uVar23 & 0xffffffff) != uVar30);
    }
    FUN_065a7d90(unaff_x19,0);
    return;
  }
LAB_06585834:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


