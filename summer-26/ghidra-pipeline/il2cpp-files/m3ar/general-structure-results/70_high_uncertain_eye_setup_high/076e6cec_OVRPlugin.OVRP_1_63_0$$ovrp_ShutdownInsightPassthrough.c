/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_ShutdownInsightPassthrough
ENTRY_POINT: 076e6cec
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_OVRP_1_63_0__ovrp_ShutdownInsightPassthrough(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int in_w8;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x23;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float unaff_s8;
  undefined1 auVar8 [16];
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
    param_1 = *unaff_x23;
  }
  if (**(long **)(param_1 + 0xb8) != 0) {
    iVar2 = thunk_FUN_0404056c(**(long **)(param_1 + 0xb8),0,0);
    lVar3 = *unaff_x23;
    uVar1 = iVar2 - 1;
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar3 = *unaff_x23;
        }
        lVar5 = **(long **)(lVar3 + 0xb8);
        if (lVar5 == 0) goto LAB_076e6ed4;
        if ((**(uint **)(lVar5 + 0x10) <= uVar7) ||
           (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 == 0)) goto LAB_076e6ed0;
        if (*(float *)(lVar5 + lVar6 * uVar7 * 4 + 0x20) <= unaff_s8) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar3 = *unaff_x23;
          }
          lVar5 = **(long **)(lVar3 + 0xb8);
          if (lVar5 == 0) goto LAB_076e6ed4;
          uVar4 = uVar7 + 1;
          if ((**(uint **)(lVar5 + 0x10) <= uVar4) ||
             (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 == 0)) goto LAB_076e6ed0;
          if (unaff_s8 < *(float *)(lVar5 + lVar6 * uVar4 * 4 + 0x20)) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            uVar7 = uVar7 & 0xffffffff;
            uVar4 = uVar4 & 0xffffffff;
            goto LAB_076e6ea4;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar3 = *unaff_x23;
    }
    lVar5 = **(long **)(lVar3 + 0xb8);
    if (lVar5 != 0) {
      if ((**(int **)(lVar5 + 0x10) != 0) && ((*(int **)(lVar5 + 0x10))[4] != 0)) {
        if (unaff_s8 <= *(float *)(lVar5 + 0x20)) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            lVar3 = *unaff_x23;
            lVar5 = **(long **)(lVar3 + 0xb8);
            if (lVar5 == 0) goto LAB_076e6ed4;
          }
          if ((**(uint **)(lVar5 + 0x10) <= uVar1) ||
             (lVar6 = *(long *)(*(uint **)(lVar5 + 0x10) + 4), (int)lVar6 == 0)) goto LAB_076e6ed0;
          if (unaff_s8 <= *(float *)(lVar5 + lVar6 * (int)uVar1 * 4 + 0x20)) {
            return ZEXT816(0x3f000000);
          }
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar7 = (ulong)(iVar2 - 2);
          uVar4 = (ulong)uVar1;
        }
        else {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar7 = 0;
          uVar4 = 1;
        }
LAB_076e6ea4:
        FUN_076e6f50(uVar7,uVar4);
        auVar8._4_4_ = extraout_var;
        auVar8._0_4_ = extraout_s0;
        auVar8._8_8_ = extraout_var_00;
        return auVar8;
      }
LAB_076e6ed0:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
  }
LAB_076e6ed4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


