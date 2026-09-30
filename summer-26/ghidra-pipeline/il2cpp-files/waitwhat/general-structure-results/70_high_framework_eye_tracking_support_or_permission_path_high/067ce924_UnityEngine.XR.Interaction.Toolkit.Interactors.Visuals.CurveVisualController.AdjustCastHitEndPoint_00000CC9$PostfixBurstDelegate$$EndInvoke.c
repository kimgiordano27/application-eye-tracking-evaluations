/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController.AdjustCastHitEndPoint_00000CC9$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 067ce924
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;ui_interaction;telemetry;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint_00000CC9_PostfixBurstDelegate__EndInvoke
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  uint uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x180));
  FUN_03188a78(UnityEngine_XR_Hands_XRHandJointTrackingState_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x8f3) = 1;
  uStack000000000000002c = 0;
  in_stack_00000020 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
    uVar11 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)UnityEngine_Rendering_XRGraphicsAutomatedTests_TypeInfo);
    FUN_0530df04(uVar11,*(undefined8 *)
                         UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_TypeInfo
                );
    *(undefined8 *)(unaff_x19 + 0x10) = uVar11;
  }
  else {
    FUN_0530eb3c(*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRGazeInteractor_TypeInfo);
  }
  lVar8 = *(long *)(unaff_x19 + 0x18);
  if (lVar8 == 0) {
    lVar8 = UnityEngine_UIElements_Internal_ColumnMover__remove_movingChanged();
    uStack000000000000002c = 0;
    *(long *)(unaff_x19 + 0x18) = lVar8;
    if (lVar8 == 0) goto LAB_067ced68;
  }
  puVar6 = UnityEngine_XR_Hands_XRHand_TypeInfo;
  puVar5 = UnityEngine_XR_Management_XRGeneralSettings_TypeInfo;
  puVar4 = PTR_DAT_070f1260;
  puVar3 = PTR_DAT_070c28d8;
  puVar2 = PTR_DAT_070c2418;
  uStack000000000000002c = 0;
  do {
    if ((int)*(uint *)(lVar8 + 0x18) <= (int)uStack000000000000002c) {
      return;
    }
    if (*(uint *)(lVar8 + 0x18) <= uStack000000000000002c) goto LAB_067ced8c;
    uVar11 = *(undefined8 *)(lVar8 + (long)(int)uStack000000000000002c * 8 + 0x20);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar6);
    }
    iVar7 = FUN_06a82910(uVar11,0);
    if (iVar7 == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar8 = FUN_06a838bc(0);
      if (lVar8 == 0) break;
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar12 = 0;
        uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_067ced68;
          if ((*(uint *)(*(long *)(unaff_x19 + 0x18) + 0x18) <= uStack000000000000002c) ||
             (uVar9 <= uVar12)) goto LAB_067ced8c;
          FUN_067ced90();
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_067ced68;
          uVar9 = FUN_0530eba8(*(long *)(unaff_x19 + 0x10),in_stack_00000020,*(undefined8 *)puVar5);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_067ced68;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            in_stack_00000048 = in_stack_00000018;
            in_stack_00000040 = in_stack_00000010;
            in_stack_00000050 = in_stack_00000020;
            FUN_0530e8e0(*(long *)(unaff_x19 + 0x10),in_stack_00000020,&stack0x00000030,
                         *(undefined8 *)UnityEngine_XR_Hands_Gestures_XRFingerShapeType_TypeInfo);
            lVar10 = FUN_03188b1c(*(undefined8 *)puVar3,0xd);
            if (lVar10 == 0) goto LAB_067ced68;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_067ced8c;
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_070c4180;
            uVar11 = FUN_0592cd7c(&stack0x0000002c,0);
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (((((uVar1 < 2) || (*(undefined8 *)(lVar10 + 0x28) = uVar11, uVar1 == 2)) ||
                 (*(undefined8 *)(lVar10 + 0x30) =
                       *(undefined8 *)UnityEngine_XR_Hands_XRHandDevice_TypeInfo, uVar1 < 4)) ||
                ((*(undefined8 *)(lVar10 + 0x38) = 0, uVar1 == 4 ||
                 (*(undefined8 *)(lVar10 + 0x40) =
                       *(undefined8 *)UnityEngine_XR_Hands_XRHandJointTrackingState_TypeInfo,
                 uVar1 < 6)))) || (*(undefined8 *)(lVar10 + 0x48) = 0, uVar1 == 6))
            goto LAB_067ced8c;
            *(undefined8 *)(lVar10 + 0x50) =
                 *(undefined8 *)UnityEngine_XR_Hands_Gestures_XRHandAlignmentCondition_TypeInfo;
            uVar11 = FUN_0592cd7c(&stack0x00000010,0);
            if ((*(uint *)(lVar10 + 0x18) < 8) ||
               (*(undefined8 *)(lVar10 + 0x58) = uVar11, *(uint *)(lVar10 + 0x18) == 8))
            goto LAB_067ced8c;
            *(undefined8 *)(lVar10 + 0x60) =
                 *(undefined8 *)UnityEngine_XR_Hands_XRHandJointID_TypeInfo;
            uVar11 = FUN_0594d0f0(&stack0x00000020,0);
            uVar1 = *(uint *)(lVar10 + 0x18);
            if ((uVar1 < 10) ||
               (((*(undefined8 *)(lVar10 + 0x68) = uVar11, uVar1 == 10 ||
                 (*(undefined8 *)(lVar10 + 0x70) =
                       *(undefined8 *)UnityEngine_XR_Hands_Gestures_XRHandAxis_TypeInfo, uVar1 < 0xc
                 )) || (*(undefined8 *)(lVar10 + 0x78) = in_stack_00000018, uVar1 == 0xc))))
            goto LAB_067ced8c;
            *(undefined8 *)(lVar10 + 0x80) = *(undefined8 *)puVar4;
            uVar11 = FUN_057bfff0(lVar10,0);
            lVar10 = *(long *)puVar2;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_031e5338(lVar10);
            }
            FUN_0698e980(uVar11,0);
          }
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06a833f4(0);
    }
    else {
      lVar8 = FUN_03188b1c(*(undefined8 *)puVar3,5);
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_067ced8c:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)UnityEngine_XR_Hands_XRHandFingerID_TypeInfo;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,iVar7);
      in_stack_00000030 = *(undefined8 *)UnityEngine_InputSystem_XR_XRHMD_TypeInfo;
      in_stack_00000038 = 0xffffffffffffffff;
      uVar11 = FUN_05965738(&stack0x00000030,0);
      uVar1 = *(uint *)(lVar8 + 0x18);
      if ((uVar1 < 2) || (*(undefined8 *)(lVar8 + 0x28) = uVar11, uVar1 == 2)) goto LAB_067ced8c;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)UnityEngine_XR_Hands_XRHandJoint_TypeInfo;
      lVar10 = *(long *)(unaff_x19 + 0x18);
      if (lVar10 == 0) break;
      if (((*(uint *)(lVar10 + 0x18) <= uStack000000000000002c) || (uVar1 < 4)) ||
         (*(undefined8 *)(lVar8 + 0x38) =
               *(undefined8 *)(lVar10 + (long)(int)uStack000000000000002c * 8 + 0x20), uVar1 == 4))
      goto LAB_067ced8c;
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar4;
      uVar11 = FUN_057bfff0(lVar8,0);
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar8);
      }
      FUN_0698c5bc(uVar11,0);
    }
    lVar8 = *(long *)(unaff_x19 + 0x18);
    uStack000000000000002c = uStack000000000000002c + 1;
  } while (lVar8 != 0);
LAB_067ced68:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


