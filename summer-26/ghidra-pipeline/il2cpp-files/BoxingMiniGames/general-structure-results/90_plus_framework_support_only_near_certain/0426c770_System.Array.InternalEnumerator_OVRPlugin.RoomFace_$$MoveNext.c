/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.RoomFace>$$MoveNext
ENTRY_POINT: 0426c770
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


void System_Array_InternalEnumerator<OVRPlugin_RoomFace>__MoveNext(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort in_w9;
  int *piVar4;
  long unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  ulong uVar5;
  long lVar6;
  long unaff_x26;
  long unaff_x29;
  
  lVar2 = param_1;
  if ((in_w9 & 1) == 0) {
                    /* try { // try from 0426c778 to 0436c77b has its CatchHandler @ 0426c9bc */
    param_1 = FUN_0367c9fc(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
                    /* try { // try from 0426c790 to 0436c793 has its CatchHandler @ 0426c9d8 */
  uVar5 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
                    /* try { // try from 0426c7a8 to 0436c7ab has its CatchHandler @ 0426c9d0 */
  if ((in_w9 & 1) == 0) {
    FUN_0367c9fc(lVar2);
  }
  FUN_03159758();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar2 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
    unaff_x22 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(&stack0x00000000 + -(uVar5 + 0xf & 0x1fffffff0),unaff_x22,uVar5);
  if ((uVar1 & 1) == 0) {
    FUN_0367c9fc(lVar2);
  }
  FUN_03642988();
  if (unaff_x21 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar6 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_0426c8dc;
        }
        uVar5 = uVar5 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
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


