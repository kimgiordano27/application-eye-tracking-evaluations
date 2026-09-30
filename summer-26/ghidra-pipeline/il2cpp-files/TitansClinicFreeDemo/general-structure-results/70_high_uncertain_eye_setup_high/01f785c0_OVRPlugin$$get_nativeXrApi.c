/*
FUNCTION_NAME: OVRPlugin$$get_nativeXrApi
ENTRY_POINT: 01f785c0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_nativeXrApi(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_w8;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_01220628();
  }
  iVar7 = -unaff_w20;
  if (-1 < unaff_w20) {
    iVar7 = unaff_w20;
  }
  lVar4 = *unaff_x21;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar6 = *(ulong *)(lVar4 + 0x18);
  uVar5 = (uint)uVar6;
  if (0x37 < uVar5) {
                    /* try { // try from 01f785f0 to 020787c3 has its CatchHandler @ 01f785f0
                       catch() { ... } // from try @ 01f785f0 with catch @ 01f785f0
                       catch() { ... } // from try @ 01f78810 with catch @ 01f785f0
                       catch() { ... } // from try @ 01f78860 with catch @ 01f785f0
                       catch() { ... } // from try @ 01f788c0 with catch @ 01f785f0
                       catch() { ... } // from try @ 01f788f0 with catch @ 01f785f0
                       catch() { ... } // from try @ 01f78938 with catch @ 01f785f0
                       catch() { ... } // from try @ 01f7896c with catch @ 01f785f0 */
    uVar11 = 0;
    iVar9 = 0x36;
    *(int *)(lVar4 + 0xfc) = 0x9a4ec86 - iVar7;
    iVar7 = 0x9a4ec86 - iVar7;
    iVar8 = 1;
    while( true ) {
      uVar1 = uVar11 + 0x15;
      uVar2 = uVar11 - 0x22;
      uVar11 = uVar1;
      if (0x36 < (int)uVar1) {
        uVar11 = uVar2;
      }
      if (uVar5 <= uVar11) break;
      iVar3 = iVar7 - iVar8;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7fffffff;
      }
      iVar9 = iVar9 + -1;
      *(int *)(lVar4 + (long)(int)uVar11 * 4 + 0x20) = iVar8;
      iVar7 = iVar8;
      iVar8 = iVar3;
      if (iVar9 == 0) {
        iVar7 = 1;
        do {
          lVar10 = 0;
          do {
            if ((uVar6 & 0xffffffff) - 1 == lVar10) goto LAB_01f786dc;
            iVar9 = 0x1e;
            if (0x18 < lVar10 + 1U) {
              iVar9 = -0x19;
            }
            uVar11 = (int)lVar10 + iVar9 + 2;
            if (uVar5 <= uVar11) goto LAB_01f786dc;
            iVar9 = *(int *)(lVar4 + 0x24 + lVar10 * 4) -
                    *(int *)(lVar4 + (long)(int)uVar11 * 4 + 0x20);
            if (iVar9 < 0) {
              iVar9 = iVar9 + 0x7fffffff;
            }
            *(int *)(lVar4 + 0x24 + lVar10 * 4) = iVar9;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x37);
          iVar7 = iVar7 + 1;
          if (iVar7 == 5) {
            *(undefined8 *)(unaff_x19 + 0x10) = DAT_00746038;
            return;
          }
        } while( true );
      }
    }
  }
LAB_01f786dc:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


