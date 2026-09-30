/*
FUNCTION_NAME: UnityEngine.UI.InputField$$get_selectionFocusPosition
ENTRY_POINT: 05e718e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void UnityEngine_UI_InputField__get_selectionFocusPosition
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *plVar13;
  int unaff_w21;
  long *unaff_x25;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44();
  }
  bVar5 = FUN_05f3ecdc();
  lVar7 = *unaff_x25;
  *(byte *)(unaff_x19 + 0x151) = bVar5 & 1;
  puVar4 = Method_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull<Canvas>__;
  if ((bVar5 & 1) == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_05e720d4();
    *(undefined8 *)(unaff_x19 + 0x60) = uVar8;
    thunk_FUN_02bb0e9c();
    if (unaff_w21 == 1) {
      plVar13 = *(long **)(unaff_x20 + 0x78);
      if (plVar13 == (long *)0x0) goto LAB_05e71af0;
      lVar10 = *plVar13;
      lVar7 = *(long *)puVar4;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05e71ad8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(plVar13,lVar7,0);
LAB_05e71ad8:
      bVar5 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      *(byte *)(unaff_x19 + 0x153) = bVar5 & 1;
    }
  }
  else {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_05e72078();
    *(undefined8 *)(unaff_x19 + 0x60) = uVar8;
    thunk_FUN_02bb0e9c();
  }
  plVar13 = *(long **)(unaff_x20 + 0x78);
  *(undefined1 *)(unaff_x19 + 0x152) = *(undefined1 *)(unaff_x20 + 0xc0);
  puVar3 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar7 = *(long *)puVar4;
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_05e719ac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_02b7654c(plVar13,lVar7,2);
LAB_05e719ac:
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    uVar6 = (*(code *)*puVar9)(plVar13,puVar9[1]);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x152);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x153);
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_05e7218c(uVar8,uVar6,0,uVar1,uVar2);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar8);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05e72af8();
    if (*(char *)(unaff_x19 + 0x153) != '\0') {
      unaff_w21 = 0;
    }
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_05e72b58(uVar8,unaff_w21);
    *(undefined8 *)(unaff_x19 + 0x148) = uVar8;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar8);
    return;
  }
LAB_05e71af0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


