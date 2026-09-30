/*
FUNCTION_NAME: FUN_026e4cf4
ENTRY_POINT: 026e4cf4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026e4f00) */
/* WARNING: Removing unreachable block (ram,0x026e4f04) */
/* WARNING: Removing unreachable block (ram,0x026e4f08) */
/* WARNING: Removing unreachable block (ram,0x026e4f70) */

void FUN_026e4cf4(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char local_38 [4];
  int local_34;
  
  if ((DAT_041246a3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc12b8);
    FUN_01ab69ac(PTR_DAT_03cc4f10);
    FUN_01ab69ac(PTR_DAT_03cef940);
    DAT_041246a3 = 1;
  }
  local_34 = 0;
  local_38[0] = '\0';
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (uVar3 = FUN_02670478(*(long *)(param_1 + 0x38),0), (uVar3 & 1) != 0)) ||
     (FUN_026e2bbc(param_1), *(char *)(param_1 + 0x54) == '\0')) {
LAB_026e4dc8:
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar1 = PTR_DAT_03cc12b8;
    if ((param_2 & 1) != 0) {
      plVar7 = (long *)(param_1 + 0x28);
      if (*plVar7 != 0) {
        if (*(int *)(*plVar7 + 0x18) == 0x1000) {
          lVar4 = *(long *)PTR_DAT_03cc12b8;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *(long *)puVar1;
          }
          plVar6 = *(long **)(lVar4 + 0xb8);
          if (*plVar6 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
            }
            lVar9 = plVar6[1];
            local_38[0] = '\0';
            FUN_027e0bd8(lVar9,local_38,0);
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar4 = *(long *)puVar1;
            }
            plVar6 = *(long **)(lVar4 + 0xb8);
            if (*plVar6 == 0) {
              lVar10 = *plVar7;
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                plVar6 = *(long **)(*(long *)puVar1 + 0xb8);
              }
              *plVar6 = lVar10;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar10);
            }
            if (local_38[0] != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(lVar9,0);
            }
          }
        }
        *plVar7 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7,0);
        if (*(int *)(*(long *)PTR_DAT_03cc4f10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027a9524(param_1,0);
      }
    }
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_03cef940 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    thunk_FUN_01a3e944(uVar8,&local_34);
    if (local_34 != 0) {
      uVar8 = FUN_026e1984(param_1,*(undefined8 *)(param_1 + 0x30));
      iVar2 = local_34;
      thunk_FUN_01a6ca08(PTR_DAT_03cef940);
      FUN_01876390();
      uVar8 = FUN_026e19fc(uVar8,iVar2);
      uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cf7480);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar8,uVar5);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_026706bc(*(long *)(param_1 + 0x38),0);
      goto LAB_026e4dc8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


