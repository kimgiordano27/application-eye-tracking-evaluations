/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_GetInsightPassthroughInitialized
ENTRY_POINT: 076e6d50
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
OVRPlugin_OVRP_1_63_0__ovrp_GetInsightPassthroughInitialized(long param_1,long param_2)

{
  undefined1 in_CY;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *in_x9;
  long lVar4;
  ulong unaff_x19;
  int unaff_w20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float unaff_s8;
  undefined1 auVar5 [16];
  
  while( true ) {
    if (((bool)in_CY) || ((int)*(long *)(in_x9 + 4) == 0)) goto LAB_076e6ed0;
    if (*(float *)(param_1 + *(long *)(in_x9 + 4) * unaff_x21 * 4 + 0x20) <= unaff_s8) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        param_2 = *unaff_x23;
      }
      lVar3 = **(long **)(param_2 + 0xb8);
      if (lVar3 == 0) goto LAB_076e6ed4;
      uVar2 = unaff_x21 + 1;
      if ((**(uint **)(lVar3 + 0x10) <= uVar2) ||
         (lVar4 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar4 == 0)) goto LAB_076e6ed0;
      if (unaff_s8 < *(float *)(lVar3 + lVar4 * uVar2 * 4 + 0x20)) {
        if (*(int *)(param_2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar1 = unaff_x21 & 0xffffffff;
        uVar2 = uVar2 & 0xffffffff;
        goto LAB_076e6ea4;
      }
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == unaff_x19) break;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      param_2 = *unaff_x23;
    }
    param_1 = **(long **)(param_2 + 0xb8);
    if (param_1 == 0) goto LAB_076e6ed4;
    in_x9 = *(uint **)(param_1 + 0x10);
    in_CY = *in_x9 <= unaff_x21;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    param_2 = *unaff_x23;
  }
  lVar3 = **(long **)(param_2 + 0xb8);
  if (lVar3 == 0) {
LAB_076e6ed4:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if ((**(int **)(lVar3 + 0x10) != 0) && ((*(int **)(lVar3 + 0x10))[4] != 0)) {
    if (unaff_s8 <= *(float *)(lVar3 + 0x20)) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        param_2 = *unaff_x23;
        lVar3 = **(long **)(param_2 + 0xb8);
        if (lVar3 == 0) goto LAB_076e6ed4;
      }
      if ((**(uint **)(lVar3 + 0x10) <= (uint)unaff_x19) ||
         (lVar4 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar4 == 0)) goto LAB_076e6ed0;
      if (unaff_s8 <= *(float *)(lVar3 + lVar4 * (int)(uint)unaff_x19 * 4 + 0x20)) {
        return ZEXT816(0x3f000000);
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar1 = (ulong)(unaff_w20 - 2);
      uVar2 = unaff_x19 & 0xffffffff;
    }
    else {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar1 = 0;
      uVar2 = 1;
    }
LAB_076e6ea4:
    FUN_076e6f50(uVar1,uVar2);
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_8_ = extraout_var_00;
    return auVar5;
  }
LAB_076e6ed0:
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


