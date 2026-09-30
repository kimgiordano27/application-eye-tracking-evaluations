/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XROcclusionSubsystem$$TryAcquireEnvironmentDepthConfidenceCpuImage
ENTRY_POINT: 05dceb14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_ARSubsystems_XROcclusionSubsystem__TryAcquireEnvironmentDepthConfidenceCpuImage
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_06bc3c37 & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    FUN_02f08768(Method_Unity_IO_LowLevel_Unsafe_ReadHandle_Dispose__);
    DAT_06bc3c37 = 1;
  }
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05dceda8;
  lVar2 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                       *(undefined8 *)
                        Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05dceda8;
  uVar3 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                       *(undefined8 *)Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05dceda8;
  lVar4 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                       *(undefined8 *)Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05dceda8;
  uVar5 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                       *(undefined8 *)Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
  if (*(long *)(param_1 + 0x138) == 0) goto LAB_05dceda8;
  uVar6 = FUN_05d4c208(*(long *)(param_1 + 0x138),
                       *(undefined8 *)Method_Unity_IO_LowLevel_Unsafe_ReadHandle_Dispose__);
  if (*(long *)(param_1 + 0x298) == 0) goto LAB_05dceda8;
  FUN_05df1010(*(long *)(param_1 + 0x298),uVar3,lVar4,uVar5,0);
  FUN_05d63cd4(param_1,param_2,0x32,0);
  if (*(long *)(param_1 + 0x168) == 0) goto LAB_05dceda8;
  uVar7 = Unity_XR_CoreUtils_OnDestroyNotifier__set_Destroyed
                    (*(long *)(param_1 + 0x168),uVar3,lVar4,uVar5,uVar6,0);
  if ((uVar7 & 1) != 0) {
    if ((*(long *)(param_1 + 0x168) == 0) ||
       (auVar9 = FUN_05e04cd8(*(long *)(param_1 + 0x168),param_2,*(undefined8 *)(param_1 + 0x138),0)
       , lVar2 == 0)) goto LAB_05dceda8;
    FUN_05d6e09c(lVar2,auVar9._0_8_,auVar9._8_8_,0);
  }
  if (*(long *)(param_1 + 0x170) == 0) goto LAB_05dceda8;
  uVar8 = FUN_05deb620(*(long *)(param_1 + 0x170),uVar3,lVar4,uVar5,uVar6,0);
  if ((uVar8 & 1) == 0) {
    if ((uVar7 & 1) != 0) {
      if (lVar2 == 0) goto LAB_05dceda8;
      goto LAB_05dced08;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x170) == 0) ||
       (auVar9 = FUN_05deee1c(*(long *)(param_1 + 0x170),param_2,*(undefined8 *)(param_1 + 0x138),0)
       , lVar2 == 0)) goto LAB_05dceda8;
    FUN_05d6e0d4(lVar2,auVar9._0_8_,auVar9._8_8_,0);
LAB_05dced08:
    uVar1 = FUN_05d6df48(lVar2,0);
    FUN_05d6236c(param_1,param_2,uVar1 & 1,0);
  }
  FUN_05d63cd4(param_1,param_2,100,0);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x1ac) != '\0') {
      uVar7 = FUN_05da1d1c((long *)(param_1 + 0x310),0);
      if ((uVar7 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x310);
        if ((lVar4 == 0) ||
           (FUN_05df53a0(lVar4,param_2,*(undefined8 *)(param_1 + 0x138)), lVar2 == 0))
        goto LAB_05dceda8;
        FUN_05d6e224(lVar2,0,0,0);
      }
    }
    return;
  }
LAB_05dceda8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


