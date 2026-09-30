/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeDepth
ENTRY_POINT: 076e0adc
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeDepth(code *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  uint *unaff_x20;
  
  uVar4 = (*param_1)();
  if ((uVar4 & 1) == 0) {
    uVar1 = *unaff_x20;
    if ((-1 < (int)uVar1) && (*(char *)(unaff_x19 + 0xb0) == '\0')) {
      lVar5 = *(long *)(unaff_x19 + 0x38);
                    /* try { // try from 076e0b40 to 077e0b43 has its CatchHandler @ 076e0c18 */
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 076e0b4c to 077e0b53 has its CatchHandler @ 076e0c0c */
        if (uVar2 <= uVar1) goto LAB_076e0bcc;
        lVar6 = *(long *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
        if (lVar6 != 0) {
          if (*(float *)(lVar6 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
            if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar6 + 0x14)) {
              return;
            }
            uVar3 = uVar2 - 1;
            if ((int)(uVar1 + 1) <= (int)uVar3) {
              uVar3 = uVar1 + 1;
            }
            *unaff_x20 = uVar3;
            if (uVar2 <= uVar3) goto LAB_076e0bcc;
            uVar4 = (ulong)(int)uVar3;
          }
          else {
            if ((int)uVar1 < 2) {
              uVar1 = 1;
            }
            uVar1 = uVar1 - 1;
            *unaff_x20 = uVar1;
            if (uVar2 <= uVar1) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            uVar4 = (ulong)uVar1;
          }
          if (*(long *)(lVar5 + uVar4 * 8 + 0x20) != 0) {
            FUN_076dfc50();
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
  else {
                    /* try { // try from 076e0ae8 to 077e0aef has its CatchHandler @ 076e0c44 */
    FUN_076dfc50();
                    /* try { // try from 076e0af4 to 077e0b2b has its CatchHandler @ 076e0c4c */
    *(undefined1 *)(unaff_x19 + 0xb0) = 0;
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
  }
  return;
}


