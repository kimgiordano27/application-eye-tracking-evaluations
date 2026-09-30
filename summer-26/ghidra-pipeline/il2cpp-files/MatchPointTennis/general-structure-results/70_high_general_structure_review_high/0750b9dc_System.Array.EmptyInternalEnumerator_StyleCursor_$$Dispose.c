/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<StyleCursor>$$Dispose
ENTRY_POINT: 0750b9dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


undefined8
System_Array_EmptyInternalEnumerator<StyleCursor>__Dispose(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  undefined8 unaff_x23;
  uint uVar8;
  ulong unaff_x24;
  int *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  uint uVar9;
  ulong unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
System_Array_EmptyInternalEnumerator<StyleCursor>__MoveNext:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x29;
  uVar7 = *(undefined8 *)(unaff_x26 + unaff_x28 * unaff_x20 + 0x28);
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_04481fb8(param_2);
  }
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_2) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0750ba88;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_044822ac(unaff_x21,param_2,0);
LAB_0750ba88:
  uVar3 = (*(code *)*puVar1)(unaff_x21,uVar7,unaff_x23,puVar1[1]);
  uVar5 = unaff_x24;
  unaff_x24 = unaff_x28;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar9 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto System_Array_EmptyInternalEnumerator<StyleFloat>___ctor;
        if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
               *(int *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) + 1;
          goto FUN_0750bb44;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0) goto System_Array_EmptyInternalEnumerator<StyleFloat>___ctor;
        if (uVar9 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar9 * 0x18 + 0x24) =
               *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24);
FUN_0750bb44:
          *unaff_x25 = -1;
          *(undefined4 *)(unaff_x26 + unaff_x24 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
LAB_0750bb7c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    do {
      uVar8 = *(uint *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x24);
      unaff_x24 = (ulong)uVar8;
      unaff_x29 = uVar5 & 0xffffffff;
      uVar9 = (uint)uVar5;
      if ((int)uVar8 < 0) {
        return 0;
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x26 == 0) goto System_Array_EmptyInternalEnumerator<StyleFloat>___ctor;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar8) goto LAB_0750bb7c;
      unaff_x25 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 0x20);
      uVar5 = unaff_x24;
    } while (*unaff_x25 != unaff_w27);
    unaff_x21 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar2 = (long *)FUN_04754a28(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0) goto System_Array_EmptyInternalEnumerator<StyleFloat>___ctor;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined8 *)(unaff_x26 + unaff_x24 * unaff_x20 + 0x28),
                       in_stack_00000018,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x21 == (long *)0x0) {
System_Array_EmptyInternalEnumerator<StyleFloat>___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_x23 = in_stack_00000018;
  unaff_x28 = unaff_x24;
  goto System_Array_EmptyInternalEnumerator<StyleCursor>__MoveNext;
}


