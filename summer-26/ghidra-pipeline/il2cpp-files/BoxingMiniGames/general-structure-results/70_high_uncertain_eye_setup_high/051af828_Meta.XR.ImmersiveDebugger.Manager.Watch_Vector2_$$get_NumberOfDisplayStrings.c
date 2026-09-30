/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 051af828
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0xa08));
  FUN_03642964(PTR_DAT_079fb398);
  FUN_03642964(PTR_DAT_07a004a0);
  FUN_03642964(PTR_DAT_079f6040);
  *(undefined1 *)(unaff_x19 + 0x747) = 1;
  lVar1 = FUN_03642a4c(*unaff_x22,5);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR_DAT_07a004a0;
    thunk_FUN_036b7ad0();
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar2 = FUN_05e14f10();
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = uVar2;
      thunk_FUN_036b7ad0((undefined8 *)(lVar1 + 0x28),uVar2);
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)PTR_DAT_079fb398;
        thunk_FUN_036b7ad0();
        if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0x28) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar3 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc();
        }
        uVar2 = FUN_05d87b8c(unaff_x20 + 4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd0));
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar1 + 0x38) = uVar2;
          thunk_FUN_036b7ad0((undefined8 *)(lVar1 + 0x38),uVar2);
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_079f6040;
            thunk_FUN_036b7ad0();
            FUN_05c98834(lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


