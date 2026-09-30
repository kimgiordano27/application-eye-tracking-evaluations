/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 033c0ad4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetDesiredEyeTextureFormat(void)

{
  uint in_w8;
  ulong in_x9;
  ulong in_x10;
  uint in_w11;
  uint uVar1;
  long in_x12;
  uint *in_x13;
  long unaff_x19;
  long unaff_x20;
  
  do {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = in_w11;
    do {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_033c0b40;
      if (*(char *)(unaff_x20 + (int)uVar1 + 0x20) == '\0') {
        *in_x13 = uVar1;
        in_w11 = uVar1 + 1;
        break;
      }
      uVar1 = uVar1 + 1;
      in_w11 = in_w8;
    } while (in_w8 != uVar1);
    do {
      in_x9 = in_x9 + 1;
      if (in_x12 <= (long)in_x9) {
                    /* try { // try from 033c0b38 to 034c0ce7 has its CatchHandler @ 033c0b38
                       catch() { ... } // from try @ 033c0b38 with catch @ 033c0b38
                       catch() { ... } // from try @ 033c0e18 with catch @ 033c0b38
                       catch() { ... } // from try @ 033c1110 with catch @ 033c0b38
                       catch() { ... } // from try @ 033c11d4 with catch @ 033c0b38
                       catch() { ... } // from try @ 033c11dc with catch @ 033c0b38
                       catch() { ... } // from try @ 033c11e8 with catch @ 033c0b38
                       catch() { ... } // from try @ 033c12cc with catch @ 033c0b38
                       catch() { ... } // from try @ 033c1360 with catch @ 033c0b38 */
        return 1;
      }
      if (in_x10 <= in_x9) {
LAB_033c0b40:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      in_x13 = (uint *)(unaff_x19 + in_x9 * 4 + 0x20);
    } while ((*in_x13 != 0xffffffff) || ((int)in_w8 <= (int)in_w11));
  } while( true );
}


