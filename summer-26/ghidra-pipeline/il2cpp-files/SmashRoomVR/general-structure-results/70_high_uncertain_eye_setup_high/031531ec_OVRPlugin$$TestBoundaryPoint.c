/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryPoint
ENTRY_POINT: 031531ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__TestBoundaryPoint(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long *unaff_x25;
  
  uVar4 = *param_1;
  uVar1 = thunk_FUN_01afaadc(**(undefined8 **)(in_x9 + 0x2c0));
  FUN_028b6724(uVar1,uVar4,*(undefined8 *)PTR_DAT_03d802e8,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_01b4f09c(puVar2,uVar1);
  FUN_01ec7bf0();
  if (unaff_x21 != 0) {
    FUN_02b59bf0();
    lVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802e0);
    FUN_03081994(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = unaff_x19;
      thunk_FUN_01b4f09c();
      *(long *)(lVar3 + 0x18) = unaff_x21;
      thunk_FUN_01b4f09c();
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_025bc5c4();
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


