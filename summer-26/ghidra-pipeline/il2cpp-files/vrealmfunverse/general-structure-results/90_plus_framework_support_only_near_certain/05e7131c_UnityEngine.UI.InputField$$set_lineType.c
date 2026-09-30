/*
FUNCTION_NAME: UnityEngine.UI.InputField$$set_lineType
ENTRY_POINT: 05e7131c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 130
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


void UnityEngine_UI_InputField__set_lineType(void)

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
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x23;
  undefined8 *puVar24;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *puVar25;
  long unaff_x29;
  undefined8 *puVar26;
  long *in_stack_00000008;
  
  puVar20 = *(undefined8 **)(unaff_x20 + 0xf70);
  puVar24 = *(undefined8 **)(unaff_x23 + 0xf80);
  puVar25 = *(undefined8 **)(unaff_x28 + 0xf68);
  puVar26 = *(undefined8 **)(unaff_x29 + 0xf78);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CharacterJoint>__
                             );
  System_Collections_Generic_List<GameModeConfiguration>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
            ();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x28),uVar15);
  uVar15 = thunk_FUN_02b79644(*puVar26);
  FUN_03eac6d0(uVar15,*puVar25);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x30),uVar15);
  uVar15 = thunk_FUN_02b79644(*puVar24);
  FUN_03eac840(uVar15,*puVar20);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x38),uVar15);
  uVar15 = thunk_FUN_02b79644(*unaff_x26);
  FUN_0452d044(uVar15,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x40),uVar15);
  uVar15 = thunk_FUN_02b79644(*unaff_x24);
  FUN_0394b3a4(uVar15,0x400,
               *(undefined8 *)
                Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Cloth>__);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x48),uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Camera>__
                             );
  FUN_04a70f88(uVar15,*(undefined8 *)
                       Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<BoxCollider>__
              );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x50),uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Component>__
                             );
  FUN_05e60580(uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x58),uVar15);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<VisualEffectAsset>__;
  if (DAT_066dbc9a == '\0') {
    FUN_02b3c81c(Method_UnityEngine_Rendering_VolumeProfile_TryGet<VolumeComponent>__);
    DAT_066dbc9a = '\x01';
  }
  lVar16 = *unaff_x27;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *unaff_x27;
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = **(undefined8 **)(lVar16 + 0xb8);
  thunk_FUN_02bb0e9c();
  lVar16 = *(long *)puVar5;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar5;
  }
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CubemapArray>__;
  puVar20 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar20[3];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar20 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar15 = *puVar20;
    lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Behaviour>__
                               );
    FUN_049b7e3c(lVar22,uVar15,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Material>__,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
    *plVar17 = lVar22;
    thunk_FUN_02bb0e9c(plVar17,lVar22);
  }
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03bd94cc(uVar15,lVar22,0,0,0,0,0x100,0x400);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0),uVar15);
  lVar16 = *(long *)puVar5;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar5;
  }
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Joint>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Font>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<RenderTexture>__;
  puVar20 = *(undefined8 **)(lVar16 + 0xb8);
  lVar22 = puVar20[4];
  if (lVar22 == 0) {
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar20 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar15 = *puVar20;
    lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Avatar>__
                               );
    FUN_049b7e3c(lVar22,uVar15,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Mesh>__,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
    *plVar17 = lVar22;
    thunk_FUN_02bb0e9c(plVar17,lVar22);
  }
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixerGroup>__;
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_03bd94cc(uVar15,lVar22,0,0,0,0,8,0x80);
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe8),uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_05e70b24();
  *(undefined8 *)(unaff_x19 + 0x128) = uVar15;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x128,uVar15);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar16 = *(long *)puVar6;
  }
  uVar23 = **(undefined8 **)(lVar16 + 0xb8);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_05e5d3f0(uVar15,uVar23,0);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar15;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x130,uVar15);
  FUN_04dbdb8c();
  *(long **)(unaff_x19 + 0x100) = in_stack_00000008;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x100,in_stack_00000008);
  puVar10 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshFilter>__;
  puVar9 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshCollider>__;
  puVar8 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LODGroup>__;
  puVar7 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<HingeJoint>__;
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<GameObject>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ComputeShader>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasGroup>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Mesh>__;
  if (in_stack_00000008 == (long *)0x0) goto LAB_05e71af0;
  uVar15 = (**(code **)(*in_stack_00000008 + 0x498))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x4a0));
  *(undefined8 *)(unaff_x19 + 0x110) = uVar15;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x110,uVar15);
  uVar23 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_05e71afc(uVar15,uVar23);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar15;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_05e6ea18();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_05e71cf0();
  *(undefined8 *)(unaff_x19 + 0x120) = uVar15;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x120,uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_05e5fb1c(uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar15;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x140,uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_05e66bd0(uVar15,0);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd8),uVar15);
  uVar23 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05f4e924(uVar15,uVar23,0);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar15;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x138,uVar15);
  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar10);
  FUN_05e71ecc();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),uVar15);
  iVar12 = FUN_05c52798(0);
  iVar13 = (**(code **)(*in_stack_00000008 + 0x448))
                     (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x450));
  if (iVar13 == 0) {
    bVar11 = *(byte *)(*(long *)
                        Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__
                      + 0x130);
    if ((*(byte *)(*in_stack_00000008 + 0x130) < bVar11) ||
       (*(long *)(*(long *)(*in_stack_00000008 + 200) + (ulong)bVar11 * 8 + -8) !=
        *(long *)Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(in_stack_00000008);
    }
    bVar11 = FUN_05f3ecdc(in_stack_00000008,0);
    lVar16 = *(long *)puVar5;
    *(byte *)(unaff_x19 + 0x151) = bVar11 & 1;
    plVar17 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if ((bVar11 & 1) != 0) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05e72078();
      goto FUN_05e71934;
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar15 = FUN_05e720d4();
    *(undefined8 *)(unaff_x19 + 0x60) = uVar15;
    thunk_FUN_02bb0e9c();
    if (iVar12 == 1) {
      plVar21 = (long *)in_stack_00000008[0xf];
      if (plVar21 == (long *)0x0) goto LAB_05e71af0;
      lVar16 = *plVar21;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *plVar17) {
            puVar20 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_05e71ad8;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar20 = (undefined8 *)FUN_02b7654c(plVar21,*plVar17,0);
LAB_05e71ad8:
      bVar11 = (*(code *)*puVar20)(plVar21,puVar20[1]);
      *(byte *)(unaff_x19 + 0x153) = bVar11 & 1;
    }
  }
  else {
    if (iVar12 == 1) {
      *(undefined1 *)(unaff_x19 + 0x153) = 1;
    }
    plVar17 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar15 = FUN_05e72130();
FUN_05e71934:
    *(undefined8 *)(unaff_x19 + 0x60) = uVar15;
    thunk_FUN_02bb0e9c();
  }
  plVar21 = (long *)in_stack_00000008[0xf];
  *(char *)(unaff_x19 + 0x152) = (char)in_stack_00000008[0x18];
  puVar3 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (plVar21 != (long *)0x0) {
    lVar16 = *plVar21;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *plVar17) {
          puVar20 = (undefined8 *)(lVar16 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_05e719ac;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar20 = (undefined8 *)FUN_02b7654c(plVar21,*plVar17,2);
LAB_05e719ac:
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    uVar14 = (*(code *)*puVar20)(plVar21,puVar20[1]);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x152);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x153);
    uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_05e7218c(uVar15,uVar14,0,uVar1,uVar2);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar15;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar15);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e72af8();
    if (*(char *)(unaff_x19 + 0x153) != '\0') {
      iVar12 = 0;
    }
    uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_05e72b58(uVar15,iVar12);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar15;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar15);
    return;
  }
LAB_05e71af0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


