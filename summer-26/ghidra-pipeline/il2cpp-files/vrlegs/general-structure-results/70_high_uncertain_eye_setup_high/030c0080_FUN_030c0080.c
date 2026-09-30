/*
FUNCTION_NAME: FUN_030c0080
ENTRY_POINT: 030c0080
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x030c0228) */
/* WARNING: Removing unreachable block (ram,0x030c0220) */

void FUN_030c0080(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  char local_34 [4];
  
                    /* try { // try from 030c008c to 031c0097 has its CatchHandler @ 030bfe28 */
                    /* try { // try from 030c0098 to 031c009f has its CatchHandler @ 030c00a0 */
                    /* catch() { ... } // from try @ 030c0030 with catch @ 030c00a0
                       catch() { ... } // from try @ 030c0078 with catch @ 030c00a0
                       catch() { ... } // from try @ 030c0098 with catch @ 030c00a0 */
  if ((DAT_0412b8da & 1) == 0) {
    FUN_01ab69ac(System_Comparison<IXRInteractable>_TypeInfo);
    FUN_01ab69ac(System_Comparison<int>_TypeInfo);
    FUN_01ab69ac(System_Comparison<Level2Map>_TypeInfo);
    DAT_0412b8da = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar2,local_34,0);
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar3 = 4;
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Unity_XR_OpenVR_HandedViveTracker__get_primary
              (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)System_Comparison<int>_TypeInfo);
    uVar3 = 3;
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  if ((uVar3 | 4) == 4) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    local_34[0] = '\0';
    FUN_027e0bd8(uVar2,local_34,0);
    plVar4 = *(long **)(param_1 + 0x38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = *(uint *)(param_1 + 0x30);
    if (uVar3 == *(uint *)(plVar4 + 3)) {
      if ((int)(uVar3 + 0x40000000) < 0) {
        uVar2 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar2,*(undefined8 *)System_Comparison<Level2Map>_TypeInfo);
      }
      FUN_01f25968((undefined8 *)(param_1 + 0x38),uVar3 << 1,
                   *(undefined8 *)System_Comparison<IXRInteractable>_TypeInfo);
      uVar3 = *(uint *)(param_1 + 0x30);
      plVar4 = *(long **)(param_1 + 0x38);
      *(uint *)(param_1 + 0x30) = uVar3 + 1;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    else {
      *(uint *)(param_1 + 0x30) = uVar3 + 1;
    }
    if ((param_2 != 0) &&
       (lVar1 = thunk_FUN_01a89d6c(param_2,*(undefined8 *)(*plVar4 + 0x40)), lVar1 == 0)) {
      uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[(long)(int)uVar3 + 4] = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (plVar4 + (long)(int)uVar3 + 4,param_2);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
  }
  return;
}


