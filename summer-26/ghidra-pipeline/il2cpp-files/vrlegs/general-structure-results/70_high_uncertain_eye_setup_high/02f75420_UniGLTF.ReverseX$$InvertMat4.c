/*
FUNCTION_NAME: UniGLTF.ReverseX$$InvertMat4
ENTRY_POINT: 02f75420
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


/* WARNING: Removing unreachable block (ram,0x02f75698) */
/* WARNING: Removing unreachable block (ram,0x02f756ec) */
/* WARNING: Removing unreachable block (ram,0x02f755dc) */

long UniGLTF_ReverseX__InvertMat4(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *unaff_x25;
  char cStack000000000000000c;
  
  FUN_01ab69ac(PTR_DAT_03d250c8);
  *(undefined1 *)(unaff_x20 + 0xca8) = 1;
  cStack000000000000000c = 0;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_02f651a8();
  puVar1 = PTR_DAT_03cbeb18;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f660a0();
    plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)puVar1,1);
    if ((*(long *)(unaff_x19 + 0x50) == 0) || (plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x10);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar3[4] = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar7);
    FUN_026780b0(*(undefined8 *)PTR_DAT_03d25038,plVar3,0);
    FUN_02f6520c();
  }
  if (*(char *)(unaff_x19 + 0x60) != '\0') {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d1fac8);
    FUN_0276a4a8(uVar5,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d250d0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  *(undefined1 *)(unaff_x19 + 0x60) = 1;
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x50) + 0x1c) >> 1 & 1) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03d1fae0);
      uVar5 = thunk_FUN_01a89e68();
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d250d8);
      FUN_02f7a954(uVar5,uVar6,0);
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d250d0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar6);
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      FUN_026779dc(*(long *)(unaff_x19 + 0xa8),0);
    }
    FUN_02f73644();
    lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24900);
    FUN_02f8321c();
    *(undefined1 *)(lVar7 + 0x50) = 3;
    uVar5 = FUN_02f64afc(lVar7,1);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar5,&stack0x0000000c,0);
    *(long *)(unaff_x19 + 0xf8) = lVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(unaff_x19 + 0xf8),lVar7);
    FUN_02f73a88();
    FUN_02f64cc4(lVar7);
    FUN_02f73644();
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_02f651a8();
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f66c54();
    }
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


