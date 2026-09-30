/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$Dispose
ENTRY_POINT: 0603cb60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__Dispose(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
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
  
code_r0x0603cb60:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x25;
  plVar3 = (long *)FUN_04039e78(param_1);
  if (plVar3 == (long *)0x0) {
LAB_0603cc84:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1b8))
                    (plVar3,*(undefined4 *)
                             (unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 8),
                     in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  do {
    if ((uVar4 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar6 = *(long *)(unaff_x23 + 0x10);
        if (lVar6 == 0) goto LAB_0603cc84;
        if ((uint)in_stack_00000000 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 100 + 4) + 1;
          goto LAB_0603cc50;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x23 + 0x18);
        if (lVar6 == 0) goto LAB_0603cc84;
        if (uVar9 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar9 * 100 + 0x24) =
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
      lVar6 = *(long *)(unaff_x23 + 0x18);
      if (lVar6 == 0) goto LAB_0603cc84;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0603cc88;
      unaff_x26 = lVar6 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff));
      unaff_x27 = unaff_x24;
    } while (*unaff_x28 != unaff_w29);
    plVar3 = *(long **)(unaff_x23 + 0x30);
    if (plVar3 == (long *)0x0) break;
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
    uVar1 = *(undefined4 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
    }
    lVar5 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0603cb98;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(plVar3,lVar6,0);
LAB_0603cb98:
    uVar4 = (*(code *)*puVar2)(plVar3,uVar1,in_stack_00000018._4_4_,puVar2[1]);
    unaff_x23 = in_stack_00000008;
  } while( true );
  param_1 = *(undefined8 *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18);
  goto code_r0x0603cb60;
}


