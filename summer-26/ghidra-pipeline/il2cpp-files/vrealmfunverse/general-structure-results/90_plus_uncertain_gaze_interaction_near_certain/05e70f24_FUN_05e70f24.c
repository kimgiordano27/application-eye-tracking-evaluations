/*
FUNCTION_NAME: FUN_05e70f24
ENTRY_POINT: 05e70f24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 217
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_14
*/


void FUN_05e70f24(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__;
  if ((DAT_066dc6af & 1) == 0) {
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__)
    ;
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Animation>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AnimationClip>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Animator>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AssetBundle>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioClip>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixer>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixerGroup>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioSource>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Avatar>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AvatarMask>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Behaviour>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<BoxCollider>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Camera>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasGroup>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasRenderer>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CapsuleCollider>__);
    FUN_02b3c81c(
                Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CharacterController>__
                );
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CharacterJoint>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Cloth>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Collider>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Component>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ComputeShader>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_Marshal<RenderTexture>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ConfigurableJoint>__
                );
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Cubemap>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CubemapArray>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Font>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<GameObject>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<HingeJoint>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Joint>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Mesh>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LODGroup>__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Light>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LineRenderer>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Material>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Mesh>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                );
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshCollider>__);
    FUN_02b3c81c(Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshFilter>__);
    DAT_066dc6af = 1;
  }
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar3;
  }
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CharacterController>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasRenderer>__;
  puVar18 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar18[1];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar18 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar24 = *puVar18;
    lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioSource>__
                               );
    FUN_049b7e3c(lVar22,uVar24,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Light>__,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar17 = lVar22;
    thunk_FUN_02bb0e9c(plVar17,lVar22);
  }
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  System_Collections_Generic_List<GameModeConfiguration>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (uVar24,lVar22,0,10000,*(undefined8 *)puVar4);
  if (param_1 == 0) goto LAB_05e71af0;
  *(undefined8 *)(param_1 + 0x20) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar24);
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar3;
  }
  puVar11 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Collider>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixer>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioClip>__;
  puVar3 = Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__;
  puVar18 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar18[2];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar18 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__ +
                 0xb8);
    }
    uVar24 = *puVar18;
    lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AvatarMask>__
                               );
    FUN_049b7e3c(lVar22,uVar24,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LineRenderer>__,0);
    plVar17 = (long *)(*(long *)(*(long *)
                                  Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__
                                + 0xb8) + 0x10);
    *plVar17 = lVar22;
    thunk_FUN_02bb0e9c(plVar17,lVar22);
  }
  puVar10 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CapsuleCollider>__;
  puVar9 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AssetBundle>__;
  puVar8 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Animator>__;
  puVar7 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AnimationClip>__;
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Animation>__;
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CharacterJoint>__
                             );
  System_Collections_Generic_List<GameModeConfiguration>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (uVar24,lVar22,0,10000,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x28) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_03eac6d0(uVar24,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x30) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_03eac840(uVar24,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x38) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x38),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_0452d044(uVar24,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar11);
  FUN_0394b3a4(uVar24,0x400,
               *(undefined8 *)
                Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Cloth>__);
  *(undefined8 *)(param_1 + 0x48) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x48),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Camera>__
                             );
  FUN_04a70f88(uVar24,*(undefined8 *)
                       Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<BoxCollider>__
              );
  *(undefined8 *)(param_1 + 0x50) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Component>__
                             );
  FUN_05e60580(uVar24,0);
  *(undefined8 *)(param_1 + 0x58) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),uVar24);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__;
  if (DAT_066dbc9a == '\0') {
    FUN_02b3c81c(Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__);
    DAT_066dbc9a = '\x01';
  }
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar3;
  }
  *(undefined8 *)(param_1 + 0xd0) = **(undefined8 **)(lVar16 + 0xb8);
  thunk_FUN_02bb0e9c();
  lVar16 = *(long *)puVar4;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar4;
  }
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CubemapArray>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Cubemap>__;
  puVar18 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar18[3];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar18 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar24 = *puVar18;
    lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Behaviour>__
                               );
    FUN_049b7e3c(lVar22,uVar24,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Material>__,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar17 = lVar22;
    thunk_FUN_02bb0e9c(plVar17,lVar22);
  }
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_03bd94cc(uVar24,lVar22,0,0,0,0,0x100,0x400,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xe0) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xe0),uVar24);
  lVar16 = *(long *)puVar4;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar4;
  }
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Joint>__;
  puVar11 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Font>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ConfigurableJoint>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<RenderTexture>__;
  puVar18 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar18[4];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar18 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar24 = *puVar18;
    lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Avatar>__
                               );
    FUN_049b7e3c(lVar22,uVar24,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Mesh>__,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *plVar17 = lVar22;
    thunk_FUN_02bb0e9c(plVar17,lVar22);
  }
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixerGroup>__;
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar11);
  FUN_03bd94cc(uVar24,lVar22,0,0,0,0,8,0x80,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0xe8) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xe8),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_05e70b24();
  *(undefined8 *)(param_1 + 0x128) = uVar24;
  thunk_FUN_02bb0e9c(param_1 + 0x128,uVar24);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar6;
  }
  uVar23 = **(undefined8 **)(lVar16 + 0xb8);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05e5d3f0(uVar24,uVar23,0);
  *(undefined8 *)(param_1 + 0x130) = uVar24;
  thunk_FUN_02bb0e9c(param_1 + 0x130,uVar24);
  FUN_04dbdb8c(param_1,0);
  *(long **)(param_1 + 0x100) = param_2;
  thunk_FUN_02bb0e9c(param_1 + 0x100,param_2);
  puVar9 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshFilter>__;
  puVar8 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshCollider>__;
  puVar7 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LODGroup>__;
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<HingeJoint>__;
  puVar11 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<GameObject>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ComputeShader>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasGroup>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Mesh>__;
  if (param_2 == (long *)0x0) goto LAB_05e71af0;
  uVar24 = (**(code **)(*param_2 + 0x498))(param_2,*(undefined8 *)(*param_2 + 0x4a0));
  *(undefined8 *)(param_1 + 0x110) = uVar24;
  thunk_FUN_02bb0e9c(param_1 + 0x110,uVar24);
  uVar23 = *(undefined8 *)(param_1 + 0x110);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_05e71afc(uVar24,uVar23);
  *(undefined8 *)(param_1 + 0x118) = uVar24;
  thunk_FUN_02bb0e9c(param_1 + 0x118,uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_05e6ea18(uVar24,param_1);
  *(undefined8 *)(param_1 + 0x10) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x10),uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_05e71cf0();
  *(undefined8 *)(param_1 + 0x120) = uVar24;
  thunk_FUN_02bb0e9c(param_1 + 0x120,uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05e5fb1c(uVar24,0);
  *(undefined8 *)(param_1 + 0x140) = uVar24;
  thunk_FUN_02bb0e9c(param_1 + 0x140,uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar11);
  FUN_05e66bd0(uVar24,0);
  *(undefined8 *)(param_1 + 0xd8) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0xd8),uVar24);
  uVar23 = *(undefined8 *)(param_1 + 0x130);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_05f4e924(uVar24,uVar23,0);
  *(undefined8 *)(param_1 + 0x138) = uVar24;
  thunk_FUN_02bb0e9c(param_1 + 0x138,uVar24);
  uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_05e71ecc(uVar24,param_1);
  *(undefined8 *)(param_1 + 0x18) = uVar24;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x18),uVar24);
  iVar13 = FUN_05c52798(0);
  iVar14 = (**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(*param_2 + 0x450));
  if (iVar14 == 0) {
    bVar12 = *(byte *)(*(long *)
                        Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__
                      + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar12) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar12 * 8 + -8) !=
        *(long *)Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(param_2);
    }
    bVar12 = FUN_05f3ecdc(param_2,0);
    lVar16 = *(long *)puVar3;
    *(byte *)(param_1 + 0x151) = bVar12 & 1;
    plVar17 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if ((bVar12 & 1) != 0) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar24 = FUN_05e72078();
      goto FUN_05e71934;
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar24 = FUN_05e720d4();
    *(undefined8 *)(param_1 + 0x60) = uVar24;
    thunk_FUN_02bb0e9c();
    if (iVar13 == 1) {
      plVar21 = (long *)param_2[0xf];
      if (plVar21 == (long *)0x0) goto LAB_05e71af0;
      lVar16 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *plVar17) {
            puVar18 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05e71ad8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar18 = (undefined8 *)FUN_02b7654c(plVar21,*plVar17,0);
LAB_05e71ad8:
      bVar12 = (*(code *)*puVar18)(plVar21,puVar18[1]);
      *(byte *)(param_1 + 0x153) = bVar12 & 1;
    }
  }
  else {
    if (iVar13 == 1) {
      *(undefined1 *)(param_1 + 0x153) = 1;
    }
    plVar17 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar24 = FUN_05e72130();
FUN_05e71934:
    *(undefined8 *)(param_1 + 0x60) = uVar24;
    thunk_FUN_02bb0e9c();
  }
  plVar21 = (long *)param_2[0xf];
  *(char *)(param_1 + 0x152) = (char)param_2[0x18];
  puVar4 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (plVar21 != (long *)0x0) {
    lVar16 = *plVar21;
    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *plVar17) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_05e719ac;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar18 = (undefined8 *)FUN_02b7654c(plVar21,*plVar17,2);
LAB_05e719ac:
    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    uVar15 = (*(code *)*puVar18)(plVar21,puVar18[1]);
    uVar1 = *(undefined1 *)(param_1 + 0x152);
    uVar2 = *(undefined1 *)(param_1 + 0x153);
    uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_05e7218c(uVar24,uVar15,0,uVar1,uVar2);
    *(undefined8 *)(param_1 + 0x108) = uVar24;
    thunk_FUN_02bb0e9c(param_1 + 0x108,uVar24);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e72af8();
    if (*(char *)(param_1 + 0x153) != '\0') {
      iVar13 = 0;
    }
    uVar24 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_05e72b58(uVar24,iVar13);
    *(undefined8 *)(param_1 + 0x148) = uVar24;
    thunk_FUN_02bb0e9c(param_1 + 0x148,uVar24);
    return;
  }
LAB_05e71af0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


