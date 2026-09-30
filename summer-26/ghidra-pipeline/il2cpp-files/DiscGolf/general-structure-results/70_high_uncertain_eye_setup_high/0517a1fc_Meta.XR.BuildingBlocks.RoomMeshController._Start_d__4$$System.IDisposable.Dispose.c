/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 0517a1fc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose
               (undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  void *unaff_x19;
  long *unaff_x20;
  
  lVar2 = FUN_02dcfd18(param_1);
  iVar3 = (int)unaff_x20[2];
  uVar1 = *(uint *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0xfc);
  if (iVar3 < (int)unaff_x20[1]) {
    FUN_05509674(0);
    iVar3 = (int)unaff_x20[2];
  }
  if (*(int *)((long)unaff_x20 + 0xc) <= iVar3) {
    FUN_055096c0(0);
  }
  plVar4 = (long *)*unaff_x20;
  if (plVar4 != (long *)0x0) {
    if (*(uint *)(unaff_x20 + 2) < *(uint *)(plVar4 + 3)) {
      memmove(unaff_x19,
              (void *)((long)plVar4 +
                      (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)*(uint *)(unaff_x20 + 2) + 0x20
                      ),(ulong)uVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


