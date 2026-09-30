/*
FUNCTION_NAME: OVRManager$$add_SceneCaptureComplete
ENTRY_POINT: 02c013f8
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_SceneCaptureComplete(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  ulong uVar5;
  long unaff_x29;
  
code_r0x02c013f8:
  lVar2 = FUN_02a543c0(param_1,param_2);
  if (unaff_w27 < *(uint *)(unaff_x24 + 0x18)) {
    *unaff_x25 = lVar2;
    thunk_FUN_0188fd20(unaff_x25,lVar2);
    if (unaff_x29 != 0) {
                    /* catch() { ... } // from try @ 02c014b0 with catch @ 02c01420
                       catch() { ... } // from try @ 02c01580 with catch @ 02c01420 */
      if ((int)*(ulong *)(unaff_x29 + 0x18) < 1) {
LAB_02c01248:
        FUN_02c017e4();
        return 0;
      }
      uVar5 = 0;
      uVar4 = *(ulong *)(unaff_x29 + 0x18) & 0xffffffff;
      do {
        if ((uVar4 <= uVar5) || (*(uint *)(unaff_x24 + 0x18) <= unaff_w27)) goto LAB_02c01518;
        lVar2 = *(long *)(unaff_x26 + uVar5 * 8);
                    /* try { // try from 02c0144c to 02d0146b has its CatchHandler @ 02c0153c */
        if ((unaff_x21 & 1) == 0) {
          if (lVar2 == 0) break;
          uVar4 = FUN_02a4f854(lVar2,*unaff_x25,0);
          if ((uVar4 & 1) != 0) goto LAB_02c0148c;
        }
        else {
          iVar1 = FUN_02a4e824(lVar2,*unaff_x25,5,0);
          if (iVar1 == 0) goto LAB_02c0148c;
        }
                    /* try { // try from 02c01478 to 02d0148f has its CatchHandler @ 02c01538 */
        uVar4 = (ulong)*(uint *)(unaff_x29 + 0x18);
        uVar5 = uVar5 + 1;
        if ((long)(int)*(uint *)(unaff_x29 + 0x18) <= (long)uVar5) goto LAB_02c01248;
      } while( true );
    }
    goto LAB_02c01514;
  }
LAB_02c01518:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
LAB_02c0148c:
  if (unaff_x23 != 0) {
                    /* try { // try from 02c01498 to 02d0149f has its CatchHandler @ 02c01534 */
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)uVar5) goto LAB_02c01518;
                    /* try { // try from 02c014a0 to 02d014af has its CatchHandler @ 02c01530 */
    unaff_w27 = unaff_w27 + 1;
                    /* try { // try from 02c014b0 to 02d01553 has its CatchHandler @ 02c01420 */
    if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w27) {
      if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar3 = FUN_02c01e20();
      *unaff_x19 = uVar3;
      thunk_FUN_0188fd20();
      return 1;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w27) goto LAB_02c01518;
    unaff_x25 = (long *)(unaff_x24 + (long)(int)unaff_w27 * 8 + 0x20);
    param_1 = *unaff_x25;
    if (param_1 != 0) {
      param_2 = 0;
      goto code_r0x02c013f8;
    }
  }
LAB_02c01514:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


