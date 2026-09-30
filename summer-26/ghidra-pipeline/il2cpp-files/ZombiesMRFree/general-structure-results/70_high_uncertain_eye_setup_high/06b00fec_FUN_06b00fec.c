/*
FUNCTION_NAME: FUN_06b00fec
ENTRY_POINT: 06b00fec
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


void FUN_06b00fec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_073ab3a3 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f73f20);
    FUN_02fe925c(OOBreset_<Reset>d__5_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_70_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_72_0_TypeInfo);
    DAT_073ab3a3 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_6_0_TypeInfo;
  puVar1 = PTR_DAT_06f73f20;
  plVar4 = (long *)(param_1 + 0x20);
  if (*plVar4 != 0) {
    FUN_06af8d08(param_1);
    lVar5 = *(long *)(param_1 + 0x20);
    uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
    FUN_05a645d0(uVar3,param_1,*(undefined8 *)puVar2,0);
    puVar2 = OVRPlugin_OVRP_1_71_0_TypeInfo;
    if (lVar5 != 0) {
      FUN_06add3e4(lVar5,uVar3,0);
      lVar5 = *(long *)(param_1 + 0x20);
      uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
      FUN_05a645d0(uVar3,param_1,*(undefined8 *)puVar2,0);
      puVar2 = OVRPlugin_OVRP_1_72_0_TypeInfo;
      if (lVar5 != 0) {
        FUN_06add174(lVar5,uVar3,0);
        lVar5 = *(long *)(param_1 + 0x20);
        uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
        FUN_05a645d0(uVar3,param_1,*(undefined8 *)puVar2,0);
        puVar2 = OVRPlugin_OVRP_1_70_0_TypeInfo;
        puVar1 = OOBreset_<Reset>d__5_TypeInfo;
        if (lVar5 != 0) {
          FUN_06add2ac(lVar5,uVar3,0);
          lVar5 = *(long *)(param_1 + 0x20);
          uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
          FUN_06adc9d0(uVar3,param_1,*(undefined8 *)puVar2,0);
          if (lVar5 != 0) {
            FUN_06add554(lVar5,uVar3,0);
            *plVar4 = 0;
            thunk_FUN_03048534(plVar4,0);
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


