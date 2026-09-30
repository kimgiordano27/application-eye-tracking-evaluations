/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 013e1388
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


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor(long param_1)

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
  uint *puVar13;
  ulong uVar14;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
  }
  lVar7 = *unaff_x24;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar6) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_013e1408;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0103c348();
LAB_013e1408:
  uVar4 = (*(code *)*puVar5)();
  lVar6 = *(long *)(unaff_x25 + 0x10);
  if (lVar6 != 0) {
    uVar15 = *(uint *)(lVar6 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar15 != 0) {
      iVar3 = (int)uVar4 / (int)uVar15;
    }
    uVar2 = uVar4 - iVar3 * uVar15;
    if (uVar15 <= uVar2) {
LAB_013e167c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    uVar15 = *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar10 = 0xffffffff;
      do {
        lVar6 = *(long *)(unaff_x25 + 0x18);
        if (lVar6 == 0) goto LAB_013e1678;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_013e167c;
        puVar13 = (uint *)(lVar6 + (ulong)uVar15 * 0x30 + 0x20);
        uVar14 = (ulong)uVar15;
        if (*puVar13 == uVar4) {
          plVar8 = *(long **)(unaff_x25 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_012274ec(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 0x18));
            if (plVar8 == (long *)0x0) goto LAB_013e1678;
            lVar7 = lVar6 + uVar14 * 0x30;
            uVar11 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x30),
                                in_stack_00000020,in_stack_00000028,*(undefined8 *)(*plVar8 + 0x1c0)
                               );
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_013e1678;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x26 + 0x20) + 0xc0) + 8);
            lVar9 = lVar6 + uVar14 * 0x30;
            uVar16 = *(undefined8 *)(lVar9 + 0x28);
            uVar17 = *(undefined8 *)(lVar9 + 0x30);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0103c244(lVar7);
            }
            lVar9 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_013e155c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_0103c348(plVar8,lVar7,0);
LAB_013e155c:
            uVar11 = (*(code *)*puVar5)(plVar8,uVar16,uVar17,in_stack_00000020,in_stack_00000028,
                                        puVar5[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar7 = *(long *)(unaff_x25 + 0x10);
              if (lVar7 == 0) goto LAB_013e1678;
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_013e167c;
              *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar14 * 0x30 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x25 + 0x18);
              if (lVar7 == 0) goto LAB_013e1678;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar10) goto LAB_013e167c;
              *(undefined4 *)(lVar7 + uVar10 * 0x30 + 0x24) =
                   *(undefined4 *)(lVar6 + uVar14 * 0x30 + 0x24);
            }
            lVar6 = lVar6 + uVar14 * 0x30;
            uVar17 = *(undefined8 *)(lVar6 + 0x40);
            uVar16 = *(undefined8 *)(lVar6 + 0x38);
            in_stack_00000008[2] = *(undefined8 *)(lVar6 + 0x48);
            in_stack_00000008[1] = uVar17;
            *in_stack_00000008 = uVar16;
            *puVar13 = 0xffffffff;
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(unaff_x25 + 0x24);
            *(uint *)(unaff_x25 + 0x24) = uVar15;
            *(ulong *)(unaff_x25 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x25 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x25 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar6 + uVar14 * 0x30 + 0x24);
        uVar10 = (ulong)uVar15;
        uVar15 = uVar1;
      } while (-1 < (int)uVar1);
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


