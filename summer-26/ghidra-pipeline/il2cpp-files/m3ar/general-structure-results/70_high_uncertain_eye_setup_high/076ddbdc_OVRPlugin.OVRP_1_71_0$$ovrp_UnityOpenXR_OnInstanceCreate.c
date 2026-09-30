/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceCreate
ENTRY_POINT: 076ddbdc
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceCreate(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s11;
  undefined4 unaff_s14;
  float in_stack_00000040;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 0x580));
  *(undefined1 *)(unaff_x22 + 0xe18) = 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = SQRT(unaff_s11 * unaff_s11 + in_stack_00000040 * in_stack_00000040);
  if (fVar3 <= unaff_s8) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    fVar2 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) >> 0x20);
    fVar3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
  }
  else {
    fVar2 = 0.0 / fVar3;
    fVar3 = unaff_s11 / fVar3;
  }
  if (unaff_x21 != 0) {
    uVar1 = FUN_08599d5c();
    *(undefined4 *)(unaff_x19 + 0xc) = uVar1;
    *(float *)(unaff_x19 + 0x10) = fVar2;
    *(float *)(unaff_x19 + 0x14) = fVar3;
    uVar1 = FUN_076dd2c0(unaff_s14);
    *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


