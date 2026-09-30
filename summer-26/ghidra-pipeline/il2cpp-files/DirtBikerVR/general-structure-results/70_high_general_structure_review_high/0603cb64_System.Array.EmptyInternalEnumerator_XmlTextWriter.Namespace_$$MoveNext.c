/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$MoveNext
ENTRY_POINT: 0603cb64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__MoveNext(long *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  ulong unaff_x20;
  long unaff_x23;
  uint uVar8;
  ulong unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x0603cb64:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x25;
  if (param_1 == (long *)0x0) {
LAB_0603cc84:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar3 = (**(code **)(*param_1 + 0x1b8))
                    (param_1,*(undefined4 *)
                              (unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 8),
                     in_stack_00000018._4_4_,*(undefined8 *)(*param_1 + 0x1c0));
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar5 = *(long *)(unaff_x23 + 0x10);
        if (lVar5 == 0) goto LAB_0603cc84;
        if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
          *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 100 + 4) + 1;
          goto LAB_0603cc50;
        }
      }
      else {
        lVar5 = *(long *)(unaff_x23 + 0x18);
        if (lVar5 == 0) goto LAB_0603cc84;
        if (uVar9 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + (ulong)uVar9 * 100 + 0x24) =
               *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 100 + 4);
LAB_0603cc50:
          uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
          *unaff_x28 = -1;
          *(uint *)(unaff_x23 + 0x24) = uVar8;
          *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 100 + 4) = uVar1;
          *(ulong *)(unaff_x23 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
          return 1;
        }
      }
LAB_0603cc88:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    do {
      unaff_x25 = unaff_x24 & 0xffffffff;
      uVar9 = (uint)unaff_x24;
      uVar8 = *(uint *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
      unaff_x24 = (ulong)uVar8;
      if ((int)uVar8 < 0) {
        return 0;
      }
      lVar5 = *(long *)(unaff_x23 + 0x18);
      if (lVar5 == 0) goto LAB_0603cc84;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_0603cc88;
      unaff_x26 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff));
      unaff_x27 = unaff_x24;
    } while (*unaff_x28 != unaff_w29);
    plVar7 = *(long **)(unaff_x23 + 0x30);
    if (plVar7 == (long *)0x0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
    uVar1 = *(undefined4 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090(lVar5);
    }
    lVar4 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0603cb98;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(plVar7,lVar5,0);
LAB_0603cb98:
    uVar3 = (*(code *)*puVar2)(plVar7,uVar1,in_stack_00000018._4_4_,puVar2[1]);
    unaff_x23 = in_stack_00000008;
  } while( true );
  param_1 = (long *)FUN_04039e78(*(undefined8 *)
                                  (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
  goto code_r0x0603cb64;
}


