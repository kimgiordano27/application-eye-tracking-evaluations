/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 02b19144
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___cctor(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long in_stack_00000008;
  
  uVar12 = *(uint *)(param_1 + 0x18);
  param_2 = param_2 & 0x7fffffff;
  iVar4 = 0;
  if (uVar12 != 0) {
    iVar4 = (int)param_2 / (int)uVar12;
  }
  uVar3 = param_2 - iVar4 * uVar12;
  if (uVar12 <= uVar3) {
LAB_02b1936c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  uVar12 = *(int *)(param_1 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar12) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = *(long *)(unaff_x19 + 0x18);
      if (lVar14 == 0) goto LAB_02b19368;
      if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_02b1936c;
      puVar13 = (uint *)(lVar14 + (ulong)uVar12 * 0x18 + 0x20);
      uVar15 = (ulong)uVar12;
      if (*puVar13 == param_2) {
        plVar7 = *(long **)(unaff_x19 + 0x30);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)FUN_0201725c(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                         0x18));
          if (plVar7 == (long *)0x0) goto LAB_02b19368;
          uVar9 = (**(code **)(*plVar7 + 0x1b8))
                            (plVar7,*(undefined8 *)(lVar14 + uVar15 * 0x18 + 0x28));
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_02b19368;
          lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
          uVar11 = *(undefined8 *)(lVar14 + uVar15 * 0x18 + 0x28);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01dde7f8(lVar6);
          }
          lVar8 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02b19278;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_01dde8fc(plVar7,lVar6,0);
LAB_02b19278:
          uVar9 = (*(code *)*puVar5)(plVar7,uVar11);
        }
        if ((uVar9 & 1) != 0) {
          if ((int)(uint)uVar16 < 0) {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            if (lVar6 == 0) goto LAB_02b19368;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_02b1936c;
            *(int *)(lVar6 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar14 + uVar15 * 0x18 + 0x24) + 1;
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 == 0) {
LAB_02b19368:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar6 + 0x18) <= (uint)uVar16) goto LAB_02b1936c;
            *(undefined4 *)(lVar6 + uVar16 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar14 + uVar15 * 0x18 + 0x24);
          }
          *puVar13 = 0xffffffff;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar14 = lVar14 + uVar15 * 0x18;
          *(undefined8 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = uVar12;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar14 + uVar15 * 0x18 + 0x24);
      uVar16 = (ulong)uVar12;
      uVar12 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return 0;
}


