/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 04a4bdd4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (void *param_1,void *param_2)

{
  int *piVar1;
  void *__src;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  void *unaff_x21;
  undefined8 uVar4;
  size_t unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  memcpy(param_1,param_2,unaff_x22);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  thunk_FUN_03ae913c();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_035198d0();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  piVar1 = (int *)thunk_FUN_03ae913c();
  if (0 < *piVar1) {
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    __src = (void *)thunk_FUN_03ae913c();
    memcpy(unaff_x25,__src,unaff_x24);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    FUN_03a8a740();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  piVar1 = (int *)thunk_FUN_03ae913c();
  if (1 < *piVar1) {
    memcpy(unaff_x23,unaff_x21,unaff_x22);
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    puVar2 = (undefined8 *)thunk_FUN_03ae913c();
    uVar4 = *puVar2;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    puVar2 = (undefined8 *)thunk_FUN_03ae913c();
    uVar3 = *puVar2;
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    piVar1 = (int *)thunk_FUN_03ae913c();
    FUN_06774b90(uVar4,uVar3,*piVar1 + -1,0);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


