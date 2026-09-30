/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 051af8a4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = FUN_05e14f10();
  if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x28),uVar1);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)PTR_DAT_079fb398;
      thunk_FUN_036b7ad0();
      if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0x28) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      uVar1 = FUN_05d87b8c(unaff_x20 + 4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
        thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x38),uVar1);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_079f6040;
          thunk_FUN_036b7ad0();
          FUN_05c98834();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


