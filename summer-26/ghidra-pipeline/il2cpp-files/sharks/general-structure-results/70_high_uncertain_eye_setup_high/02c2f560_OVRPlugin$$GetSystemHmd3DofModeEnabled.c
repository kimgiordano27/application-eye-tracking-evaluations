/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 02c2f560
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetSystemHmd3DofModeEnabled(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int unaff_w19;
  ulong unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  
                    /* try { // try from 02c2f560 to 02d2f567 has its CatchHandler @ 02c2f698 */
  thunk_FUN_01843fdc();
                    /* try { // try from 02c2f570 to 02d2f577 has its CatchHandler @ 02c2f69c */
  lVar7 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  if (unaff_w19 < 0x14) {
    if (unaff_w21 < 4) {
      return 9;
    }
    if (unaff_w21 != 4) goto LAB_02c2f5f4;
                    /* try { // try from 02c2f58c to 02d2f5ab has its CatchHandler @ 02c2f6b8 */
    if (unaff_x20 < 0x4b82fa09b5a52cba) {
      return 9;
    }
    uVar8 = 8;
  }
  else {
    if (lVar7 == 0) goto LAB_02c2f6e8;
                    /* try { // try from 02c2f5c4 to 02d2f5cb has its CatchHandler @ 02c2f6bc */
    if (*(uint *)(lVar7 + 0x18) <= (uint)(0x1b - (long)unaff_w19)) goto LAB_02c2f6ec;
    if (unaff_w21 < *(uint *)(lVar7 + (0x1b - (long)unaff_w19) * 0x10 + 0x20)) {
      uVar4 = 0x1c - unaff_w19;
      goto LAB_02c2f5a8;
    }
LAB_02c2f5f4:
                    /* try { // try from 02c2f5f4 to 02d2f60f has its CatchHandler @ 02c2f684 */
    if (unaff_w21 < 0xa7c6) {
                    /* try { // try from 02c2f62c to 02d2f66f has its CatchHandler @ 02c2f2b8 */
      if (unaff_w21 < 0x1ae) {
        bVar2 = 0x29 < unaff_w21;
        bVar3 = unaff_w21 == 0x2a;
        uVar8 = 7;
      }
      else {
        bVar2 = 0x10c5 < unaff_w21;
        bVar3 = unaff_w21 == 0x10c6;
        uVar8 = 5;
      }
    }
    else if (unaff_w21 < 0x418938) {
      bVar2 = 0x68db7 < unaff_w21;
      bVar3 = unaff_w21 == 0x68db8;
      uVar8 = 3;
    }
    else {
      bVar2 = 0x28f5c27 < unaff_w21;
      bVar3 = unaff_w21 == 0x28f5c28;
      uVar8 = 1;
    }
    if (!bVar2 || bVar3) {
      uVar8 = uVar8 + 1;
    }
  }
  if (lVar7 != 0) {
    uVar1 = uVar8 - 1;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      uVar4 = uVar8;
      if ((unaff_w21 == *(uint *)(lVar7 + (ulong)uVar1 * 0x10 + 0x20)) &&
         (uVar4 = uVar1, unaff_x20 <= *(ulong *)(lVar7 + (ulong)uVar1 * 0x10 + 0x28))) {
        uVar4 = uVar8;
      }
LAB_02c2f5a8:
      if ((int)(uVar4 + unaff_w19) < 0) {
        thunk_FUN_01851c08(PTR_DAT_037f87b0);
        uVar5 = thunk_FUN_01861bbc();
        uVar6 = thunk_FUN_01851c08(PTR_DAT_03809d90);
        FUN_02bde04c(uVar5,uVar6,0);
        uVar6 = thunk_FUN_01851c08(PTR_DAT_0380bdb8);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar5,uVar6);
      }
      return uVar4;
    }
LAB_02c2f6ec:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
LAB_02c2f6e8:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


