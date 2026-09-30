/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboardSpace
ENTRY_POINT: 073eb674
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateVirtualKeyboardSpace(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long *unaff_x22;
  undefined2 unaff_w23;
  undefined2 unaff_w24;
  long unaff_x25;
  
  do {
    thunk_FUN_03cd7500();
    lVar1 = *unaff_x22;
    lVar3 = unaff_x21;
    do {
      if (unaff_x25 == 0) {
LAB_073eb6dc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
                    /* catch() { ... } // from try @ 073eb668 with catch @ 073eb690 */
      if (*(float *)(unaff_x25 + 0x1c) <= *(float *)(*(long *)(lVar1 + 0xb8) + 0xc)) {
                    /* catch() { ... } // from try @ 073eb2ec with catch @ 073eb6b4
                       try { // try from 073eb6b4 to 074eb6cb has its CatchHandler @ 073eb01c */
        if ((*(float *)(unaff_x25 + 0x1c) < *(float *)(*(long *)(lVar1 + 0xb8) + 0x10)) &&
           (*(char *)(unaff_x25 + 0x20) != '\0')) {
          *(undefined2 *)(unaff_x25 + 0x20) = unaff_w24;
        }
      }
      else if (*(char *)(unaff_x25 + 0x20) == '\0') {
        *(undefined2 *)(unaff_x25 + 0x20) = unaff_w23;
                    /* try { // try from 073eb6a0 to 074eb6b3 has its CatchHandler @ 073eb780 */
      }
      unaff_x21 = lVar3 + 1;
      if (unaff_x21 == 9) {
                    /* try { // try from 073eb6cc to 074eb6cf has its CatchHandler @ 073eb6f8 */
                    /* try { // try from 073eb6d0 to 074eb707 has its CatchHandler @ 073eb01c */
        return;
      }
      lVar1 = *(long *)(unaff_x20 + 0x28);
      if (lVar1 == 0) goto LAB_073eb6dc;
      if ((ulong)*(uint *)(lVar1 + 0x18) <= lVar3 - 3U) {
LAB_073eb6e0:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (*(long *)(lVar1 + unaff_x21 * 8) == 0) goto LAB_073eb6dc;
      FUN_073eb8ec();
      lVar2 = *(long *)(unaff_x20 + 0x28);
      if (lVar2 == 0) goto LAB_073eb6dc;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar3 - 3U) goto LAB_073eb6e0;
      lVar1 = *unaff_x22;
      unaff_x25 = *(long *)(lVar2 + unaff_x21 * 8);
      lVar3 = unaff_x21;
    } while (*(int *)(lVar1 + 0xe0) != 0);
  } while( true );
}


