/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$.ctor
ENTRY_POINT: 04ed64b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0367c9fc(param_1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar1 = FUN_04fbefa4(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20));
    if (lVar1 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      lVar1 = FUN_037623e0(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x10) = unaff_x19;
        thunk_FUN_036b7ad0();
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


