/*
FUNCTION_NAME: OVRManager$$FindMainCamera
ENTRY_POINT: 033aac14
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FindMainCamera(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong unaff_x19;
  ulong uVar9;
  ulong unaff_x20;
  ulong uVar10;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 uStack0000000000000018;
  
code_r0x033aac14:
  uVar9 = unaff_x19;
  uStack0000000000000018 = *(undefined8 *)(unaff_x22 + uVar9 * 8 + 0x20);
  lVar11 = unaff_x21[uVar9 + 4];
  bVar1 = false;
                    /* try { // try from 033aac28 to 034aac2b has its CatchHandler @ 033aac30 */
                    /* try { // try from 033aac2c to 034aac2f has its CatchHandler @ 033aac38 */
  uVar13 = uVar9;
  do {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033aac28 with catch @ 033aac30
                       try { // try from 033aac30 to 034aac4f has its CatchHandler @ 033aab50 */
    uVar10 = unaff_x20;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033aaba8 with catch @ 033aac34
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033aabec with catch @ 033aac38
                       catch(type#1 @ 03fad958) { ... } // from try @ 033aac2c with catch @ 033aac38
                        */
    if (unaff_x23 == (long *)0x0) goto LAB_033aadec;
    lVar6 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 033aac50 to 034aac53 has its CatchHandler @ 033aac60 */
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 033aac50 with catch @ 033aac60 */
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2464) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033aac6c with catch @ 033aac8c
                       catch(type#2 @ 00000000) { ... } // from try @ 033aac84 with catch @ 033aac8c
                        */
                    /* try { // try from 033aac90 to 034aace7 has its CatchHandler @ 033aac90
                       catch() { ... } // from try @ 033aac90 with catch @ 033aac90
                       catch() { ... } // from try @ 033aadb4 with catch @ 033aac90
                       catch() { ... } // from try @ 033aadec with catch @ 033aac90
                       catch() { ... } // from try @ 033aae84 with catch @ 033aac90
                       catch() { ... } // from try @ 033aaef4 with catch @ 033aac90 */
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033aac94;
        }
                    /* try { // try from 033aac6c to 034aac77 has its CatchHandler @ 033aac8c */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 033aac78 to 034aac83 has its CatchHandler @ 033aab50 */
    puVar3 = (undefined8 *)FUN_01dde8fc();
                    /* try { // try from 033aac84 to 034aac8b has its CatchHandler @ 033aac8c */
LAB_033aac94:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 < 1) {
      if (!bVar1) goto LAB_033aad9c;
      goto LAB_033aad48;
    }
    if ((*(uint *)(unaff_x22 + 0x18) <= (uint)uVar10) ||
       (*(uint *)(unaff_x22 + 0x18) <= (uint)uVar13)) goto LAB_033aade8;
    *(undefined8 *)(unaff_x22 + uVar13 * 8 + 0x20) = *(undefined8 *)(unaff_x22 + uVar10 * 8 + 0x20);
    thunk_FUN_01e10808();
    uVar12 = *(uint *)(unaff_x21 + 3);
    if (uVar12 <= (uint)uVar10) goto LAB_033aade8;
    lVar6 = unaff_x21[uVar10 + 4];
                    /* try { // try from 033aace8 to 034aad07 has its CatchHandler @ 033aaeb0 */
    if (lVar6 != 0) {
      lVar4 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
      if (lVar4 == 0) goto LAB_033aadf0;
      uVar12 = *(uint *)(unaff_x21 + 3);
    }
    if (uVar12 <= (uint)uVar13) goto LAB_033aade8;
    unaff_x21[uVar13 + 4] = lVar6;
    thunk_FUN_01e10808(unaff_x21 + uVar13 + 4,lVar6);
    if (uVar10 == 0) break;
    bVar1 = true;
                    /* try { // try from 033aad2c to 034aad2f has its CatchHandler @ 033aaea4 */
    unaff_x20 = uVar10 - 1;
    uVar13 = uVar10;
    if (*(uint *)(unaff_x21 + 3) <= (uint)(uVar10 - 1)) goto LAB_033aade8;
  } while( true );
  uVar13 = 0;
LAB_033aad48:
  uVar12 = (uint)uVar13;
  if (*(uint *)(unaff_x22 + 0x18) <= uVar12) {
LAB_033aade8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033aade8 to 034aadeb has its CatchHandler @ 033aae9c */
    FUN_01d7db78();
  }
  *(undefined8 *)(unaff_x22 + (long)(int)uVar12 * 8 + 0x20) = uStack0000000000000018;
                    /* try { // try from 033aad64 to 034aad67 has its CatchHandler @ 033aae98 */
  thunk_FUN_01e10808();
                    /* try { // try from 033aad78 to 034aad7b has its CatchHandler @ 033aae90 */
  if ((lVar11 != 0) &&
     (lVar6 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*unaff_x21 + 0x40)), lVar6 == 0)) {
LAB_033aadf0:
    uVar5 = thunk_FUN_01dfb5cc();
                    /* try { // try from 033aadf4 to 034aadf7 has its CatchHandler @ 033aaeac */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033aadf8 to 034aadfb has its CatchHandler @ 033aaea8 */
    FUN_01d7da3c(uVar5,0);
  }
  if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033aade8;
  unaff_x21[(long)(int)uVar12 + 4] = lVar11;
  thunk_FUN_01e10808(unaff_x21 + (long)(int)uVar12 + 4,lVar11);
LAB_033aad9c:
                    /* try { // try from 033aad9c to 034aada3 has its CatchHandler @ 033aaeb4 */
  uVar12 = *(uint *)(unaff_x21 + 3);
  unaff_x19 = uVar9 + 1;
                    /* try { // try from 033aada8 to 034aadb3 has its CatchHandler @ 033aae94 */
  if ((long)(int)uVar12 <= (long)unaff_x19) {
                    /* try { // try from 033aadb4 to 034aade7 has its CatchHandler @ 033aac90 */
    *in_stack_00000008 = unaff_x22;
    thunk_FUN_01e10808();
    *in_stack_00000010 = unaff_x21;
    thunk_FUN_01e10808();
    return;
  }
  if (unaff_x22 == 0) {
LAB_033aadec:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033aadec to 034aadf3 has its CatchHandler @ 033aac90 */
    FUN_01d7db70();
  }
  if (((*(uint *)(unaff_x22 + 0x18) <= unaff_x19) || (uVar12 <= unaff_x19)) ||
     (unaff_x20 = uVar9, uVar12 <= (uint)uVar9)) goto LAB_033aade8;
  goto code_r0x033aac14;
}


