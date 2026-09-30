/*
FUNCTION_NAME: UniGLTF.GlbLowLevelParser$$FixNameUnique
ENTRY_POINT: 02f9bee8
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


/* WARNING: Removing unreachable block (ram,0x02f9c050) */

long UniGLTF_GlbLowLevelParser__FixNameUnique
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char local_34 [4];
  
  if ((DAT_0412adcc & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d25b58);
    DAT_0412adcc = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar3,local_34,0);
  if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x89) != '\0')) {
    lVar4 = *(long *)(param_1 + 0x110);
    if (lVar4 == 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar3 = thunk_FUN_01a89e68();
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03d25b60);
      FUN_0276a4a8(uVar3,uVar1,0);
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03d25b68);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar1);
    }
  }
  else {
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d25b58);
    FUN_02eaffcc(lVar4,param_1,param_3,0,param_4,0);
    lVar2 = FUN_01aa50f0(param_1 + 0x110,lVar4,0);
    if (lVar2 != 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar3 = thunk_FUN_01a89e68();
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03d14098);
      FUN_0276a4a8(uVar3,uVar1,0);
      uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03d25b68);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar1);
    }
    *(undefined1 *)(param_1 + 0x89) = 1;
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    lVar2 = FUN_02f9b4e0(param_1);
    plVar5 = (long *)(param_1 + 0xe8);
    *plVar5 = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02f9c118(*plVar5,lVar4,*(undefined8 *)(param_1 + 0x58));
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  return lVar4;
}


