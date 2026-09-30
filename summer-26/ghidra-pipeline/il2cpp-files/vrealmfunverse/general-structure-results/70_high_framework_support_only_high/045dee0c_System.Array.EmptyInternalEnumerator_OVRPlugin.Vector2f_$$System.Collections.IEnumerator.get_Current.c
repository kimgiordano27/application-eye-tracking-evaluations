/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045dee0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
          (uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  long unaff_x23;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 in_stack_00000018;
  
  lVar6 = *(long *)(unaff_x23 + 0x10);
  if (lVar6 != 0) {
    uVar11 = *(uint *)(lVar6 + 0x18);
    param_1 = param_1 & 0x7fffffff;
    iVar3 = 0;
    if (uVar11 != 0) {
      iVar3 = (int)param_1 / (int)uVar11;
    }
    uVar2 = param_1 - iVar3 * uVar11;
    if (uVar11 <= uVar2) {
LAB_045df040:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar11 = *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar11) {
      uVar12 = 0xffffffff;
      do {
        lVar6 = *(long *)(unaff_x23 + 0x18);
        if (lVar6 == 0) goto LAB_045df03c;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_045df040;
        lVar6 = lVar6 + 0x20;
        puVar14 = (uint *)(lVar6 + (ulong)uVar11 * 0x24);
        uVar13 = (ulong)uVar11;
        if (*puVar14 == param_1) {
          plVar10 = *(long **)(unaff_x23 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)FUN_03421e68(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
            if (plVar10 == (long *)0x0) goto LAB_045df03c;
            uVar8 = (**(code **)(*plVar10 + 0x1b8))
                              (plVar10,*(undefined4 *)(lVar6 + uVar13 * 0x24 + 8),
                               in_stack_00000018._4_4_,*(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar6 + uVar13 * 0x24 + 8);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02b76218(lVar5);
            }
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar5) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_045def50;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_02b7654c(plVar10,lVar5,0);
LAB_045def50:
            uVar8 = (*(code *)*puVar4)(plVar10,uVar1,in_stack_00000018._4_4_,puVar4[1]);
          }
          if ((uVar8 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar5 = *(long *)(unaff_x23 + 0x10);
              if (lVar5 == 0) goto LAB_045df03c;
              if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_045df040;
              *(int *)(lVar5 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar13 * 0x24 + 4) + 1;
            }
            else {
              lVar5 = *(long *)(unaff_x23 + 0x18);
              if (lVar5 == 0) goto LAB_045df03c;
              if (*(uint *)(lVar5 + 0x18) <= (uint)uVar12) goto LAB_045df040;
              *(undefined4 *)(lVar5 + uVar12 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar6 + uVar13 * 0x24 + 4);
            }
            uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
            *puVar14 = 0xffffffff;
            *(uint *)(unaff_x23 + 0x24) = uVar11;
            *(undefined4 *)(lVar6 + uVar13 * 0x24 + 4) = uVar1;
            *(ulong *)(unaff_x23 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
            return 1;
          }
        }
        uVar12 = (ulong)uVar11;
        uVar11 = *(uint *)(lVar6 + uVar13 * 0x24 + 4);
      } while (-1 < (int)uVar11);
    }
    return 0;
  }
LAB_045df03c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


