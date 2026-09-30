/*
FUNCTION_NAME: UnityEngine.Avatar$$Internal_GetZYPostQ_Injected
ENTRY_POINT: 03558a68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Avatar__Internal_GetZYPostQ_Injected(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x20 + 0xf2d) = 1;
  lVar4 = FUN_036cbbbc();
  puVar3 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  puVar2 = PTR_DAT_03cd72e0;
  puVar1 = PTR_DAT_03cbe438;
  if (lVar4 != 0) {
    uVar5 = FUN_036d3824(lVar4,0);
    uVar5 = FUN_025bdc88(*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    FUN_0367b470(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


