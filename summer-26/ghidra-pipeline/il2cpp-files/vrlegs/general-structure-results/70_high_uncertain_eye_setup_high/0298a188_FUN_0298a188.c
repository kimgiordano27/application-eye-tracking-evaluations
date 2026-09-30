/*
FUNCTION_NAME: FUN_0298a188
ENTRY_POINT: 0298a188
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298a2d0) */
/* WARNING: Removing unreachable block (ram,0x0298a2ec) */

bool FUN_0298a188(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_48 [4];
  char local_44 [4];
  
  if ((DAT_04127cb5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d077f8);
    DAT_04127cb5 = 1;
  }
  local_48[0] = '\0';
  if (param_2 != 0 && -1 < (int)param_3) {
    if (param_3 == 0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_2 + 0x10),0);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    local_44[0] = '\0';
    FUN_027e0bd8(uVar2,local_44,0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar3 = *(undefined8 *)(lVar1 + (ulong)param_3 * 8 + 0x20);
    local_48[0] = '\0';
    FUN_027e0bd8(uVar3,local_48,0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar1 = *(long *)(lVar1 + (ulong)param_3 * 8 + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02093610(lVar1,param_2,*(undefined8 *)PTR_DAT_03d077f8);
    if (local_48[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
  }
  return param_2 != 0 && -1 < (int)param_3;
}


