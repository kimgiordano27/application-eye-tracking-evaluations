/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 05179ae4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  void *__s;
  long lVar9;
  long lVar10;
  ulong __n;
  long unaff_x21;
  undefined8 uVar11;
  long unaff_x24;
  undefined8 uVar12;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar9 = *(long *)(param_3 + 0x20);
  uVar4 = *(ushort *)(lVar9 + 0x135);
  lVar6 = lVar9;
  if ((uVar4 & 1) == 0) {
    lVar9 = FUN_02dcfd18(lVar9);
    uVar4 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x21 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0xfc);
  lVar9 = (long)&stack0x00000000 - (__n + 0xf & 0x1fffffff0);
  if ((uVar4 & 1) == 0) {
    FUN_02dcfd18(lVar6);
  }
  thunk_FUN_02df4db4();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  FUN_02982dac();
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  piVar5 = (int *)thunk_FUN_02df4db4();
  iVar1 = *piVar5;
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  lVar6 = thunk_FUN_02df4db4();
  iVar2 = *(int *)(lVar6 + 8);
  uVar4 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
  if (iVar1 < iVar2) {
    if ((uVar4 & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar7 = (undefined8 *)thunk_FUN_02df4db4();
    uVar12 = *puVar7;
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar8 = (undefined4 *)thunk_FUN_02df4db4();
    lVar10 = *(long *)(unaff_x21 + 0x20);
    uVar3 = *puVar8;
    uVar4 = *(ushort *)(lVar10 + 0x135);
    lVar6 = lVar10;
    if ((uVar4 & 1) == 0) {
      lVar10 = FUN_02dcfd18(lVar10);
      uVar4 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x21 + 0x20);
    }
    uVar11 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x20);
    if ((uVar4 & 1) == 0) {
      lVar6 = FUN_02dcfd18(lVar6);
    }
    lVar6 = *(long *)(lVar6 + 0xc0);
    *(undefined4 *)(unaff_x29 + -0xc) = uVar3;
    lVar6 = *(long *)(lVar6 + 0x20);
    *(long *)(unaff_x29 + -0x18) = lVar9;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar12;
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    (**(code **)(lVar6 + 0x10))(uVar11,lVar6,0,unaff_x29 + -0x28,lVar9);
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_02d965e0();
  }
  else {
    if ((uVar4 & 1) == 0) {
      FUN_02dcfd18();
    }
    __s = (void *)thunk_FUN_02df4db4();
    memset(__s,0,__n);
  }
  if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 < iVar2);
  }
  return;
}


