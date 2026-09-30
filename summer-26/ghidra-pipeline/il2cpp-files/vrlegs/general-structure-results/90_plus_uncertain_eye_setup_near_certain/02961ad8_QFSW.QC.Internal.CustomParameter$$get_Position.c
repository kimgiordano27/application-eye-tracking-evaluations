/*
FUNCTION_NAME: QFSW.QC.Internal.CustomParameter$$get_Position
ENTRY_POINT: 02961ad8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02961bec) */
/* WARNING: Removing unreachable block (ram,0x02961bf8) */

void QFSW_QC_Internal_CustomParameter__get_Position(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000038;
  
  uVar2 = thunk_FUN_01a6ca08(*(undefined8 *)(param_1 + 0xb18));
  plVar3 = (long *)FUN_01ab6a94(uVar2,1);
  if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = (**(code **)(*unaff_x28 + 0x188))();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01a89d6c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
    uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar2,0);
  }
  if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar3[4] = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar4);
  lVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbe438);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d06198);
  FUN_0367b588(uVar2,plVar3,0);
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
      lVar4 = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = FUN_02ecc7e0(in_stack_00000008,0);
    } while ((uVar1 & 1) == 0);
    plVar3 = (long *)FUN_02ecd1cc(lVar4,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a89e68(*unaff_x24);
    FUN_026b4574();
    FUN_02ecd1cc(lVar4,0);
    if (plVar3 == (long *)0x0) break;
    (**(code **)(*plVar3 + 0x308))(plVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


