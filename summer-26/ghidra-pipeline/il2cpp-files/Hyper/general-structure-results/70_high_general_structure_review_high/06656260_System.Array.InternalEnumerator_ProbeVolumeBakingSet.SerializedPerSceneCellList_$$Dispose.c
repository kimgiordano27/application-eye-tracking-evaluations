/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 06656260
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (ulong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  void *unaff_x21;
  undefined8 uVar4;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x27;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_04980b34();
  }
  FUN_04947f0c();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  piVar1 = (int *)thunk_FUN_049a5d94();
  if (1 < *piVar1) {
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    puVar2 = (undefined8 *)thunk_FUN_049a5d94();
    uVar4 = *puVar2;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    puVar2 = (undefined8 *)thunk_FUN_049a5d94();
    uVar3 = *puVar2;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    piVar1 = (int *)thunk_FUN_049a5d94();
    FUN_08da0170(uVar4,uVar3,*piVar1 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


