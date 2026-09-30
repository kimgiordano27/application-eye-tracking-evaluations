/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry$$InitGizmos
ENTRY_POINT: 0637d614
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry__InitGizmos(long param_1)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar10;
  long unaff_x23;
  float fVar11;
  float unaff_s8;
  
  FUN_0335b6c8(param_1 + 0x5d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e15e8,1);
                    /* try { // try from 0637d638 to 0647d653 has its CatchHandler @ 0637dd88 */
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e1600,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ea848,1);
                    /* try { // try from 0637d660 to 0647d673 has its CatchHandler @ 0637dde8 */
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb728,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f1fa0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083f1f88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c49c0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x9d6) = 1;
                    /* try { // try from 0637d6c4 to 0647d6cb has its CatchHandler @ 0637dd68 */
                    /* try { // try from 0637d6d0 to 0647d6df has its CatchHandler @ 0637dd60 */
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if ((uint)ABS(unaff_s8) < 0x7f800001) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(unaff_s8)) {
      bVar3 = unaff_s8 < 1.0;
      bVar4 = unaff_s8 == 1.0;
      bVar5 = false;
    }
  }
  fVar11 = 1.0;
  if (bVar4 || bVar3 != bVar5) {
    fVar11 = unaff_s8;
  }
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    bVar3 = true;
    if (((uint)ABS(fVar11) < 0x7f800001) && (bVar3 = false, !NAN(fVar11))) {
      bVar3 = fVar11 < 0.0;
    }
    uVar1 = 0;
    if (!bVar3) {
      uVar1 = (ulong)(uint)fVar11 << 0x20;
    }
    FUN_04254df0(*(long *)(unaff_x21 + 0x18),unaff_w19,uVar1 | unaff_x22 & 0xffffffff,DAT_083ea848);
    if (*(long *)(unaff_x21 + 0x20) != 0) {
                    /* try { // try from 0637d718 to 0647d727 has its CatchHandler @ 0637dd4c */
      FUN_04383958(*(long *)(unaff_x21 + 0x20),unaff_w19,DAT_083eb728);
      if (*(long *)(unaff_x21 + 0x28) != 0) {
        iVar6 = FUN_05cb6324(*(long *)(unaff_x21 + 0x28),unaff_w20,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083e15e8 + 0x20) + 0xc0) + 0x108));
        if (iVar6 < 0) {
                    /* try { // try from 0637d750 to 0647d75b has its CatchHandler @ 0637de3c */
          lVar10 = *(long *)(unaff_x21 + 0x28);
          uVar7 = FUN_03398a84(DAT_083c49c0);
                    /* try { // try from 0637d76c to 0647d76f has its CatchHandler @ 0637de18 */
          FUN_04a01ee0(uVar7,DAT_083f1f88);
                    /* try { // try from 0637d770 to 0647d77b has its CatchHandler @ 0637de34 */
          if (lVar10 == 0) goto LAB_0637d834;
                    /* try { // try from 0637d794 to 0647d79b has its CatchHandler @ 0637ddfc */
          FUN_05cb6720(lVar10,unaff_w20,uVar7,2,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083e15d8 + 0x20) + 0xc0) + 0x110));
        }
                    /* try { // try from 0637d7b4 to 0647d7bb has its CatchHandler @ 0637de00 */
        if ((*(long *)(unaff_x21 + 0x28) != 0) &&
           (lVar8 = FUN_05cb5ba0(*(long *)(unaff_x21 + 0x28),unaff_w20,DAT_083e1600),
           lVar10 = DAT_083f1fa0, lVar8 != 0)) {
          lVar9 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 0637d7e0 to 0647d7ef has its CatchHandler @ 0637de30 */
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = unaff_w19;
                    /* try { // try from 0637d7f8 to 0647d7ff has its CatchHandler @ 0637de1c */
                    /* try { // try from 0637d804 to 0647d80f has its CatchHandler @ 0637de24 */
              return;
            }
            System_Collections_Generic_List<RuleMatcher>__BinarySearch
                      (lVar8,unaff_w19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_0637d834:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


