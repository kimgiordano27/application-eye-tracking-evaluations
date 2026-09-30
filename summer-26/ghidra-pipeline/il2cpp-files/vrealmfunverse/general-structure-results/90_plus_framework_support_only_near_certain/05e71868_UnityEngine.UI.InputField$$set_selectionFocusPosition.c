/*
FUNCTION_NAME: UnityEngine.UI.InputField$$set_selectionFocusPosition
ENTRY_POINT: 05e71868
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void UnityEngine_UI_InputField__set_selectionFocusPosition(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long *plVar14;
  long *unaff_x25;
  long *plVar15;
  
  thunk_FUN_02bb0e9c();
  iVar6 = FUN_05c52798(0);
  iVar7 = (**(code **)(*unaff_x20 + 0x448))();
  if (iVar7 == 0) {
    bVar5 = *(byte *)(*(long *)
                       Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__
                     + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar5) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar5 * 8 + -8) !=
        *(long *)Method_Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_<InitGizmos>b__3_0__)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44();
    }
    bVar5 = FUN_05f3ecdc();
    lVar11 = *unaff_x25;
    *(byte *)(unaff_x19 + 0x151) = bVar5 & 1;
    plVar15 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if ((bVar5 & 1) != 0) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar9 = FUN_05e72078();
      goto FUN_05e71934;
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar9 = FUN_05e720d4();
    *(undefined8 *)(unaff_x19 + 0x60) = uVar9;
    thunk_FUN_02bb0e9c();
    if (iVar6 == 1) {
      plVar14 = (long *)unaff_x20[0xf];
      if (plVar14 == (long *)0x0) goto LAB_05e71af0;
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *plVar15) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05e71ad8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_02b7654c(plVar14,*plVar15,0);
LAB_05e71ad8:
      bVar5 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      *(byte *)(unaff_x19 + 0x153) = bVar5 & 1;
    }
  }
  else {
    if (iVar6 == 1) {
      *(undefined1 *)(unaff_x19 + 0x153) = 1;
    }
    plVar15 = (long *)Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar9 = FUN_05e72130();
FUN_05e71934:
    *(undefined8 *)(unaff_x19 + 0x60) = uVar9;
    thunk_FUN_02bb0e9c();
  }
  plVar14 = (long *)unaff_x20[0xf];
  *(char *)(unaff_x19 + 0x152) = (char)unaff_x20[0x18];
  puVar3 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *plVar15) {
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_05e719ac;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(plVar14,*plVar15,2);
LAB_05e719ac:
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    uVar8 = (*(code *)*puVar10)(plVar14,puVar10[1]);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x152);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x153);
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_05e7218c(uVar9,uVar8,0,uVar1,uVar2);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar9;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar9);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e72af8();
    if (*(char *)(unaff_x19 + 0x153) != '\0') {
      iVar6 = 0;
    }
    uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_05e72b58(uVar9,iVar6);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar9;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar9);
    return;
  }
LAB_05e71af0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


