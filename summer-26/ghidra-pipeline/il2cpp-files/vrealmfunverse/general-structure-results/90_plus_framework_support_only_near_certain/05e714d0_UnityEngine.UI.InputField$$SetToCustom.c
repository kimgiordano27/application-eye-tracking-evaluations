/*
FUNCTION_NAME: UnityEngine.UI.InputField$$SetToCustom
ENTRY_POINT: 05e714d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_UI_InputField__SetToCustom(long param_1)

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
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long *unaff_x20;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *unaff_x25;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    param_1 = *unaff_x25;
  }
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CubemapArray>__;
  puVar16 = *(undefined8 **)(param_1 + 0xb8);
  lVar20 = puVar16[3];
  if (lVar20 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar16 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar23 = *puVar16;
    lVar20 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Behaviour>__
                               );
    FUN_049b7e3c(lVar20,uVar23,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Material>__,0);
    plVar15 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
    *plVar15 = lVar20;
    thunk_FUN_02bb0e9c(plVar15,lVar20);
  }
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_03bd94cc(uVar23,lVar20,0,0,0,0,0x100,0x400);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe0),uVar23);
  lVar20 = *unaff_x25;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *unaff_x25;
  }
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Joint>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Font>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<RenderTexture>__;
  puVar16 = *(undefined8 **)(lVar20 + 0xb8);
  lVar21 = puVar16[4];
  if (lVar21 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar16 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar23 = *puVar16;
    lVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Avatar>__
                               );
    FUN_049b7e3c(lVar21,uVar23,
                 *(undefined8 *)
                  Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Mesh>__,0);
    plVar15 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x20);
    *plVar15 = lVar21;
    thunk_FUN_02bb0e9c(plVar15,lVar21);
  }
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<AudioMixerGroup>__;
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03bd94cc(uVar23,lVar21,0,0,0,0,8,0x80);
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xe8),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_05e70b24();
  *(undefined8 *)(unaff_x19 + 0x128) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x128,uVar23);
  lVar20 = *(long *)puVar4;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar20 = *(long *)puVar4;
  }
  uVar22 = **(undefined8 **)(lVar20 + 0xb8);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_05e5d3f0(uVar23,uVar22,0);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x130,uVar23);
  FUN_04dbdb8c();
  *(long **)(unaff_x19 + 0x100) = unaff_x20;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x100);
  puVar10 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshFilter>__;
  puVar9 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<MeshCollider>__;
  puVar8 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<LODGroup>__;
  puVar7 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<HingeJoint>__;
  puVar6 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<GameObject>__;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<ComputeShader>__;
  puVar3 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<CanvasGroup>__;
  puVar5 = Method_UnityEngine_Object_MarshalledUnityObject_Marshal<Mesh>__;
  if (unaff_x20 == (long *)0x0) goto LAB_05e71af0;
  uVar23 = (**(code **)(*unaff_x20 + 0x498))();
  *(undefined8 *)(unaff_x19 + 0x110) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x110,uVar23);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
  FUN_05e71afc(uVar23,uVar22);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x118,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_05e6ea18();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
  FUN_05e71cf0();
  *(undefined8 *)(unaff_x19 + 0x120) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x120,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_05e5fb1c(uVar23,0);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x140,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_05e66bd0(uVar23,0);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xd8),uVar23);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05f4e924(uVar23,uVar22,0);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar23;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x138,uVar23);
  uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar10);
  FUN_05e71ecc();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar23;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),uVar23);
  iVar12 = FUN_05c52798(0);
  iVar13 = (**(code **)(*unaff_x20 + 0x448))();
  if (iVar13 == 0) {
    bVar11 = *(byte *)(*(long *)
                        Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__
                      + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar11) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar11 * 8 + -8) !=
        *(long *)Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
    bVar11 = FUN_05f3ecdc();
    lVar20 = *(long *)puVar5;
    *(byte *)(unaff_x19 + 0x151) = bVar11 & 1;
    plVar15 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if ((bVar11 & 1) != 0) {
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
    if (iVar12 == 1) {
      plVar19 = (long *)unaff_x20[0xf];
      if (plVar19 == (long *)0x0) goto LAB_05e71af0;
      lVar20 = *plVar19;
      uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *plVar15) {
            puVar16 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05e71ad8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar16 = (undefined8 *)FUN_02b7654c(plVar19,*plVar15,0);
LAB_05e71ad8:
      bVar11 = (*(code *)*puVar16)(plVar19,puVar16[1]);
      *(byte *)(unaff_x19 + 0x153) = bVar11 & 1;
    }
  }
  else {
    if (iVar12 == 1) {
      *(undefined1 *)(unaff_x19 + 0x153) = 1;
    }
    plVar15 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar23 = FUN_05e72130();
FUN_05e71934:
    *(undefined8 *)(unaff_x19 + 0x60) = uVar23;
    thunk_FUN_02bb0e9c();
  }
  plVar19 = (long *)unaff_x20[0xf];
  *(char *)(unaff_x19 + 0x152) = (char)unaff_x20[0x18];
  puVar3 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (plVar19 != (long *)0x0) {
    lVar20 = *plVar19;
    uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *plVar15) {
          puVar16 = (undefined8 *)(lVar20 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_05e719ac;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar16 = (undefined8 *)FUN_02b7654c(plVar19,*plVar15,2);
LAB_05e719ac:
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    uVar14 = (*(code *)*puVar16)(plVar19,puVar16[1]);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x152);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x153);
    uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_05e7218c(uVar23,uVar14,0,uVar1,uVar2);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar23;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar23);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e72af8();
    if (*(char *)(unaff_x19 + 0x153) != '\0') {
      iVar12 = 0;
    }
    uVar23 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_05e72b58(uVar23,iVar12);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar23;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar23);
    return;
  }
LAB_05e71af0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


