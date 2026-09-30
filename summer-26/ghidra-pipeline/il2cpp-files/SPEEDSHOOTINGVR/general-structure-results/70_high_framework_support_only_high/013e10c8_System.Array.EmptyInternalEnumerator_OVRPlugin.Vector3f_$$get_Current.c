/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 013e10c8
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__get_Current
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint *puVar14;
  ulong uVar15;
  long unaff_x24;
  long unaff_x25;
  uint uVar16;
  ulong uVar17;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar6 = FUN_01d44634(param_2,*(undefined8 *)(param_1 + 0x168));
  lVar9 = *(long *)(unaff_x24 + 0x10);
  if (lVar9 != 0) {
    uVar16 = *(uint *)(lVar9 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar5 = 0;
    if (uVar16 != 0) {
      iVar5 = (int)uVar6 / (int)uVar16;
    }
    uVar4 = uVar6 - iVar5 * uVar16;
    if (uVar16 <= uVar4) {
LAB_013e133c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar16 = *(int *)(lVar9 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      uVar15 = 0xffffffff;
      do {
        lVar9 = *(long *)(unaff_x24 + 0x18);
        if (lVar9 == 0) goto LAB_013e1338;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_013e133c;
        puVar14 = (uint *)(lVar9 + (ulong)uVar16 * 0x30 + 0x20);
        uVar17 = (ulong)uVar16;
        if (*puVar14 == uVar6) {
          plVar10 = *(long **)(unaff_x24 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)FUN_012274ec(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18));
            if (plVar10 == (long *)0x0) goto LAB_013e1338;
            lVar8 = lVar9 + uVar17 * 0x30;
            uVar12 = (**(code **)(*plVar10 + 0x1b8))
                               (plVar10,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30),
                                in_stack_00000020,in_stack_00000028,
                                *(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_013e1338;
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 8);
            lVar11 = lVar9 + uVar17 * 0x30;
            uVar1 = *(undefined8 *)(lVar11 + 0x28);
            uVar2 = *(undefined8 *)(lVar11 + 0x30);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0103c244(lVar8);
            }
            lVar11 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar8) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_013e1238;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_0103c348(plVar10,lVar8,0);
LAB_013e1238:
            uVar12 = (*(code *)*puVar7)(plVar10,uVar1,uVar2,in_stack_00000020,in_stack_00000028,
                                        puVar7[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar15 < 0) {
              lVar8 = *(long *)(unaff_x24 + 0x10);
              if (lVar8 == 0) goto LAB_013e1338;
              if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_013e133c;
              *(int *)(lVar8 + (ulong)uVar4 * 4 + 0x20) = *(int *)(lVar9 + uVar17 * 0x30 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(unaff_x24 + 0x18);
              if (lVar8 == 0) goto LAB_013e1338;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar15) goto LAB_013e133c;
              *(undefined4 *)(lVar8 + uVar15 * 0x30 + 0x24) =
                   *(undefined4 *)(lVar9 + uVar17 * 0x30 + 0x24);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 *)(lVar9 + uVar17 * 0x30 + 0x24) = *(undefined4 *)(unaff_x24 + 0x24);
            *(uint *)(unaff_x24 + 0x24) = uVar16;
            *(ulong *)(unaff_x24 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
            return 1;
          }
        }
        uVar3 = *(uint *)(lVar9 + uVar17 * 0x30 + 0x24);
        uVar15 = (ulong)uVar16;
        uVar16 = uVar3;
      } while (-1 < (int)uVar3);
    }
    return 0;
  }
LAB_013e1338:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


