/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 028db038
PROGRAM: gunraiders-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
          (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 in_stack_00000018;
  
  if (unaff_x22 == (long *)0x0) {
    uVar6 = FUN_032cf300((long)&stack0x00000018 + 4,0);
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_028db0bc;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498();
LAB_028db0bc:
    uVar6 = (*(code *)*puVar7)();
  }
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar15 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar5 = 0;
    if (uVar15 != 0) {
      iVar5 = (int)uVar6 / (int)uVar15;
    }
    uVar4 = uVar6 - iVar5 * uVar15;
    if (uVar15 <= uVar4) {
LAB_028db304:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar15 = *(int *)(lVar8 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar12 = 0xffffffff;
      do {
        uVar3 = in_stack_00000018._4_4_;
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_028db300;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_028db304;
        puVar17 = (uint *)(lVar8 + (ulong)uVar15 * 0x28 + 0x20);
        uVar16 = (ulong)uVar15;
        if (*puVar17 == uVar6) {
          plVar10 = *(long **)(unaff_x19 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)FUN_022cb868(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar10 == (long *)0x0) goto LAB_028db300;
            uVar13 = (**(code **)(*plVar10 + 0x1b8))
                               (plVar10,*(undefined4 *)(lVar8 + uVar16 * 0x28 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_028db300;
            lVar9 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar16 * 0x28 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394(lVar9);
            }
            lVar11 = *plVar10;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_028db204;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_01c72498(plVar10,lVar9,0);
LAB_028db204:
            uVar13 = (*(code *)*puVar7)(plVar10,uVar1,uVar3,puVar7[1]);
          }
          if ((uVar13 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar9 = *(long *)(unaff_x19 + 0x10);
              if (lVar9 == 0) goto LAB_028db300;
              if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_028db304;
              *(int *)(lVar9 + (ulong)uVar4 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x28 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(unaff_x19 + 0x18);
              if (lVar9 == 0) goto LAB_028db300;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar12) goto LAB_028db304;
              *(undefined4 *)(lVar9 + uVar12 * 0x28 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x28 + 0x24);
            }
            *puVar17 = 0xffffffff;
            lVar8 = lVar8 + uVar16 * 0x28;
            uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(undefined8 *)(lVar8 + 0x40) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar3;
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar16 * 0x28 + 0x24);
        uVar12 = (ulong)uVar15;
        uVar15 = uVar2;
      } while (-1 < (int)uVar2);
    }
    return 0;
  }
LAB_028db300:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


