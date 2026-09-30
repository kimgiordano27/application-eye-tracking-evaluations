/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemCpuLevel
ENTRY_POINT: 05bec0e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  while (lVar2 = FUN_042e47a4(param_1,unaff_x20 & 0xffffffff,param_3), lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18) + -1;
    uVar3 = FUN_03188b1c(*unaff_x24,iVar1);
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_05bec174:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar2 = unaff_x19 + unaff_x20 * 8;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    if (**(long **)(*unaff_x22 + 0xb8) == 0) break;
    uVar3 = FUN_042e47a4(**(long **)(*unaff_x22 + 0xb8),unaff_x20 & 0xffffffff,*unaff_x23);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_05bec174;
    FUN_05953590(uVar3,*(undefined8 *)(lVar2 + 0x20),iVar1,0);
    unaff_x20 = unaff_x20 + 1;
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *unaff_x22;
    }
    param_1 = **(long **)(lVar2 + 0xb8);
    if (param_1 == 0) break;
    if ((long)*(int *)(param_1 + 0x18) <= (long)unaff_x20) {
      return;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = **(long **)(*unaff_x22 + 0xb8);
      if (param_1 == 0) break;
    }
    param_3 = *unaff_x23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


