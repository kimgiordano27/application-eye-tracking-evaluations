/*
FUNCTION_NAME: FUN_02187694
ENTRY_POINT: 02187694
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


/* WARNING: Removing unreachable block (ram,0x021877a4) */

void FUN_02187694(long param_1,long *param_2,undefined4 *param_3,long *param_4,undefined4 *param_5,
                 long param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char local_44 [4];
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar3,local_44,0);
  lVar4 = *(long *)(param_1 + 0x20);
  thunk_FUN_01a4b338();
  *param_2 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2,lVar4);
  lVar4 = *(long *)(param_1 + 0x18);
  thunk_FUN_01a4b338();
  *param_4 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,lVar4);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar2 = *param_4;
    do {
      *(undefined1 *)(lVar4 + 0x19c) = 1;
      if (lVar4 == lVar2) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207909c(lVar2,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb8));
        if (*param_2 != 0) {
          uVar1 = *(undefined4 *)(*param_2 + 0x9c);
          thunk_FUN_01a4b338();
          *param_3 = uVar1;
          if (*param_4 != 0) {
            uVar1 = *(undefined4 *)(*param_4 + 0x11c);
            thunk_FUN_01a4b338();
            *param_5 = uVar1;
            if (local_44[0] != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
            }
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *(long *)(lVar4 + 0x1a0);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


