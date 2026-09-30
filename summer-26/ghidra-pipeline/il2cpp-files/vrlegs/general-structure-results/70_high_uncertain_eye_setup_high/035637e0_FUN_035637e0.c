/*
FUNCTION_NAME: FUN_035637e0
ENTRY_POINT: 035637e0
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


/* WARNING: Removing unreachable block (ram,0x0356396c) */

void FUN_035637e0(float param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_03cbdf88;
  if ((DAT_0412df8c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    DAT_0412df8c = 1;
  }
  lVar8 = param_2[0x26];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  plVar1 = param_2 + 0x26;
  uVar6 = FUN_036cee6c(lVar8,0,0);
  if ((uVar6 & 1) == 0) {
LAB_03563890:
    lVar8 = *plVar1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar6 = FUN_036d35a8(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = (**(code **)(*param_2 + 0x708))
                        (param_2,param_2[0x22],*(undefined8 *)(*param_2 + 0x710));
      param_2[0x26] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar8);
      lVar8 = param_2[0x26];
      goto LAB_035638f8;
    }
  }
  else {
    if (param_2[0x22] == 0) goto LAB_035639bc;
    iVar4 = FUN_036d3364(param_2[0x22],0);
    if (*plVar1 == 0) goto LAB_035639bc;
    iVar5 = FUN_036d3364(*plVar1,0);
    if (iVar4 == iVar5) goto LAB_03563890;
    lVar8 = param_2[0x26];
LAB_035638f8:
    param_2[0x22] = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2 + 0x22);
    lVar8 = param_2[0xe4];
    lVar9 = param_2[0x22];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((lVar9 == 0) ||
       (uVar7 = FUN_036996d8(lVar9,**(undefined4 **)(*(long *)puVar3 + 0xb8),0), lVar8 == 0))
    goto LAB_035639bc;
    FUN_0390f4d8(lVar8,lVar9,uVar7,0);
  }
  lVar8 = param_2[0x22];
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (lVar8 != 0) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    FUN_0369d118(param_1,lVar8,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c),0);
    uVar10 = (**(code **)(*param_2 + 0x778))(param_2,*(undefined8 *)(*param_2 + 0x780));
    *(undefined4 *)(param_2 + 0xc3) = uVar10;
    return;
  }
LAB_035639bc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


