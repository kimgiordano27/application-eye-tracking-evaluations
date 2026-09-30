/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 05ac42e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid(void)

{
  void *__src;
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
    __src = (void *)thunk_FUN_0367ff68();
    memcpy(&stack0x00000000,__src,0x60);
    pcVar2 = *(code **)(*unaff_x19 + 0x1c8);
    memcpy(&stack0x00000060,&stack0x00000000,0x60);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


