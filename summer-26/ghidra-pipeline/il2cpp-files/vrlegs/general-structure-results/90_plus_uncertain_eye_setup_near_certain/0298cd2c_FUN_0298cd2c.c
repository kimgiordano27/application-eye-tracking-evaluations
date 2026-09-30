/*
FUNCTION_NAME: FUN_0298cd2c
ENTRY_POINT: 0298cd2c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0298cf14) */
/* WARNING: Removing unreachable block (ram,0x0298ce60) */

void FUN_0298cd2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  char local_34 [4];
  char local_28 [4];
  char local_24 [4];
  
  if ((DAT_04127d14 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d07978);
    FUN_01ab69ac(PTR_DAT_03d07980);
    DAT_04127d14 = 1;
  }
  local_28[0] = '\0';
  local_34[0] = '\0';
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_029979b4(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28));
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(param_1 + 0x18),uVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0299ec7c(*(long *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      if (*(long *)(param_1 + 0x110) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x48) = 0;
        puVar1 = PTR_DAT_03d07978;
        uVar2 = *(undefined8 *)(param_1 + 0x100);
        local_24[0] = '\0';
        FUN_027e0bd8(uVar2,local_24,0);
        if (*(long *)(param_1 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02210f9c(*(long *)(param_1 + 0x100),*(undefined8 *)puVar1);
        if (local_24[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x108);
        local_28[0] = '\0';
        FUN_027e0bd8(uVar2,local_28,0);
        if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02210f9c(*(long *)(param_1 + 0x108),*(undefined8 *)puVar1);
        if (local_28[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x60);
        local_34[0] = '\0';
        FUN_027e0bd8(uVar2,local_34,0);
        if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_022658ac(*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_03d07980);
        if (local_34[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
        }
        *(undefined1 *)(param_1 + 0x40) = 0;
        if (*(long *)(param_1 + 0xc0) != 0) {
          FUN_02f0cf64(*(long *)(param_1 + 0xc0),0);
          if (*(long *)(param_1 + 0xc0) != 0) {
            FUN_02f0cc48(*(long *)(param_1 + 0xc0),0);
            *(undefined8 *)(param_1 + 0xf0) = 0;
            *(undefined2 *)(param_1 + 0xdc) = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(param_1 + 0xf0),0);
            uVar2 = DAT_00d37b40;
            *(undefined1 *)(param_1 + 0x70) = 0;
            *(undefined4 *)(param_1 + 0x6c) = 0;
            *(undefined8 *)(param_1 + 0x74) = uVar2;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


