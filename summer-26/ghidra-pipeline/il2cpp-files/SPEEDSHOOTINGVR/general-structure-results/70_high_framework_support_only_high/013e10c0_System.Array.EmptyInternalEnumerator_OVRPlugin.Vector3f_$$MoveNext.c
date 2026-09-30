/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 013e10c0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint *puVar16;
  ulong uVar17;
  long unaff_x24;
  long unaff_x25;
  uint uVar18;
  ulong uVar19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar8 = FUN_01d44634(&stack0x00000020,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x168));
  lVar11 = *(long *)(unaff_x24 + 0x10);
  if (lVar11 != 0) {
    uVar18 = *(uint *)(lVar11 + 0x18);
    uVar8 = uVar8 & 0x7fffffff;
    iVar5 = 0;
    if (uVar18 != 0) {
      iVar5 = (int)uVar8 / (int)uVar18;
    }
    uVar4 = uVar8 - iVar5 * uVar18;
    if (uVar18 <= uVar4) {
LAB_013e133c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar18 = *(int *)(lVar11 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar18) {
      uVar17 = 0xffffffff;
      do {
        uVar7 = in_stack_00000028;
        uVar6 = in_stack_00000020;
        lVar11 = *(long *)(unaff_x24 + 0x18);
        if (lVar11 == 0) goto LAB_013e1338;
        if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_013e133c;
        puVar16 = (uint *)(lVar11 + (ulong)uVar18 * 0x30 + 0x20);
        uVar19 = (ulong)uVar18;
        if (*puVar16 == uVar8) {
          plVar12 = *(long **)(unaff_x24 + 0x30);
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)FUN_012274ec(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18));
            if (plVar12 == (long *)0x0) goto LAB_013e1338;
            lVar10 = lVar11 + uVar19 * 0x30;
            uVar14 = (**(code **)(*plVar12 + 0x1b8))
                               (plVar12,*(undefined8 *)(lVar10 + 0x28),
                                *(undefined8 *)(lVar10 + 0x30),in_stack_00000020,in_stack_00000028,
                                *(undefined8 *)(*plVar12 + 0x1c0));
          }
          else {
            if (plVar12 == (long *)0x0) goto LAB_013e1338;
            lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 8);
            lVar13 = lVar11 + uVar19 * 0x30;
            uVar1 = *(undefined8 *)(lVar13 + 0x28);
            uVar2 = *(undefined8 *)(lVar13 + 0x30);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_0103c244(lVar10);
            }
            lVar13 = *plVar12;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar10) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_013e1238;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_0103c348(plVar12,lVar10,0);
LAB_013e1238:
            uVar14 = (*(code *)*puVar9)(plVar12,uVar1,uVar2,uVar6,uVar7,puVar9[1]);
          }
          if ((uVar14 & 1) != 0) {
            if ((int)(uint)uVar17 < 0) {
              lVar10 = *(long *)(unaff_x24 + 0x10);
              if (lVar10 == 0) goto LAB_013e1338;
              if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_013e133c;
              *(int *)(lVar10 + (ulong)uVar4 * 4 + 0x20) =
                   *(int *)(lVar11 + uVar19 * 0x30 + 0x24) + 1;
            }
            else {
              lVar10 = *(long *)(unaff_x24 + 0x18);
              if (lVar10 == 0) goto LAB_013e1338;
              if (*(uint *)(lVar10 + 0x18) <= (uint)uVar17) goto LAB_013e133c;
              *(undefined4 *)(lVar10 + uVar17 * 0x30 + 0x24) =
                   *(undefined4 *)(lVar11 + uVar19 * 0x30 + 0x24);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar11 + uVar19 * 0x30 + 0x24) = *(undefined4 *)(unaff_x24 + 0x24);
            *(uint *)(unaff_x24 + 0x24) = uVar18;
            *(ulong *)(unaff_x24 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
            return 1;
          }
        }
        uVar3 = *(uint *)(lVar11 + uVar19 * 0x30 + 0x24);
        uVar17 = (ulong)uVar18;
        uVar18 = uVar3;
      } while (-1 < (int)uVar3);
    }
    return 0;
  }
LAB_013e1338:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


