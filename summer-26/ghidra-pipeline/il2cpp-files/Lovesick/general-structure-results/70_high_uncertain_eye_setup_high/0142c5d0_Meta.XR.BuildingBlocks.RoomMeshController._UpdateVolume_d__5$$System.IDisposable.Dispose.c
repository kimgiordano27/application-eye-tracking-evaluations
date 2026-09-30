/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 0142c5d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_IDisposable_Dispose(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  long in_stack_00000000;
  
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    uVar1 = FUN_0129eff4(*(long *)(unaff_x20 + 0x90),&stack0x0000000c);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      if ((in_stack_00000000 == 0) ||
         (plVar2 = *(long **)(in_stack_00000000 + 0x10), plVar2 == (long *)0x0)) goto LAB_0142c634;
      uVar3 = (**(code **)(*plVar2 + 0x848))(plVar2,unaff_w19,*(undefined8 *)(*plVar2 + 0x850));
    }
    return uVar3;
  }
LAB_0142c634:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


