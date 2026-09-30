/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Cursor>$$Dispose
ENTRY_POINT: 05bd9a34
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<Cursor>__Dispose(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  byte in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  uint uVar7;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar8;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x05bd9a34:
  uVar7 = (uint)unaff_x24;
  uVar8 = (uint)unaff_x29;
  if ((in_w8 & 1) == 0) {
    param_2 = FUN_03775678(param_2);
  }
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_2) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05bd9ad0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0377596c(unaff_x21,param_2,0);
LAB_05bd9ad0:
  uVar3 = (*(code *)*puVar1)(unaff_x21,unaff_x22,unaff_x23,puVar1[1]);
  uVar5 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_05bd9bc0;
        if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) + 1;
          goto LAB_05bd9b8c;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto LAB_05bd9bc0;
        if (uVar8 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar8 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24);
LAB_05bd9b8c:
          *unaff_x25 = -1;
          *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar7;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_05bd9bc4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    do {
      uVar7 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar7;
      unaff_x29 = uVar5 & 0xffffffff;
      uVar8 = (uint)uVar5;
      if ((int)uVar7 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto LAB_05bd9bc0;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_05bd9bc4;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar5 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar2 = (long *)FUN_03e0c914(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_05bd9bc0;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x21 == (long *)0x0) {
LAB_05bd9bc0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_x22 = *(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28);
  in_w8 = *(byte *)(param_2 + 0x135);
  unaff_x23 = in_stack_00000018;
  unaff_x28 = unaff_x24;
  goto code_r0x05bd9a34;
}


