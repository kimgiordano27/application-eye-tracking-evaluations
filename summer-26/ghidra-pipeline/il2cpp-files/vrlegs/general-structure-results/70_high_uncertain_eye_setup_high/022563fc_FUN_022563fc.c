/*
FUNCTION_NAME: FUN_022563fc
ENTRY_POINT: 022563fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022564d4) */

undefined8 FUN_022563fc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  char local_3c [4];
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_3c[0] = '\0';
  FUN_027e0bd8(uVar2,local_3c,0);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar1 + 0x20) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),&local_38,*(undefined8 *)(lVar1 + 0x28));
    uVar4 = 0;
    uVar5 = 3;
    uVar3 = local_38;
  }
  else {
    FUN_022661a4(lVar1,&local_38,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58)
                );
    uVar5 = 4;
    uVar3 = 0;
    uVar4 = local_38;
  }
  if (local_3c[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  if ((uVar5 | 4) == 4) {
    uVar3 = uVar4;
  }
  return uVar3;
}


