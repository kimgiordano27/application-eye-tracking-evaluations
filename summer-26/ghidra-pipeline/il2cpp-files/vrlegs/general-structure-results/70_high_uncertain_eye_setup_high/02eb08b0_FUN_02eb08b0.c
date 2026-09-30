/*
FUNCTION_NAME: FUN_02eb08b0
ENTRY_POINT: 02eb08b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02eb0a74) */
/* WARNING: Removing unreachable block (ram,0x02eb0984) */

void FUN_02eb08b0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  char local_24 [4];
  
  if ((DAT_0412a63b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0870);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03d1f980);
    DAT_0412a63b = 1;
  }
  local_38 = 0;
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    puVar5 = PTR_DAT_03d1f988;
  }
  else {
    if (param_3 != 0) {
      local_24[0] = '\0';
      FUN_027e0bd8(param_1,local_24,0);
      iVar3 = thunk_FUN_01aa519c(param_1 + 0x88,1,0,0);
      if (iVar3 != 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar4 = thunk_FUN_01a89e68();
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d14098);
        FUN_0276a4a8(uVar4,uVar6,0);
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d1f998);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar6);
      }
      *(long *)(param_1 + 0x20) = param_2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(param_1 + 0x20),param_2);
      *(long *)(param_1 + 0x18) = param_3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(param_1 + 0x18),param_3);
      if (local_24[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
      }
      puVar2 = PTR_DAT_03d1f980;
      puVar1 = PTR_DAT_03cc9e10;
      puVar5 = PTR_DAT_03cc0870;
      if (*(long *)(param_1 + 0x38) != 0) {
        local_38 = FUN_027d9d6c(*(long *)(param_1 + 0x38),0);
        uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
        FUN_026b1d64(uVar4,param_1,*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d76b0(auStack_50,&local_38,uVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    puVar5 = PTR_DAT_03d1f990;
  }
  uVar6 = thunk_FUN_01a6ca08(puVar5);
  FUN_026a44fc(uVar4,uVar6,0);
  uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d1f998);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar6);
}


