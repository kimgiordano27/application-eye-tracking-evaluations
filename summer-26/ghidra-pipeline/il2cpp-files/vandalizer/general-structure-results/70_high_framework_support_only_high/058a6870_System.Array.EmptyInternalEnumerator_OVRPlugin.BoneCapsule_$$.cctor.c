/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$.cctor
ENTRY_POINT: 058a6870
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
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
        uVar2 = *(uint *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x24);
        unaff_x28 = (ulong)uVar2;
        if ((int)uVar2 < 0) {
          return 0;
        }
        unaff_x26 = *(long *)(unaff_x19 + 0x18);
        if (unaff_x26 == 0) goto LAB_058a69b0;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar2) goto LAB_058a69b4;
        piVar10 = (int *)(unaff_x26 + unaff_x28 * (unaff_x20 & 0xffffffff) + 0x20);
        unaff_x24 = unaff_x28;
      } while (*piVar10 != unaff_w27);
      plVar5 = *(long **)(unaff_x19 + 0x30);
      if (plVar5 == (long *)0x0) break;
      if (plVar5 == (long *)0x0) goto LAB_058a69b0;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
      uVar1 = *(undefined4 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4(lVar4);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_058a68c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar5,lVar4,0);
LAB_058a68c0:
      uVar7 = (*(code *)*puVar3)(plVar5,uVar1,in_stack_00000018._4_4_,puVar3[1]);
      unaff_x23 = in_stack_00000010;
      if ((uVar7 & 1) != 0) goto LAB_058a6918;
    }
    plVar5 = (long *)FUN_03e98388(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
    if (plVar5 == (long *)0x0) goto LAB_058a69b0;
    uVar7 = (**(code **)(*plVar5 + 0x1b8))
                      (plVar5,*(undefined4 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar5 + 0x1c0));
  } while ((uVar7 & 1) == 0);
LAB_058a6918:
  uVar11 = (uint)uVar9;
  if ((int)uVar11 < 0) {
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_058a69b0;
    if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000008) goto LAB_058a69b4;
    *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
         *(int *)(unaff_x26 + unaff_x28 * 0x24 + 0x24) + 1;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 == 0) {
LAB_058a69b0:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar11) {
LAB_058a69b4:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined4 *)(lVar4 + (uVar9 & 0xffffffff) * 0x24 + 0x24) =
         *(undefined4 *)(unaff_x26 + unaff_x28 * 0x24 + 0x24);
  }
  *piVar10 = -1;
  *(undefined4 *)(unaff_x26 + unaff_x28 * 0x24 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  *(uint *)(unaff_x19 + 0x24) = uVar2;
  *(ulong *)(unaff_x19 + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
  return 1;
}


