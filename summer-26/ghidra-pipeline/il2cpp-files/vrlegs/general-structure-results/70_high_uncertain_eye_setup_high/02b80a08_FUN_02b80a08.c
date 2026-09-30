/*
FUNCTION_NAME: FUN_02b80a08
ENTRY_POINT: 02b80a08
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


/* WARNING: Removing unreachable block (ram,0x02b80bc8) */

long FUN_02b80a08(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_38;
  char local_24 [4];
  
  puVar1 = PTR_DAT_03d12608;
  if ((DAT_04128ce1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d12868);
    FUN_01ab69ac(PTR_DAT_03d12870);
    FUN_01ab69ac(PTR_DAT_03d12608);
    FUN_01ab69ac(PTR_DAT_03d12878);
    FUN_01ab69ac(PTR_DAT_03d12880);
    DAT_04128ce1 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_38 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x70);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar5,local_24,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x70);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = FUN_0219f8b8(lVar2,param_2,&local_38,*(undefined8 *)PTR_DAT_03d12870);
  if ((uVar3 & 1) == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = FUN_0267c294(param_2,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d12878);
      FUN_027b3d9c(lVar2,0);
      *(long *)(lVar2 + 0x10) = param_2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar2 + 0x10),param_2);
    }
    else {
      lVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d12880);
      FUN_027b3d9c(lVar2,0);
      *(long *)(lVar2 + 0x10) = param_2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(lVar2 + 0x10),param_2);
    }
    lVar4 = *(long *)puVar1;
    local_38 = lVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x70);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0219b9a4(lVar2,param_2,local_38,*(undefined8 *)PTR_DAT_03d12868);
  }
  lVar2 = local_38;
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  return lVar2;
}


