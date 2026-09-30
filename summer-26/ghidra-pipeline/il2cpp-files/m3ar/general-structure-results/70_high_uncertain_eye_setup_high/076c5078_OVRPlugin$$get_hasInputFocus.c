/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 076c5078
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076c51c8) */
/* WARNING: Removing unreachable block (ram,0x076c51ec) */
/* WARNING: Removing unreachable block (ram,0x076c5218) */
/* WARNING: Removing unreachable block (ram,0x076c521c) */
/* WARNING: Removing unreachable block (ram,0x076c513c) */
/* WARNING: Removing unreachable block (ram,0x076c5168) */
/* WARNING: Removing unreachable block (ram,0x076c51d4) */
/* WARNING: Removing unreachable block (ram,0x076c51d8) */
/* WARNING: Removing unreachable block (ram,0x076c51dc) */
/* WARNING: Removing unreachable block (ram,0x076c51b0) */
/* WARNING: Removing unreachable block (ram,0x076c51b4) */
/* WARNING: Removing unreachable block (ram,0x076c51b8) */
/* WARNING: Removing unreachable block (ram,0x076c522c) */

undefined4 OVRPlugin__get_hasInputFocus(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f6a1b8);
  *(undefined1 *)(unaff_x21 + 0x19f) = 1;
  if (unaff_w19 == 4) {
    return 0;
  }
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f6a1b8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
          goto LAB_076c50fc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 076c50dc to 077c52b3 has its CatchHandler @ 076c50dc
                       catch() { ... } // from try @ 076c50dc with catch @ 076c50dc
                       catch() { ... } // from try @ 076c53e0 with catch @ 076c50dc
                       catch() { ... } // from try @ 076c59c4 with catch @ 076c50dc
                       catch() { ... } // from try @ 076c5a4c with catch @ 076c50dc
                       catch() { ... } // from try @ 076c5ad8 with catch @ 076c50dc */
    puVar1 = (undefined8 *)FUN_0406ae20();
LAB_076c50fc:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_08facf28 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_076f3194(unaff_w19,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


