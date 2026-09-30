/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OpenXRInput.SerializedBinding>$$Dispose
ENTRY_POINT: 049ae56c
PROGRAM: spatialPiano-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OpenXRInput_SerializedBinding>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ushort in_w9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  uint uVar7;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w24;
  uint uVar8;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x049ae56c:
  uVar8 = (uint)unaff_x25;
  uVar7 = (uint)unaff_x20;
  uVar1 = *(undefined4 *)(param_1 + 8);
  if ((in_w9 & 1) == 0) {
    param_3 = FUN_02f41e9c(param_3);
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_049ae60c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(unaff_x22,param_3,0);
LAB_049ae60c:
  uVar5 = (*(code *)*puVar2)(unaff_x22,uVar1,unaff_w24,puVar2[1]);
  do {
    if ((uVar5 & 1) != 0) {
      if ((int)uVar7 < 0) {
        lVar4 = *(long *)(in_stack_00000018 + 0x10);
        if (lVar4 != 0) {
          if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4) + 1;
            goto LAB_049ae6d0;
          }
          goto LAB_049ae71c;
        }
      }
      else {
        lVar4 = *(long *)(in_stack_00000018 + 0x18);
        if (lVar4 != 0) {
          if (uVar7 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (ulong)uVar7 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24 + 4);
LAB_049ae6d0:
            lVar4 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x24;
            uVar10 = *(undefined8 *)(lVar4 + 0x14);
            uVar9 = *(undefined8 *)(lVar4 + 0xc);
            in_stack_00000010[2] = *(undefined8 *)(lVar4 + 0x1c);
            in_stack_00000010[1] = uVar10;
            *in_stack_00000010 = uVar9;
            uVar1 = *(undefined4 *)(in_stack_00000018 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000018 + 0x24) = uVar8;
            *(undefined4 *)(lVar4 + 4) = uVar1;
            *(ulong *)(in_stack_00000018 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
            return 1;
          }
LAB_049ae71c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
LAB_049ae718:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      unaff_x20 = unaff_x25 & 0xffffffff;
      uVar7 = (uint)unaff_x25;
      uVar8 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x25 = (ulong)uVar8;
      if ((int)uVar8 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      lVar4 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar4 == 0) goto LAB_049ae718;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_049ae71c;
      unaff_x27 = lVar4 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w26);
    unaff_x19 = *(long **)(in_stack_00000018 + 0x30);
    if (unaff_x19 != (long *)0x0) break;
    plVar3 = (long *)FUN_0363acb8(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_049ae718;
    uVar5 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8),
                       in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
  param_1 = unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff);
  in_w9 = *(ushort *)(param_3 + 0x135);
  unaff_x22 = unaff_x19;
  unaff_w24 = in_stack_00000028._4_4_;
  goto code_r0x049ae56c;
}


