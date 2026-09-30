/*
FUNCTION_NAME: UnityEngine.TextCore.Text.TextSelectionService$$GetCursorLogicalIndexFromPosition
ENTRY_POINT: 060cb77c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void UnityEngine_TextCore_Text_TextSelectionService__GetCursorLogicalIndexFromPosition(long param_1)

{
  long unaff_x19;
  long lVar1;
  long unaff_x20;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x268));
  *(undefined1 *)(unaff_x19 + 0xec5) = 1;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06105f9c();
  }
  if (*(int *)(*(long *)
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ShadowSplitData>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc7f18 == (code *)0x0) {
    DAT_06bc7f18 = (code *)FUN_02f0872c("UnityEngine.Texture::GetDataHeight_Injected(System.IntPtr)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x060cb7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_06bc7f18)(lVar1);
  return;
}


