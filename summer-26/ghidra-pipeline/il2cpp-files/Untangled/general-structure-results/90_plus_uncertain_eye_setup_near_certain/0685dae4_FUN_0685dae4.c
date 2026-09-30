/*
FUNCTION_NAME: FUN_0685dae4
ENTRY_POINT: 0685dae4
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0685dae4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_06d37040;
  if ((DAT_071d6b77 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_89_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37040);
    FUN_02f07e70(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_90_0_TypeInfo);
    FUN_02f07e70(System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo);
    DAT_071d6b77 = 1;
  }
  local_38 = 0;
  *(undefined4 *)(param_1 + 1000) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x404) = 0xffffffff;
  puVar4 = OVRPlugin_OVRP_1_89_0_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_068c963c(param_1,0);
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar5 = *(long *)puVar4;
  }
  FUN_068cbd7c(param_1,**(undefined8 **)(lVar5 + 0xb8),0);
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_068c963c(uVar6,0);
  *(undefined8 *)(param_1 + 0x408) = uVar6;
  thunk_FUN_02f411dc((long *)(param_1 + 0x408),uVar6);
  if (*(long *)(param_1 + 0x408) != 0) {
    FUN_068c920c(*(long *)(param_1 + 0x408),
                 *(undefined8 *)System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo,0);
    lVar5 = *(long *)(param_1 + 0x408);
    if (lVar5 != 0) {
      FUN_068cbd7c(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0);
      local_38 = *(undefined8 *)(param_1 + 0x378);
                    /* try { // try from 0685dc14 to 0695dd23 has its CatchHandler @ 0685dc14
                       catch() { ... } // from try @ 0685dc14 with catch @ 0685dc14
                       catch() { ... } // from try @ 0685e0d8 with catch @ 0685dc14
                       catch() { ... } // from try @ 0685e3f4 with catch @ 0685dc14
                       catch() { ... } // from try @ 0685e4bc with catch @ 0685dc14
                       catch() { ... } // from try @ 0685e5d4 with catch @ 0685dc14 */
      FUN_068d03d8(&local_38,*(undefined8 *)(param_1 + 0x408),0);
      uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
      FUN_068c963c(uVar6,0);
      plVar1 = (long *)(param_1 + 0x3f8);
      *(undefined8 *)(param_1 + 0x3f8) = uVar6;
      thunk_FUN_02f411dc(plVar1,uVar6);
      if (*(long *)(param_1 + 0x3f8) != 0) {
        FUN_068c920c(*(long *)(param_1 + 0x3f8),*(undefined8 *)OVRPlugin_OVRP_1_90_0_TypeInfo,0);
        if (*plVar1 != 0) {
          FUN_068cbd7c(*plVar1,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28),0);
          local_38 = *(undefined8 *)(param_1 + 0x378);
          FUN_068d03d8(&local_38,*(undefined8 *)(param_1 + 0x3f8),0);
          uVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
          FUN_068c963c(uVar6,0);
          plVar2 = (long *)(param_1 + 0x3f0);
          *(undefined8 *)(param_1 + 0x3f0) = uVar6;
          thunk_FUN_02f411dc(plVar2,uVar6);
          if (*(long *)(param_1 + 0x3f0) != 0) {
            FUN_068c920c(*(long *)(param_1 + 0x3f0),*(undefined8 *)OVRPlugin_OVRP_1_8_0_TypeInfo,0);
            if (*plVar2 != 0) {
              FUN_068cbd7c(*plVar2,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
              if (*plVar1 != 0) {
                FUN_068d0324(*plVar1,*plVar2,0);
                    /* try { // try from 0685dd24 to 0695dd2f has its CatchHandler @ 0685e580 */
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


