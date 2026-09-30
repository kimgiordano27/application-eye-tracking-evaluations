/*
FUNCTION_NAME: UnityEngine.HumanDescription$$get_armStretch
ENTRY_POINT: 03558c58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_HumanDescription__get_armStretch
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412df2f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc0ce0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_7_0_TypeInfo);
    DAT_0412df2f = 1;
  }
  uVar2 = FUN_035588d4(param_3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  uVar3 = FUN_036d35a8(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_036cbbbc(param_3,0);
    if (lVar4 == 0) goto LAB_03558db0;
    uVar2 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03cc0ce0);
    *(undefined8 *)(param_3 + 0x68) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  puVar1 = OVRPlugin_OVRP_1_7_0_TypeInfo;
  if (*(long *)(param_3 + 0x68) != 0) {
    fVar5 = (float)FUN_036db934(*(long *)(param_3 + 0x68),0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    fVar5 = fVar5 - **(float **)(lVar4 + 0xb8);
    param_2 = param_2 - (*(float **)(lVar4 + 0xb8))[1];
    if (DAT_00d38798 <= fVar5 * fVar5 + param_2 * param_2) {
      if (*(long *)(param_3 + 0x68) == 0) goto LAB_03558db0;
      FUN_036db934(*(long *)(param_3 + 0x68),0);
      UnityEngine_Avatar__Internal_GetZYPostQ(param_3);
    }
    if (*(long *)(param_3 + 0x68) != 0) {
      FUN_036dba50(*(long *)(param_3 + 0x68),0);
      FUN_03558440(param_3);
      *(undefined1 *)(param_3 + 0x20) = 1;
      FUN_03558590(param_3);
      return;
    }
  }
LAB_03558db0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


