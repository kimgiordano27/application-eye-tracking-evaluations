/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$set_UiPanel
ENTRY_POINT: 052e144c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_DebugManager__set_UiPanel(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  
  lVar1 = *(long *)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_052e14f8;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x1e8);
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066ca6a0(uVar4,lVar1,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar3 == 0)) goto LAB_052e14f8;
    FUN_066d3f5c(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                 *(undefined4 *)(unaff_x19 + 0x38),lVar3,0);
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0x20),0), lVar3 == 0)) goto LAB_052e14f8;
    FUN_066d4bec(*(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40),
                 *(undefined4 *)(unaff_x19 + 0x44),*(undefined4 *)(unaff_x19 + 0x48),lVar3,0);
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x1a8) = 0;
    thunk_FUN_02f411dc(lVar1 + 0x1a8,0);
    return 0;
  }
LAB_052e14f8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


