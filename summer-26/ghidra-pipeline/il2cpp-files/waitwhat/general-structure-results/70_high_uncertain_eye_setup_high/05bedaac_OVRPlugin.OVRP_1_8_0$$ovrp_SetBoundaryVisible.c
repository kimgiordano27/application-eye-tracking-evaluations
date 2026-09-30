/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_SetBoundaryVisible
ENTRY_POINT: 05bedaac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_SetBoundaryVisible(long param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  int unaff_w24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float in_stack_00000000;
  
  param_1 = param_1 + (long)unaff_w24 * 0x1c;
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * in_stack_00000000,
                (float)*(undefined8 *)(param_1 + 0x20) * in_stack_00000000);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * in_stack_00000000;
  lVar1 = *(long *)(unaff_x21 + 0x20);
  if (lVar1 != 0) {
    if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
      FUN_05b64400(lVar1 + (long)unaff_w24 * 0x1c + 0x20);
      *(uint *)(unaff_x21 + 0x40) = *(uint *)(unaff_x21 + 0x40) & (unaff_w23 ^ 0xffffffff);
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if (lVar1 == 0) goto LAB_05bedb54;
      if (unaff_w20 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)unaff_w20 * 0x1c;
        uVar2 = *(undefined8 *)(lVar1 + 0x20);
        uVar4 = *(undefined8 *)(lVar1 + 0x34);
        uVar3 = *(undefined8 *)(lVar1 + 0x2c);
        unaff_x19[1] = *(undefined8 *)(lVar1 + 0x28);
        *unaff_x19 = uVar2;
        *(undefined8 *)((long)unaff_x19 + 0x14) = uVar4;
        *(undefined8 *)((long)unaff_x19 + 0xc) = uVar3;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_05bedb54:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


