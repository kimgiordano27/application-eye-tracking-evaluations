/*
FUNCTION_NAME: SetPowersOnTeleportPadUsed$$OnEnter
ENTRY_POINT: 00ed3da8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 153
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetPowersOnTeleportPadUsed__OnEnter(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_x9;
  undefined8 *puVar3;
  long in_x10;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar5;
  long unaff_x23;
  undefined8 *puVar6;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  puVar6 = *(undefined8 **)(unaff_x23 + 0xa00);
  puVar5 = *(undefined8 **)(unaff_x22 + 0xed0);
  puVar4 = *(undefined8 **)(in_x10 + 0xc18);
  puVar3 = *(undefined8 **)(in_x9 + 0x210);
  if ((param_1 & 1) == 0) {
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
    puVar3 = (undefined8 *)StringLiteral_151;
    puVar4 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_high_s32__;
    *(undefined1 *)(unaff_x21 + 0x297) = 1;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x40000000;
  uVar1 = _UNK_028aa4b8;
  uVar2 = _DAT_028aa4b0;
  *(undefined1 *)(param_2 + 0x45) = 1;
  *(undefined4 *)(param_2 + 0x48) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x2c) = uVar1;
  *(undefined8 *)(param_2 + 0x24) = uVar2;
  *(undefined8 *)(param_2 + 0x50) = *unaff_x20;
  *(undefined8 *)(param_2 + 0x60) = *unaff_x29;
  *(undefined8 *)(param_2 + 0x68) = *unaff_x28;
  *(undefined8 *)(param_2 + 0x70) = *unaff_x27;
  *(undefined8 *)(param_2 + 0x78) = *unaff_x26;
  *(undefined8 *)(param_2 + 0x90) = *unaff_x25;
  *(undefined8 *)(param_2 + 0x98) = *unaff_x24;
  *(undefined8 *)(param_2 + 0xa0) = *puVar6;
  *(undefined8 *)(param_2 + 0xa8) = *puVar5;
  *(undefined8 *)(param_2 + 0xb0) = *puVar4;
  uVar2 = *puVar3;
  *(undefined4 *)(param_2 + 0xc0) = 5000;
  *(undefined4 *)(param_2 + 0xec) = 8;
  *(undefined8 *)(param_2 + 0xb8) = uVar2;
  thunk_FUN_0268a01c(param_2,0);
  return;
}


