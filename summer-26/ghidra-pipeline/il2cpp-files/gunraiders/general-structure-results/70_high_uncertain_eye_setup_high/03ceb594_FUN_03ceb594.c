/*
FUNCTION_NAME: FUN_03ceb594
ENTRY_POINT: 03ceb594
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ceb81c) */
/* WARNING: Removing unreachable block (ram,0x03ceb820) */
/* WARNING: Removing unreachable block (ram,0x03ceb86c) */

undefined8 FUN_03ceb594(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = StringLiteral_6955;
  if ((DAT_0453c138 & 1) == 0) {
                    /* try { // try from 03ceb5b4 to 03deb5b7 has its CatchHandler @ 03ceb654 */
    FUN_01c5d288(StringLiteral_6955);
                    /* try { // try from 03ceb5c0 to 03deb5df has its CatchHandler @ 03ceb680 */
    FUN_01c5d288(PTR_DAT_0422f988);
    FUN_01c5d288(OVRPlugin_Vector2f___TypeInfo);
                    /* try { // try from 03ceb5e0 to 03deb633 has its CatchHandler @ 03ceb2b8 */
    FUN_01c5d288(PTR_DAT_042375f8);
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(StringLiteral_6956);
    FUN_01c5d288(StringLiteral_6957);
    FUN_01c5d288(StringLiteral_6958);
    DAT_0453c138 = 1;
  }
                    /* try { // try from 03ceb634 to 03deb637 has its CatchHandler @ 03ceb698 */
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* catch() { ... } // from try @ 03ceb640 with catch @ 03ceb65c */
                    /* catch() { ... } // from try @ 03ceb4b8 with catch @ 03ceb660 */
                    /* catch() { ... } // from try @ 03ceb480 with catch @ 03ceb664
                       catch() { ... } // from try @ 03ceb648 with catch @ 03ceb664 */
                    /* catch() { ... } // from try @ 03ceb448 with catch @ 03ceb668
                       catch() { ... } // from try @ 03ceb644 with catch @ 03ceb668 */
    plVar4 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422f988);
                    /* catch() { ... } // from try @ 03ceb434 with catch @ 03ceb66c */
                    /* catch() { ... } // from try @ 03ceb3a0 with catch @ 03ceb670 */
                    /* catch() { ... } // from try @ 03ceb498 with catch @ 03ceb674 */
                    /* catch() { ... } // from try @ 03ceb414 with catch @ 03ceb678 */
                    /* catch() { ... } // from try @ 03ceb3e4 with catch @ 03ceb67c
                       catch() { ... } // from try @ 03ceb47c with catch @ 03ceb67c
                       catch() { ... } // from try @ 03ceb4e0 with catch @ 03ceb67c
                       catch() { ... } // from try @ 03ceb534 with catch @ 03ceb67c
                       catch() { ... } // from try @ 03ceb588 with catch @ 03ceb67c */
    uVar6 = *(undefined8 *)StringLiteral_6957;
                    /* catch() { ... } // from try @ 03ceb5c0 with catch @ 03ceb680 */
    FUN_03313b6c(plVar4,0);
                    /* catch() { ... } // from try @ 03ceb58c with catch @ 03ceb684
                       catch() { ... } // from try @ 03ceb63c with catch @ 03ceb684 */
                    /* catch() { ... } // from try @ 03ceb56c with catch @ 03ceb688 */
                    /* catch() { ... } // from try @ 03ceb538 with catch @ 03ceb68c */
    FUN_03ce9c54(plVar4,uVar6);
    puVar1 = PTR_DAT_0422f958;
                    /* catch() { ... } // from try @ 03ceb3e8 with catch @ 03ceb690
                       catch() { ... } // from try @ 03ceb638 with catch @ 03ceb690 */
                    /* catch() { ... } // from try @ 03ceb3c8 with catch @ 03ceb694 */
                    /* catch() { ... } // from try @ 03ceb634 with catch @ 03ceb698 */
    lVar11 = *(long *)PTR_DAT_0422f958;
                    /* catch() { ... } // from try @ 03ceb554 with catch @ 03ceb69c */
    lVar8 = *(long *)(lVar11 + 0x38);
                    /* catch() { ... } // from try @ 03ceb384 with catch @ 03ceb6a0 */
    if (lVar8 == 0) {
      FUN_01c723f0(lVar11);
      lVar8 = *(long *)(lVar11 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 03ceb6b8 to 03deb6bb has its CatchHandler @ 03ceb6dc */
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                    /* try { // try from 03ceb6bc to 03deb6df has its CatchHandler @ 03ceb2b8 */
      lVar8 = FUN_01c72394();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 03ceb6b8 with catch @ 03ceb6dc */
      lVar8 = FUN_01c72394();
    }
                    /* try { // try from 03ceb6e0 to 03deb6eb has its CatchHandler @ 03ceb700 */
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
                    /* try { // try from 03ceb6ec to 03deb6f7 has its CatchHandler @ 03ceb2b8 */
                    /* try { // try from 03ceb6f8 to 03deb6ff has its CatchHandler @ 03ceb700 */
                    /* catch() { ... } // from try @ 03ceb6e0 with catch @ 03ceb700
                       catch() { ... } // from try @ 03ceb6f8 with catch @ 03ceb700 */
                    /* try { // try from 03ceb704 to 03deb7f3 has its CatchHandler @ 03ceb704
                       catch() { ... } // from try @ 03ceb704 with catch @ 03ceb704
                       catch() { ... } // from try @ 03cebcf8 with catch @ 03ceb704
                       catch() { ... } // from try @ 03cebd4c with catch @ 03ceb704
                       catch() { ... } // from try @ 03cebe10 with catch @ 03ceb704
                       catch() { ... } // from try @ 03cebe40 with catch @ 03ceb704 */
    uVar6 = FUN_021fb584(plVar4,*(undefined8 *)StringLiteral_6956,**(undefined8 **)(lVar8 + 0xb8),
                         *(undefined8 *)OVRPlugin_Vector2f___TypeInfo);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
    lVar12 = *(long *)puVar1;
    lVar8 = *(long *)(lVar12 + 0x38);
    lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar8 == 0) {
      FUN_01c723f0(lVar12);
      lVar8 = *(long *)(lVar12 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394();
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    bVar3 = FUN_021fab3c(lVar11,*(undefined8 *)StringLiteral_6958,**(undefined8 **)(lVar8 + 0xb8),
                         *(undefined8 *)PTR_DAT_042375f8);
    *(byte *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = bVar3 & 1;
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0422fce8) {
                    /* try { // try from 03ceb7f8 to 03deb7fb has its CatchHandler @ 03cebdec */
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ceb804;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_0422fce8,0);
                    /* try { // try from 03ceb7f4 to 03deb7f7 has its CatchHandler @ 03cebd94 */
LAB_03ceb804:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 03ceb818 to 03deb823 has its CatchHandler @ 03cebde0 */
  }
                    /* try { // try from 03ceb638 to 03deb63b has its CatchHandler @ 03ceb690 */
                    /* try { // try from 03ceb63c to 03deb63f has its CatchHandler @ 03ceb684 */
                    /* try { // try from 03ceb640 to 03deb643 has its CatchHandler @ 03ceb65c */
                    /* try { // try from 03ceb644 to 03deb647 has its CatchHandler @ 03ceb668 */
  if (*(char *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1) == '\0') {
                    /* try { // try from 03ceb648 to 03deb64b has its CatchHandler @ 03ceb664 */
                    /* catch() { ... } // from try @ 03ceb4f0 with catch @ 03ceb64c
                       try { // try from 03ceb64c to 03deb6b7 has its CatchHandler @ 03ceb2b8 */
                    /* catch() { ... } // from try @ 03ceb458 with catch @ 03ceb650 */
                    /* catch() { ... } // from try @ 03ceb5b4 with catch @ 03ceb654 */
                    /* catch() { ... } // from try @ 03ceb550 with catch @ 03ceb658 */
    return **(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  thunk_FUN_01c273e8(PTR_DAT_04237cd0);
  uVar6 = thunk_FUN_01c496e0();
                    /* try { // try from 03ceb838 to 03deb843 has its CatchHandler @ 03cebdac */
  uVar7 = thunk_FUN_01c273e8(StringLiteral_6959);
  FUN_032d1aa4(uVar6,uVar7,0);
  uVar7 = thunk_FUN_01c273e8(StringLiteral_6960);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar7);
}


