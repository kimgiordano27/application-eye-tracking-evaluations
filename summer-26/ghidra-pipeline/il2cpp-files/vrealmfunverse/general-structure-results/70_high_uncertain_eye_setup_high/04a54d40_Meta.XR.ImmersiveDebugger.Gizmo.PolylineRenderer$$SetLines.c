/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 04a54d40
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_02b76218(param_2);
  }
  lVar7 = *unaff_x22;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_2) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04a54da0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04a54da0:
  iVar4 = (*(code *)*puVar6)();
  if (iVar4 == 0) {
    uVar8 = 1;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218();
    }
    if (((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)
        ) || (uVar8 = FUN_04a56c7c(), (uVar8 & 1) == 0)) {
      uVar8 = FUN_04a5655c();
      iVar4 = *(int *)(unaff_x20 + 0x20);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (uVar8 >> 0x20 == 0) {
        iVar5 = (int)uVar8;
        bVar3 = SBORROW4(iVar4,iVar5);
        bVar1 = iVar4 - iVar5 < 0;
        bVar2 = iVar4 == iVar5;
      }
      uVar8 = (ulong)(!bVar2 && bVar1 == bVar3);
    }
    else {
      if ((int)unaff_x21[4] < *(int *)(unaff_x20 + 0x20)) {
        uVar8 = FUN_04a55f78();
        return uVar8;
      }
      uVar8 = 0;
    }
  }
  return uVar8;
}


