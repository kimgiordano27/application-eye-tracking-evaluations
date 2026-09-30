/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 013e1370
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_x4;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  long *unaff_x24;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (unaff_x24 == (long *)0x0) {
    uVar6 = FUN_01d44634(&stack0x00000020,
                         *(undefined8 *)(*(long *)(*(long *)(in_x4 + 0x20) + 0xc0) + 0x168));
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(in_x4 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0103c244(lVar8);
    }
    lVar9 = *unaff_x24;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_013e1408;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0103c348();
LAB_013e1408:
    uVar6 = (*(code *)*puVar7)();
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    uVar17 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar5 = 0;
    if (uVar17 != 0) {
      iVar5 = (int)uVar6 / (int)uVar17;
    }
    uVar4 = uVar6 - iVar5 * uVar17;
    if (uVar17 <= uVar4) {
LAB_013e167c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar17 = *(int *)(lVar8 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar17) {
      uVar12 = 0xffffffff;
      do {
        uVar19 = in_stack_00000028;
        uVar18 = in_stack_00000020;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) goto LAB_013e1678;
        if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_013e167c;
        puVar15 = (uint *)(lVar8 + (ulong)uVar17 * 0x30 + 0x20);
        uVar16 = (ulong)uVar17;
        if (*puVar15 == uVar6) {
          plVar10 = *(long **)(param_1 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)FUN_012274ec(*(undefined8 *)
                                            (*(long *)(*(long *)(in_x4 + 0x20) + 0xc0) + 0x18));
            if (plVar10 == (long *)0x0) goto LAB_013e1678;
            lVar9 = lVar8 + uVar16 * 0x30;
            uVar13 = (**(code **)(*plVar10 + 0x1b8))
                               (plVar10,*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30),
                                in_stack_00000020,in_stack_00000028,
                                *(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_013e1678;
            lVar9 = *(long *)(*(long *)(*(long *)(in_x4 + 0x20) + 0xc0) + 8);
            lVar11 = lVar8 + uVar16 * 0x30;
            uVar1 = *(undefined8 *)(lVar11 + 0x28);
            uVar2 = *(undefined8 *)(lVar11 + 0x30);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0103c244(lVar9);
            }
            lVar11 = *plVar10;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_013e155c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_0103c348(plVar10,lVar9,0);
LAB_013e155c:
            uVar13 = (*(code *)*puVar7)(plVar10,uVar1,uVar2,uVar18,uVar19,puVar7[1]);
          }
          if ((uVar13 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) goto LAB_013e1678;
              if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_013e167c;
              *(int *)(lVar9 + (ulong)uVar4 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x30 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) goto LAB_013e1678;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar12) goto LAB_013e167c;
              *(undefined4 *)(lVar9 + uVar12 * 0x30 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x30 + 0x24);
            }
            lVar8 = lVar8 + uVar16 * 0x30;
            uVar19 = *(undefined8 *)(lVar8 + 0x40);
            uVar18 = *(undefined8 *)(lVar8 + 0x38);
            in_stack_00000008[2] = *(undefined8 *)(lVar8 + 0x48);
            in_stack_00000008[1] = uVar19;
            *in_stack_00000008 = uVar18;
            *puVar15 = 0xffffffff;
            *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar17;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar3 = *(uint *)(lVar8 + uVar16 * 0x30 + 0x24);
        uVar12 = (ulong)uVar17;
        uVar17 = uVar3;
      } while (-1 < (int)uVar3);
    }
    *in_stack_00000008 = 0;
    in_stack_00000008[1] = 0;
    in_stack_00000008[2] = 0;
    return 0;
  }
LAB_013e1678:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


