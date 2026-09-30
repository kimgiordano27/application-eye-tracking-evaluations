/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$.ctor
ENTRY_POINT: 070b7994
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


undefined8 System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>___ctor(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong unaff_x20;
  undefined8 uVar10;
  long unaff_x23;
  ulong uVar11;
  uint unaff_w25;
  int *piVar12;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar4 = in_w8;
    uVar11 = (ulong)uVar4;
    if ((int)uVar4 < 0) {
      return 0;
    }
    lVar5 = *(long *)(unaff_x23 + 0x18);
    if (lVar5 == 0) goto LAB_070b7a70;
    if (*(uint *)(lVar5 + 0x18) <= uVar4)
    goto System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose;
    lVar5 = lVar5 + 0x20;
    piVar12 = (int *)(lVar5 + (ulong)uVar4 * (unaff_x20 & 0xffffffff));
    if (*piVar12 == unaff_w29) {
      plVar9 = *(long **)(unaff_x23 + 0x30);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)FUN_044a69d4(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar9 == (long *)0x0) goto LAB_070b7a70;
        uVar7 = (**(code **)(*plVar9 + 0x1b8))
                          (plVar9,*(undefined8 *)(lVar5 + uVar11 * (unaff_x20 & 0xffffffff) + 8),
                           in_stack_00000018,*(undefined8 *)(*plVar9 + 0x1c0));
      }
      else {
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
        uVar10 = *(undefined8 *)(lVar5 + uVar11 * (unaff_x20 & 0xffffffff) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f4b260(lVar3);
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_070b7968;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f4b594(plVar9,lVar3,0);
LAB_070b7968:
        uVar7 = (*(code *)*puVar2)(plVar9,uVar10,in_stack_00000018,puVar2[1]);
        unaff_x23 = in_stack_00000008;
      }
      if ((uVar7 & 1) != 0) {
        if ((int)unaff_w25 < 0) {
          lVar3 = *(long *)(unaff_x23 + 0x10);
          if (lVar3 == 0) goto LAB_070b7a70;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000)
          goto System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) = *(int *)(lVar5 + uVar11 * 0x88 + 4) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x23 + 0x18);
          if (lVar3 == 0) {
LAB_070b7a70:
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w25) {
System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose:
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w25 * 0x88 + 0x24) =
               *(undefined4 *)(lVar5 + uVar11 * 0x88 + 4);
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
        lVar5 = lVar5 + uVar11 * 0x88;
        *piVar12 = -1;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x38) = 0;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        *(undefined8 *)(lVar5 + 0x58) = 0;
        *(undefined8 *)(lVar5 + 0x50) = 0;
        *(undefined8 *)(lVar5 + 0x68) = 0;
        *(undefined8 *)(lVar5 + 0x60) = 0;
        *(undefined8 *)(lVar5 + 0x78) = 0;
        *(undefined8 *)(lVar5 + 0x70) = 0;
        *(undefined4 *)(lVar5 + 4) = uVar1;
        *(undefined8 *)(lVar5 + 0x80) = 0;
        *(uint *)(unaff_x23 + 0x24) = uVar4;
        *(ulong *)(unaff_x23 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar5 + uVar11 * (unaff_x20 & 0xffffffff) + 4);
    unaff_w25 = uVar4;
  } while( true );
}


