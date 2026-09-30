/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 04f8bf2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  while (unaff_x19 != 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_04f8bfb4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar1 = unaff_x19 + unaff_x20 * 8;
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    thunk_FUN_02bb0e9c(unaff_x19 + unaff_x25,param_1);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) break;
    uVar2 = FUN_037a6268(**(long **)(*unaff_x22 + 0xb8),unaff_x20 & 0xffffffff,*unaff_x23);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_04f8bfb4;
    FUN_04d9f2a8(uVar2,*(undefined8 *)(lVar1 + 0x20),unaff_w21,0);
    unaff_x20 = unaff_x20 + 1;
    unaff_x25 = unaff_x25 + 8;
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar1 = *unaff_x22;
    }
    lVar3 = **(long **)(lVar1 + 0xb8);
    if (lVar3 == 0) break;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x20) {
      return;
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar3 == 0) break;
    }
    lVar1 = FUN_037a6268(lVar3,unaff_x20 & 0xffffffff,*unaff_x23);
    if (lVar1 == 0) break;
    unaff_w21 = *(int *)(lVar1 + 0x18) + -1;
    param_1 = FUN_02b3c908(*unaff_x24,unaff_w21);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


