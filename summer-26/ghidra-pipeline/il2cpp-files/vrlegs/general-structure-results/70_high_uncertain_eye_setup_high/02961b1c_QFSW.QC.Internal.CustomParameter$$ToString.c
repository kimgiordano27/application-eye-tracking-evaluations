/*
FUNCTION_NAME: QFSW.QC.Internal.CustomParameter$$ToString
ENTRY_POINT: 02961b1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02961bec) */
/* WARNING: Removing unreachable block (ram,0x02961bf8) */

void QFSW_QC_Internal_CustomParameter__ToString(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000038;
  
  if (param_1 == 0) {
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if (*(int *)(unaff_x27 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(unaff_x27 + 0x20) = unaff_x28;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cbe438);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  thunk_FUN_01a6ca08(PTR_DAT_03d06198);
  FUN_0367b588();
  plVar3 = (long *)FUN_02ecd1cc();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
  FUN_02ecd310();
  while( true ) {
    do {
      uVar1 = FUN_021b51c8(&stack0x00000020,*unaff_x22);
      if ((uVar1 & 1) == 0) {
        FUN_021b51c4(&stack0x00000020,*unaff_x29);
        if (in_stack_00000038._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
        return;
      }
      FUN_01b7a454(&stack0x00000020,&stack0x00000008,*unaff_x23);
      lVar2 = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = FUN_02ecc7e0(in_stack_00000008,0);
    } while ((uVar1 & 1) == 0);
    plVar3 = (long *)FUN_02ecd1cc(lVar2,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a89e68(*unaff_x24);
    FUN_026b4574();
    FUN_02ecd1cc(lVar2,0);
    if (plVar3 == (long *)0x0) break;
    (**(code **)(*plVar3 + 0x308))(plVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


