/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 0468fbec
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0468fdd0) */
/* WARNING: Removing unreachable block (ram,0x0468fdc8) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int iVar6;
  long unaff_x20;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  
  FUN_0406ab48();
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = (undefined8 *)0x0;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    FUN_057d5e44(&stack0x00000008,*(long *)(unaff_x19 + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98));
    in_stack_00000020 = in_stack_00000008;
    iVar6 = 0;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000018 = &stack0x00000038;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000010 = &stack0x00000020;
    while (uVar3 = FUN_072066f4(&stack0x00000020,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0xc0)),
          puVar2 = in_stack_00000030, (uVar3 & 1) != 0) {
      lVar4 = **(long **)(in_stack_00000038 + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0406aaec(lVar4);
      }
      lVar4 = thunk_FUN_0406ddbc(puVar2,lVar4);
      if (lVar4 != 0) {
        iVar6 = iVar6 + 1;
      }
    }
    FUN_072066f0(&stack0x00000020,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 200));
    lVar4 = *(long *)(*(long *)(in_stack_00000038 + 0x38) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec();
    }
    lVar4 = FUN_040316d0(lVar4,iVar6);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_057d5e44(&stack0x00000008,*(long *)(unaff_x19 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0x98));
      in_stack_00000020 = in_stack_00000008;
      uVar7 = 0;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000018 = &stack0x00000038;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000010 = &stack0x00000020;
      while( true ) {
        do {
          uVar3 = FUN_072066f4(&stack0x00000020,
                               *(undefined8 *)
                                (*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 0xc0));
          puVar2 = in_stack_00000030;
          if ((uVar3 & 1) == 0) {
            FUN_072066f0(&stack0x00000020,
                         *(undefined8 *)
                          (*(long *)(*(long *)(in_stack_00000038 + 0x20) + 0xc0) + 200));
            return lVar4;
          }
          lVar5 = **(long **)(in_stack_00000038 + 0x38);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0406aaec(lVar5);
          }
          lVar5 = thunk_FUN_0406ddbc(puVar2,lVar5);
        } while (lVar5 == 0);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        lVar1 = (long)(int)uVar7;
        uVar7 = uVar7 + 1;
        *(long *)(lVar4 + lVar1 * 8 + 0x20) = lVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


