/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 05ab0bb4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(param_1 + 0x40)) {
    plVar4 = (long *)thunk_FUN_0322f29c();
    lVar1 = *plVar4;
    lVar2 = plVar4[1];
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    if ((lVar1 == *unaff_x19) && ((int)unaff_x19[1] == (int)lVar2)) {
      bVar3 = *(int *)((long)unaff_x19 + 0xc) == (int)((ulong)lVar2 >> 0x20);
    }
    else {
      bVar3 = false;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2730();
}


