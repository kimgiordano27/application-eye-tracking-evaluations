/*
FUNCTION_NAME: FUN_03562d18
ENTRY_POINT: 03562d18
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


void FUN_03562d18(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_03cbdf88;
  if ((DAT_0412df86 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df86 = 1;
  }
  lVar5 = param_1[0x26];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  uVar3 = FUN_036d35a8(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar5 = (**(code **)(*param_1 + 0x708))(param_1,param_1[0x22],*(undefined8 *)(*param_1 + 0x710))
    ;
    param_1[0x26] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x26,lVar5);
    lVar6 = param_1[0xe4];
    lVar5 = param_1[0x26];
    lVar7 = param_1[0x22];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((lVar7 == 0) ||
       (uVar4 = FUN_036996d8(lVar7,**(undefined4 **)(*(long *)puVar2 + 0xb8),0), lVar6 == 0))
    goto LAB_03562ed8;
    FUN_0390f4d8(lVar6,lVar5,uVar4,0);
  }
  plVar1 = param_1 + 0x22;
  param_1[0x22] = param_1[0x26];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
  lVar5 = param_1[0x22];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (lVar5 != 0) {
    uVar3 = FUN_03699d3c(lVar5,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x9c),0);
    if ((uVar3 & 1) == 0) {
LAB_03562ec0:
      *(undefined1 *)((long)param_1 + 0x307) = 1;
      return;
    }
    lVar5 = *plVar1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar5 != 0) {
      FUN_0369a6dc(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xf8),0);
      if (*plVar1 != 0) {
        FUN_0369a720(*plVar1,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x100),0);
        if (*plVar1 != 0) {
          FUN_0369a720(*plVar1,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x108),0);
          FUN_03560844(param_1);
          goto LAB_03562ec0;
        }
      }
    }
  }
LAB_03562ed8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


