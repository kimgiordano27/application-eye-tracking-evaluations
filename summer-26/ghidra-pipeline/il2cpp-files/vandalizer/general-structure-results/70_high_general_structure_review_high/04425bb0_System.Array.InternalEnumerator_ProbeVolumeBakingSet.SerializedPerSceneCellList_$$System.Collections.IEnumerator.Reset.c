/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04425bb0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  ushort uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int unaff_w19;
  long unaff_x20;
  size_t unaff_x22;
  code *pcVar8;
  undefined8 *unaff_x23;
  void *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  
  while( true ) {
    puVar6 = unaff_x23;
    if (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x23;
    }
    *(int *)(unaff_x29 + -0xc) = unaff_w19;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x28;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (**(code **)(unaff_x26 + 0x10))(unaff_x25,unaff_x26);
    unaff_w19 = unaff_w19 + 1;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    piVar2 = (int *)thunk_FUN_0324f9d8();
    if (*piVar2 <= unaff_w19) break;
    memset(unaff_x24,0,unaff_x22);
    memcpy(unaff_x23,unaff_x24,unaff_x22);
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0322bef4(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    unaff_x25 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x50);
    lVar7 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    unaff_x26 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0322bef4(lVar7);
    }
    param_1 = *(long *)(lVar7 + 0xc0);
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_02d78af4();
  if (1 < unaff_w27) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    plVar4 = (long *)thunk_FUN_0324f9d8();
    if (*plVar4 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      plVar4 = (long *)thunk_FUN_0324f9d8();
      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (unaff_w27 + -1 <= *(int *)(*plVar4 + 0x18)) goto LAB_04425d18;
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_0322bef4(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_0322bef4(lVar3);
    }
    uVar5 = thunk_FUN_0324f9d8();
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    (*pcVar8)(uVar5,unaff_w27 + -1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60));
  }
LAB_04425d18:
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


