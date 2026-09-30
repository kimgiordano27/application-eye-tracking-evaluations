/*
FUNCTION_NAME: Ruleset$$GetClosestStartPosition
ENTRY_POINT: 02770010
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


uint Ruleset__GetClosestStartPosition
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  undefined4 unaff_w19;
  long unaff_x23;
  long unaff_x25;
  long *in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06da9dd0);
    thunk_FUN_0159f088(PTR_DAT_06db6eb8);
    thunk_FUN_0159f088(PTR_DAT_06deef18);
    *(undefined1 *)(unaff_x25 + 0x30c) = 1;
  }
  in_stack_00000008 = (long *)0x0;
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x80) + 8))
                      (*(long *)(param_2 + 0x10),param_3,&stack0x00000008);
    plVar6 = in_stack_00000008;
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_06db6eb8 + 0xb8) + 0x70);
      if (lVar5 != 0) {
        uVar4 = FUN_0251daf0(*(undefined8 *)PTR_DAT_06deef18,param_3,0);
        plVar6 = *(long **)(lVar5 + 0x18);
        if (plVar6 == (long *)0x0) goto LAB_02770164;
        (**(code **)(*plVar6 + 0x198))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x1a0));
      }
      uVar1 = 0;
    }
    else {
      if (in_stack_00000008 == (long *)0x0) goto LAB_02770164;
      lVar5 = *in_stack_00000008;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06da9dd0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_02770130;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80(in_stack_00000008,*(long *)PTR_DAT_06da9dd0,1);
LAB_02770130:
      uVar1 = (*(code *)*puVar3)(plVar6,param_4,param_5,unaff_w19,puVar3[1]);
    }
                    /* try { // try from 02770148 to 0287018b has its CatchHandler @ 02770148
                       catch() { ... } // from try @ 02770148 with catch @ 02770148
                       catch() { ... } // from try @ 02770198 with catch @ 02770148
                       catch() { ... } // from try @ 027701c8 with catch @ 02770148
                       catch() { ... } // from try @ 02770204 with catch @ 02770148 */
    return uVar1 & 1;
  }
LAB_02770164:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


