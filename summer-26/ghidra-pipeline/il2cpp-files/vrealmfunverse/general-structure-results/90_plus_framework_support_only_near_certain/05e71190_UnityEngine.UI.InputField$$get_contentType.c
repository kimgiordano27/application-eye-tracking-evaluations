/*
FUNCTION_NAME: UnityEngine.UI.InputField$$get_contentType
ENTRY_POINT: 05e71190
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 151
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_7
*/


void UnityEngine_UI_InputField__get_contentType(undefined8 *param_1,long param_2)

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
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long *unaff_x20;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x24;
  undefined8 *puVar24;
  long *unaff_x25;
  
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasRenderer>__;
  puVar24 = *(undefined8 **)(unaff_x24 + 0xff0);
  lVar20 = param_1[1];
  if (lVar20 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      param_1 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar23 = *param_1;
    lVar20 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioSource>__
                               );
    FUN_049b7e3c(lVar20,uVar23,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Light>__,0);
    plVar16 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
    *plVar16 = lVar20;
    thunk_FUN_02bb0e9c(plVar16,lVar20);
  }
  uVar23 = thunk_FUN_02b79644(*puVar24);
  System_Collections_Generic_List<GameModeConfiguration>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (uVar23,lVar20,0,10000,*(undefined8 *)puVar3);
  if (unaff_x19 == 0) goto LAB_05e71af0;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x20),uVar23);
  lVar20 = *unaff_x25;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *unaff_x25;
  }
  puVar11 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Collider>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixer>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioClip>__;
  puVar3 = Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__;
  puVar24 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar24[2];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar24 = *(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__ +
                 0xb8);
    }
    uVar23 = *puVar24;
    lVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AvatarMask>__
                               );
    FUN_049b7e3c(lVar21,uVar23,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LineRenderer>__,0);
    plVar16 = (long *)(*(long *)(*(long *)
                                  Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__
                                + 0xb8) + 0x10);
    *plVar16 = lVar21;
    thunk_FUN_02bb0e9c(plVar16,lVar21);
  }
  puVar10 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CapsuleCollider>__;
  puVar9 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AssetBundle>__;
  puVar8 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Animator>__;
  puVar7 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AnimationClip>__;
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Animation>__;
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CharacterJoint>__
                             );
  System_Collections_Generic_List<GameModeConfiguration>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            (uVar23,lVar21,0,10000,*(undefined8 *)puVar10);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_03eac6d0(uVar23,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_03eac840(uVar23,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x38),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_0452d044(uVar23,*(undefined8 *)puVar4);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar11);
  FUN_0394b3a4(uVar23,0x400,
               *(undefined8 *)
                Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Cloth>__);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x48),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Camera>__
                             );
  FUN_04a70f88(uVar23,*(undefined8 *)
                       Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<BoxCollider>__
              );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Component>__
                             );
  FUN_05e60580(uVar23,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x58),uVar23);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__;
  if (DAT_066dbc9a == '\0') {
    FUN_02b3c81c(Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__);
    DAT_066dbc9a = '\x01';
  }
  lVar20 = *(long *)puVar3;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *(long *)puVar3;
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = **(undefined8 **)(lVar20 + 0xb8);
  thunk_FUN_02bb0e9c();
  lVar20 = *(long *)puVar4;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *(long *)puVar4;
  }
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CubemapArray>__;
  puVar24 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar24[3];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar24 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar23 = *puVar24;
    lVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Behaviour>__
                               );
    FUN_049b7e3c(lVar21,uVar23,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Material>__,0);
    plVar16 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
    *plVar16 = lVar21;
    thunk_FUN_02bb0e9c(plVar16,lVar21);
  }
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03bd94cc(uVar23,lVar21,0,0,0,0,0x100,0x400);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0),uVar23);
  lVar20 = *(long *)puVar4;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *(long *)puVar4;
  }
  puVar11 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Joint>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Font>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<RenderTexture>__;
  puVar24 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar24[4];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar24 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    uVar23 = *puVar24;
    lVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Avatar>__
                               );
    FUN_049b7e3c(lVar21,uVar23,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Mesh>__,0);
    plVar16 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
    *plVar16 = lVar21;
    thunk_FUN_02bb0e9c(plVar16,lVar21);
  }
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixerGroup>__;
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_03bd94cc(uVar23,lVar21,0,0,0,0,8,0x80);
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe8),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_05e70b24();
  *(undefined8 *)(unaff_x19 + 0x128) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x128,uVar23);
  lVar20 = *(long *)puVar11;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *(long *)puVar11;
  }
  uVar22 = **(undefined8 **)(lVar20 + 0xb8);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05e5d3f0(uVar23,uVar22,0);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x130,uVar23);
  FUN_04dbdb8c();
  *(long **)(unaff_x19 + 0x100) = unaff_x20;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x100,unaff_x20);
  puVar9 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshFilter>__;
  puVar8 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshCollider>__;
  puVar7 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LODGroup>__;
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<HingeJoint>__;
  puVar11 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<GameObject>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ComputeShader>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasGroup>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Mesh>__;
  if (unaff_x20 == (long *)0x0) goto LAB_05e71af0;
  uVar23 = (**(code **)(*unaff_x20 + 0x498))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x4a0));
  *(undefined8 *)(unaff_x19 + 0x110) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x110,uVar23);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_05e71afc(uVar23,uVar22);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_05e6ea18();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_05e71cf0();
  *(undefined8 *)(unaff_x19 + 0x120) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x120,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05e5fb1c(uVar23,0);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x140,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar11);
  FUN_05e66bd0(uVar23,0);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd8),uVar23);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_05f4e924(uVar23,uVar22,0);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x138,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_05e71ecc();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),uVar23);
  iVar13 = FUN_05c52798(0);
  iVar14 = (**(code **)(*unaff_x20 + 0x448))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x450));
  if (iVar14 == 0) {
    bVar12 = *(byte *)(*(long *)
                        Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__
                      + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar12) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar12 * 8 + -8) !=
        *(long *)Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(unaff_x20);
    }
    bVar12 = FUN_05f3ecdc(unaff_x20,0);
    lVar20 = *(long *)puVar3;
    *(byte *)(unaff_x19 + 0x151) = bVar12 & 1;
    plVar16 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if ((bVar12 & 1) != 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar23 = FUN_05e72078();
      goto FUN_05e71934;
    }
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar23 = FUN_05e720d4();
    *(undefined8 *)(unaff_x19 + 0x60) = uVar23;
    thunk_FUN_02bb0e9c();
    if (iVar13 == 1) {
      plVar19 = (long *)unaff_x20[0xf];
      if (plVar19 == (long *)0x0) goto LAB_05e71af0;
      lVar20 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar16) {
            puVar24 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05e71ad8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar24 = (undefined8 *)FUN_02b7654c(plVar19,*plVar16,0);
LAB_05e71ad8:
      bVar12 = (*(code *)*puVar24)(plVar19,puVar24[1]);
      *(byte *)(unaff_x19 + 0x153) = bVar12 & 1;
    }
  }
  else {
    if (iVar13 == 1) {
      *(undefined1 *)(unaff_x19 + 0x153) = 1;
    }
    plVar16 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar23 = FUN_05e72130();
FUN_05e71934:
    *(undefined8 *)(unaff_x19 + 0x60) = uVar23;
    thunk_FUN_02bb0e9c();
  }
  plVar19 = (long *)unaff_x20[0xf];
  *(char *)(unaff_x19 + 0x152) = (char)unaff_x20[0x18];
  puVar4 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (plVar19 != (long *)0x0) {
    lVar20 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *plVar16) {
          puVar24 = (undefined8 *)(lVar20 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_05e719ac;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar24 = (undefined8 *)FUN_02b7654c(plVar19,*plVar16,2);
LAB_05e719ac:
    puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    uVar15 = (*(code *)*puVar24)(plVar19,puVar24[1]);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x152);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x153);
    uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_05e7218c(uVar23,uVar15,0,uVar1,uVar2);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar23;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar23);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e72af8();
    if (*(char *)(unaff_x19 + 0x153) != '\0') {
      iVar13 = 0;
    }
    uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_05e72b58(uVar23,iVar13);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar23;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar23);
    return;
  }
LAB_05e71af0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


