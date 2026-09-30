/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06c49f8c
PROGRAM: padelvrtraining-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  long *unaff_x23;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (unaff_x23 == (long *)0x0) {
    uVar5 = FUN_07196224(&stack0x00000018,
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 400));
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
    }
    lVar8 = *unaff_x23;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06c4a020;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03d8f370();
LAB_06c4a020:
    uVar5 = (*(code *)*puVar6)();
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    uVar16 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar3 = 0;
    if (uVar16 != 0) {
      iVar3 = (int)uVar5 / (int)uVar16;
    }
    uVar2 = uVar5 - iVar3 * uVar16;
    if (uVar16 <= uVar2) {
LAB_06c4a274:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar16 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      uVar11 = 0xffffffff;
      do {
        uVar4 = in_stack_00000018;
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 == 0) goto LAB_06c4a270;
        if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_06c4a274;
        puVar17 = (uint *)(lVar7 + (ulong)uVar16 * 0x18 + 0x20);
        uVar14 = (ulong)uVar16;
        if (*puVar17 == uVar5) {
          plVar9 = *(long **)(param_1 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_04aca658(*(undefined8 *)
                                           (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_06c4a270;
            uVar12 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar7 + uVar14 * 0x18 + 0x28),
                                in_stack_00000018,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_06c4a270;
            lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
            uVar15 = *(undefined8 *)(lVar7 + uVar14 * 0x18 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03d8f26c(lVar8);
            }
            lVar10 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_06c4a16c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)FUN_03d8f370(plVar9,lVar8,0);
LAB_06c4a16c:
            uVar12 = (*(code *)*puVar6)(plVar9,uVar15,uVar4,puVar6[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_06c4a270;
              if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_06c4a274;
              *(int *)(lVar8 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar14 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(param_1 + 0x18);
              if (lVar8 == 0) goto LAB_06c4a270;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar11) goto LAB_06c4a274;
              *(undefined4 *)(lVar8 + uVar11 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar14 * 0x18 + 0x24);
            }
            lVar7 = lVar7 + uVar14 * 0x18;
            *in_stack_00000008 = *(undefined4 *)(lVar7 + 0x30);
            *puVar17 = 0xffffffff;
            *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar16;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar14 * 0x18 + 0x24);
        uVar11 = (ulong)uVar16;
        uVar16 = uVar1;
      } while (-1 < (int)uVar1);
    }
    *in_stack_00000008 = 0;
    return 0;
  }
LAB_06c4a270:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


