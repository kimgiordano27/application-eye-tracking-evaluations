/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardDirtyTextures
ENTRY_POINT: 073ec034
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardDirtyTextures(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  lVar2 = thunk_FUN_03cf5138();
  if (lVar2 != 0) {
    if (2 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[6] = unaff_x22;
      thunk_FUN_03d233cc();
      lVar2 = thunk_FUN_03cf5234(*unaff_x23);
      FUN_073ec16c(lVar2,3);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
      goto LAB_073ec15c;
      if (3 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[7] = lVar2;
        thunk_FUN_03d233cc(unaff_x21 + 7,lVar2);
        lVar2 = thunk_FUN_03cf5234(*unaff_x23);
        FUN_073ec16c(lVar2,4);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
        goto LAB_073ec15c;
        puVar1 = PTR_DAT_08eb3be0;
        if (4 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[8] = lVar2;
          thunk_FUN_03d233cc(unaff_x21 + 8,lVar2);
          *(long **)(unaff_x20 + 0x30) = unaff_x21;
          thunk_FUN_03d233cc();
          uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
          FUN_073ec1dc();
          *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x40),uVar4);
          FUN_07145224();
          *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x20 + 0x38));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_073ec15c:
  uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4,0);
}


