/*
FUNCTION_NAME: FUN_06a18334
ENTRY_POINT: 06a18334
PROGRAM: waitwhat-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_gaze_retrieval_or_extraction
*/


void FUN_06a18334(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  puVar1 = 
  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__;
  if ((DAT_0755dc41 & 1) == 0) {
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<TransformOrigin>__ctor__);
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Translate>_AddProperty<Length>__);
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Translate>_AddProperty<float>__);
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Translate>__ctor__);
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Vector2>_AddProperty<float>__);
    FUN_03188a78(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                );
    FUN_03188a78(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
                );
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Vector2>__ctor__);
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Vector2Int>_AddProperty<int>__);
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Vector2Int>__ctor__);
    DAT_0755dc41 = 1;
  }
  puVar7 = Method_Unity_Properties_ContainerPropertyBag<Vector2Int>__ctor__;
  puVar6 = Method_Unity_Properties_ContainerPropertyBag<Vector2Int>_AddProperty<int>__;
  puVar2 = Method_Unity_Properties_ContainerPropertyBag<TransformOrigin>__ctor__;
  memset(local_220,0,0x1c0);
  auVar9 = FUN_03b268cc(*param_2,*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar1);
  puVar5 = Method_Unity_Properties_ContainerPropertyBag<Vector2>_AddProperty<float>__;
  puVar3 = Method_Unity_Properties_ContainerPropertyBag<Translate>__ctor__;
  puVar4 = Method_Unity_Properties_ContainerPropertyBag<Translate>_AddProperty<float>__;
  if (param_2[1] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x10);
  }
  auVar10 = FUN_03b26740(param_2[1],uVar8,0,*(undefined8 *)puVar2);
  auVar11 = FUN_03b26b6c(param_2[2],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar7);
  auVar12 = FUN_03b268cc(param_2[3],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar1);
  auVar13 = FUN_03b26b24(param_2[4],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar6);
  puVar2 = Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__;
  if (param_2[5] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x10);
  }
  auVar14 = FUN_03b268cc(param_2[5],uVar8,0,*(undefined8 *)puVar1);
  auVar15 = FUN_03b268cc(param_2[6],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar1);
  auVar16 = FUN_03b2680c(param_2[7],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar4);
  auVar17 = FUN_03b268cc(param_2[8],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar1);
  auVar18 = FUN_03b268cc(param_2[9],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar1);
  auVar19 = FUN_03b268c0(param_2[10],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar5);
  auVar20 = FUN_03b268cc(param_2[0xb],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar1);
  auVar21 = FUN_03b268c0(param_2[0xc],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar5);
  auVar22 = FUN_03b268cc(0,0,0,*(undefined8 *)puVar1);
  auVar23 = FUN_03b268cc(0,0,0,*(undefined8 *)puVar1);
  auVar24 = FUN_03b26818(param_2[0xf],*(undefined4 *)(param_2 + 0x10),0,*(undefined8 *)puVar3);
  auVar25 = FUN_03b268cc(param_2[0x11],*(undefined4 *)(param_2 + 0x12),0,*(undefined8 *)puVar1);
  puVar4 = Method_Unity_Properties_ContainerPropertyBag<Vector2>__ctor__;
  if (param_2[0x13] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x10);
  }
  auVar26 = FUN_03b26950(param_2[0x13],uVar8,0,*(undefined8 *)puVar2);
  puVar3 = Method_Unity_Properties_ContainerPropertyBag<Translate>_AddProperty<Length>__;
  if (param_2[0x14] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x10);
  }
  auVar27 = FUN_03b26950(param_2[0x14],uVar8,0,*(undefined8 *)puVar2);
  auVar28 = FUN_03b268cc(0,0,0,*(undefined8 *)puVar1);
  auVar29 = FUN_03b268cc(param_2[0x17],*(undefined4 *)(param_2 + 0x1a),0,*(undefined8 *)puVar1);
  auVar30 = FUN_03b268c0(param_2[0x18],*(undefined4 *)(param_2 + 0x1a),0,*(undefined8 *)puVar5);
  auVar31 = FUN_03b268cc(param_2[0x19],*(undefined4 *)(param_2 + 0x1a),0,*(undefined8 *)puVar1);
  auVar32 = FUN_03b26af4(param_2[0x1b],*(undefined4 *)(param_2 + 0x1c),0,*(undefined8 *)puVar4);
  auVar33 = FUN_03b268cc(param_2[0x1d],*(undefined4 *)(param_2 + 0x1e),0,*(undefined8 *)puVar1);
  auVar34 = FUN_03b268cc(param_2[0x1f],*(undefined4 *)(param_2 + 0x22),0,*(undefined8 *)puVar1);
  if (param_2[0x20] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x22);
  }
  local_80 = FUN_03b26800(param_2[0x20],uVar8,0,*(undefined8 *)puVar3);
  if (param_2[0x20] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x22);
  }
  local_70 = FUN_03b268cc(param_2[0x21],uVar8,0,*(undefined8 *)puVar1);
  local_220 = auVar9;
  local_210 = auVar10;
  local_200 = auVar11;
  local_1f0 = auVar12;
  local_1e0 = auVar13;
  local_1d0 = auVar14;
  local_1c0 = auVar15;
  local_1b0 = auVar16;
  local_1a0 = auVar17;
  local_190 = auVar18;
  local_180 = auVar19;
  local_170 = auVar20;
  local_160 = auVar21;
  local_150 = auVar22;
  local_140 = auVar23;
  local_130 = auVar24;
  local_120 = auVar25;
  local_110 = auVar26;
  local_100 = auVar27;
  local_f0 = auVar28;
  local_e0 = auVar29;
  local_d0 = auVar30;
  local_c0 = auVar31;
  local_b0 = auVar32;
  local_a0 = auVar33;
  local_90 = auVar34;
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x18))
              (*(undefined8 *)(param_5 + 0x40),local_220,param_3,param_4,
               *(undefined8 *)(param_5 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


