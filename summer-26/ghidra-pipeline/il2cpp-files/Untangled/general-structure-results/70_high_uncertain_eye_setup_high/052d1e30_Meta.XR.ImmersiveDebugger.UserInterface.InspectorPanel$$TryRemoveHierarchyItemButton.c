/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$TryRemoveHierarchyItemButton
ENTRY_POINT: 052d1e30
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__TryRemoveHierarchyItemButton(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float unaff_s14;
  
  thunk_FUN_02f12b58();
  if (((*(char *)(unaff_x19 + 0xf2) == '\0') && (*(float *)(unaff_x19 + 0xf4) < unaff_s14)) ||
     ((*(char *)(unaff_x19 + 0xf1) == '\0' &&
      (*(float *)(unaff_x19 + 0xf8) <
       SQRT(unaff_s8 * unaff_s8 + unaff_s11 * unaff_s11 + unaff_s9 * unaff_s9))))) {
    lVar2 = *(long *)(unaff_x19 + 0x98);
    if (lVar2 == 0) goto LAB_052d1ec0;
    if ((*(char *)(lVar2 + 0x3d) == '\0') && (iVar1 = FUN_0528dcb0(lVar2,0), iVar1 < 2)) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    FUN_052d6ab4();
    return;
  }
LAB_052d1ec0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


