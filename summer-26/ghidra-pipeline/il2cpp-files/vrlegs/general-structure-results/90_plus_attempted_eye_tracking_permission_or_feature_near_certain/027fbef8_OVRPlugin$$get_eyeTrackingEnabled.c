/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 027fbef8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_12;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined1 uStack000000000000001c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeb20);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cfd9d0);
    FUN_01ab69ac(PTR_DAT_03cfd9d8);
    *(undefined1 *)(unaff_x23 + 0x207) = 1;
  }
  lVar2 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_027fb9d8();
  lVar3 = FUN_027fbbe8();
  plVar4 = (long *)FUN_01ab6a94(*unaff_x20,5);
  lVar5 = FUN_027fbc9c();
  if (plVar4 == (long *)0x0) {
LAB_027fc11c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_027fc110:
    uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_027fc110;
    puVar1 = PTR_DAT_03cbeb20;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 5,lVar2);
      uStack000000000000001c = unaff_w22 == 0;
      lVar2 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_027fc110;
      puVar1 = PTR_DAT_03cbeda8;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 6,lVar2);
        uStack0000000000000018 = unaff_w21;
        lVar2 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,&stack0x00000018);
        if ((lVar2 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_027fc110;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 7,lVar2);
          in_stack_00000008._4_4_ = 2;
          lVar2 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
          if ((lVar2 != 0) &&
             (lVar5 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_027fc110;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = lVar2;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 8,lVar2);
            if (lVar3 != 0) {
              thunk_FUN_0364dcf8(lVar3,*(undefined8 *)PTR_DAT_03cfd9d8,plVar4,0);
              return;
            }
            goto LAB_027fc11c;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


