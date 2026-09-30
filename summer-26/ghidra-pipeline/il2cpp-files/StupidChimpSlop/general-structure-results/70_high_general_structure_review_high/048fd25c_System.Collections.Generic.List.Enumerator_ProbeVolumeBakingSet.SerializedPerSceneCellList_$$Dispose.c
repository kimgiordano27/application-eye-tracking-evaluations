/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 048fd25c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x048fd424) */

void System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (code *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000038;
  
  in_stack_00000038 = (long *)(*param_1)();
  in_stack_00000028 = &stack0x00000038;
  in_stack_00000020 = 0;
  do {
    plVar1 = in_stack_00000038;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar3 = *in_stack_00000038;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_048fd2c4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d87540(in_stack_00000038,*unaff_x23,0);
LAB_048fd2c4:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    plVar1 = in_stack_00000038;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000038;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_048fd3c8;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d8720c(lVar3);
    }
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_048fd348;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d87540(plVar1,lVar3,0);
LAB_048fd348:
    (*(code *)*puVar2)(&stack0x00000008,plVar1,puVar2[1]);
    System_Collections_Generic_List_Enumerator<RichTextTagParser_Tag>__System_Collections_IEnumerator_Reset
              ();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x22) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_048fd3e4;
    }
  }
LAB_048fd3c8:
  puVar2 = (undefined8 *)FUN_02d87540(in_stack_00000038,*unaff_x22,0);
LAB_048fd3e4:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


