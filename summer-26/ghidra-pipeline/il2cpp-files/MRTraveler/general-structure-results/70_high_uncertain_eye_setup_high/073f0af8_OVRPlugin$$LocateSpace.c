/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 073f0af8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LocateSpace(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  lVar1 = thunk_FUN_03cf5138();
  if (lVar1 != 0) {
    if (1 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[5] = unaff_x21;
      thunk_FUN_03d233cc();
      lVar1 = thunk_FUN_03cf5234(*unaff_x22);
      FUN_073f0c3c(lVar1,2);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_03cf5138(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
      goto LAB_073f0c2c;
      if (2 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[6] = lVar1;
        thunk_FUN_03d233cc(unaff_x20 + 6,lVar1);
        lVar1 = thunk_FUN_03cf5234(*unaff_x22);
        FUN_073f0c3c(lVar1,3);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_03cf5138(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
        goto LAB_073f0c2c;
        if (3 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[7] = lVar1;
          thunk_FUN_03d233cc(unaff_x20 + 7,lVar1);
          lVar1 = thunk_FUN_03cf5234(*unaff_x22);
          FUN_073f0c3c(lVar1,4);
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_03cf5138(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0))
          goto LAB_073f0c2c;
          if (4 < *(uint *)(unaff_x20 + 3)) {
            unaff_x20[8] = lVar1;
            thunk_FUN_03d233cc(unaff_x20 + 8,lVar1);
            *(long **)(unaff_x19 + 0x10) = unaff_x20;
            thunk_FUN_03d233cc();
            FUN_07145224();
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_073f0c2c:
  uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar3,0);
}


