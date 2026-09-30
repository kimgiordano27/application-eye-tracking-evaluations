/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray.<get_Childs>d__13$$System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator
ENTRY_POINT: 06d167d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06d16948) */
/* WARNING: Removing unreachable block (ram,0x06d1699c) */

void Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_Collections_Generic_IEnumerable<Meta_WitAi_Json_WitResponseNode>_GetEnumerator
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
code_r0x06d167d4:
  puVar3 = (undefined8 *)FUN_03cf1348();
  do {
    plVar4 = (long *)(*(code *)*puVar3)();
    lVar6 = in_stack_00000040;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06d162ec(&stack0x00000008,uVar5,1);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    auVar11 = FUN_056c7fe8(&stack0x00000020,*unaff_x24);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar9 = *unaff_x25;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined1 (*) [16])(lVar8 + 0x20) = auVar11;
      thunk_FUN_03d233cc(lVar8 + 0x28,0);
    }
    else {
      FUN_05428820(lVar6,auVar11._0_8_,auVar11._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06d16790;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06d16790:
    uVar7 = (*(code *)*puVar3)();
    puVar2 = PTR_DAT_08e6a288;
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_03cf5138();
      if (plVar4 == (long *)0x0) goto LAB_06d1693c;
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_06d16914;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 == 0) goto code_r0x06d167d4;
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    while (*(long *)(piVar10 + -2) != *unaff_x26) {
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
      if (uVar7 == 0) goto code_r0x06d167d4;
    }
    puVar3 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar10 = piVar10 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06d16930;
    }
  }
LAB_06d16914:
  puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar2,0);
LAB_06d16930:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_06d1693c:
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  FUN_056c76d0();
  return;
}


