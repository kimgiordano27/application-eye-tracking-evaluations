/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 027fbfc8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_eyeTrackingSupported(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  puVar1 = PTR_DAT_03cbeb20;
  if (1 < in_w8) {
    unaff_x20[5] = unaff_x23;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uStack000000000000001c = unaff_w22 == 0;
    lVar2 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_027fc110:
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    puVar1 = PTR_DAT_03cbeda8;
    if (2 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[6] = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20 + 6,lVar2);
      uStack0000000000000018 = unaff_w21;
      lVar2 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000018);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
      goto LAB_027fc110;
      if (3 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[7] = lVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20 + 7,lVar2);
        in_stack_00000008._4_4_ = 2;
        lVar2 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
        goto LAB_027fc110;
        if (4 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[8] = lVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x20 + 8,lVar2);
          if (unaff_x19 != 0) {
            thunk_FUN_0364dcf8();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


