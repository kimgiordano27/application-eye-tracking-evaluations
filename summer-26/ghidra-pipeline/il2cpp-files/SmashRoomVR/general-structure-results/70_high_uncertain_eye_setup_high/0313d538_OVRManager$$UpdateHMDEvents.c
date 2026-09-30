/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 0313d538
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateHMDEvents(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  
  unaff_x20[5] = unaff_x22;
  thunk_FUN_01b4f09c();
  uVar1 = *(undefined4 *)(unaff_x21 + 0x38);
  lVar2 = thunk_FUN_01afaadc(*unaff_x24);
  FUN_0313d748(lVar2,2,0xb,uVar1);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_0313d668:
    uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,0);
  }
  if (2 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[6] = lVar2;
    thunk_FUN_01b4f09c(unaff_x20 + 6,lVar2);
    uVar1 = *(undefined4 *)(unaff_x21 + 0x38);
    lVar2 = thunk_FUN_01afaadc(*unaff_x24);
    FUN_0313d748(lVar2,3,0xe,uVar1);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
    goto LAB_0313d668;
    if (3 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[7] = lVar2;
      thunk_FUN_01b4f09c(unaff_x20 + 7,lVar2);
      uVar1 = *(undefined4 *)(unaff_x21 + 0x38);
      lVar2 = thunk_FUN_01afaadc(*unaff_x24);
      FUN_0313d748(lVar2,4,0x12,uVar1);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
      goto LAB_0313d668;
      if (4 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[8] = lVar2;
        thunk_FUN_01b4f09c(unaff_x20 + 8,lVar2);
        *unaff_x19 = unaff_x20;
        thunk_FUN_01b4f09c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


