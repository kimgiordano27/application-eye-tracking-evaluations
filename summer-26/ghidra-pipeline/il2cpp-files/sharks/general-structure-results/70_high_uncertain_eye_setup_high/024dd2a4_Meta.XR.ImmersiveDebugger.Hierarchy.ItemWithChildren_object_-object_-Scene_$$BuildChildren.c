/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<object,-object,-Scene>$$BuildChildren
ENTRY_POINT: 024dd2a4
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_object,_Scene>__BuildChildren(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long unaff_x20;
  undefined8 unaff_x21;
  int unaff_w22;
  long lVar6;
  uint *in_stack_00000008;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x24);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    iVar2 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    *(uint *)(unaff_x20 + 0x24) = uVar1 + 1;
    if (lVar6 != 0) {
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = unaff_w22 / iVar2;
      }
      uVar3 = unaff_w22 - iVar4 * iVar2;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar5 = lVar6 + (long)(int)uVar1 * 0x10;
        *(int *)(lVar5 + 0x20) = unaff_w22;
        *(undefined8 *)(lVar5 + 0x28) = unaff_x21;
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) goto LAB_024dd3b4;
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar3 * 4;
          *(int *)(lVar6 + (long)(int)uVar1 * 0x10 + 0x24) = *(int *)(lVar5 + 0x20) + -1;
          *(uint *)(lVar5 + 0x20) = uVar1 + 1;
          *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
          *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
          *in_stack_00000008 = uVar1;
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
  }
LAB_024dd3b4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


