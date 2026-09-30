/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$.cctor
ENTRY_POINT: 05bf71ec
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


void OVRPlugin_OVRP_1_87_0___cctor(long param_1,long param_2)

{
  undefined1 in_CY;
  ulong in_x9;
  ulong in_x10;
  ulong in_x11;
  undefined4 *in_x12;
  undefined4 *in_x13;
  undefined8 *unaff_x19;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  while ((!(bool)in_CY && (in_x10 < *(uint *)(param_1 + 0x18)))) {
    in_x12[-3] = in_x13[-3];
    if (in_x11 <= in_x9 + 1) break;
    in_x12[-2] = in_x13[-2];
    if (in_x11 <= in_x9 + 2) break;
    in_x12[-1] = in_x13[-1];
    if (in_x11 <= in_x9 + 3) break;
    in_x10 = in_x10 + 1;
    in_x9 = in_x9 + 4;
    *in_x12 = *in_x13;
    if (in_x10 == 0x18) {
      uStack000000000000000c = 0;
      uStack0000000000000014 = 0;
      FUN_069e4d6c(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 8),
                   *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                   *(undefined4 *)(param_2 + 0x14));
      unaff_x19[1] = (ulong)uStack000000000000000c << 0x20;
      *unaff_x19 = 0;
      *(ulong *)((long)unaff_x19 + 0x14) = (ulong)uStack0000000000000014;
      *(ulong *)((long)unaff_x19 + 0xc) = (ulong)uStack000000000000000c;
      return;
    }
    in_CY = in_x11 <= in_x9;
    in_x12 = in_x12 + 4;
    in_x13 = in_x13 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


