/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 027f713c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long lVar6;
  long unaff_x23;
  
  while( true ) {
    lVar6 = *(long *)(unaff_x19 + unaff_x23 * 8 + 0x20);
    if (lVar6 == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar5 = thunk_FUN_01a89e68();
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cd90f8);
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cd9100);
      FUN_026a7658(uVar5,uVar3,uVar4,0);
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfd728);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar3);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar2 == 0) {
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= (uint)unaff_x23) break;
    unaff_x21[unaff_x23 + 4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (unaff_x21 + unaff_x23 + 4,lVar6);
    uVar1 = (uint)unaff_x23 + 1;
    if (unaff_w20 == uVar1) {
      FUN_025c9c8c();
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar1) break;
    unaff_x23 = (long)(int)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


