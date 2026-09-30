/*
FUNCTION_NAME: UniGLTF.ReverseX$$InvertVector3
ENTRY_POINT: 02f75470
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f75698) */
/* WARNING: Removing unreachable block (ram,0x02f756ec) */
/* WARNING: Removing unreachable block (ram,0x02f755dc) */

long UniGLTF_ReverseX__InvertVector3(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  long *unaff_x25;
  char cStack000000000000000c;
  
  FUN_02f660a0();
  plVar1 = (long *)FUN_01ab6a94(*unaff_x20,1);
  if ((*(long *)(unaff_x19 + 0x50) == 0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x10);
  if ((lVar6 != 0) &&
     (lVar2 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,0);
  }
  if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar1[4] = lVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1 + 4,lVar6);
  FUN_026780b0(*(undefined8 *)PTR_DAT_03d25038,plVar1,0);
  FUN_02f6520c();
  if (*(char *)(unaff_x19 + 0x60) != '\0') {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar3 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d1fac8);
    FUN_0276a4a8(uVar3,uVar5,0);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d250d0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,uVar5);
  }
  *(undefined1 *)(unaff_x19 + 0x60) = 1;
  if (*(long *)(unaff_x19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x50) + 0x1c) >> 1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      FUN_026779dc(*(long *)(unaff_x19 + 0xa8),0);
    }
    FUN_02f73644();
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24900);
    FUN_02f8321c();
    *(undefined1 *)(lVar6 + 0x50) = 3;
    uVar3 = FUN_02f64afc(lVar6,1);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar3,&stack0x0000000c,0);
    *(long *)(unaff_x19 + 0xf8) = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(unaff_x19 + 0xf8),lVar6);
    FUN_02f73a88();
    FUN_02f64cc4(lVar6);
    FUN_02f73644();
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_02f651a8();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f66c54();
    }
    return lVar6;
  }
  thunk_FUN_01a6ca08(PTR_DAT_03d1fae0);
  uVar3 = thunk_FUN_01a89e68();
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d250d8);
  FUN_02f7a954(uVar3,uVar5,0);
  uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03d250d0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3,uVar5);
}


