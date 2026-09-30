/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 070b7990
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8
System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong unaff_x20;
  undefined8 uVar10;
  long unaff_x23;
  ulong unaff_x25;
  int *piVar11;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar1 = *(uint *)(param_1 + 4);
    uVar6 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    param_1 = *(long *)(unaff_x23 + 0x18);
    if (param_1 == 0) goto LAB_070b7a70;
    if (*(uint *)(param_1 + 0x18) <= uVar1)
    goto System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose;
    param_1 = param_1 + 0x20;
    piVar11 = (int *)(param_1 + uVar6 * (unaff_x20 & 0xffffffff));
    if (*piVar11 == unaff_w29) {
      plVar9 = *(long **)(unaff_x23 + 0x30);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)FUN_044a69d4(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar9 == (long *)0x0) goto LAB_070b7a70;
        uVar7 = (**(code **)(*plVar9 + 0x1b8))
                          (plVar9,*(undefined8 *)(param_1 + uVar6 * (unaff_x20 & 0xffffffff) + 8),
                           in_stack_00000018,*(undefined8 *)(*plVar9 + 0x1c0));
      }
      else {
        lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
        uVar10 = *(undefined8 *)(param_1 + uVar6 * (unaff_x20 & 0xffffffff) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f4b260(lVar4);
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_070b7968;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f4b594(plVar9,lVar4,0);
LAB_070b7968:
        uVar7 = (*(code *)*puVar3)(plVar9,uVar10,in_stack_00000018,puVar3[1]);
        unaff_x23 = in_stack_00000008;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)(uint)unaff_x25 < 0) {
          lVar4 = *(long *)(unaff_x23 + 0x10);
          if (lVar4 == 0) goto LAB_070b7a70;
          if (*(uint *)(lVar4 + 0x18) <= (uint)in_stack_00000000)
          goto System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose;
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) = *(int *)(param_1 + uVar6 * 0x88 + 4) + 1;
        }
        else {
          lVar4 = *(long *)(unaff_x23 + 0x18);
          if (lVar4 == 0) {
LAB_070b7a70:
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x25) {
System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose:
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
          *(undefined4 *)(lVar4 + (unaff_x25 & 0xffffffff) * 0x88 + 0x24) =
               *(undefined4 *)(param_1 + uVar6 * 0x88 + 4);
        }
        uVar2 = *(undefined4 *)(unaff_x23 + 0x24);
        param_1 = param_1 + uVar6 * 0x88;
        *piVar11 = -1;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 4) = uVar2;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(uint *)(unaff_x23 + 0x24) = uVar1;
        *(ulong *)(unaff_x23 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
        return 1;
      }
    }
    param_1 = param_1 + uVar6 * (unaff_x20 & 0xffffffff);
    unaff_x25 = uVar6;
  } while( true );
}


