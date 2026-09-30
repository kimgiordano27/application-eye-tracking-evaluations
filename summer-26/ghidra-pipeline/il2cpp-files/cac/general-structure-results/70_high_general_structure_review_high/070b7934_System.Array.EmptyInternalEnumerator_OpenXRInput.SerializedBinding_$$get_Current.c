/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$get_Current
ENTRY_POINT: 070b7934
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8
System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>__get_Current(long *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  ulong unaff_x20;
  undefined8 uVar8;
  long unaff_x23;
  uint uVar9;
  ulong unaff_x24;
  uint uVar10;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x070b7934:
  uVar9 = (uint)unaff_x24;
  uVar10 = (uint)unaff_x25;
  if (param_1 == (long *)0x0) {
LAB_070b7a70:
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  uVar3 = (**(code **)(*param_1 + 0x1b8))
                    (param_1,*(undefined8 *)
                              (unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 8),
                     in_stack_00000018,*(undefined8 *)(*param_1 + 0x1c0));
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar10 < 0) {
        lVar5 = *(long *)(unaff_x23 + 0x10);
        if (lVar5 == 0) goto LAB_070b7a70;
        if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x88 + 4) + 1;
          goto LAB_070b7a20;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x23 + 0x18);
        if (lVar5 == 0) goto LAB_070b7a70;
        if (uVar10 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar10 * 0x88 + 0x24) =
               *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x88 + 4);
LAB_070b7a20:
          uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
          lVar5 = unaff_x26 + (unaff_x27 & 0xffffffff) * 0x88;
          *unaff_x28 = -1;
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
          *(uint *)(unaff_x23 + 0x24) = uVar9;
          *(ulong *)(unaff_x23 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
          return 1;
        }
      }
System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    do {
      unaff_x25 = unaff_x24 & 0xffffffff;
      uVar10 = (uint)unaff_x24;
      uVar9 = *(uint *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
      unaff_x24 = (ulong)uVar9;
      if ((int)uVar9 < 0) {
        return 0;
      }
      lVar5 = *(long *)(unaff_x23 + 0x18);
      if (lVar5 == 0) goto LAB_070b7a70;
      if (*(uint *)(lVar5 + 0x18) <= uVar9)
      goto System_Array_EmptyInternalEnumerator<PEBuilder_Section>__Dispose;
      unaff_x26 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff));
      unaff_x27 = unaff_x24;
    } while (*unaff_x28 != unaff_w29);
    plVar7 = *(long **)(unaff_x23 + 0x30);
    if (plVar7 == (long *)0x0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
    uVar8 = *(undefined8 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f4b260(lVar5);
    }
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_070b7968;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f4b594(plVar7,lVar5,0);
LAB_070b7968:
    uVar3 = (*(code *)*puVar2)(plVar7,uVar8,in_stack_00000018,puVar2[1]);
    unaff_x23 = in_stack_00000008;
  } while( true );
  param_1 = (long *)FUN_044a69d4(*(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
  goto code_r0x070b7934;
}


