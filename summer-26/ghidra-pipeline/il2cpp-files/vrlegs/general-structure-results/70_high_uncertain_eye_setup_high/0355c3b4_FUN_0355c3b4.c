/*
FUNCTION_NAME: FUN_0355c3b4
ENTRY_POINT: 0355c3b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0355c3fc) */

void FUN_0355c3b4(float param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((DAT_0412df55 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df55 = 1;
  }
  puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (param_2[0xdd] != 0) {
    lVar4 = FUN_03693b80(param_2[0xdd],0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar6);
    }
    puVar2 = PTR_DAT_03cbdf88;
    if (lVar4 != 0) {
      FUN_0369d118(param_1,lVar4,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c),0);
      lVar4 = param_2[0x26];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      plVar1 = param_2 + 0x26;
      uVar5 = FUN_036d35a8(lVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (param_2[0xdd] == 0) goto LAB_0355c504;
        lVar4 = FUN_03693b80(param_2[0xdd],0);
        *plVar1 = lVar4;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar4);
      }
      if (param_2[0xdd] != 0) {
        lVar4 = FUN_03693b80(param_2[0xdd],0);
        param_2[0x26] = lVar4;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar4);
        param_2[0x22] = param_2[0x26];
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x22);
        uVar7 = (**(code **)(*param_2 + 0x778))(param_2,*(undefined8 *)(*param_2 + 0x780));
        *(undefined4 *)(param_2 + 0xc3) = uVar7;
        return;
      }
    }
  }
LAB_0355c504:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


