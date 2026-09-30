/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 01b03e28
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose
               (undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  
  iVar2 = FUN_013ccb88(param_1,*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x28));
  if ((int)(param_2 - unaff_w19) < iVar2) {
    FUN_01d68ae8(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_0103c244(lVar7);
  }
  lVar7 = thunk_FUN_0103ffe0();
  if (lVar7 != 0) {
    FUN_01b03abc();
    return;
  }
  plVar3 = (long *)thunk_FUN_0103ffe0();
  if (plVar3 == (long *)0x0) {
    FUN_01d693a0();
  }
  lVar7 = *(long *)(unaff_x21 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar1 = *(uint *)(lVar7 + 0x20);
  if (0 < (int)uVar1) {
    lVar7 = *(long *)(lVar7 + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar8 = 0;
    lVar9 = lVar7 + 0x38;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (-1 < *(int *)(lVar9 + -0x18)) {
        lVar4 = thunk_FUN_0103fd0c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0103ffe0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar6,0);
        }
        if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar3[(long)(int)unaff_w19 + 4] = lVar4;
        thunk_FUN_0106e12c(plVar3 + (long)(int)unaff_w19 + 4,lVar4);
        unaff_w19 = unaff_w19 + 1;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x30;
    } while (uVar1 != uVar8);
  }
  return;
}


