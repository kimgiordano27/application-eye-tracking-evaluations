/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 06c49e14
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar9;
  int *piVar10;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar11;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    while( true ) {
      do {
        uVar9 = unaff_x24;
        uVar1 = *(uint *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x24);
        unaff_x28 = (ulong)uVar1;
        if ((int)uVar1 < 0) {
          return 0;
        }
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x26 == 0) goto LAB_06c49f54;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_06c49f58;
        piVar10 = (int *)(unaff_x26 + unaff_x28 * (unaff_x20 & 0xffffffff) + 0x20);
        unaff_x24 = unaff_x28;
      } while (*piVar10 != unaff_w27);
      plVar4 = *(long **)(unaff_x19 + 0x30);
      if (plVar4 == (long *)0x0) break;
      if (plVar4 == (long *)0x0) goto LAB_06c49f54;
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
      uVar8 = *(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06c49e64;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar4,lVar3,0);
LAB_06c49e64:
      uVar6 = (*(code *)*puVar2)(plVar4,uVar8,in_stack_00000018,puVar2[1]);
      unaff_x23 = in_stack_00000010;
      if ((uVar6 & 1) != 0) goto LAB_06c49ebc;
    }
    plVar4 = (long *)FUN_04aca658(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
    if (plVar4 == (long *)0x0) goto LAB_06c49f54;
                    /* try { // try from 06c49e30 to 06d4a11b has its CatchHandler @ 06c49e30
                       catch() { ... } // from try @ 06c49e30 with catch @ 06c49e30
                       catch() { ... } // from try @ 06c4a204 with catch @ 06c49e30
                       catch() { ... } // from try @ 06c4a2ac with catch @ 06c49e30
                       catch() { ... } // from try @ 06c4a354 with catch @ 06c49e30 */
    uVar6 = (**(code **)(*plVar4 + 0x1b8))
                      (plVar4,*(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar4 + 0x1c0));
  } while ((uVar6 & 1) == 0);
LAB_06c49ebc:
  uVar11 = (uint)uVar9;
  if ((int)uVar11 < 0) {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_06c49f54;
    if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000008) goto LAB_06c49f58;
    *(int *)(lVar3 + in_stack_00000008 * 4 + 0x20) =
         *(int *)(unaff_x26 + unaff_x28 * 0x18 + 0x24) + 1;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 == 0) {
LAB_06c49f54:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar11) {
LAB_06c49f58:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(undefined4 *)(lVar3 + (uVar9 & 0xffffffff) * 0x18 + 0x24) =
         *(undefined4 *)(unaff_x26 + unaff_x28 * 0x18 + 0x24);
  }
  *piVar10 = -1;
  *(undefined4 *)(unaff_x26 + unaff_x28 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(uint *)(unaff_x19 + 0x24) = uVar1;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


