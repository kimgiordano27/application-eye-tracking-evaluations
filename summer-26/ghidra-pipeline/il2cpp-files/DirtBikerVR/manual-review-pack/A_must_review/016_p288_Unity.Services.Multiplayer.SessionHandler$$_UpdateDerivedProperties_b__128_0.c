/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler$$<UpdateDerivedProperties>b__128_0
ENTRY_POINT: 077c8480
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 161
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Services_Multiplayer_SessionHandler__<UpdateDerivedProperties>b__128_0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  
  puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0x398)) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_077c84d8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_077c84d8:
  puVar2 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_GenerateHDRDebugData,_RenderGraphContext>_TypeInfo
  ;
  (*(code *)*puVar3)();
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *(long *)puVar1;
  }
  FUN_077c8168(*(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18),*(undefined8 *)puVar2,0,0);
  return;
}


