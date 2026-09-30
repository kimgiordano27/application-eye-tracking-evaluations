/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 045df0b8
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  long unaff_x24;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
      goto LAB_045df108;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_02b7654c();
LAB_045df108:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)(unaff_x24 + 0x10);
  if (lVar7 != 0) {
    uVar13 = *(uint *)(lVar7 + 0x18);
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
    uVar13 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar12 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x24 + 0x18);
        if (lVar7 == 0) goto LAB_045df368;
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_045df36c;
        lVar7 = lVar7 + 0x20;
        puVar14 = (uint *)(lVar7 + (ulong)uVar13 * 0x24);
        uVar15 = (ulong)uVar13;
        if (*puVar14 == uVar4) {
          plVar11 = *(long **)(unaff_x24 + 0x30);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)FUN_03421e68(*(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) +
                                            0x18));
            if (plVar11 == (long *)0x0) goto LAB_045df368;
            uVar9 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar7 + uVar15 * 0x24 + 8),
                               in_stack_00000028._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
          }
          else {
            lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar15 * 0x24 + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02b76218(lVar6);
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto FUN_045df25c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02b7654c(plVar11,lVar6,0);
FUN_045df25c:
            uVar9 = (*(code *)*puVar5)(plVar11,uVar1,in_stack_00000028._4_4_,puVar5[1]);
          }
          if ((uVar9 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar6 = *(long *)(unaff_x24 + 0x10);
              if (lVar6 == 0) goto LAB_045df368;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_045df36c;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0x24 + 4) + 1;
            }
            else {
              lVar6 = *(long *)(unaff_x24 + 0x18);
              if (lVar6 == 0) goto LAB_045df368;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar12) goto LAB_045df36c;
              *(undefined4 *)(lVar6 + uVar12 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0x24 + 4);
            }
            lVar7 = lVar7 + uVar15 * 0x24;
            uVar17 = *(undefined8 *)(lVar7 + 0x14);
            uVar16 = *(undefined8 *)(lVar7 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar7 + 0x1c);
            in_stack_00000010[1] = uVar17;
            *in_stack_00000010 = uVar16;
            uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
            *puVar14 = 0xffffffff;
            *(uint *)(unaff_x24 + 0x24) = uVar13;
            *(undefined4 *)(lVar7 + 4) = uVar1;
            *(ulong *)(unaff_x24 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
            return 1;
          }
        }
        uVar12 = (ulong)uVar13;
        uVar13 = *(uint *)(lVar7 + uVar15 * 0x24 + 4);
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


