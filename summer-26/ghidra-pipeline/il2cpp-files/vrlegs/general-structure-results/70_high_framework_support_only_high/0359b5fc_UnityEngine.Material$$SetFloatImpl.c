/*
FUNCTION_NAME: UnityEngine.Material$$SetFloatImpl
ENTRY_POINT: 0359b5fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


long UnityEngine_Material__SetFloatImpl(long param_1,undefined4 param_2,ulong param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e0bc & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Sizei_TypeInfo);
    DAT_0412e0bc = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036d35a8(param_1,0,0);
  if ((uVar5 & 1) != 0) goto LAB_0359b6b4;
  if (param_1 != 0) {
    iVar3 = FUN_0359b484(param_1,param_2);
    *param_4 = iVar3;
    puVar2 = OVRPlugin_Sizei_TypeInfo;
    if (iVar3 != -1) {
      return param_1;
    }
    if (**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8) == 0) {
      uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e44d8(uVar8,*(undefined8 *)PTR_DAT_03cc8bb0);
      **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar8);
    }
    else {
      FUN_021e4d64(**(long **)(*(long *)OVRPlugin_Sizei_TypeInfo + 0xb8),
                   *(undefined8 *)PTR_DAT_03ccbbf8);
    }
    uVar4 = FUN_036d3364(param_1,0);
    if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
      local_44 = uVar4;
      FUN_021e5f08(**(long **)(*(long *)puVar2 + 0xb8),&local_44,*(undefined8 *)PTR_DAT_03cc8e90);
      if ((param_3 & 1) == 0) {
LAB_0359b6b4:
        *param_4 = -1;
        return 0;
      }
      lVar6 = *(long *)(param_1 + 0xd8);
      if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x18))) {
        lVar6 = FUN_0359b828(lVar6,param_2,1,param_4);
        return lVar6;
      }
      lVar6 = FUN_03597474();
      if (lVar6 != 0) {
        lVar7 = *(long *)puVar1;
        uVar8 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar7);
        }
        uVar5 = FUN_036cee6c(uVar8,0,0);
        if ((uVar5 & 1) == 0) goto LAB_0359b6b4;
        lVar6 = FUN_03597474();
        if (lVar6 != 0) {
          lVar6 = FUN_0359b9d4(*(undefined8 *)(lVar6 + 0x68),param_2,1,param_4);
          return lVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


