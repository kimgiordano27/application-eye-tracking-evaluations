/*
FUNCTION_NAME: OVRPlugin$$GetSpaceRoomLayout
ENTRY_POINT: 0532f0b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceRoomLayout(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar3;
  undefined1 unaff_w23;
  long unaff_x24;
  
code_r0x0532f0b8:
  *(undefined1 *)(unaff_x24 + 0x20) = unaff_w23;
  do {
    *(undefined1 *)(unaff_x24 + 0x21) = unaff_w23;
    lVar3 = unaff_x22;
LAB_0532f0dc:
    do {
      unaff_x22 = lVar3 + 1;
      if (unaff_x22 == 9) {
                    /* try { // try from 0532f0f0 to 0542f0f3 has its CatchHandler @ 0532f4c0 */
                    /* try { // try from 0532f0f4 to 0542f193 has its CatchHandler @ 0532ed3c */
        return;
      }
      lVar2 = *(long *)(unaff_x20 + 0x28);
      if (lVar2 == 0) goto LAB_0532f0fc;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar3 - 3U) {
LAB_0532f100:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(long *)(lVar2 + unaff_x22 * 8) == 0) {
LAB_0532f0fc:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_0532f328();
      lVar2 = *(long *)(unaff_x20 + 0x28);
      if (lVar2 == 0) goto LAB_0532f0fc;
      if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar3 - 3U) goto LAB_0532f100;
      lVar1 = *unaff_x21;
      unaff_x24 = *(long *)(lVar2 + unaff_x22 * 8);
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar1 = *unaff_x21;
      }
      if (unaff_x24 == 0) goto LAB_0532f0fc;
      lVar3 = unaff_x22;
      if (*(float *)(*(long *)(lVar1 + 0xb8) + 0xc) < *(float *)(unaff_x24 + 0x1c)) {
        if (*(char *)(unaff_x24 + 0x20) == '\0') goto code_r0x0532f0b8;
        goto LAB_0532f0dc;
      }
                    /* try { // try from 0532f0c4 to 0542f0cb has its CatchHandler @ 0532f4a8 */
    } while ((*(float *)(*(long *)(lVar1 + 0xb8) + 0x10) <= *(float *)(unaff_x24 + 0x1c)) ||
            (*(char *)(unaff_x24 + 0x20) == '\0'));
                    /* try { // try from 0532f0d4 to 0542f0db has its CatchHandler @ 0532f4a4 */
    *(undefined1 *)(unaff_x24 + 0x20) = 0;
  } while( true );
}


