/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 02b190dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  long in_stack_00000008;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_02b1912c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_01dde8fc();
LAB_02b1912c:
  uVar5 = (*(code *)*puVar6)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar14 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {
LAB_02b1936c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar14 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar17 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_02b19368;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_02b1936c;
        puVar15 = (uint *)(lVar8 + (ulong)uVar14 * 0x18 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_0201725c(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) +
                                           0x18));
            if (plVar9 == (long *)0x0) goto LAB_02b19368;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + uVar16 * 0x18 + 0x28));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_02b19368;
            lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar8 + uVar16 * 0x18 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01dde7f8(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02b19278;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_01dde8fc(plVar9,lVar7,0);
LAB_02b19278:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar13);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar17 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_02b19368;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_02b1936c;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_02b19368;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar17) goto LAB_02b1936c;
              *(undefined4 *)(lVar7 + uVar17 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x18 + 0x24);
            }
            *puVar15 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar8 = lVar8 + uVar16 * 0x18;
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar16 * 0x18 + 0x24);
        uVar17 = (ulong)uVar14;
        uVar14 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_02b19368:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


