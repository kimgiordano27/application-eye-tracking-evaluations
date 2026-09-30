/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.RoomFace>$$get_Current
ENTRY_POINT: 0426c7c0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_RoomFace>__get_Current(void)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  long lVar6;
  long unaff_x26;
  long unaff_x29;
  
                    /* try { // try from 0426c7c0 to 0436c7db has its CatchHandler @ 0426c9f0 */
  FUN_03159758();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar2 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
                    /* try { // try from 0426c7f0 to 0436c7f3 has its CatchHandler @ 0426c9ec */
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
                    /* try { // try from 0426c808 to 0436c80b has its CatchHandler @ 0426c9cc */
                    /* try { // try from 0426c820 to 0436c823 has its CatchHandler @ 0426c9e8 */
  if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x24,unaff_x22,unaff_x23);
  if ((uVar1 & 1) == 0) {
    FUN_0367c9fc(lVar2);
  }
                    /* try { // try from 0426c838 to 0436c83b has its CatchHandler @ 0426c9c8 */
                    /* try { // try from 0426c850 to 0436c853 has its CatchHandler @ 0426c9e4 */
  FUN_03642988();
  if (unaff_x21 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 0426c868 to 0436c86b has its CatchHandler @ 0426c9b0 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
                    /* try { // try from 0426c880 to 0436c883 has its CatchHandler @ 0426c9d4 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 0426c898 to 0436c89b has its CatchHandler @ 0426c9c4 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_0426c8dc;
        }
                    /* try { // try from 0426c8b0 to 0436c8b3 has its CatchHandler @ 0426c9a8 */
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
                    /* try { // try from 0426c8c8 to 0436c8cb has its CatchHandler @ 0426c9e0 */
LAB_0426c8dc:
    (*(code *)*puVar3)();
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc(*(long *)(unaff_x20 + 0x20));
    }
    FUN_03159758();
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    FUN_0315dc8c();
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


