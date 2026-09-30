/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_AreHandPosesGeneratedByControllerData
ENTRY_POINT: 063bce00
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_AreHandPosesGeneratedByControllerData(float param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float unaff_s8;
  undefined8 in_stack_00000008;
  
  param_1 = unaff_s8 - param_1;
  *(float *)(unaff_x19 + 0x28) = param_1;
  if (0.0 <= param_1) {
    if (0.0 < param_1) {
      return;
    }
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_07546de8(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_0755de80(*(undefined8 *)PTR_DAT_07db7660,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_07d89f60 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      in_stack_00000008 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffset(0);
      uVar2 = FUN_06225018(&stack0x00000008,0);
      uVar2 = System_Convert__ToInt32(*(undefined8 *)PTR_DAT_07db7658,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
      }
      FUN_0755d864(uVar2,0);
      FUN_063bcce0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


