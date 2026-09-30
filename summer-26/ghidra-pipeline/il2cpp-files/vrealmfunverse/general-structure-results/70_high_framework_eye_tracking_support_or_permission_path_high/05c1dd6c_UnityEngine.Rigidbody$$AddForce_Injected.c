/*
FUNCTION_NAME: UnityEngine.Rigidbody$$AddForce_Injected
ENTRY_POINT: 05c1dd6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_7
*/


void UnityEngine_Rigidbody__AddForce_Injected
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,int param_6,undefined4 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined8 in_stack_00000030;
  
  if ((DAT_066d5f5b & 1) == 0) {
    FUN_02b3c81c(Method_OVRExtensions_ToNonAlloc<OVRAnchor_TrackableType>__);
    FUN_02b3c81c(Method_OVRExtensions_ToSpaceStorageLocation__);
    FUN_02b3c81c(Method_OVRExternalComposition_DisplayRefreshRateChanged__);
    FUN_02b3c81c(Method_OVREyeGaze_OnPermissionGranted__);
    FUN_02b3c81c(Method_OVRFaceExpressions_CheckValidity__);
    FUN_02b3c81c(Method_OVRFaceExpressions_CheckVisemesValidity__);
    FUN_02b3c81c(Method_OVRFaceExpressions_CopyTo__);
    FUN_02b3c81c(Method_OVRFaceExpressions_CopyVisemesTo__);
    DAT_066d5f5b = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  _iStack0000000000000028 = 0;
  in_stack_00000020 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_0451fb00(*(long *)(param_1 + 0x28),param_2,
                         *(undefined8 *)Method_OVRExtensions_ToSpaceStorageLocation__);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0451f8f8(*(long *)(param_1 + 0x28),param_2,param_3,
                   *(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_0451fd08(&stack0x00000010,*(long *)(param_1 + 0x28),
                     *(undefined8 *)Method_OVRExternalComposition_DisplayRefreshRateChanged__);
        puVar1 = Method_OVRFaceExpressions_CheckVisemesValidity__;
        do {
          uVar2 = FUN_047e1038(&stack0x00000010,*(undefined8 *)puVar1);
          if ((uVar2 & 1) == 0) {
            FUN_047e115c(&stack0x00000010,*(undefined8 *)Method_OVRFaceExpressions_CheckValidity__);
            if (DAT_066d5f68 == (code *)0x0) {
              DAT_066d5f68 = (code *)FUN_02b3c7e0(
                                                 "UnityEngine.Android.AndroidGame::StopLoading(System.Int32)"
                                                 );
            }
            (*DAT_066d5f68)(0xfffffffd);
            goto LAB_05c1deec;
          }
        } while ((iStack0000000000000028 - 4U < 3) || (iStack0000000000000028 == 0));
        FUN_047e115c(&stack0x00000010,*(undefined8 *)Method_OVRFaceExpressions_CheckValidity__);
LAB_05c1deec:
        lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_OVRExtensions_ToNonAlloc<OVRAnchor_TrackableType>__);
        FUN_04dbdb8c(lVar3,0);
        *(undefined8 *)(lVar3 + 0x10) = param_2;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x10),param_2);
        lVar4 = *(long *)(param_1 + 0x20);
        *(undefined4 *)(lVar3 + 0x18) = param_3;
        *(undefined8 *)(lVar3 + 0x20) = param_4;
        *(undefined8 *)(lVar3 + 0x28) = param_5;
        *(float *)(lVar3 + 0x30) = (float)param_6 / 100.0;
        *(undefined4 *)(lVar3 + 0x34) = param_7;
        if (lVar4 == 0) {
          return;
        }
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar3,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


