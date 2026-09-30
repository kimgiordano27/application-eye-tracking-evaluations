/*
FUNCTION_NAME: UniGLTF.ReverseZ$$InvertMat4
ENTRY_POINT: 02f753c0
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

long UniGLTF_ReverseZ__InvertMat4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char cStack000000000000000c;
  
  puVar2 = PTR_DAT_03d1fee8;
  if ((DAT_0412aca8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d24900);
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d25038);
    FUN_01ab69ac(PTR_DAT_03d250c8);
    DAT_0412aca8 = 1;
  }
  cStack000000000000000c = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar3 = PTR_DAT_03d250c8;
  uVar4 = FUN_02f651a8();
  puVar1 = PTR_DAT_03cbeb18;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f660a0(param_1,0,*(undefined8 *)puVar3);
    plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)puVar1,1);
    if ((*(long *)(param_1 + 0x50) == 0) || (plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
    if ((lVar9 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5[4] = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar9);
    uVar7 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d25038,plVar5,0);
    FUN_02f6520c(param_1,uVar7,*(undefined8 *)puVar3);
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar7 = thunk_FUN_01a89e68();
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d1fac8);
    FUN_0276a4a8(uVar7,uVar8,0);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d250d0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,uVar8);
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1c) >> 1 & 1) == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03d1fae0);
      uVar7 = thunk_FUN_01a89e68();
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d250d8);
      FUN_02f7a954(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d250d0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,uVar8);
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      FUN_026779dc(*(long *)(param_1 + 0xa8),0);
    }
    FUN_02f73644(param_1,1);
    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d24900);
    FUN_02f8321c(lVar9,param_1,param_3,param_2,0);
    *(undefined1 *)(lVar9 + 0x50) = 3;
    uVar7 = FUN_02f64afc(lVar9,1);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar7,&stack0x0000000c,0);
    *(long *)(param_1 + 0xf8) = lVar9;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(param_1 + 0xf8),lVar9);
    FUN_02f73a88(param_1,1);
    FUN_02f64cc4(lVar9);
    FUN_02f73644(param_1,0);
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_02f651a8();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f66c54(param_1,0,*(undefined8 *)puVar3);
    }
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


