/*
FUNCTION_NAME: FUN_06028880
ENTRY_POINT: 06028880
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_06028880(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 uStack_58;
  
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__;
  if ((DAT_06bc54bc & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_4__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_2__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_0__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_1__);
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2__);
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_System_Collections_IEnumerator_Reset__
                );
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_0__);
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_System_Collections_IEnumerator_Reset__
                );
    DAT_06bc54bc = 1;
  }
  lVar8 = *(long *)puVar1;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar1;
  }
  if ((**(long **)(lVar8 + 0xb8) != 0) &&
     (lVar8 = FUN_049845cc(**(long **)(lVar8 + 0xb8),
                           *(undefined8 *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_1__
                          ),
     puVar7 = 
     Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_System_Collections_IEnumerator_Reset__
     , puVar6 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2__,
     puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_0__,
     puVar4 = Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_2__,
     puVar3 = Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_0__,
     puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_4__,
     lVar8 != 0)) {
    FUN_0453281c(&local_90,lVar8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_System_Collections_IEnumerator_Reset__
                );
    local_70 = local_90;
    local_90 = 0;
    puStack_68 = puStack_88;
    uStack_58 = uStack_78;
    local_60 = lStack_80;
    puStack_88 = &local_70;
    while (uVar9 = FUN_04bf6800(&local_70,*(undefined8 *)puVar7), lVar8 = local_60, (uVar9 & 1) != 0
          ) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_03d7dfb8(local_60,*(undefined8 *)puVar4);
      FUN_03d7e1b8(lVar8,*(undefined8 *)puVar2);
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0336e080(lVar10,lVar8,*(undefined8 *)puVar3);
    }
    FUN_04bf67fc(&local_70,*(undefined8 *)puVar6);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      FUN_04984950(**(long **)(lVar8 + 0xb8),*(undefined8 *)puVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


