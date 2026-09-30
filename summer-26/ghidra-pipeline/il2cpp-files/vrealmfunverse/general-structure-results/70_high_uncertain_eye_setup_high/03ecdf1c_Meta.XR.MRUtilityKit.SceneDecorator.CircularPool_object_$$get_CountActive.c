/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool<object>$$get_CountActive
ENTRY_POINT: 03ecdf1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__get_CountActive(void)

{
  long lVar1;
  long lVar2;
  code *in_x9;
  long unaff_x19;
  
  (*in_x9)();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x78);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02b76218();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x40);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218();
  }
  if (lVar1 != 0) {
    FUN_04a7217c(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18),
                 *(undefined8 *)PTR_DAT_063217d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


