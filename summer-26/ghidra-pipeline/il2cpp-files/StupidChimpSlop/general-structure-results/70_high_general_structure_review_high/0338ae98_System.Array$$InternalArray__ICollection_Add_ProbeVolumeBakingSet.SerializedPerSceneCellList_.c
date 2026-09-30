/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 0338ae98
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0338b028) */
/* WARNING: Removing unreachable block (ram,0x0338b03c) */

void System_Array__InternalArray__ICollection_Add<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *__src;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  long unaff_x19;
  size_t unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x29;
  
  do {
    lVar2 = thunk_FUN_02d8a53c(param_1,param_2);
    if (lVar2 != 0) {
      memcpy(unaff_x22,unaff_x25,unaff_x20);
                    /* try { // try from 0338aeb4 to 0348aebf has its CatchHandler @ 0338aff8 */
                    /* try { // try from 0338aec0 to 0348afd7 has its CatchHandler @ 0338a7bc */
      uVar3 = thunk_FUN_02d8a270(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x28));
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x30);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d8720c(lVar2);
      }
      uVar3 = thunk_FUN_02d8a53c(uVar3,lVar2);
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x30);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d8720c(lVar2);
      }
      __src = (void *)FUN_02d4ddd0(uVar3,lVar2);
      memmove(unaff_x24,__src,unaff_x21);
      if (unaff_x19 == 0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        goto LAB_0338b0ac;
      }
      lVar2 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
      puVar5 = unaff_x24;
      if (-1 < *(int *)(*(long *)(lVar2 + 0x30) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x24;
      }
      puVar4 = *(undefined8 **)(lVar2 + 0x40);
      uVar3 = *puVar4;
      pcVar6 = (code *)puVar4[2];
      *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
      (*pcVar6)(uVar3);
    }
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x48))
                      (*(undefined8 *)(unaff_x29 + -0x28));
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
      lVar2 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02d8720c();
        lVar7 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
      }
      FUN_02d4e8bc(lVar2,*(undefined8 *)(lVar7 + 0x50),**(undefined8 **)(unaff_x29 + -0x38),
                   **(undefined8 **)(unaff_x29 + -0x30),0,0);
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
LAB_0338b0ac:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x18);
    uVar3 = *puVar5;
    pcVar6 = (code *)puVar5[2];
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (*pcVar6)(uVar3,puVar5,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x10);
    memcpy(unaff_x25,unaff_x22,unaff_x20);
    memcpy(unaff_x23,unaff_x22,unaff_x20);
    param_1 = thunk_FUN_02d8a270(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x28));
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x30);
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02d8720c(param_2);
    }
  } while( true );
}


