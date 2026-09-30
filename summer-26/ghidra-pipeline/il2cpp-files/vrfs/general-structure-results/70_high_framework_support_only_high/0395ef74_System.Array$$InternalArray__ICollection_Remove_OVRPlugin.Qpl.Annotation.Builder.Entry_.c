/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 0395ef74
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Remove<OVRPlugin_Qpl_Annotation_Builder_Entry>
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined2 unaff_w22;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar15 = *(long **)(param_1 + 0x30);
    if (plVar15 == (long *)0x0) {
      uVar7 = FUN_047beae4((long)&stack0x00000018 + 4,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x130));
    }
    else {
                    /* try { // try from 0395ef90 to 03a5ef9f has its CatchHandler @ 0395efd4 */
      lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_015c2790(lVar9);
                    /* try { // try from 0395efa8 to 03a5efaf has its CatchHandler @ 0395efd0 */
      }
      lVar11 = *plVar15;
                    /* try { // try from 0395efb0 to 03a5efeb has its CatchHandler @ 0395ef34 */
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0395f014;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_015c2a80(plVar15,lVar9,1);
LAB_0395f014:
      uVar7 = (*(code *)*puVar8)(plVar15,unaff_w22,puVar8[1]);
    }
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
LAB_0395f254:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar1 = *(uint *)(lVar9 + 0x18);
    uVar7 = uVar7 & 0x7fffffff;
    iVar5 = 0;
    if (uVar1 != 0) {
      iVar5 = (int)uVar7 / (int)uVar1;
    }
    uVar4 = uVar7 - iVar5 * uVar1;
    if (uVar1 <= uVar4) {
LAB_0395f258:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar1 = *(int *)(lVar9 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar1) {
      uVar18 = 0xffffffff;
      do {
        uVar16 = uVar1;
        uVar6 = in_stack_00000018._4_2_;
        lVar9 = *(long *)(param_1 + 0x18);
        if (lVar9 == 0) goto LAB_0395f254;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_0395f258;
        puVar17 = (uint *)(lVar9 + (long)(int)uVar16 * 0x18 + 0x20);
        lVar11 = (long)(int)uVar16;
        if (*puVar17 == uVar7) {
          plVar15 = *(long **)(param_1 + 0x30);
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (plVar15 == (long *)0x0) goto LAB_0395f254;
            uVar13 = (**(code **)(*plVar15 + 0x1b8))
                               (plVar15,*(undefined2 *)(lVar9 + lVar11 * 0x18 + 0x28),
                                in_stack_00000018._4_2_,*(undefined8 *)(*plVar15 + 0x1c0));
          }
          else {
            if (plVar15 == (long *)0x0) goto LAB_0395f254;
            lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
            uVar3 = *(undefined2 *)(lVar9 + lVar11 * 0x18 + 0x28);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_015c2790(lVar10);
            }
            lVar12 = *plVar15;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0395f160;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_015c2a80(plVar15,lVar10,0);
LAB_0395f160:
            uVar13 = (*(code *)*puVar8)(plVar15,uVar3,uVar6,puVar8[1]);
          }
          if ((uVar13 & 1) != 0) {
            if ((int)uVar18 < 0) {
              lVar10 = *(long *)(param_1 + 0x10);
              if (lVar10 == 0) goto LAB_0395f254;
              if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_0395f258;
              *(int *)(lVar10 + (ulong)uVar4 * 4 + 0x20) =
                   *(int *)(lVar9 + lVar11 * 0x18 + 0x24) + 1;
            }
            else {
              lVar10 = *(long *)(param_1 + 0x18);
              if (lVar10 == 0) goto LAB_0395f254;
              if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0395f258;
              *(undefined4 *)(lVar10 + (long)(int)uVar18 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar9 + lVar11 * 0x18 + 0x24);
            }
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(param_1 + 0x24);
            lVar9 = lVar9 + lVar11 * 0x18;
            *(undefined8 *)(lVar9 + 0x30) = 0;
            *(undefined4 *)(lVar9 + 0x24) = uVar2;
            *(uint *)(param_1 + 0x24) = uVar16;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar9 + lVar11 * 0x18 + 0x24);
        uVar18 = uVar16;
      } while (-1 < (int)uVar1);
    }
  }
  return 0;
}


