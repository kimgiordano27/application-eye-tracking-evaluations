/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 09099a8c
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasInputFocus(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x21;
  float fVar6;
  float fVar7;
  undefined4 uStack000000000000000c;
  
                    /* try { // try from 09099a8c to 09199a8f has its CatchHandler @ 09099b08 */
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75968);
                    /* try { // try from 09099a9c to 09199aa7 has its CatchHandler @ 09099aec */
    *(undefined1 *)(unaff_x21 + 0x227) = 1;
  }
  puVar1 = PTR_DAT_0ac75968;
  uStack000000000000000c = 0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 09099abc to 09199adb has its CatchHandler @ 09099af0 */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac75968) {
                    /* catch() { ... } // from try @ 09099a64 with catch @ 09099af4 */
                    /* catch() { ... } // from try @ 09099a54 with catch @ 09099af8 */
                    /* catch() { ... } // from try @ 09099ae4 with catch @ 09099afc */
                    /* catch() { ... } // from try @ 09099ae0 with catch @ 09099b00 */
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_09099b04;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 09099ae0 to 09199ae3 has its CatchHandler @ 09099b00 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 09099ae4 to 09199ae7 has its CatchHandler @ 09099afc */
                    /* try { // try from 09099ae8 to 09199aeb has its CatchHandler @ 09099b04 */
                    /* catch() { ... } // from try @ 09099a9c with catch @ 09099aec */
  puVar2 = (undefined8 *)FUN_04980e68();
                    /* catch() { ... } // from try @ 09099abc with catch @ 09099af0 */
LAB_09099b04:
                    /* catch() { ... } // from try @ 09099a4c with catch @ 09099b04
                       catch() { ... } // from try @ 09099ae8 with catch @ 09099b04 */
                    /* catch() { ... } // from try @ 09099a8c with catch @ 09099b08 */
  fVar6 = (float)(*(code *)*puVar2)();
  if (0.0 < fVar6) {
                    /* catch() { ... } // from try @ 09099a74 with catch @ 09099b1c
                       catch() { ... } // from try @ 09099b64 with catch @ 09099b1c
                       catch() { ... } // from try @ 09099bd4 with catch @ 09099b1c */
                    /* try { // try from 09099b24 to 09199b27 has its CatchHandler @ 09099cec */
    fVar6 = (float)FUN_0909de30();
    lVar3 = *unaff_x19;
                    /* try { // try from 09099b3c to 09199b3f has its CatchHandler @ 09099d00 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* try { // try from 09099b44 to 09199b4f has its CatchHandler @ 09099cf0 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 09099b54 to 09199b5f has its CatchHandler @ 09099cf4 */
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_09099b84;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 09099b64 to 09199b6f has its CatchHandler @ 09099b1c */
    puVar2 = (undefined8 *)FUN_04980e68();
LAB_09099b84:
    fVar7 = (float)(*(code *)*puVar2)();
    if (fVar6 <= fVar7) {
      FUN_0909a0ec();
    }
  }
  return;
}


