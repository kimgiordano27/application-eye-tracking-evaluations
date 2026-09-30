/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 073eb5b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ChangeVirtualKeyboardTextContext(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long unaff_x20;
  long lVar7;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 073eb598 with catch @ 073eb5c4 */
      if (*(long *)(piVar6 + -2) == param_3) {
                    /* catch() { ... } // from try @ 073eb40c with catch @ 073eb5e8
                       try { // try from 073eb5e8 to 074eb5ff has its CatchHandler @ 073eb01c */
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 0x11) * 0x10 + 0x138);
        goto LAB_073eb5f4;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
                    /* try { // try from 073eb5d4 to 074eb5e7 has its CatchHandler @ 073eb780 */
  puVar2 = (undefined8 *)FUN_03cf1348();
LAB_073eb5f4:
  uVar3 = (*(code *)*puVar2)();
                    /* try { // try from 073eb600 to 074eb603 has its CatchHandler @ 073eb62c */
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 073eb604 to 074eb63b has its CatchHandler @ 073eb01c */
    FUN_073eb72c();
    puVar1 = PTR_DAT_08eb5f10;
    lVar7 = 4;
    do {
      lVar5 = *(long *)(unaff_x20 + 0x28);
      if (lVar5 == 0) goto LAB_073eb6dc;
                    /* catch() { ... } // from try @ 073eb600 with catch @ 073eb62c */
      if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar7 - 4U) {
LAB_073eb6e0:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
                    /* try { // try from 073eb63c to 074eb64f has its CatchHandler @ 073eb780 */
      if (*(long *)(lVar5 + lVar7 * 8) == 0) {
LAB_073eb6dc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_073eb8ec();
                    /* catch() { ... } // from try @ 073eb384 with catch @ 073eb650
                       try { // try from 073eb650 to 074eb667 has its CatchHandler @ 073eb01c */
      lVar5 = *(long *)(unaff_x20 + 0x28);
      if (lVar5 == 0) goto LAB_073eb6dc;
      if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar7 - 4U) goto LAB_073eb6e0;
      lVar4 = *(long *)puVar1;
                    /* try { // try from 073eb668 to 074eb66b has its CatchHandler @ 073eb690 */
      lVar5 = *(long *)(lVar5 + lVar7 * 8);
                    /* try { // try from 073eb66c to 074eb69f has its CatchHandler @ 073eb01c */
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar4 = *(long *)puVar1;
      }
      if (lVar5 == 0) goto LAB_073eb6dc;
      if (*(float *)(lVar5 + 0x1c) <= *(float *)(*(long *)(lVar4 + 0xb8) + 0xc)) {
        if ((*(float *)(lVar5 + 0x1c) < *(float *)(*(long *)(lVar4 + 0xb8) + 0x10)) &&
           (*(char *)(lVar5 + 0x20) != '\0')) {
          *(undefined2 *)(lVar5 + 0x20) = 0x100;
        }
      }
      else if (*(char *)(lVar5 + 0x20) == '\0') {
        *(undefined2 *)(lVar5 + 0x20) = 0x101;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 9);
  }
  return;
}


