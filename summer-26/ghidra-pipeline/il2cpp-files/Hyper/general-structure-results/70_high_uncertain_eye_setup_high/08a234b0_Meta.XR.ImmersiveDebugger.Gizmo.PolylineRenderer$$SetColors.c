/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 08a234b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac4d650);
  *(undefined1 *)(unaff_x21 + 0x2ed) = 1;
  lVar3 = thunk_FUN_04983f60(*unaff_x22);
  FUN_089c6890(lVar3,0);
  puVar1 = PTR_DAT_0ac4d620;
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x18) = 1;
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_08981e44(lVar4,0);
    plVar5 = *(long **)(unaff_x23 + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      puVar1 = PTR_DAT_0ac4e180;
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x18) = uVar2;
        lVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_089d23f4(lVar6,0);
        if (lVar6 != 0) {
          FUN_089d2524(lVar6);
          FUN_089d25a8(lVar6);
          *(undefined1 *)(lVar6 + 0x28) = 1;
          FUN_08982bb8(lVar4,lVar6,0);
          FUN_089c6a00(lVar3,lVar4,0);
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


