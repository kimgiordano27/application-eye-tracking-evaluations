/*
FUNCTION_NAME: UnityEngine.HumanDescription$$set_hasTranslationDoF
ENTRY_POINT: 03558c90
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_HumanDescription__set_hasTranslationDoF
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar5;
  
  FUN_01ab69ac(*(undefined8 *)(param_3 + 0x938));
  *(undefined1 *)(unaff_x21 + 0xf2f) = 1;
  uVar2 = FUN_035588d4();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x20);
  }
  uVar3 = FUN_036d35a8(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_036cbbbc();
    if (lVar4 == 0) goto LAB_03558db0;
    uVar2 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03cc0ce0);
    *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  puVar1 = OVRPlugin_OVRP_1_7_0_TypeInfo;
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    fVar5 = (float)FUN_036db934(*(long *)(unaff_x19 + 0x68),0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    fVar5 = fVar5 - **(float **)(lVar4 + 0xb8);
    param_2 = param_2 - (*(float **)(lVar4 + 0xb8))[1];
    if (DAT_00d38798 <= fVar5 * fVar5 + param_2 * param_2) {
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03558db0;
      FUN_036db934(*(long *)(unaff_x19 + 0x68),0);
      UnityEngine_Avatar__Internal_GetZYPostQ();
    }
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_036dba50(*(long *)(unaff_x19 + 0x68),0);
      FUN_03558440();
      *(undefined1 *)(unaff_x19 + 0x20) = 1;
      FUN_03558590();
      return;
    }
  }
LAB_03558db0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


