/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 045def04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__Dispose(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong unaff_x20;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar9;
  uint uVar10;
  long unaff_x26;
  ulong unaff_x27;
  int *piVar11;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    while( true ) {
      do {
        uVar9 = unaff_x24;
        uVar2 = *(uint *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
        unaff_x27 = (ulong)uVar2;
        if ((int)uVar2 < 0) {
          return 0;
        }
        lVar4 = *(long *)(unaff_x23 + 0x18);
        if (lVar4 == 0) goto LAB_045df03c;
        if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_045df040;
        unaff_x26 = lVar4 + 0x20;
        piVar11 = (int *)(unaff_x26 + unaff_x27 * (unaff_x20 & 0xffffffff));
        unaff_x24 = unaff_x27;
      } while (*piVar11 != unaff_w29);
      plVar8 = *(long **)(unaff_x23 + 0x30);
      if (plVar8 != (long *)0x0) break;
      plVar8 = (long *)FUN_03421e68(*(undefined8 *)
                                     (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18))
      ;
      if (plVar8 == (long *)0x0) goto LAB_045df03c;
      uVar6 = (**(code **)(*plVar8 + 0x1b8))
                        (plVar8,*(undefined4 *)
                                 (unaff_x26 + unaff_x27 * (unaff_x20 & 0xffffffff) + 8),
                         in_stack_00000018._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
      if ((uVar6 & 1) != 0) goto LAB_045defa8;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
    uVar1 = *(undefined4 *)(unaff_x26 + unaff_x27 * (unaff_x20 & 0xffffffff) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_045def50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar8,lVar4,0);
LAB_045def50:
    uVar6 = (*(code *)*puVar3)(plVar8,uVar1,in_stack_00000018._4_4_,puVar3[1]);
    unaff_x23 = in_stack_00000008;
  } while ((uVar6 & 1) == 0);
LAB_045defa8:
  uVar10 = (uint)uVar9;
  if ((int)uVar10 < 0) {
    lVar4 = *(long *)(unaff_x23 + 0x10);
    if (lVar4 == 0) goto LAB_045df03c;
    if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000) goto LAB_045df040;
    *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) = *(int *)(unaff_x26 + unaff_x27 * 0x24 + 4) + 1;
  }
  else {
    lVar4 = *(long *)(unaff_x23 + 0x18);
    if (lVar4 == 0) {
LAB_045df03c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar10) {
LAB_045df040:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined4 *)(lVar4 + (uVar9 & 0xffffffff) * 0x24 + 0x24) =
         *(undefined4 *)(unaff_x26 + unaff_x27 * 0x24 + 4);
  }
  uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
  *piVar11 = -1;
  *(uint *)(unaff_x23 + 0x24) = uVar2;
  *(undefined4 *)(unaff_x26 + unaff_x27 * 0x24 + 4) = uVar1;
  *(ulong *)(unaff_x23 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
  return 1;
}


