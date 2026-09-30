/*
FUNCTION_NAME: FUN_058420a8
ENTRY_POINT: 058420a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 201
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void FUN_058420a8(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_066d2dc2 & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<BatchMaterialID>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<AABB>_GetSubArray__);
    FUN_02b3c81c(Method_System_Memory<byte>_op_Implicit__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<BatchMaterialID>_op_Implicit__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<BatchMeshID>__ctor__);
    FUN_02b3c81c(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__);
    DAT_066d2dc2 = 1;
  }
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x24) != *(int *)(param_1 + 0x10)) {
      FUN_05839f94(param_2,0);
      return;
    }
    lVar6 = *(long *)(param_1 + 0x40);
    lVar3 = *(long *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__;
    iVar1 = *(int *)(lVar3 + 0xe4);
    **(undefined4 **)(*(long *)Method_System_Memory<byte>_op_Implicit__ + 0xb8) =
         *(undefined4 *)(param_2 + 0x20);
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
      FUN_03f09b18(*(long *)(lVar3 + 0x18),param_2,
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<BatchMaterialID>_op_Implicit__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


