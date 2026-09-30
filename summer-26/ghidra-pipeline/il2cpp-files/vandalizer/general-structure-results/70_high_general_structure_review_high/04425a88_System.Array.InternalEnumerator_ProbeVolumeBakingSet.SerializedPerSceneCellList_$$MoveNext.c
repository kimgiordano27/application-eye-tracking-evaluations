/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$MoveNext
ENTRY_POINT: 04425a88
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__MoveNext
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  code *pcVar9;
  undefined8 *__dest;
  void *__s;
  undefined8 uVar10;
  int unaff_w27;
  long unaff_x29;
  
  uVar8 = unaff_x22 + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(param_1 - uVar8);
  __s = (void *)((long)__dest - uVar8);
  memset(__s,0,unaff_x22);
  if ((unaff_x19 & 1) == 0) {
    FUN_0322bef4();
  }
  piVar3 = (int *)thunk_FUN_0324f9d8();
  if (unaff_w27 < *piVar3) {
    iVar1 = unaff_w27;
    while( true ) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      piVar3 = (int *)thunk_FUN_0324f9d8();
      if (*piVar3 <= iVar1) break;
      memset(__s,0,unaff_x22);
      memcpy(__dest,__s,unaff_x22);
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar4 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_0322bef4(lVar7);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar4 = *(long *)(unaff_x20 + 0x20);
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x50);
      lVar7 = lVar4;
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_0322bef4(lVar4);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar7 = *(long *)(unaff_x20 + 0x20);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x50);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_0322bef4(lVar7);
      }
      puVar6 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
        puVar6 = (undefined8 *)*__dest;
      }
      *(int *)(unaff_x29 + -0xc) = iVar1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
      (**(code **)(lVar4 + 0x10))(uVar10,lVar4);
      iVar1 = iVar1 + 1;
    }
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_02d78af4();
  if (1 < unaff_w27) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    plVar5 = (long *)thunk_FUN_0324f9d8();
    if (*plVar5 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      plVar5 = (long *)thunk_FUN_0324f9d8();
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (unaff_w27 + -1 <= *(int *)(*plVar5 + 0x18)) goto LAB_04425d18;
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_0322bef4(lVar7);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_0322bef4(lVar4);
    }
    uVar10 = thunk_FUN_0324f9d8();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    (*pcVar9)(uVar10,unaff_w27 + -1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  }
LAB_04425d18:
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


