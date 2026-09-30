/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03540950
PROGRAM: beastcraft-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  int iVar7;
  int iVar8;
  int unaff_w24;
  undefined8 *unaff_x25;
  uint uVar9;
  long unaff_x28;
  undefined8 *puVar10;
  undefined8 *unaff_x29;
  int iStack0000000000000004;
  long in_stack_00000008;
  
  puVar10 = *(undefined8 **)(unaff_x28 + 0x938);
  iVar7 = 0;
  iVar8 = 0;
  iStack0000000000000004 = unaff_w24;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar8) {
      return;
    }
    lVar3 = FUN_03f2b33c(param_1,iVar8,*unaff_x25);
    if (*(long *)(unaff_x19 + 0x58) == 0) break;
    iVar1 = FUN_04d5fd98(*(long *)(unaff_x19 + 0x58),*unaff_x29);
    if (iVar1 < 1) {
      uVar9 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x58) == 0) ||
         (lVar4 = FUN_04d60060(*(long *)(unaff_x19 + 0x58),iVar7,*puVar10), lVar4 == 0)) break;
      uVar9 = (uint)(*(int *)(lVar4 + 0x18) == *(int *)(unaff_x19 + 0x28));
    }
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x20) == unaff_w24) {
      if (*(long *)(unaff_x19 + 0x58) == 0) break;
      uVar2 = FUN_04d61bdc(*(long *)(unaff_x19 + 0x58),iVar7,&stack0x00000008,
                           *(undefined8 *)PTR_DAT_06a6b928);
      if (uVar9 != 0 || ((uVar2 ^ 0xffffffff) & 1) != 0) {
        lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a66090);
        FUN_03f2ada4(lVar4,*(undefined8 *)PTR_DAT_06a66098);
        in_stack_00000008 = lVar4;
        if (*(long *)(unaff_x19 + 0x58) == 0) break;
        iVar7 = iVar7 + uVar9;
        FUN_04d60100(*(long *)(unaff_x19 + 0x58),iVar7,lVar4,*(undefined8 *)PTR_DAT_06a6b918);
        unaff_w24 = iStack0000000000000004;
      }
      if (in_stack_00000008 == 0) break;
      lVar4 = *(long *)(in_stack_00000008 + 0x10);
      lVar6 = *(long *)PTR_DAT_06a6b940;
      *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
      if (lVar4 == 0) break;
      uVar9 = *(uint *)(in_stack_00000008 + 0x18);
      if (uVar9 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(in_stack_00000008 + 0x18) = uVar9 + 1;
        plVar5 = (long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
        *plVar5 = lVar3;
        thunk_FUN_02ee2be8(plVar5,lVar3);
      }
      else {
        FUN_03f2b60c(in_stack_00000008,lVar3,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x50);
    iVar8 = iVar8 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


