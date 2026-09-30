/*
FUNCTION_NAME: UnityEngine.Rendering.ReceiverPlanes$$SilhouettePlaneSubArray
ENTRY_POINT: 06585060
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_Rendering_ReceiverPlanes__SilhouettePlaneSubArray(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 unaff_x19;
  long unaff_x20;
  uint *puVar23;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  int unaff_w24;
  long lVar24;
  int unaff_w25;
  int unaff_w26;
  undefined8 *unaff_x27;
  uint *puVar25;
  long *unaff_x29;
  ulong uVar26;
  undefined1 auVar27 [16];
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  int in_stack_00000090;
  int in_stack_000000e0;
  undefined8 in_stack_000000f8;
  
  _in_stack_00000070 = FUN_065a7fb8();
  auVar27 = FUN_065a8000(&stack0x00000070,*unaff_x27,0);
  _in_stack_00000070 = auVar27;
  auVar27 = FUN_065a81b0(&stack0x00000070,unaff_w23,0);
  _in_stack_00000070 = auVar27;
  auVar27 = FUN_065a8168(&stack0x00000070,unaff_w24,0);
  _in_stack_00000070 = auVar27;
  auVar27 = FUN_065a8318(&stack0x00000070,unaff_w21,0);
  _in_stack_00000070 = auVar27;
  lVar13 = FUN_03188b1c(*(undefined8 *)
                         System_Collections_Generic_IEnumerable<StringOrRegex>_TypeInfo,1);
  puVar9 = System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
  lVar18 = *(long *)System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar18);
    lVar18 = *(long *)puVar9;
  }
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) == 0) {
LAB_06585830:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar14 = **(undefined8 **)(lVar18 + 0xb8);
    *(undefined8 *)(lVar13 + 0x28) = (*(undefined8 **)(lVar18 + 0xb8))[1];
    *(undefined8 *)(lVar13 + 0x20) = uVar14;
    FUN_065a83fc(&stack0x00000070,lVar13,0);
    uVar14 = FUN_06585838(&stack0x000000d0);
    uVar15 = FUN_06585838(&stack0x00000080);
    auVar27 = FUN_065a7bc0();
    puVar9 = PTR_DAT_070f1f80;
    lVar13 = *(long *)PTR_DAT_070f1f80;
    _in_stack_00000070 = auVar27;
    if (in_stack_000000e0 < 0) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar13 = *(long *)puVar9;
      }
      puVar19 = (undefined4 *)(*(long *)(lVar13 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar13 = *(long *)puVar9;
      }
      puVar19 = (undefined4 *)(*(long *)(lVar13 + 0xb8) + 4);
    }
    auVar27 = FUN_065a80ec(&stack0x00000070,*puVar19,0);
    iVar1 = unaff_w26 + 7;
    if (-1 < unaff_w26) {
      iVar1 = unaff_w26;
    }
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a8168(&stack0x00000070,(iVar1 >> 3) - unaff_w24,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a81b0(&stack0x00000070,unaff_w26 % 8,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a8318(&stack0x00000070,in_stack_000000f8._4_4_,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a86f8(&stack0x00000070,uVar14,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_06585974(&stack0x000000d0);
    auVar27 = FUN_065a888c(&stack0x00000070,auVar27._0_8_,auVar27._8_8_,0);
    _in_stack_00000070 = auVar27;
    uVar16 = FUN_06585a40(&stack0x000000d0);
    FUN_065a87b4(&stack0x00000070,uVar16,0);
    auVar27 = FUN_065a7bc0();
    lVar13 = *(long *)puVar9;
    _in_stack_00000070 = auVar27;
    if (in_stack_00000090 < 0) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar13 = *(long *)puVar9;
      }
      puVar19 = (undefined4 *)(*(long *)(lVar13 + 0xb8) + 8);
    }
    else {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar13 = *(long *)puVar9;
      }
      puVar19 = (undefined4 *)(*(long *)(lVar13 + 0xb8) + 4);
    }
    auVar27 = FUN_065a80ec(&stack0x00000070,*puVar19,0);
    iVar1 = unaff_w25 + 7;
    if (-1 < unaff_w25) {
      iVar1 = unaff_w25;
    }
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a8168(&stack0x00000070,(iVar1 >> 3) - unaff_w24,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a81b0(&stack0x00000070,unaff_w25 % 8,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a8318(&stack0x00000070,unaff_w22,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_065a86f8(&stack0x00000070,uVar15,0);
    _in_stack_00000070 = auVar27;
    auVar27 = FUN_06585974(&stack0x00000080);
    auVar27 = FUN_065a888c(&stack0x00000070,auVar27._0_8_,auVar27._8_8_,0);
    _in_stack_00000070 = auVar27;
    uVar16 = FUN_06585a40(&stack0x00000080);
    FUN_065a87b4(&stack0x00000070,uVar16,0);
    auVar27 = FUN_065a7bc0();
    puVar9 = PTR_DAT_070c28d8;
    _in_stack_00000070 = auVar27;
    lVar13 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,2);
    auVar5._8_8_ = in_stack_00000068;
    auVar5._0_8_ = in_stack_00000060;
    auVar27._8_8_ = in_stack_00000020;
    auVar27._0_8_ = in_stack_00000018;
    if (lVar13 != 0) {
      if ((*(int *)(lVar13 + 0x18) == 0) ||
         (*(undefined8 *)(lVar13 + 0x20) = uVar15,
         puVar11 = UnityEngine_TextCore_Text_FastAction<bool,_Material>_TypeInfo,
         puVar10 = PTR_DAT_070cb828, _in_stack_00000018 = auVar27, _in_stack_00000060 = auVar5,
         *(int *)(lVar13 + 0x18) == 1)) goto LAB_06585830;
      *(undefined8 *)(lVar13 + 0x28) =
           *(undefined8 *)System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo;
      uVar16 = FUN_03c457d4(*(undefined8 *)puVar10,lVar13,*(undefined8 *)puVar11);
      FUN_065a86f8(&stack0x00000070,uVar16,0);
      auVar27 = FUN_065a7bc0();
      _in_stack_00000070 = auVar27;
      lVar13 = FUN_03188b1c(*(undefined8 *)puVar9,2);
      auVar6._8_8_ = in_stack_00000068;
      auVar6._0_8_ = in_stack_00000060;
      auVar2._8_8_ = in_stack_00000020;
      auVar2._0_8_ = in_stack_00000018;
      if (lVar13 != 0) {
        if ((*(int *)(lVar13 + 0x18) == 0) ||
           (*(undefined8 *)(lVar13 + 0x20) = uVar15, _in_stack_00000018 = auVar2,
           _in_stack_00000060 = auVar6, *(int *)(lVar13 + 0x18) == 1)) goto LAB_06585830;
        *(undefined8 *)(lVar13 + 0x28) =
             *(undefined8 *)System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo;
        uVar15 = FUN_03c457d4(*(undefined8 *)puVar10,lVar13,*(undefined8 *)puVar11);
        FUN_065a86f8(&stack0x00000070,uVar15,0);
        auVar27 = FUN_065a7bc0();
        _in_stack_00000070 = auVar27;
        lVar13 = FUN_03188b1c(*(undefined8 *)puVar9,2);
        auVar7._8_8_ = in_stack_00000068;
        auVar7._0_8_ = in_stack_00000060;
        auVar3._8_8_ = in_stack_00000020;
        auVar3._0_8_ = in_stack_00000018;
        if (lVar13 != 0) {
          if ((*(int *)(lVar13 + 0x18) == 0) ||
             (*(undefined8 *)(lVar13 + 0x20) = uVar14, _in_stack_00000018 = auVar3,
             _in_stack_00000060 = auVar7, *(int *)(lVar13 + 0x18) == 1)) goto LAB_06585830;
          *(undefined8 *)(lVar13 + 0x28) =
               *(undefined8 *)System_Predicate<EnvironmentReferences_Reference>_TypeInfo;
          uVar15 = FUN_03c457d4(*(undefined8 *)puVar10,lVar13,*(undefined8 *)puVar11);
          FUN_065a86f8(&stack0x00000070,uVar15,0);
          auVar27 = FUN_065a7bc0();
          _in_stack_00000070 = auVar27;
          lVar13 = FUN_03188b1c(*(undefined8 *)puVar9,2);
          auVar8._8_8_ = in_stack_00000068;
          auVar8._0_8_ = in_stack_00000060;
          auVar4._8_8_ = in_stack_00000020;
          auVar4._0_8_ = in_stack_00000018;
          if (lVar13 != 0) {
            if ((*(int *)(lVar13 + 0x18) == 0) ||
               (*(undefined8 *)(lVar13 + 0x20) = uVar14, _in_stack_00000018 = auVar4,
               _in_stack_00000060 = auVar8, *(int *)(lVar13 + 0x18) == 1)) goto LAB_06585830;
            *(undefined8 *)(lVar13 + 0x28) =
                 *(undefined8 *)System_Predicate<EventProvider_Registration>_TypeInfo;
            uVar14 = FUN_03c457d4(*(undefined8 *)puVar10,lVar13,*(undefined8 *)puVar11);
            FUN_065a86f8(&stack0x00000070,uVar14,0);
            lVar13 = *(long *)(unaff_x20 + 0x38);
            if (lVar13 != 0) {
              uVar20 = *(ulong *)(lVar13 + 0x18);
              if (0 < (int)uVar20) {
                uVar26 = 0;
                puVar25 = (uint *)(lVar13 + 0x50);
                do {
                  if (*(uint *)(lVar13 + 0x18) <= uVar26) goto LAB_06585830;
                  if (((puVar25[-4] == 1) &&
                      (((puVar23 = puVar25 + -0xc, (in_stack_00000008 & 0x100000000) != 0 ||
                        (puVar25[-0xb] != 1)) || ((*puVar23 & 0xfffffffe) != 0x30)))) &&
                     (lVar18 = FUN_06585ad4(puVar23), lVar18 != 0)) {
                    uVar14 = FUN_06585bdc(puVar23);
                    auVar27 = FUN_065a7b58(unaff_x19,0);
                    _in_stack_00000018 = auVar27;
                    uVar15 = thunk_FUN_031c39fc(*(undefined8 *)
                                                 System_Predicate<VisualElement>_TypeInfo,
                                                &stack0x00000018);
                    lVar21 = *unaff_x29;
                    if (*(int *)(lVar21 + 0xe4) == 0) {
                      thunk_FUN_031e5338(lVar21);
                      lVar21 = *unaff_x29;
                    }
                    puVar22 = *(undefined8 **)(lVar21 + 0xb8);
                    lVar24 = puVar22[3];
                    if (lVar24 == 0) {
                      if (*(int *)(lVar21 + 0xe4) == 0) {
                        thunk_FUN_031e5338(lVar21);
                        puVar22 = *(undefined8 **)(*unaff_x29 + 0xb8);
                      }
                      uVar16 = *puVar22;
                      lVar24 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                         (*(undefined8 *)System_Predicate<Transform>_TypeInfo);
                      FUN_03e02e04(lVar24,uVar16,
                                   *(undefined8 *)
                                    System_Predicate<AvatarLODManager_ContributingCamera>_TypeInfo,0
                                  );
                      *(long *)(*(long *)(*unaff_x29 + 0xb8) + 0x18) = lVar24;
                    }
                    uVar14 = FUN_03c468e8(uVar14,uVar15,lVar24,
                                          *(undefined8 *)System_Predicate<Volume>_TypeInfo);
                    auVar27 = FUN_065a7bc0(unaff_x19,uVar14,0);
                    _in_stack_00000070 = auVar27;
                    uVar15 = FUN_06585dd4(puVar23);
                    auVar27 = FUN_065a7fb8(&stack0x00000070,uVar15,0);
                    _in_stack_00000070 = auVar27;
                    auVar27 = FUN_065a8000(&stack0x00000070,lVar18,0);
                    _in_stack_00000070 = auVar27;
                    auVar27 = FUN_065a8168(&stack0x00000070,*puVar25 >> 3,0);
                    _in_stack_00000070 = auVar27;
                    auVar27 = FUN_065a81b0(&stack0x00000070,*puVar25 & 7,0);
                    _in_stack_00000070 = auVar27;
                    auVar27 = FUN_065a8318(&stack0x00000070,puVar25[-1],0);
                    _in_stack_00000070 = auVar27;
                    uVar12 = FUN_06585ec4(puVar23);
                    auVar27 = FUN_065a80ec(&stack0x00000070,uVar12,0);
                    _in_stack_00000070 = auVar27;
                    auVar27 = FUN_06585974(puVar23);
                    auVar27 = FUN_065a888c(&stack0x00000070,auVar27._0_8_,auVar27._8_8_,0);
                    _in_stack_00000070 = auVar27;
                    uVar15 = FUN_06585a40(puVar23);
                    auVar27 = FUN_065a87b4(&stack0x00000070,uVar15,0);
                    _in_stack_00000060 = auVar27;
                    uVar15 = FUN_06585838(puVar23);
                    uVar17 = FUN_057bebf8(uVar15,0);
                    if ((uVar17 & 1) == 0) {
                      FUN_065a86f8(&stack0x00000060,uVar15,0);
                    }
                    lVar18 = FUN_06586018(puVar23);
                    if (lVar18 != 0) {
                      FUN_065a83fc(&stack0x00000060,lVar18,0);
                    }
                    FUN_065861c8(puVar23,puVar23,uVar14,&stack0x00000118);
                  }
                  uVar26 = uVar26 + 1;
                  puVar25 = puVar25 + 0x12;
                } while ((uVar20 & 0xffffffff) != uVar26);
              }
              FUN_065a7d90(unaff_x19,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


