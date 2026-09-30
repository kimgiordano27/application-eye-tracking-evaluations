/*
FUNCTION_NAME: FUN_0359ba84
ENTRY_POINT: 0359ba84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_0359ba84(long param_1,undefined4 param_2,ulong param_3,int *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar2 = PTR_DAT_03cbdf88;
  if ((DAT_0412e0bf & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizei_TypeInfo);
    DAT_0412e0bf = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_036d35a8(param_1,0,0);
  if ((uVar7 & 1) != 0) goto LAB_0359bb40;
  if (param_1 != 0) {
    iVar5 = FUN_0359b3f8(param_1,param_2);
    *param_4 = iVar5;
    puVar4 = OVRPlugin_Sizei_TypeInfo;
    if (iVar5 != -1) {
      return param_1;
    }
    if (**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8) == 0) {
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e44d8(uVar9,*(undefined8 *)PTR_DAT_03cc8bb0);
      **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar9);
    }
    else {
      FUN_021e4d64(**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8),
                   *(undefined8 *)PTR_DAT_03ccbbf8);
    }
    uVar6 = FUN_0355ea04(param_1,0);
    puVar3 = PTR_DAT_03cc8e90;
    if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
      local_58 = uVar6;
      FUN_021e5f08(**(long **)(*(long *)puVar4 + 0xb8),&local_58,*(undefined8 *)PTR_DAT_03cc8e90);
      if ((param_3 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0xd8);
        if (((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) &&
           (lVar8 = FUN_0359bdc0(lVar8,param_2,1,param_4), *param_4 != -1)) {
          return lVar8;
        }
        lVar8 = FUN_03597474();
        if (lVar8 == 0) goto LAB_0359bdbc;
        uVar9 = *(undefined8 *)(lVar8 + 0x68);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar2);
        }
        uVar7 = FUN_036cee6c(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = FUN_03597474();
          if (lVar8 == 0) goto LAB_0359bdbc;
          lVar8 = FUN_0359bf6c(*(undefined8 *)(lVar8 + 0x68),param_2,1,param_4);
          if (*param_4 != -1) {
            return lVar8;
          }
        }
      }
      if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
        FUN_021e4d64(**(long **)(*(long *)puVar4 + 0xb8),*(undefined8 *)PTR_DAT_03ccbbf8);
        lVar8 = FUN_03597474();
        if (lVar8 != 0) {
          uVar1 = *(undefined4 *)(lVar8 + 0x7c);
          iVar5 = FUN_0359b484(param_1,uVar1);
          *param_4 = iVar5;
          if (iVar5 != -1) {
            return param_1;
          }
          if (**(long **)(*(long *)puVar4 + 0xb8) != 0) {
            local_54 = uVar6;
            FUN_021e5f08(**(long **)(*(long *)puVar4 + 0xb8),&local_54,*(undefined8 *)puVar3);
            if ((param_3 & 1) != 0) {
              lVar8 = *(long *)(param_1 + 0xd8);
              if (((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) &&
                 (lVar8 = FUN_0359b828(lVar8,uVar1,1,param_4), *param_4 != -1)) {
                return lVar8;
              }
              lVar8 = FUN_03597474();
              if (lVar8 == 0) goto LAB_0359bdbc;
              uVar9 = *(undefined8 *)(lVar8 + 0x68);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)puVar2);
              }
              uVar7 = FUN_036cee6c(uVar9,0,0);
              if ((uVar7 & 1) != 0) {
                lVar8 = FUN_03597474();
                if (lVar8 == 0) goto LAB_0359bdbc;
                lVar8 = FUN_0359b9d4(*(undefined8 *)(lVar8 + 0x68),uVar1,1,param_4);
                if (*param_4 != -1) {
                  return lVar8;
                }
              }
            }
LAB_0359bb40:
            *param_4 = -1;
            return 0;
          }
        }
      }
    }
  }
LAB_0359bdbc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


