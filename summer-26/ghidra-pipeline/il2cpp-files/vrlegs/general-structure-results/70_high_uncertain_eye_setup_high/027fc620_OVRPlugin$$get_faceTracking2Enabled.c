/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 027fc620
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTracking2Enabled(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  lVar2 = FUN_027fbc9c();
  if (unaff_x21 == (long *)0x0) {
LAB_027fc7ac:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
LAB_027fc7a0:
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  puVar1 = PTR_DAT_03cbeda8;
  if ((int)unaff_x21[3] != 0) {
    unaff_x21[4] = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21 + 4,lVar2);
    lVar2 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x0000000c);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
    goto LAB_027fc7a0;
    if (1 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[5] = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21 + 5,lVar2);
      if ((unaff_x23 != 0) && (lVar2 = thunk_FUN_01a89d6c(), lVar2 == 0)) goto LAB_027fc7a0;
      if (2 < *(uint *)(unaff_x21 + 3)) {
        unaff_x21[6] = unaff_x23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if ((unaff_x22 != 0) && (lVar2 = thunk_FUN_01a89d6c(), lVar2 == 0)) goto LAB_027fc7a0;
        puVar1 = PTR_DAT_03cfda38;
        if (3 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[7] = unaff_x22;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar2 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
          FUN_027fc7b0();
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
          goto LAB_027fc7a0;
          if (4 < *(uint *)(unaff_x21 + 3)) {
            unaff_x21[8] = lVar2;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21 + 8,lVar2);
            if (unaff_x20 != 0) {
              thunk_FUN_0364dcf8();
              return;
            }
            goto LAB_027fc7ac;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


