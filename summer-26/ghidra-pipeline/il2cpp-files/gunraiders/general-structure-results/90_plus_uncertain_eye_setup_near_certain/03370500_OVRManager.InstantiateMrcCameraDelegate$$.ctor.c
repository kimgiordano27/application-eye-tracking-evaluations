/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$.ctor
ENTRY_POINT: 03370500
PROGRAM: gunraiders-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_InstantiateMrcCameraDelegate___ctor(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b8);
    *(undefined1 *)(unaff_x22 + 0x620) = 1;
  }
  lVar1 = FUN_01c5d2fc(*unaff_x24,2);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((unaff_x23 != 0) && (lVar2 = thunk_FUN_01c495e4(), lVar2 == 0)) {
OVRManager_InstantiateMrcCameraDelegate__Invoke:
    uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar3,0);
  }
  uVar4 = *(uint *)(lVar1 + 0x18);
  if (uVar4 != 0) {
    *(long *)(lVar1 + 0x20) = unaff_x23;
    if (unaff_x20 != 0) {
      lVar2 = thunk_FUN_01c495e4();
      if (lVar2 == 0) goto OVRManager_InstantiateMrcCameraDelegate__Invoke;
      uVar4 = *(uint *)(lVar1 + 0x18);
    }
    if (1 < uVar4) {
      *(long *)(lVar1 + 0x28) = unaff_x20;
      FUN_03383e08(param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


