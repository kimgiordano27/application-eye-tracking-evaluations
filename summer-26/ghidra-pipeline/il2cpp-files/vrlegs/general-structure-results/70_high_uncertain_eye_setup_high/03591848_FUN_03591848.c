/*
FUNCTION_NAME: FUN_03591848
ENTRY_POINT: 03591848
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_5
*/


long FUN_03591848(long param_1,undefined4 param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = OVRPlugin_Size3f_TypeInfo;
  if ((DAT_0412e07d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Size3f_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e07d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar5 = FUN_03570fc4(param_2,param_3,0,param_4,param_5,param_6,0);
  if (lVar5 != 0) {
    return lVar5;
  }
  if (param_3 != 0) {
    lVar5 = *(long *)(param_3 + 0x138);
    if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar5 = FUN_035714e4(param_2,param_3,lVar5,1,param_4,param_5,param_6,0);
      if (lVar5 != 0) {
        return lVar5;
      }
    }
    iVar3 = FUN_0355ea04(param_3,0);
    if (*(long *)(param_1 + 0xf8) != 0) {
      iVar4 = FUN_0355ea04(*(long *)(param_1 + 0xf8),0);
      if (iVar3 != iVar4) {
        uVar8 = *(undefined8 *)(param_1 + 0xf8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar5 = FUN_03570fc4(param_2,uVar8,0,param_4,param_5,param_6,0);
        if (lVar5 != 0) {
          *(undefined4 *)(param_1 + 0x120) = 0;
          puVar2 = OVRPlugin_OVRP_1_31_0_TypeInfo;
          lVar7 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *(long *)puVar2;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) != 0) {
              *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(lVar7 + 0x38);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x118);
              return lVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          goto LAB_03591c2c;
        }
        if (*(long *)(param_1 + 0xf8) == 0) goto LAB_03591c2c;
        lVar5 = *(long *)(*(long *)(param_1 + 0xf8) + 0x138);
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x18))) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          lVar5 = FUN_035714e4(param_2,param_3,lVar5,1,param_4,param_5,param_6,0);
          if (lVar5 != 0) {
            return lVar5;
          }
        }
      }
      puVar1 = PTR_DAT_03cbdf88;
      uVar8 = *(undefined8 *)(param_1 + 0x1b0);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_036cee6c(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x1b0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar5 = FUN_03571740(param_2,uVar8,1,0);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
      lVar5 = FUN_03597770(0);
      if (lVar5 != 0) {
        lVar5 = FUN_03597770(0);
        if (lVar5 == 0) goto LAB_03591c2c;
        if (0 < *(int *)(lVar5 + 0x18)) {
          uVar8 = FUN_03597770(0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar2);
          }
          lVar5 = FUN_035714e4(param_2,param_3,uVar8,1,param_4,param_5,param_6,0);
          if (lVar5 != 0) {
            return lVar5;
          }
        }
      }
      uVar8 = FUN_03597650(0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
      }
      uVar6 = FUN_036cee6c(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = FUN_03597650(0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar2);
        }
        lVar5 = FUN_03570fc4(param_2,uVar8,1,param_4,param_5,param_6,0);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
      uVar8 = FUN_035977a8(0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
      }
      uVar6 = FUN_036cee6c(uVar8,0,0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      uVar8 = FUN_035977a8(0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar2);
      }
      lVar5 = FUN_03571740(param_2,uVar8,1,0);
      return lVar5;
    }
  }
LAB_03591c2c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


