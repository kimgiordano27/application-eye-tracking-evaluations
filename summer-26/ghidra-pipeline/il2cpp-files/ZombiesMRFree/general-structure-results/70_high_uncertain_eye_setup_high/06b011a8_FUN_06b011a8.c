/*
FUNCTION_NAME: FUN_06b011a8
ENTRY_POINT: 06b011a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_06b011a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_06f6d668;
  if ((DAT_073ab3a2 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(OOBreset_<Reset>d__5_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_70_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_72_0_TypeInfo);
    DAT_073ab3a2 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_068be314(lVar4 == 0,0);
  lVar4 = FUN_06a33718(param_1,0);
  puVar2 = OVRPlugin_OVRP_1_6_0_TypeInfo;
  puVar1 = PTR_DAT_06f73f20;
  if (lVar4 != 0) {
                    /* try { // try from 06b01270 to 06c013ab has its CatchHandler @ 06b01270
                       catch() { ... } // from try @ 06b01270 with catch @ 06b01270
                       catch() { ... } // from try @ 06b014c4 with catch @ 06b01270
                       catch() { ... } // from try @ 06b016c8 with catch @ 06b01270
                       catch() { ... } // from try @ 06b016d0 with catch @ 06b01270
                       catch() { ... } // from try @ 06b01798 with catch @ 06b01270 */
    uVar3 = FUN_06a33718(param_1,0);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    thunk_FUN_03048534((long *)(param_1 + 0x20),uVar3);
    lVar4 = *(long *)(param_1 + 0x20);
    uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
    FUN_05a645d0(uVar3,param_1,*(undefined8 *)puVar2,0);
    puVar2 = OVRPlugin_OVRP_1_71_0_TypeInfo;
    if (lVar4 != 0) {
      FUN_06add348(lVar4,uVar3,0);
      lVar4 = *(long *)(param_1 + 0x20);
      uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
      FUN_05a645d0(uVar3,param_1,*(undefined8 *)puVar2,0);
      puVar2 = OVRPlugin_OVRP_1_72_0_TypeInfo;
      if (lVar4 != 0) {
        FUN_06add0d8(lVar4,uVar3,0);
        lVar4 = *(long *)(param_1 + 0x20);
        uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
        FUN_05a645d0(uVar3,param_1,*(undefined8 *)puVar2,0);
        puVar2 = OVRPlugin_OVRP_1_70_0_TypeInfo;
        puVar1 = OOBreset_<Reset>d__5_TypeInfo;
        if (lVar4 != 0) {
          FUN_06add210(lVar4,uVar3,0);
          lVar4 = *(long *)(param_1 + 0x20);
          uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
          FUN_06adc9d0(uVar3,param_1,*(undefined8 *)puVar2,0);
          if (lVar4 != 0) {
            FUN_06add4b8(lVar4,uVar3,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  return;
}


