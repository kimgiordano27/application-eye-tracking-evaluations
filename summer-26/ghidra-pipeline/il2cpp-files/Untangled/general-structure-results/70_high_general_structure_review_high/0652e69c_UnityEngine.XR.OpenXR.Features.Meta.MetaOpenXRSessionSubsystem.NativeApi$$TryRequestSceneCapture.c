/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem.NativeApi$$TryRequestSceneCapture
ENTRY_POINT: 0652e69c
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_NativeApi__TryRequestSceneCapture
               (void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  
  lVar1 = thunk_FUN_02ef170c();
  if (lVar1 != 0) {
    if (2 < *(uint *)(unaff_x22 + 0x18)) {
      *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
      thunk_FUN_02f411dc();
                    /* try { // try from 0652e6c0 to 0662e6c3 has its CatchHandler @ 0652e778 */
                    /* try { // try from 0652e6c4 to 0662e6d3 has its CatchHandler @ 0652e784 */
      if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_02ef170c(), lVar1 == 0)) goto LAB_0652e724;
      if (3 < *(uint *)(unaff_x22 + 0x18)) {
        *(long *)(unaff_x22 + 0x38) = unaff_x20;
        thunk_FUN_02f411dc();
        if (unaff_x21 != 0) {
                    /* try { // try from 0652e718 to 0662e73b has its CatchHandler @ 0652e77c */
          FUN_0552fdd0();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
LAB_0652e724:
  uVar2 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,0);
}


