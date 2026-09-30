/*
FUNCTION_NAME: FUN_059e7a70
ENTRY_POINT: 059e7a70
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void FUN_059e7a70(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  puVar3 = PTR_DAT_0675e6b0;
  puVar2 = PTR_DAT_0675e1b8;
  if ((DAT_06b80f8e & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06786918);
    FUN_02d6084c(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d6084c(UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e6b0);
    FUN_02d6084c(UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(
                UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
                );
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_InputSourceMode_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0678f020);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0676c118);
    FUN_02d6084c(PTR_DAT_0675ee10);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(PTR_DAT_0676bd88);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_06767de0);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
                );
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupMemberAndOverridesPair_TypeInfo
                );
    DAT_06b80f8e = 1;
  }
  uVar4 = FUN_0335b1b8(param_1,*(undefined8 *)puVar3);
  puVar10 = (undefined8 *)(param_1 + 0x30);
  *puVar10 = uVar4;
  thunk_FUN_02dd37b4(puVar10,uVar4);
  *(undefined8 *)(param_1 + 0x58) = *puVar10;
  thunk_FUN_02dd37b4();
  uVar4 = *puVar10;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = UnityEngine_Font__add_textureRebuilt(uVar4,0,0);
  puVar3 = 
  UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_GroupMemberAndOverridesPair_TypeInfo
  ;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_060223e8(*(undefined8 *)puVar3,0);
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x18);
    *(int *)(param_1 + 0x28) = iVar1;
    uVar4 = FUN_02d60934(*(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_TypeInfo
                         ,iVar1 + 1);
    puVar10 = (undefined8 *)(param_1 + 0x60);
    *puVar10 = uVar4;
    thunk_FUN_02dd37b4(puVar10,uVar4);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar6 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675ee10,
                           *(int *)(*(long *)(param_1 + 0x20) + 0x18) + 1);
      plVar11 = (long *)(param_1 + 0x68);
      *plVar11 = lVar6;
      thunk_FUN_02dd37b4(plVar11,lVar6);
      puVar3 = PTR_DAT_0676c118;
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 != 0) {
        lVar13 = 0x20;
        lVar14 = 8;
        do {
          uVar9 = *(uint *)(lVar6 + 0x18);
          uVar5 = lVar14 - 8;
          if ((long)(int)uVar9 <= (long)uVar5) {
            plVar11 = (long *)*puVar10;
            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
            FUN_060c0624(lVar6,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_TypeInfo
                         ,0);
            if (plVar11 == (long *)0x0) break;
            if ((lVar6 != 0) &&
               (lVar13 = thunk_FUN_02d9d438(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
LAB_059e8038:
              uVar4 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar4,0);
            }
            if (uVar9 < *(uint *)(plVar11 + 3)) {
              plVar11 = (long *)((long)plVar11 + ((long)((ulong)uVar9 << 0x20) >> 0x1d) + 0x20);
              *plVar11 = lVar6;
              thunk_FUN_02dd37b4(plVar11,lVar6);
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (lVar6 = *(long *)(param_1 + 0x68), lVar6 == 0)) break;
              lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
              uVar9 = (uint)lVar13;
              if (uVar9 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar6 + ((lVar13 << 0x20) >> 0x1e) + 0x20) = uVar9;
                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                            UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_TypeInfo
                                          );
                FUN_059f739c(lVar6,0);
                if (lVar6 != 0) {
                  *(undefined8 *)(lVar6 + 0x28) =
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<HoveredPriorityRoutine>d__93_TypeInfo
                  ;
                  thunk_FUN_02dd37b4();
                  puVar3 = PTR_DAT_0678f020;
                  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678f020);
                  FUN_04d561f0(uVar4,param_1,
                               *(undefined8 *)
                                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                               ,0);
                  *(undefined8 *)(lVar6 + 0x48) = uVar4;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x48),uVar4);
                  puVar2 = PTR_DAT_06786918;
                  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06786918);
                  FUN_047ce0b4(uVar4,param_1,
                               *(undefined8 *)
                                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall_TypeInfo
                               ,0);
                  *(undefined8 *)(lVar6 + 0x50) = uVar4;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x50),uVar4);
                  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(param_1 + 0x60);
                  thunk_FUN_02dd37b4();
                  FUN_04a35a34(lVar6,*(undefined8 *)(param_1 + 0x68),
                               *(undefined8 *)
                                UnityEngine_XR_Hands_ProviderImplementation_XRHandSubsystemProvider_FingerConfigDefaults_TypeInfo
                              );
                  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                  FUN_04d561f0(uVar4,param_1,
                               *(undefined8 *)
                                UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_PostfixBurstDelegate_TypeInfo
                               ,0);
                  *(undefined8 *)(lVar6 + 0x80) = uVar4;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x80),uVar4);
                  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                  FUN_047ce0b4(uVar4,param_1,
                               *(undefined8 *)
                                UnityEngine_XR_Hands_XRHandSkeletonDriverUtility_<>c__DisplayClass0_1_TypeInfo
                               ,0);
                  *(undefined8 *)(lVar6 + 0x88) = uVar4;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x88),uVar4);
                  plVar11 = (long *)(param_1 + 0x70);
                  *plVar11 = lVar6;
                  thunk_FUN_02dd37b4(plVar11,lVar6);
                  if (*(int *)(*(long *)
                                UnityEngine_XR_Hands_XRHandSubsystemDescriptor_Cinfo_TypeInfo + 0xe4
                              ) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  lVar6 = FUN_059f5cfc(0);
                  if (((lVar6 != 0) &&
                      (lVar6 = FUN_059f5e34(lVar6,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_TypeInfo
                                            ,1,0,0,0), lVar6 != 0)) &&
                     (*(long *)(lVar6 + 0x28) != 0)) {
                    FUN_03ec3234(*(long *)(lVar6 + 0x28),*plVar11,*(undefined8 *)PTR_DAT_0676bd88);
                    return;
                  }
                }
                break;
              }
            }
LAB_059e8034:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          if (uVar9 <= uVar5) goto LAB_059e8034;
          lVar6 = *(long *)(lVar6 + lVar13);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar7 = FUN_0606a004(lVar6,0,0);
          plVar12 = (long *)*puVar10;
          if ((uVar7 & 1) == 0) {
            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
            uVar4 = *(undefined8 *)PTR_DAT_06767de0;
          }
          else {
            if (lVar6 == 0) break;
            uVar4 = thunk_FUN_0606f5c0(lVar6,0);
            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
          }
          FUN_060c0624(lVar6,uVar4,0);
          if (plVar12 == (long *)0x0) break;
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_02d9d438(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0))
          goto LAB_059e8038;
          if (*(uint *)(plVar12 + 3) <= uVar5) goto LAB_059e8034;
          *(long *)((long)plVar12 + lVar13) = lVar6;
          thunk_FUN_02dd37b4((long *)((long)plVar12 + lVar13),lVar6);
          lVar6 = *plVar11;
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_059e8034;
          *(int *)(lVar6 + lVar14 * 4) = (int)lVar14 + -8;
          lVar6 = *(long *)(param_1 + 0x20);
          lVar13 = lVar13 + 8;
          lVar14 = lVar14 + 1;
        } while (lVar6 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


