/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 045dee24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>___ctor(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint in_w9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x23;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int unaff_w29;
  undefined8 in_stack_00000018;
  
  if (in_w9 <= (uint)in_x10) {
LAB_045df040:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  uVar9 = *(int *)(param_1 + in_x10 * 4 + 0x20) - 1;
  if (-1 < (int)uVar9) {
    uVar10 = 0xffffffff;
    do {
      lVar4 = *(long *)(unaff_x23 + 0x18);
      if (lVar4 == 0) goto LAB_045df03c;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_045df040;
      lVar4 = lVar4 + 0x20;
      piVar12 = (int *)(lVar4 + (ulong)uVar9 * 0x24);
      uVar11 = (ulong)uVar9;
      if (*piVar12 == unaff_w29) {
        plVar8 = *(long **)(unaff_x23 + 0x30);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)FUN_03421e68(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
          if (plVar8 == (long *)0x0) goto LAB_045df03c;
          uVar6 = (**(code **)(*plVar8 + 0x1b8))
                            (plVar8,*(undefined4 *)(lVar4 + uVar11 * 0x24 + 8),
                             in_stack_00000018._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
        }
        else {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar4 + uVar11 * 0x24 + 8);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02b76218(lVar3);
          }
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_045def50;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_02b7654c(plVar8,lVar3,0);
LAB_045def50:
          uVar6 = (*(code *)*puVar2)(plVar8,uVar1,in_stack_00000018._4_4_,puVar2[1]);
        }
        if ((uVar6 & 1) != 0) {
          if ((int)(uint)uVar10 < 0) {
            lVar3 = *(long *)(unaff_x23 + 0x10);
            if (lVar3 == 0) goto LAB_045df03c;
            if (*(uint *)(lVar3 + 0x18) <= (uint)in_x10) goto LAB_045df040;
            *(int *)(lVar3 + in_x10 * 4 + 0x20) = *(int *)(lVar4 + uVar11 * 0x24 + 4) + 1;
          }
          else {
            lVar3 = *(long *)(unaff_x23 + 0x18);
            if (lVar3 == 0) {
LAB_045df03c:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_045df040;
            *(undefined4 *)(lVar3 + uVar10 * 0x24 + 0x24) =
                 *(undefined4 *)(lVar4 + uVar11 * 0x24 + 4);
          }
          uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
          *piVar12 = -1;
          *(uint *)(unaff_x23 + 0x24) = uVar9;
          *(undefined4 *)(lVar4 + uVar11 * 0x24 + 4) = uVar1;
          *(ulong *)(unaff_x23 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
          return 1;
        }
      }
      uVar10 = (ulong)uVar9;
      uVar9 = *(uint *)(lVar4 + uVar11 * 0x24 + 4);
    } while (-1 < (int)uVar9);
  }
  return 0;
}


