/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 028db050
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
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>___ctor
          (ulong param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_01c72394(param_3);
  }
  lVar8 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == param_3) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_028db0bc;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_01c72498();
LAB_028db0bc:
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
LAB_028db304:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar14 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar11 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_028db300;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_028db304;
        puVar16 = (uint *)(lVar8 + (ulong)uVar14 * 0x28 + 0x20);
        uVar15 = (ulong)uVar14;
        if (*puVar16 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_022cb868(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_028db300;
            uVar12 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined4 *)(lVar8 + uVar15 * 0x28 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_028db300;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar15 * 0x28 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01c72394(lVar7);
            }
            lVar10 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_028db204;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)FUN_01c72498(plVar9,lVar7,0);
LAB_028db204:
            uVar12 = (*(code *)*puVar6)(plVar9,uVar1,in_stack_00000018._4_4_,puVar6[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_028db300;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_028db304;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar15 * 0x28 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_028db300;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar11) goto LAB_028db304;
              *(undefined4 *)(lVar7 + uVar11 * 0x28 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar15 * 0x28 + 0x24);
            }
            *puVar16 = 0xffffffff;
            lVar8 = lVar8 + uVar15 * 0x28;
            uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(undefined8 *)(lVar8 + 0x40) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar1;
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar15 * 0x28 + 0x24);
        uVar11 = (ulong)uVar14;
        uVar14 = uVar2;
      } while (-1 < (int)uVar2);
    }
    return 0;
  }
LAB_028db300:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


