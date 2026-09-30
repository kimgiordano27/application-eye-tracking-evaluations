/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 024635e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__6__System_IDisposable_Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  long in_x9;
  uint in_w11;
  long unaff_x19;
  long *unaff_x20;
  
  if ((in_w11 < *(byte *)(param_1 + 0x130)) ||
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(param_3,param_1);
  }
  unaff_x20[0x10] = param_3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(char *)(unaff_x19 + 0xe4) != '\0') {
    FUN_02489a5c();
    (**(code **)(*unaff_x20 + 0x348))();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x68),0);
  if (*(char *)(unaff_x19 + 0xe4) != '\0') {
    if (*(long *)(unaff_x19 + 0x150) != 0) {
      FUN_024a0eb0(*(long *)(unaff_x19 + 0x150),0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  return;
}


