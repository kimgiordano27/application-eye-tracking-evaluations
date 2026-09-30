/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Vector2f>$$.cctor
ENTRY_POINT: 04f68938
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_EmptyArray<OVRPlugin_Vector2f>___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long *plVar14;
  undefined8 in_stack_00000008;
  
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == param_3) {
        puVar8 = (undefined8 *)(param_1 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_04f68990;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_02dd004c();
LAB_04f68990:
  uVar7 = (*(code *)*puVar8)();
  lVar9 = *(long *)(unaff_x19 + 0x10);
  if (lVar9 != 0) {
    uVar2 = *(uint *)(lVar9 + 0x18);
    uVar7 = uVar7 & 0x7fffffff;
    iVar6 = 0;
    if (uVar2 != 0) {
      iVar6 = (int)uVar7 / (int)uVar2;
    }
    uVar5 = uVar7 - iVar6 * uVar2;
    if (uVar2 <= uVar5) {
LAB_04f68b90:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar2 = *(int *)(lVar9 + (ulong)uVar5 * 4 + 0x20) - 1;
    if (-1 < (int)uVar2) {
      uVar11 = 0xffffffff;
      do {
        lVar9 = *(long *)(unaff_x19 + 0x18);
        if (lVar9 == 0) goto LAB_04f68b8c;
        if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_04f68b90;
        puVar1 = (undefined4 *)(lVar9 + 0x20 + (ulong)uVar2 * 0x10);
        if (*(uint *)(lVar9 + 0x20 + (ulong)uVar2 * 0x10) == uVar7) {
          plVar14 = *(long **)(unaff_x19 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_0390b820(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_04f68b8c;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined2 *)(puVar1 + 2),in_stack_00000008._4_2_,
                                *(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            uVar4 = *(undefined2 *)(puVar1 + 2);
            lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_02dcfd18(lVar9);
            }
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04f68ac8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)FUN_02dd004c(plVar14,lVar9,0);
LAB_04f68ac8:
            uVar12 = (*(code *)*puVar8)(plVar14,uVar4,in_stack_00000008._4_2_,puVar8[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar9 = *(long *)(unaff_x19 + 0x10);
              if (lVar9 == 0) goto LAB_04f68b8c;
              if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_04f68b90;
              *(int *)(lVar9 + (ulong)uVar5 * 4 + 0x20) = puVar1[1] + 1;
            }
            else {
              lVar9 = *(long *)(unaff_x19 + 0x18);
              if (lVar9 == 0) goto LAB_04f68b8c;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar11) goto LAB_04f68b90;
              *(undefined4 *)(lVar9 + uVar11 * 0x10 + 0x24) = puVar1[1];
            }
            uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar2;
            *puVar1 = 0xffffffff;
            puVar1[1] = uVar3;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar11 = (ulong)uVar2;
        uVar2 = puVar1[1];
      } while (-1 < (int)puVar1[1]);
    }
    return 0;
  }
LAB_04f68b8c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


