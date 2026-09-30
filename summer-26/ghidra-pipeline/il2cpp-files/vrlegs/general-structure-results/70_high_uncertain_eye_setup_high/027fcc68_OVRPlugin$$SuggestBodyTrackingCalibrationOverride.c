/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 027fcc68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestBodyTrackingCalibrationOverride(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined4 uStack000000000000001c;
  
  puVar2 = PTR_DAT_03cc1608;
  if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_026e65b8();
  uVar4 = FUN_025be440(uVar3,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_026e65b8(uVar3,0);
    uVar4 = FUN_025be440(uVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_025b1328(*unaff_x20,uVar3,0);
      *unaff_x20 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_036772fc(*(undefined8 *)PTR_DAT_03cfda88,0);
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0xc);
  uVar3 = FUN_027fc83c(*(undefined8 *)(unaff_x19 + 0x10));
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar5 + 0x18);
    *puVar6 = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0870);
    FUN_026b1d64(uVar3,uVar7,*(undefined8 *)PTR_DAT_03cfda78,0);
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_027f595c(uVar3,0);
    if (lVar5 != 0) {
      in_stack_00000008 = FUN_027e99e8(lVar5,0);
      uVar4 = FUN_02678c30(&stack0x00000008,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x18,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01f07574(unaff_x19 + 2,&stack0x00000008);
      }
      else {
        FUN_02678cfc(&stack0x00000008,0);
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_027fc594(*(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x18),
                     *(undefined8 *)(unaff_x19 + 0xe),unaff_x19[10],
                     *(undefined8 *)(unaff_x19 + 0x12));
        puVar2 = PTR_DAT_03cfda70;
        uVar1 = unaff_x19[0x14];
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 0xc) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xc,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uStack000000000000001c = uVar1;
        FUN_02145584(unaff_x19 + 2,&stack0x0000001c,*(undefined8 *)puVar2);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


