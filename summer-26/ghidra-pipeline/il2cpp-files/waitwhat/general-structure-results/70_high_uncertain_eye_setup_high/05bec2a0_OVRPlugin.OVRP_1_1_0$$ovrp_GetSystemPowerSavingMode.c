/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemPowerSavingMode
ENTRY_POINT: 05bec2a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemPowerSavingMode(ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long in_x9;
  uint in_w10;
  uint in_w11;
  uint uVar3;
  long in_x12;
  long in_x13;
  long in_x14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long *plVar4;
  
  while( true ) {
    uVar3 = (int)in_x12 + 1;
    *(undefined4 *)(in_x14 + 0x20) = *(undefined4 *)(in_x13 + 0x20);
    if (in_w11 == uVar3) {
      do {
        if (unaff_x21 == 0) goto LAB_05bec2f4;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) goto LAB_05bec2f0;
        lVar2 = unaff_x23 * 8;
        unaff_x23 = unaff_x23 + 1;
        *(long *)(unaff_x21 + lVar2 + 0x20) = param_2;
        if ((int)param_1 <= (int)unaff_x23) {
          return;
        }
        if (param_1 <= unaff_x23) goto LAB_05bec2f0;
        plVar4 = (long *)(unaff_x19 + unaff_x23 * 8 + 0x20);
        lVar2 = *plVar4;
        if (lVar2 == 0) goto LAB_05bec2f4;
        param_2 = FUN_03188b1c(*unaff_x22,*(undefined4 *)(lVar2 + 0x18));
        param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        if (param_1 <= unaff_x23) goto LAB_05bec2f0;
        in_x9 = *plVar4;
        if (in_x9 == 0) goto LAB_05bec2f4;
        in_w10 = *(uint *)(in_x9 + 0x18);
      } while ((int)in_w10 < 1);
      in_w11 = in_w10 & ((int)in_w10 >> 0x1f ^ 0xffffffffU);
      uVar3 = 0;
    }
    if (in_w10 == uVar3) break;
    if (unaff_x20 == 0) {
LAB_05bec2f4:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    in_x12 = (long)(int)uVar3;
    uVar1 = *(uint *)(in_x9 + in_x12 * 4 + 0x20);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar1) break;
    if (param_2 == 0) goto LAB_05bec2f4;
    if (*(uint *)(param_2 + 0x18) <= uVar3) break;
    in_x13 = unaff_x20 + (long)(int)uVar1 * 4;
    in_x14 = param_2 + in_x12 * 4;
  }
LAB_05bec2f0:
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


