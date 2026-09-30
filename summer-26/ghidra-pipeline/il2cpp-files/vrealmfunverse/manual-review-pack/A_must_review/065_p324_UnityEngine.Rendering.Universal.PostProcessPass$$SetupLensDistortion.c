/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$SetupLensDistortion
ENTRY_POINT: 05842104
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 196
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Universal_PostProcessPass__SetupLensDistortion(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  
  FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
  *(undefined1 *)(unaff_x21 + 0xdc2) = 1;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x24) != *(int *)(unaff_x20 + 0x10)) {
      FUN_05839f94();
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0x40);
    lVar3 = *(long *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
    iVar1 = *(int *)(lVar3 + 0xe4);
    **(undefined4 **)(*(long *)Method_System_Memory<byte>_op_Implicit__ + 0xb8) =
         *(undefined4 *)(unaff_x19 + 0x20);
    if (iVar1 == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0xb8);
    lVar7 = puVar5[2];
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar8 = *puVar5;
      lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<AABB>_GetSubArray__);
      FUN_03bfe598(lVar7,uVar8,
                   *(undefined8 *)Method_Unity_Collections_NativeArray<BatchMeshID>__ctor__,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar4 = lVar7;
      thunk_FUN_02bb0e9c(plVar4,lVar7);
    }
    if (((lVar6 != 0) &&
        (lVar3 = FUN_037a6b94(lVar6,lVar7,
                              *(undefined8 *)
                               Method_Unity_Collections_NativeArray<BatchMaterialID>_Dispose__),
        lVar3 != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
      FUN_03f09b18();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


