/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 01b04548
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  void *__src;
  ulong uVar7;
  
  lVar2 = thunk_FUN_0103ffe0();
  if (lVar2 != 0) {
    FUN_01b04160();
    return;
  }
  plVar3 = (long *)thunk_FUN_0103ffe0();
  if (plVar3 == (long *)0x0) {
    FUN_01d693a0();
  }
  lVar2 = *(long *)(unaff_x21 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar7 = 0;
    __src = (void *)(lVar2 + 0x38);
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (-1 < *(int *)((long)__src + -0x18)) {
        memmove(&stack0x00000008,__src,0x48);
        lVar4 = thunk_FUN_0103fd0c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40),
                                   &stack0x00000008);
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
      uVar7 = uVar7 + 1;
      __src = (void *)((long)__src + 0x60);
    } while (uVar1 != uVar7);
  }
  return;
}


