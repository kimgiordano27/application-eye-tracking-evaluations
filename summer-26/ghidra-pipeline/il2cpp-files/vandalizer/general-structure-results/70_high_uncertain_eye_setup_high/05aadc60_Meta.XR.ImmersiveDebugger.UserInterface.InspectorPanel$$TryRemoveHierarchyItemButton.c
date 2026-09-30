/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$TryRemoveHierarchyItemButton
ENTRY_POINT: 05aadc60
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__TryRemoveHierarchyItemButton(void)

{
  uint uVar1;
  long lVar2;
  void *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  
  Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
  if ((unaff_w20 < 0) || (*(int *)((long)unaff_x21 + 0xc) <= unaff_w20)) {
    FUN_05e22bd8(0);
  }
  lVar2 = *unaff_x21;
  if (lVar2 != 0) {
    uVar1 = (int)unaff_x21[1] + unaff_w20;
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      memcpy(unaff_x19,(void *)(lVar2 + (long)(int)uVar1 * 0x84 + 0x20),0x84);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


