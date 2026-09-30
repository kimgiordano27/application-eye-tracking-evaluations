/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 07a4a6c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__GetSpaceTriangleMeshCounts(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  long *plVar6;
  long unaff_x23;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x23 + 0x3f2) = 1;
  in_stack_00000038 = 0.0;
  in_stack_00000030 = 0;
  in_stack_00000028 = 0.0;
  in_stack_00000020 = 0;
                    /* try { // try from 07a4a6ec to 07b4a6f3 has its CatchHandler @ 07a4a7bc */
  if (unaff_x22 != (long *)0x0) {
                    /* try { // try from 07a4a6f4 to 07b4a74f has its CatchHandler @ 07a4a54c */
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092f0808) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07a4a748;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 07a4a674 with catch @ 07a4a734 */
    puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a4a748:
                    /* try { // try from 07a4a750 to 07b4a753 has its CatchHandler @ 07a4a768 */
    iVar1 = (*(code *)*puVar2)();
                    /* try { // try from 07a4a754 to 07b4a76b has its CatchHandler @ 07a4a54c */
    if (0 < iVar1) {
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_07a4a8d8;
                    /* catch() { ... } // from try @ 07a4a750 with catch @ 07a4a768 */
      OVRPlugin__GetSpaceBoundingBox2D();
                    /* try { // try from 07a4a76c to 07b4a773 has its CatchHandler @ 07a4a808 */
                    /* try { // try from 07a4a774 to 07b4a793 has its CatchHandler @ 07a4a54c */
      if (DAT_098854ec == '\0') {
                    /* catch() { ... } // from try @ 07a4a60c with catch @ 07a4a778 */
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854ec = '\x01';
      }
                    /* try { // try from 07a4a794 to 07b4a797 has its CatchHandler @ 07a4a7ac */
      plVar6 = *(long **)(unaff_x19 + 0x20);
                    /* try { // try from 07a4a798 to 07b4a7af has its CatchHandler @ 07a4a54c */
      lVar3 = *(long *)(*(long *)PTR_DAT_09285d60 + 0xb8);
      fVar9 = *(float *)(lVar3 + 0x4c);
      in_stack_00000020 = *(undefined8 *)(lVar3 + 0x48);
      in_stack_00000030 = *(undefined8 *)(lVar3 + 0x48);
      fVar11 = *(float *)(lVar3 + 0x50);
                    /* catch() { ... } // from try @ 07a4a794 with catch @ 07a4a7ac */
                    /* try { // try from 07a4a7b0 to 07b4a7b7 has its CatchHandler @ 07a4a808 */
                    /* try { // try from 07a4a7b8 to 07b4a7d7 has its CatchHandler @ 07a4a54c */
      in_stack_00000028 = fVar11;
      in_stack_00000038 = fVar11;
      if (plVar6 != (long *)0x0) {
                    /* catch() { ... } // from try @ 07a4a6ec with catch @ 07a4a7bc */
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
                    /* try { // try from 07a4a7d8 to 07b4a7db has its CatchHandler @ 07a4a7f4 */
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
                    /* try { // try from 07a4a7dc to 07b4a7f7 has its CatchHandler @ 07a4a54c */
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ee928) {
                    /* catch() { ... } // from try @ 07a4a76c with catch @ 07a4a808
                       catch() { ... } // from try @ 07a4a7b0 with catch @ 07a4a808
                       catch() { ... } // from try @ 07a4a7f8 with catch @ 07a4a808 */
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_07a4a810;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
                    /* catch() { ... } // from try @ 07a4a7d8 with catch @ 07a4a7f4 */
                    /* try { // try from 07a4a7f8 to 07b4a7ff has its CatchHandler @ 07a4a808 */
        puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092ee928,0);
                    /* try { // try from 07a4a800 to 07b4a80b has its CatchHandler @ 07a4a54c */
LAB_07a4a810:
        uVar4 = (*(code *)*puVar2)(plVar6);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_092b7110 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          fVar7 = (float)FUN_089d9cf0();
          fVar10 = -fVar9;
          fVar12 = -fVar11;
          in_stack_00000030 = CONCAT44(fVar10,-fVar7);
          in_stack_00000038 = fVar12;
          fVar8 = (float)FUN_089d9cf0();
          in_stack_00000028 = -fVar12;
          in_stack_00000020 = CONCAT44(-fVar10,-fVar8);
          if (unaff_w20 == 1) {
            in_stack_00000030 = CONCAT44(fVar9,fVar7);
            in_stack_00000038 = fVar11;
          }
        }
      }
      uVar4 = (ulong)*(uint *)(unaff_x19 + 0x10);
      if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
        uVar4 = FUN_07a4993c();
        *(int *)(unaff_x19 + 0x10) = (int)uVar4;
      }
      FUN_07a49a54(uVar4,*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000030,&stack0x00000020);
    }
    return;
  }
LAB_07a4a8d8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07a4a8d8 to 07b4a9eb has its CatchHandler @ 07a4a8d8
                       catch() { ... } // from try @ 07a4a8d8 with catch @ 07a4a8d8
                       catch() { ... } // from try @ 07a4aa50 with catch @ 07a4a8d8
                       catch() { ... } // from try @ 07a4aa88 with catch @ 07a4a8d8
                       catch() { ... } // from try @ 07a4aac0 with catch @ 07a4a8d8
                       catch() { ... } // from try @ 07a4aaec with catch @ 07a4a8d8 */
  FUN_04077830();
}


