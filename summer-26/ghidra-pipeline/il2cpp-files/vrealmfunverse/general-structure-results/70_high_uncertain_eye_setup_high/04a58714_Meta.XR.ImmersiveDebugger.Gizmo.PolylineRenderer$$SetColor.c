/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColor
ENTRY_POINT: 04a58714
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColor
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04a58754;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04a58754:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    if ((((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3
         )) || (uVar4 = FUN_04a5a7fc(), (uVar4 & 1) == 0)) ||
       ((int)unaff_x20[4] <= *(int *)(unaff_x21 + 0x20))) {
      uVar5 = FUN_04a59af8();
      return uVar5;
    }
    uVar5 = 0;
  }
  return uVar5;
}


