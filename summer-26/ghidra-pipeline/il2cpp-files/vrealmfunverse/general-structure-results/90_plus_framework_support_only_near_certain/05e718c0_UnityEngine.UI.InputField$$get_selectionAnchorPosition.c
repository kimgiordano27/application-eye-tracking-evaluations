/*
FUNCTION_NAME: UnityEngine.UI.InputField$$get_selectionAnchorPosition
ENTRY_POINT: 05e718c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_UI_InputField__get_selectionAnchorPosition(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined4 unaff_w21;
  long *unaff_x25;
  long *unaff_x27;
  
  *(undefined8 *)(unaff_x19 + 0x60) = param_1;
  thunk_FUN_02bb0e9c();
  plVar11 = *(long **)(unaff_x20 + 0x78);
  *(undefined1 *)(unaff_x19 + 0x152) = *(undefined1 *)(unaff_x20 + 0xc0);
  puVar3 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_05e719ac;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02b7654c(plVar11,*unaff_x25,2);
LAB_05e719ac:
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
  uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x152);
  uVar2 = *(undefined1 *)(unaff_x19 + 0x153);
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_05e7218c(uVar7,uVar5,0,uVar1,uVar2);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar7;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x108,uVar7);
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05e72af8();
  if (*(char *)(unaff_x19 + 0x153) != '\0') {
    unaff_w21 = 0;
  }
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_05e72b58(uVar7,unaff_w21);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar7;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar7);
  return;
}


