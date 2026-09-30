/*
FUNCTION_NAME: FUN_00ed3d40
ENTRY_POINT: 00ed3d40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 205
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed3d40(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  puVar12 = StringLiteral_1887;
  puVar10 = Method_OVRPlugin_<>c_<_cctor>b__796_112__;
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcles_f32__;
  puVar7 = Method_UnityEngine_UIElements_TreeView_OnSelectionChange__;
  puVar6 = Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_EnsureArraySize<Vector4>__;
  puVar5 = Method_UnityEngine_GameObject_GetComponent<Canvas>__;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<MetaXRAudioRoomAcousticProperties>__;
  puVar3 = Method_UnityEngine_Component_GetComponent<Collider2D>__;
  puVar2 = System_Xml_Schema_Datatype_char_TypeInfo;
  if ((DAT_03775297 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_high_s32__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcles_f32__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<Collider2D>__);
    thunk_FUN_00d48444(StringLiteral_151);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TreeView_OnSelectionChange__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_112__);
    thunk_FUN_00d48444(StringLiteral_1887);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_char_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponent<Canvas>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_GameObject_AddComponent<MetaXRAudioRoomAcousticProperties>__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_EnsureArraySize<Vector4>__
                      );
    DAT_03775297 = 1;
  }
  puVar11 = StringLiteral_151;
  puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_high_s32__;
  *(undefined4 *)(param_1 + 0x18) = 0x40000000;
  uVar1 = _UNK_028aa4b8;
  uVar13 = _DAT_028aa4b0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = uVar13;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)puVar12;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)puVar10;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)puVar9;
  uVar13 = *(undefined8 *)puVar11;
  *(undefined4 *)(param_1 + 0xc0) = 5000;
  *(undefined4 *)(param_1 + 0xec) = 8;
  *(undefined8 *)(param_1 + 0xb8) = uVar13;
  thunk_FUN_0268a01c(param_1,0);
  return;
}


