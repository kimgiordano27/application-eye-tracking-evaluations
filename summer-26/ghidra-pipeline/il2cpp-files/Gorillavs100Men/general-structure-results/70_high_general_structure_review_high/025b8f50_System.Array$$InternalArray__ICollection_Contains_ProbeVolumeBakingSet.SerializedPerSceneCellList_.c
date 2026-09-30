/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 025b8f50
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint System_Array__InternalArray__ICollection_Contains<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined4 param_1)

{
  void *__src;
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x22;
  long unaff_x23;
  void *unaff_x25;
  undefined8 *unaff_x26;
  size_t unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  iVar1 = *(int *)(*(long *)(unaff_x23 + 0x20) + 0x28);
  __src = unaff_x25;
  if (-1 < iVar1) {
    __src = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x28,__src,unaff_x27);
  uVar5 = **(undefined8 **)(unaff_x23 + 0x28);
  if (-1 < iVar1) {
    unaff_x28 = (undefined8 *)*unaff_x28;
  }
  pcVar7 = (code *)(*(undefined8 **)(unaff_x23 + 0x28))[2];
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x28;
  (*pcVar7)(uVar5);
  lVar8 = *(long *)(unaff_x22 + 0x38);
  cVar2 = *(char *)(unaff_x29 + -0xc);
  iVar1 = *(int *)(*(long *)(lVar8 + 0x20) + 0x28);
  if (-1 < iVar1) {
    unaff_x25 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x26,unaff_x25,unaff_x27);
  puVar6 = *(undefined8 **)(lVar8 + 0x30);
  uVar5 = *puVar6;
  if (-1 < iVar1) {
    unaff_x26 = (undefined8 *)*unaff_x26;
  }
  pcVar7 = (code *)puVar6[2];
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x26;
  (*pcVar7)(uVar5);
  cVar3 = *(char *)(unaff_x29 + -0xc);
  uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x38))();
  if (*(int *)(*(long *)StringLiteral_10858 + 0xe4) == 0) {
    thunk_FUN_020b5864(*(long *)StringLiteral_10858);
  }
  uVar4 = FUN_03e78ffc(*(undefined4 *)(unaff_x29 + -0x3c),param_1,cVar2 != '\0',cVar3 != '\0',
                       uVar4 & 1,*(undefined8 *)(unaff_x29 + -0x38),
                       *(undefined8 *)(unaff_x29 + -0x28),0);
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


