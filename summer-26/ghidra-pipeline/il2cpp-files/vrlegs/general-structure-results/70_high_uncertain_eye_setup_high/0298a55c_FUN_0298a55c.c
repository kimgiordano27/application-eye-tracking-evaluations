/*
FUNCTION_NAME: FUN_0298a55c
ENTRY_POINT: 0298a55c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298a794) */
/* WARNING: Removing unreachable block (ram,0x0298a7a4) */

undefined8 FUN_0298a55c(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  char local_38 [4];
  char local_34 [4];
  
  if ((DAT_04127cb3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07808);
    FUN_01ab69ac(PTR_DAT_03d07810);
    DAT_04127cb3 = 1;
  }
  local_38[0] = '\0';
  if (param_2 < 0) {
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d07818);
    thunk_FUN_01a6ca08(PTR_DAT_03cbe5e8);
    FUN_01876390();
    plVar6 = (long *)FUN_0277b678(uVar4,0);
    FUN_018748a8();
    uVar4 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03d07820);
    uVar4 = FUN_025b1328(uVar4,uVar2,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar2 = thunk_FUN_01a89e68();
    FUN_027a794c(uVar2,uVar4,0);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d07828);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar2,uVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((param_2 != 0) && ((int)uVar5 < 0x20)) {
    do {
      if (param_2 + -1 >> (uVar5 & 0x1f) == 0) goto LAB_0298a5d8;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x20);
    uVar5 = 0x20;
  }
LAB_0298a5d8:
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar4,local_34,0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar3 = *(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d07810);
    FUN_02092510(lVar3,*(undefined8 *)PTR_DAT_03d07808);
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar3 != 0) &&
       (lVar1 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar1 == 0)) {
      uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,0);
    }
    if (*(uint *)(plVar6 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar6[(long)(int)uVar5 + 4] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (plVar6 + (long)(int)uVar5 + 4,lVar3);
  }
  local_38[0] = '\0';
  FUN_027e0bd8(lVar3,local_38,0);
  uVar2 = FUN_0298a8a4(param_1,lVar3,uVar5);
  if (local_38[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar3,0);
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return uVar2;
}


