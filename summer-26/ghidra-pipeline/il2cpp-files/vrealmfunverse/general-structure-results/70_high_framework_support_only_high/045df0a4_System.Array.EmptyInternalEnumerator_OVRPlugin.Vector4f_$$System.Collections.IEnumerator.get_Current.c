/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 045df0a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
          (void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *unaff_x23;
  long unaff_x24;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar5 = FUN_02b76218();
  lVar7 = *unaff_x23;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_045df108;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02b7654c();
LAB_045df108:
  uVar4 = (*(code *)*puVar6)();
  lVar5 = *(long *)(unaff_x24 + 0x10);
  if (lVar5 != 0) {
    uVar13 = *(uint *)(lVar5 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar13 != 0) {
      iVar3 = (int)uVar4 / (int)uVar13;
    }
    uVar2 = uVar4 - iVar3 * uVar13;
    if (uVar13 <= uVar2) {
LAB_045df36c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar13 = *(int *)(lVar5 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar9 = 0xffffffff;
      do {
        lVar5 = *(long *)(unaff_x24 + 0x18);
        if (lVar5 == 0) goto LAB_045df368;
        if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_045df36c;
        lVar5 = lVar5 + 0x20;
        puVar14 = (uint *)(lVar5 + (ulong)uVar13 * 0x24);
        uVar15 = (ulong)uVar13;
        if (*puVar14 == uVar4) {
          plVar12 = *(long **)(unaff_x24 + 0x30);
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)FUN_03421e68(*(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) +
                                            0x18));
            if (plVar12 == (long *)0x0) goto LAB_045df368;
            uVar10 = (**(code **)(*plVar12 + 0x1b8))
                               (plVar12,*(undefined4 *)(lVar5 + uVar15 * 0x24 + 8),
                                in_stack_00000028._4_4_,*(undefined8 *)(*plVar12 + 0x1c0));
          }
          else {
            lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar5 + uVar15 * 0x24 + 8);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02b76218(lVar7);
            }
            lVar8 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto FUN_045df25c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_02b7654c(plVar12,lVar7,0);
FUN_045df25c:
            uVar10 = (*(code *)*puVar6)(plVar12,uVar1,in_stack_00000028._4_4_,puVar6[1]);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar9 < 0) {
              lVar7 = *(long *)(unaff_x24 + 0x10);
              if (lVar7 == 0) goto LAB_045df368;
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_045df36c;
              *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar5 + uVar15 * 0x24 + 4) + 1;
            }
            else {
              lVar7 = *(long *)(unaff_x24 + 0x18);
              if (lVar7 == 0) goto LAB_045df368;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar9) goto LAB_045df36c;
              *(undefined4 *)(lVar7 + uVar9 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar5 + uVar15 * 0x24 + 4);
            }
            lVar5 = lVar5 + uVar15 * 0x24;
            uVar17 = *(undefined8 *)(lVar5 + 0x14);
            uVar16 = *(undefined8 *)(lVar5 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar5 + 0x1c);
            in_stack_00000010[1] = uVar17;
            *in_stack_00000010 = uVar16;
            uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
            *puVar14 = 0xffffffff;
            *(uint *)(unaff_x24 + 0x24) = uVar13;
            *(undefined4 *)(lVar5 + 4) = uVar1;
            *(ulong *)(unaff_x24 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
            return 1;
          }
        }
        uVar9 = (ulong)uVar13;
        uVar13 = *(uint *)(lVar5 + uVar15 * 0x24 + 4);
      } while (-1 < (int)uVar13);
    }
    *in_stack_00000010 = 0;
    in_stack_00000010[1] = 0;
    in_stack_00000010[2] = 0;
    return 0;
  }
LAB_045df368:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


