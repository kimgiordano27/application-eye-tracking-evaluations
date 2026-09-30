/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions
ENTRY_POINT: 073a05e8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  *(undefined1 *)(unaff_x23 + 0x55d) = 1;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar1 = *unaff_x22;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0xb8);
  in_stack_00000070 = puVar2[6];
  in_stack_00000058 = puVar2[3];
  in_stack_00000050 = puVar2[2];
  in_stack_00000068 = puVar2[5];
  in_stack_00000060 = puVar2[4];
  in_stack_00000048 = puVar2[1];
  in_stack_00000040 = *puVar2;
  if (unaff_x21 != (long *)0x0) {
    in_stack_00000080 = in_stack_00000040;
    in_stack_00000088 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000050;
    in_stack_00000098 = in_stack_00000058;
    in_stack_000000a0 = in_stack_00000060;
    in_stack_000000a8 = in_stack_00000068;
    in_stack_000000b0 = in_stack_00000070;
    (**(code **)(*unaff_x21 + 0x1b8))(&stack0x00000008);
    unaff_x19[6] = in_stack_00000038;
    unaff_x19[3] = in_stack_00000020;
    unaff_x19[2] = in_stack_00000018;
    unaff_x19[5] = in_stack_00000030;
    unaff_x19[4] = in_stack_00000028;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


