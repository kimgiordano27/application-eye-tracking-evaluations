/*
FUNCTION_NAME: FUN_06a188ec
ENTRY_POINT: 06a188ec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a188ec(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
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
  
  puVar7 = Method_Unity_Properties_ContainerPropertyBag<Vector3>__ctor__;
  puVar6 = Method_Unity_Properties_ContainerPropertyBag<Vector3>_AddProperty<float>__;
  puVar5 = Method_Unity_Properties_ContainerPropertyBag<Vector2>_AddProperty<float>__;
  puVar4 = Method_Photon_Voice_BufferReaderPushAdapterAsyncPool<float>__ctor__;
  puVar3 = 
  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__;
  puVar2 = UnityEngine_UIElements_StyleValuePropertyBag<StyleScale,_Scale>_TypeInfo;
  puVar1 = PTR_DAT_07112018;
  if ((DAT_0755dc42 & 1) == 0) {
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Vector3>__ctor__);
    FUN_03188a78(UnityEngine_UIElements_StyleValuePropertyBag<StyleScale,_Scale>_TypeInfo);
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Vector2>_AddProperty<float>__);
    FUN_03188a78(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetSourceJointId__
                );
    FUN_03188a78(Method_Unity_Properties_ContainerPropertyBag<Vector3>_AddProperty<float>__);
    FUN_03188a78(PTR_DAT_07112018);
    FUN_03188a78(Method_Photon_Voice_BufferReaderPushAdapterAsyncPool<float>__ctor__);
    DAT_0755dc42 = 1;
  }
  memset(local_130,0,0xd0);
  auVar8 = FUN_03b268cc(*param_2,*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar3);
  auVar9 = FUN_03b268cc(param_2[1],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar3);
  auVar10 = FUN_03b268cc(param_2[2],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar3);
  auVar11 = System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ReceiverSphereCuller_SplitInfo>
                      (param_2[3],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar6);
  auVar12 = FUN_03b26b60(param_2[4],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar4);
  auVar13 = FUN_03b26ac4(param_2[5],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar1);
  auVar14 = FUN_03b268c0(param_2[6],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar5);
  auVar15 = FUN_03b26728(param_2[7],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar7);
  auVar16 = FUN_03b2674c(param_2[8],*(undefined4 *)(param_2 + 9),0,*(undefined8 *)puVar2);
  auVar17 = FUN_03b268cc(param_2[10],*(undefined4 *)(param_2 + 0xb),0,*(undefined8 *)puVar3);
  auVar18 = FUN_03b268c0(param_2[0xc],*(undefined4 *)(param_2 + 0xf),0,*(undefined8 *)puVar5);
  auVar19 = FUN_03b26ac4(param_2[0xd],*(undefined4 *)(param_2 + 0xf),0,*(undefined8 *)puVar1);
  local_70 = FUN_03b26ac4(param_2[0xe],*(undefined4 *)(param_2 + 0xf),0,*(undefined8 *)puVar1);
  local_130 = auVar8;
  local_120 = auVar9;
  local_110 = auVar10;
  local_100 = auVar11;
  local_f0 = auVar12;
  local_e0 = auVar13;
  local_d0 = auVar14;
  local_c0 = auVar15;
  local_b0 = auVar16;
  local_a0 = auVar17;
  local_90 = auVar18;
  local_80 = auVar19;
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x18))
              (*(undefined8 *)(param_3 + 0x40),local_130,*(undefined8 *)(param_3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


