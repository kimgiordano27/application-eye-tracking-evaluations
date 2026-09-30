/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.ctor
ENTRY_POINT: 04425a64
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


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___ctor
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong __n;
  code *pcVar8;
  undefined8 *__dest;
  void *__s;
  long lVar9;
  undefined8 uVar10;
  int unaff_w27;
  long unaff_x29;
  
  lVar9 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar9 + 0x135);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  uVar7 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(&stack0x00000000 + -uVar7);
  __s = (void *)((long)__dest - uVar7);
  memset(__s,0,__n);
  if ((uVar2 & 1) == 0) {
    FUN_0322bef4(lVar9);
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
      memset(__s,0,__n);
      memcpy(__dest,__s,__n);
      lVar6 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
      lVar9 = lVar6;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_0322bef4(lVar6);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar9 = *(long *)(unaff_x20 + 0x20);
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
      lVar6 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_0322bef4(lVar9);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar6 = *(long *)(unaff_x20 + 0x20);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_0322bef4(lVar6);
      }
      puVar5 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
        puVar5 = (undefined8 *)*__dest;
      }
      *(int *)(unaff_x29 + -0xc) = iVar1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
      (**(code **)(lVar9 + 0x10))(uVar10,lVar9);
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
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
    lVar9 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0322bef4(lVar6);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar9 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_0322bef4(lVar9);
    }
    uVar10 = thunk_FUN_0324f9d8();
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0322bef4();
    }
    (*pcVar8)(uVar10,unaff_w27 + -1,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x60));
  }
LAB_04425d18:
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


