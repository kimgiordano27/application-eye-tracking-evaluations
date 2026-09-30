/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool<object>$$get_CountActive
ENTRY_POINT: 053dc508
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__get_CountActive(long param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0322bef4(param_1);
  }
  uVar1 = FUN_05e140d0(&stack0x0000000c,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x50));
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar1;
      thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x20),uVar1);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


