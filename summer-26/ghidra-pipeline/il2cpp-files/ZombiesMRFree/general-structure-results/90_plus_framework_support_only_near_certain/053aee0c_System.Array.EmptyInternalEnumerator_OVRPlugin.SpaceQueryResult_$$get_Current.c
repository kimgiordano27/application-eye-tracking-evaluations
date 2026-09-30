/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 053aee0c
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
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  long unaff_x23;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 in_stack_00000018;
  
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 053aed84 with catch @ 053aee18
                       catch() { ... } // from try @ 053aee08 with catch @ 053aee18 */
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 053aee1c to 054aee1f has its CatchHandler @ 053aee28 */
                    /* try { // try from 053aee20 to 054aee2b has its CatchHandler @ 053aeb68 */
      if (*(long *)(piVar12 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_053aee84;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 053aed68 with catch @ 053aee28
                       catch(type#2 @ 00000000) { ... } // from try @ 053aee1c with catch @ 053aee28
                        */
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_02feb5b8();
LAB_053aee84:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar14 = *(uint *)(lVar7 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar14 != 0) {
      iVar3 = (int)uVar4 / (int)uVar14;
    }
    uVar2 = uVar4 - iVar3 * uVar14;
    if (uVar14 <= uVar2) {
LAB_053af0c0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar14 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar10 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_053af0bc;
        if (*(uint *)(lVar7 + 0x18) <= uVar14) goto LAB_053af0c0;
        puVar15 = (uint *)(lVar7 + (ulong)uVar14 * 0x14 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar4) {
          plVar8 = *(long **)(unaff_x19 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_040052a8(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar8 == (long *)0x0) goto LAB_053af0bc;
            uVar11 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined8 *)(lVar7 + uVar16 * 0x14 + 0x28),
                                in_stack_00000018,*(undefined8 *)(*plVar8 + 0x1c0));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_053af0bc;
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar7 + uVar16 * 0x14 + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_02feb2c4(lVar6);
            }
            lVar9 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_053aefcc;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_02feb5b8(plVar8,lVar6,0);
LAB_053aefcc:
            uVar11 = (*(code *)*puVar5)(plVar8,uVar13,in_stack_00000018,puVar5[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              if (lVar6 == 0) goto LAB_053af0bc;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_053af0c0;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar16 * 0x14 + 0x24) + 1
              ;
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if (lVar6 == 0) goto LAB_053af0bc;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar10) goto LAB_053af0c0;
              *(undefined4 *)(lVar6 + uVar10 * 0x14 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar16 * 0x14 + 0x24);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 *)(lVar7 + uVar16 * 0x14 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar16 * 0x14 + 0x24);
        uVar10 = (ulong)uVar14;
        uVar14 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_053af0bc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


