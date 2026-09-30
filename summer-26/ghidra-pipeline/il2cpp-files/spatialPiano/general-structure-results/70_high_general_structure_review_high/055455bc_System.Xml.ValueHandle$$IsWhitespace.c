/*
FUNCTION_NAME: System.Xml.ValueHandle$$IsWhitespace
ENTRY_POINT: 055455bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void System_Xml_ValueHandle__IsWhitespace(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x20;
  ulong unaff_x21;
  int iVar14;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  int iStack0000000000000020;
  int iStack0000000000000024;
  int iStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  int iStack0000000000000040;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  
  plVar8 = (long *)FUN_05548bd0();
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    FUN_04fd5544();
    FUN_04fd55c0();
    FUN_05548c64();
    FUN_04fd5544();
    plVar8 = *(long **)(unaff_x20 + 0x40);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      FUN_04fe0c98();
      if ((unaff_x21 & 1) != 0) {
        lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                    UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                                  );
        uVar10 = FUN_03abf108(lVar9,*(undefined8 *)
                                     UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_BurstDirectCall_TypeInfo
                             );
        if (lVar9 == 0) goto LAB_05545f08;
        lVar13 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05545f08;
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
        }
        else {
          uVar10 = FUN_03abf904(lVar9);
        }
        uVar11 = FUN_05548cc8(uVar10,lVar9);
        if ((uVar11 & 1) == 0) {
          uVar10 = FUN_0556731c(0);
          uVar12 = thunk_FUN_02f6ef30(
                                     UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar10,uVar12);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_050656a0(0);
      puVar6 = 
      UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
      ;
      puVar5 = UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_TypeInfo;
      puVar4 = 
      UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
      ;
      puVar3 = 
      UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_GetHandAxisDirection_00000190_PostfixBurstDelegate_TypeInfo
      ;
      puVar2 = PTR_DAT_067c9338;
      plVar8 = *(long **)(unaff_x20 + 0x40);
      if (plVar8 != (long *)0x0) {
        iVar14 = 0;
        while( true ) {
          iVar7 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
          if (iVar7 <= iVar14) {
            if ((unaff_x21 & 1) != 0) {
              FUN_05549194();
            }
            return;
          }
          iStack000000000000004c = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd5544();
          iStack0000000000000048 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000048);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd5544();
          iStack0000000000000044 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000040 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo,
                       uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd5544();
          iStack0000000000000040 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000040);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo,uVar12,
                       0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (plVar8 = (long *)FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0),
             plVar8 == (long *)0x0)) break;
          uStack000000000000003c =
               (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
          thunk_FUN_02f44ec4(*(undefined8 *)
                              UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall_TypeInfo
                             ,(long)&stack0x00000038 + 4);
          FUN_04fd5544();
          iStack0000000000000038 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000038);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd55c0();
          iStack0000000000000034 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000030 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupNames_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_0555d30c(lVar9,0);
          FUN_04fd55c0();
          iStack0000000000000030 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000030);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_BurstDirectCall_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_0555e3cc(lVar9,0);
          FUN_04fec2ac();
          iStack000000000000002c = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000028 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_0555e0d8(lVar9,0);
          FUN_04fec2ac();
          iStack0000000000000028 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000028);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Capabilities_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_0555e4e0(lVar9,0);
          FUN_04fd5544();
          iStack0000000000000024 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000020 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_PostfixBurstDelegate_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_0555ef20(lVar9,0);
          FUN_04fd5544();
          iStack0000000000000020 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000020);
          FUN_04f70148(uVar10,*(undefined8 *)Unity_XR_CoreUtils_XROrigin_TrackingOriginMode_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd55c0();
          iStack000000000000001c = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000018 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fe0c98();
          iStack0000000000000018 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000018);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo
                       ,uVar12,0);
          if (((*(long *)(unaff_x20 + 0x40) == 0) ||
              (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) ||
             (plVar8 = *(long **)(lVar9 + 0x38), plVar8 == (long *)0x0)) break;
          (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
          FUN_04fd5544();
          iStack0000000000000014 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000010 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__99_TypeInfo
                       ,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd5544();
          iStack0000000000000010 = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000010);
          FUN_04f70148(uVar10,*(undefined8 *)
                               Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_TypeInfo,
                       uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd5544();
          iStack000000000000000c = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000008 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)puVar5,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          uStack0000000000000008 = *(undefined4 *)(lVar9 + 0x50);
          thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&stack0x00000008);
          FUN_04fd5544();
          in_stack_00000000._4_4_ = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000000 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)puVar6,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_0555e0a0(lVar9,0);
          FUN_04fd5544();
          if ((unaff_x21 & 1) != 0) {
            iStack000000000000004c = iVar14;
            uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
            FUN_04f70148(uVar10,*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_BurstDirectCall_TypeInfo
                         ,uVar12,0);
            if ((*(long *)(unaff_x20 + 0x40) == 0) ||
               (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
            FUN_0555f7d8(lVar9,0);
            FUN_04fd5544();
          }
          iStack000000000000004c = iVar14;
          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),(long)&stack0x00000048 + 4);
          FUN_04f70148(uVar10,*(undefined8 *)puVar4,uVar12,0);
          if ((*(long *)(unaff_x20 + 0x40) == 0) ||
             (lVar9 = FUN_0557e298(*(long *)(unaff_x20 + 0x40),iVar14,0), lVar9 == 0)) break;
          FUN_04fd5544();
          plVar8 = *(long **)(unaff_x20 + 0x40);
          iVar14 = iVar14 + 1;
          if (plVar8 == (long *)0x0) break;
        }
      }
    }
  }
LAB_05545f08:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


