/*
FUNCTION_NAME: FUN_05deba64
ENTRY_POINT: 05deba64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_05deba64(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_180 [88];
  undefined8 local_128;
  undefined8 auStack_120 [11];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  if ((DAT_06b8319d & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_descriptor__
                );
    FUN_02d6084c(Method_TMPro_TMP_ListPool<Canvas>_Get__);
    FUN_02d6084c(Method_TMPro_TMP_ListPool<Canvas>_Release__);
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRHumanBodySubsystem,_XRHumanBodySubsystemDescriptor,_XRHumanBodySubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider>_OnStart__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider>_OnStop__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider>_OnStart__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider>_OnStop__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>__ctor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRParticipantSubsystem,_XRParticipantSubsystemDescriptor,_XRParticipantSubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_subsystemDescriptor__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPointCloudSubsystem,_XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>_get_provider__
                );
    FUN_02d6084c(
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>_get_subsystemDescriptor__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_OnDisable__
                );
    DAT_06b8319d = 1;
  }
  local_50 = 0;
  local_38 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_c8 = 0;
  lVar6 = *(long *)(param_1 + 6);
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_c8 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_05debd94;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(lVar6 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = FUN_03375ce0(*(long *)(lVar6 + 0x50),
                         *(undefined8 *)
                          Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_provider__
                        );
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    thunk_FUN_02dd37b4();
    if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = FUN_05e24c40(*(long *)(lVar6 + 0x20),*(undefined8 *)(param_1 + 8),
                         *(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    local_38 = FUN_03e01bd0(lVar3,*(undefined8 *)
                                   Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider>_OnStart__
                           );
    uVar4 = FUN_03e055e4(&local_38,
                         *(undefined8 *)
                          Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>_get_provider__
                        );
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_38;
      thunk_FUN_02dd37b4(param_1 + 0x10,0);
      FUN_03057f40(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)Method_TMPro_TMP_ListPool<Canvas>_Release__);
      return;
    }
  }
  FUN_03e05608(&local_128,&local_38,
               *(undefined8 *)
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider>_get_provider__
              );
  uVar2 = local_128;
  memcpy(&local_a0,auStack_120,0x58);
  lVar3 = *(long *)(param_1 + 0xe);
  local_a8 = local_128;
  uVar4 = FUN_05e3c910(&local_a8,0);
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    memcpy(auStack_180,&local_a0,0x58);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar8 = *(undefined8 *)
             Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_get_descriptor__
    ;
    memcpy(&local_128,auStack_180,0x58);
    uVar8 = FUN_0421123c(lVar6,&local_128,uVar8);
  }
  local_128 = 0;
  auStack_120[0] = 0;
  FUN_0414e680(&local_128,uVar2,uVar8,
               *(undefined8 *)
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPointCloudSubsystem,_XRPointCloudSubsystemDescriptor,_XRPointCloudSubsystem_Provider>_get_provider__
              );
  uStack_b8 = auStack_120[0];
  local_c0 = local_128;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03dfa5cc(lVar3,&local_c0,
               *(undefined8 *)
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider>_OnStop__
              );
  lVar3 = *(long *)(param_1 + 0xe);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *(long *)(lVar3 + 0x18);
  FUN_03dfa858(lVar3,*(undefined8 *)
                      Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider>_OnStart__
              );
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(long *)(lVar6 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_03375db0(*(long *)(lVar6 + 0x50),*(undefined8 *)(param_1 + 0xe),
               *(undefined8 *)
                Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>_get_subsystemDescriptor__
              );
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  local_c8 = FUN_03e01308(lVar7,*(undefined8 *)
                                 Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRObjectTrackingSubsystem,_XRObjectTrackingSubsystemDescriptor,_XRObjectTrackingSubsystem_Provider>_OnStop__
                         );
  uVar4 = FUN_03e05474(&local_c8,
                       *(undefined8 *)
                        Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRParticipantSubsystem,_XRParticipantSubsystemDescriptor,_XRParticipantSubsystem_Provider>_get_provider__
                      );
  if ((uVar4 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x12) = local_c8;
    thunk_FUN_02dd37b4(param_1 + 0x12,0);
    FUN_03057bf8(param_1 + 2,&local_c8,param_1,
                 *(undefined8 *)Method_TMPro_TMP_ListPool<Canvas>_Get__);
    return;
  }
LAB_05debd94:
  auVar9 = FUN_03e05498(&local_c8,
                        *(undefined8 *)
                         Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XROcclusionSubsystem,_XROcclusionSubsystemDescriptor,_XROcclusionSubsystem_Provider>__ctor__
                       );
  puVar1 = 
  Method_UnityEngine_SubsystemsImplementation_SubsystemWithProvider<XRHumanBodySubsystem,_XRHumanBodySubsystemDescriptor,_XRHumanBodySubsystem_Provider>_get_provider__
  ;
  *param_1 = -2;
  piVar5 = param_1 + 0xe;
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_02dd37b4(piVar5,0);
  FUN_03df7860(param_1 + 2,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar1);
  return;
}


