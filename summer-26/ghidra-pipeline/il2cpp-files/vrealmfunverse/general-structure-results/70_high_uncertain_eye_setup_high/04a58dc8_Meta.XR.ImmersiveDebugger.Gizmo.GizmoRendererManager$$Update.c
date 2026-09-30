/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Update
ENTRY_POINT: 04a58dc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Update(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if (((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(param_1 + 0x130)) ||
      (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) !=
       param_1)) || (uVar2 = FUN_04a5a7fc(), (uVar2 & 1) == 0)) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar5);
    }
    plVar3 = (long *)thunk_FUN_02b79548();
    if ((plVar3 != (long *)0x0) && (*(int *)(unaff_x20 + 0x20) == 0)) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04a58f24;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar3,lVar5,0);
LAB_04a58f24:
      iVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0 < iVar1) goto LAB_04a58f38;
    }
    uVar2 = FUN_04a5a0dc();
    uVar2 = (ulong)(uVar2 >> 0x20 == 0 && *(int *)(unaff_x20 + 0x20) == (int)uVar2);
  }
  else {
    if (*(int *)(unaff_x20 + 0x20) == (int)unaff_x21[4]) {
      uVar2 = FUN_04a59af8();
      return uVar2;
    }
LAB_04a58f38:
    uVar2 = 0;
  }
  return uVar2;
}


