/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 0246338c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__5__System_IDisposable_Dispose(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(unaff_x19 + 0x68) = **(undefined8 **)(param_1 + 0xb8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x68));
  puVar1 = PTR_DAT_03ce6de8;
  if (*(long *)(unaff_x19 + 0x138) != 0) {
    if (*(int *)(unaff_x19 + 0x14c) - 1U < *(uint *)(*(long *)(unaff_x19 + 0x138) + 0x18)) {
      uVar2 = FUN_0245bbbc();
      uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_024a0c98(uVar3,0x18,0,uVar2,0);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x140,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


