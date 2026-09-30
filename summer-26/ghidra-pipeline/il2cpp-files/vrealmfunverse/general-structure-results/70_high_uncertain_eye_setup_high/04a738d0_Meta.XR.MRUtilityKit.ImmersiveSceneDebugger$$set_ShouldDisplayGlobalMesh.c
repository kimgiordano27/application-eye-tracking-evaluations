/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$set_ShouldDisplayGlobalMesh
ENTRY_POINT: 04a738d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__set_ShouldDisplayGlobalMesh(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_w8;
  int iVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  long unaff_x23;
  
  if (0 < in_w8) {
    if (unaff_x22 == 0) {
LAB_04a73960:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = *(int *)(unaff_x22 + 0x18);
    iVar5 = 0;
    piVar6 = (int *)(unaff_x22 + 0x24);
    do {
      if (iVar2 == iVar5) {
LAB_04a7395c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (unaff_x23 == 0) goto LAB_04a73960;
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = piVar6[-1] / unaff_w20;
      }
      uVar3 = piVar6[-1] - iVar4 * unaff_w20;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar3) goto LAB_04a7395c;
      lVar1 = unaff_x23 + (long)(int)uVar3 * 4;
      iVar5 = iVar5 + 1;
      *piVar6 = *(int *)(lVar1 + 0x20) + -1;
      *(int *)(lVar1 + 0x20) = iVar5;
      piVar6 = piVar6 + 4;
    } while (iVar5 < *(int *)(unaff_x19 + 0x24));
  }
  *(long *)(unaff_x19 + 0x18) = unaff_x22;
  thunk_FUN_02bb0e9c();
  *(long *)(unaff_x19 + 0x10) = unaff_x23;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
  return;
}


