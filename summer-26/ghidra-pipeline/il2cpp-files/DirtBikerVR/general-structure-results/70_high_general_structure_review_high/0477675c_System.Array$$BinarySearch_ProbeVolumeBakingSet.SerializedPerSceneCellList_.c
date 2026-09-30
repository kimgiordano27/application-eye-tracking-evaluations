/*
FUNCTION_NAME: System.Array$$BinarySearch<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 0477675c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
System_Array__BinarySearch<ProbeVolumeBakingSet_SerializedPerSceneCellList>
          (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  void *__src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long in_x9;
  long in_x10;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  long unaff_x22;
  long unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  size_t unaff_x26;
  size_t unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  __dest = (undefined8 *)(in_x9 - in_x10);
  __dest_01 = (undefined8 *)((long)__dest - (unaff_x26 + 0xf & 0x1fffffff0));
  __dest_00 = (undefined8 *)((long)__dest_01 - (unaff_x27 + 0xf & 0x1fffffff0));
  if (-1 < *(int *)(param_1 + 0x28)) {
    unaff_x25 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(__dest,unaff_x25,param_4);
  if (-1 < *(int *)(unaff_x22 + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(__dest_01,unaff_x24,unaff_x26);
  __src = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(unaff_x23 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x38);
  }
  memcpy(__dest_00,__src,unaff_x27);
  if ((*(ushort *)(*(long *)(unaff_x28 + 0x18) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  uVar1 = thunk_FUN_03ac74bc();
  plVar4 = *(long **)(*(long *)(unaff_x29 + -0x48) + 0x38);
  puVar3 = (undefined8 *)plVar4[4];
  if (-1 < *(int *)(*plVar4 + 0x28)) {
    __dest = (undefined8 *)*__dest;
  }
  uVar2 = *puVar3;
  if (-1 < *(int *)(plVar4[1] + 0x28)) {
    __dest_01 = (undefined8 *)*__dest_01;
  }
  if (-1 < *(int *)(plVar4[2] + 0x28)) {
    __dest_00 = (undefined8 *)*__dest_00;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = __dest_01;
  *(undefined8 **)(unaff_x29 + -0x10) = __dest_00;
  pcVar5 = (code *)puVar3[2];
  *(undefined8 **)(unaff_x29 + -0x20) = __dest;
  (*pcVar5)(uVar2,puVar3,uVar1,unaff_x29 + -0x20,__dest_00);
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


