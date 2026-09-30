/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 053aee54
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
          (void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  int in_w8;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  long unaff_x23;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar5 = FUN_03789dd8(&stack0x00000018,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x188));
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar14 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar3 = 0;
    if (uVar14 != 0) {
      iVar3 = (int)uVar5 / (int)uVar14;
    }
    uVar2 = uVar5 - iVar3 * uVar14;
    if (uVar14 <= uVar2) {
LAB_053af0c0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar14 = *(int *)(lVar8 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar17 = 0xffffffff;
      do {
        uVar4 = in_stack_00000018;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_053af0bc;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_053af0c0;
        puVar15 = (uint *)(lVar8 + (ulong)uVar14 * 0x14 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_040052a8(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_053af0bc;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + uVar16 * 0x14 + 0x28),
                                in_stack_00000018,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_053af0bc;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar8 + uVar16 * 0x14 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02feb2c4(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_053aefcc;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02feb5b8(plVar9,lVar7,0);
LAB_053aefcc:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar13,uVar4,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar17 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_053af0bc;
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_053af0c0;
              *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x14 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_053af0bc;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar17) goto LAB_053af0c0;
              *(undefined4 *)(lVar7 + uVar17 * 0x14 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x14 + 0x24);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 *)(lVar8 + uVar16 * 0x14 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar16 * 0x14 + 0x24);
        uVar17 = (ulong)uVar14;
        uVar14 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_053af0bc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


