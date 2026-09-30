/*
FUNCTION_NAME: FUN_05512e44
ENTRY_POINT: 05512e44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_8;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_05512e44(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_48;
  
  puVar5 = UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo;
  puVar4 = PTR_DAT_067c8f80;
  if ((DAT_06bbf5d7 & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_ProjectionData_TypeInfo
                );
    FUN_02f08768(OVRPlugin_OVRP_1_89_0_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                );
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo);
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo);
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
    DAT_06bbf5d7 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)puVar5;
  local_48 = 0;
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  lVar8 = thunk_FUN_02f45270(uVar7);
  FUN_05116b38(lVar8,0);
  lVar9 = *(long *)puVar4;
  *(int *)(lVar8 + 0x10) = iVar2;
  *(undefined4 *)(lVar8 + 0x14) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050d645c(uVar6,uVar1,0);
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_05513098;
  uVar10 = FUN_037833e4(*(long *)(param_1 + 0x10),param_2,&local_48,
                        *(undefined8 *)
                         UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_ProjectionData_TypeInfo
                       );
  lVar9 = local_48;
  if ((uVar10 & 1) == 0) {
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
    *(undefined4 *)(lVar11 + 0x14) = 0x7fffffff;
    FUN_05116b38(lVar11,0);
    *(undefined4 *)(lVar11 + 0x10) = param_3;
    *(long *)(lVar11 + 0x18) = lVar8;
    *(undefined8 *)(lVar11 + 0x20) = 0;
  }
  else {
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo);
    *(undefined4 *)(lVar11 + 0x14) = 0x7fffffff;
    FUN_05116b38(lVar11,0);
    lVar12 = local_48;
    *(undefined4 *)(lVar11 + 0x10) = param_3;
    *(long *)(lVar11 + 0x18) = lVar8;
    *(long *)(lVar11 + 0x20) = lVar9;
    if (local_48 == 0) goto LAB_05513098;
    if (*(long *)(local_48 + 0x28) == 0) {
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                  UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_TypeInfo
                                );
      FUN_03abf108(uVar7,*(undefined8 *)
                          UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_TypeInfo
                  );
      *(undefined8 *)(lVar12 + 0x28) = uVar7;
      if (local_48 == 0) goto LAB_05513098;
    }
    lVar9 = *(long *)(local_48 + 0x28);
    if (lVar9 == 0) goto LAB_05513098;
    lVar12 = *(long *)(lVar9 + 0x10);
    lVar13 = *(long *)
              UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_TypeInfo
    ;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05513098;
    uVar3 = *(uint *)(lVar9 + 0x18);
    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar3 + 1;
      *(long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20) = lVar11;
    }
    else {
      FUN_03abf904(lVar9,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_03783694(*(long *)(param_1 + 0x10),param_2,lVar11,
                 *(undefined8 *)OVRPlugin_OVRP_1_89_0_TypeInfo);
    return *(undefined4 *)(lVar8 + 0x10);
  }
LAB_05513098:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


