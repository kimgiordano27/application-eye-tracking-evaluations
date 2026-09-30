/*
FUNCTION_NAME: FUN_026ab00c
ENTRY_POINT: 026ab00c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026ab28c) */
/* WARNING: Removing unreachable block (ram,0x026ab2b0) */

undefined8 FUN_026ab00c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char local_34 [4];
  
  puVar1 = PTR_DAT_03cd3d80;
  if ((DAT_04124424 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf6038);
    FUN_01ab69ac(PTR_DAT_03cf6040);
    FUN_01ab69ac(PTR_DAT_03cf6048);
    FUN_01ab69ac(PTR_DAT_03cf6050);
    FUN_01ab69ac(PTR_DAT_03cf6058);
    FUN_01ab69ac(PTR_DAT_03cf6060);
    FUN_01ab69ac(PTR_DAT_03cf6068);
    FUN_01ab69ac(PTR_DAT_03cf6070);
    FUN_01ab69ac(PTR_DAT_03cd3d80);
    FUN_01ab69ac(PTR_DAT_03cf6078);
    FUN_01ab69ac(PTR_DAT_03cf5e98);
    DAT_04124424 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  local_34[0] = '\0';
  FUN_027e0bd8(lVar2,local_34,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar7 = (long *)(lVar2 + 0x20);
  if (*plVar7 == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 026ab108 to 027ab20f has its CatchHandler @ 026ab108
                       catch() { ... } // from try @ 026ab108 with catch @ 026ab108
                       catch() { ... } // from try @ 026ab2f0 with catch @ 026ab108
                       catch() { ... } // from try @ 026ab69c with catch @ 026ab108
                       catch() { ... } // from try @ 026ab6b0 with catch @ 026ab108
                       catch() { ... } // from try @ 026ab780 with catch @ 026ab108 */
      thunk_FUN_01a58e78();
    }
    FUN_026a19ac(lVar2);
    *(undefined1 *)(lVar2 + 0x28) = 1;
    if (*(long *)(lVar2 + 0x18) == 0) {
      lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf6060);
      Animancer_AnimancerState__OnSetIsPlaying(lVar4,*(undefined8 *)PTR_DAT_03cf6058);
    }
    else {
      uVar3 = FUN_0219b4e4(*(long *)(lVar2 + 0x18),*(undefined8 *)PTR_DAT_03cf6040);
      lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf6060);
      FUN_0221564c(lVar4,uVar3,*(undefined8 *)PTR_DAT_03cf6050);
    }
    puVar1 = PTR_DAT_03cf5e98;
    lVar6 = *(long *)PTR_DAT_03cf5e98;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
    if (lVar8 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar3 = **(undefined8 **)(lVar6 + 0xb8);
      lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf6038);
      FUN_0217c478(lVar8,uVar3,*(undefined8 *)PTR_DAT_03cf6078,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *plVar5 = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar8);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02219514(lVar4,lVar8,*(undefined8 *)PTR_DAT_03cf6048);
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf6070);
    FUN_0206af2c(lVar6,lVar4,*(undefined8 *)PTR_DAT_03cf6068);
    *plVar7 = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,lVar6);
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar2,0);
  }
  if (lVar2 != 0) {
    return *(undefined8 *)(lVar2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


