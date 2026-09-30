/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 04cfd0ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_IDisposable_Dispose
               (long param_1)

{
  byte bVar1;
  long *plVar2;
  long *unaff_x19;
  
  bVar1 = *(byte *)(**(long **)(param_1 + 0x278) + 0x130);
  if (((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
      (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
       **(long **)(param_1 + 0x278))) && (plVar2 = (long *)FUN_06307338(), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x04cfd154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x178))(plVar2,0,*(undefined8 *)(*plVar2 + 0x180));
    return;
  }
  return;
}


