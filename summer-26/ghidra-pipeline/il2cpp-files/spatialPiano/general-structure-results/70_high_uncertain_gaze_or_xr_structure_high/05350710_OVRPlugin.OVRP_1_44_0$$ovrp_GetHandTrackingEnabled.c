/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 05350710
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  
  puVar1 = PTR_DAT_067c9ca0;
  if (*(long *)(unaff_x19 + 0x20) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset
              (*(undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusEnterEventArgs_TypeInfo,0);
    return;
  }
  lVar2 = *(long *)PTR_DAT_067c9ca0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    FUN_049c9730(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


