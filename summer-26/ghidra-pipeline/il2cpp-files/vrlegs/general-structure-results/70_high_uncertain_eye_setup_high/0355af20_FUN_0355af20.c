/*
FUNCTION_NAME: FUN_0355af20
ENTRY_POINT: 0355af20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_0355af20(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  
  puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
                    /* try { // try from 0355af30 to 0365af37 has its CatchHandler @ 0355afb0 */
  if ((DAT_0412df49 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(OVRPlugin_OVRP_1_96_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cfd918);
    FUN_01ab69ac(OVRPlugin_OverlayShape_TypeInfo);
    FUN_01ab69ac(OVRPlugin_PoseStatef_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Posef_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc3930);
    DAT_0412df49 = 1;
  }
  puVar2 = PTR_DAT_03cbdf88;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03598308(0);
  plVar10 = param_1 + 0x1f;
  lVar11 = *plVar10;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_036d35a8(lVar11,0,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar10 == 0) goto LAB_0355b570;
    lVar11 = FUN_03568ac0(*plVar10,0);
    if (lVar11 == 0) {
      if (*plVar10 == 0) goto LAB_0355b570;
      FUN_03568878(*plVar10,0);
    }
    lVar11 = param_1[0x22];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    plVar1 = param_1 + 0x22;
    uVar7 = FUN_036d35a8(lVar11,0,0);
    if ((uVar7 & 1) == 0) {
      lVar11 = *plVar1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar11 == 0) goto LAB_0355b570;
      uVar8 = FUN_036996d8(lVar11,**(undefined4 **)(*(long *)puVar3 + 0xb8),0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar2);
      }
      uVar7 = FUN_036d35a8(uVar8,0,0);
      if ((uVar7 & 1) != 0) goto LAB_0355b18c;
      if ((*plVar10 == 0) || (lVar11 = FUN_03568ae4(*plVar10,0), lVar11 == 0)) goto LAB_0355b570;
      iVar5 = FUN_036d3364(lVar11,0);
      lVar11 = *plVar1;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar3);
      }
      if ((lVar11 == 0) ||
         (lVar11 = FUN_036996d8(lVar11,**(undefined4 **)(*(long *)puVar3 + 0xb8),0), lVar11 == 0))
      goto LAB_0355b570;
      iVar6 = FUN_036d3364(lVar11,0);
      if (iVar5 != iVar6) goto LAB_0355b18c;
    }
    else {
LAB_0355b18c:
      if (*plVar10 == 0) goto LAB_0355b570;
      uVar8 = *(undefined8 *)(*plVar10 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = FUN_036d35a8(uVar8,0,0);
      if ((uVar7 & 1) == 0) {
        if (*plVar10 == 0) goto LAB_0355b570;
        *plVar1 = *(long *)(*plVar10 + 0x20);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1);
      }
      else {
        lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,5);
        if (lVar11 == 0) goto LAB_0355b570;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0355b574;
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_96_0_TypeInfo;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        if (*plVar10 == 0) goto LAB_0355b570;
        uVar8 = FUN_036d3824(*plVar10,0);
        if (*(uint *)(lVar11 + 0x18) < 2) {
LAB_0355b574:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined8 *)(lVar11 + 0x28) = uVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar11 + 0x28),uVar8);
        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0355b574;
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)OVRPlugin_Posef_TypeInfo;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar9 = FUN_036cbbbc(param_1,0);
        if (lVar9 == 0) goto LAB_0355b570;
        uVar8 = FUN_036d3824(lVar9,0);
        if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_0355b574;
        *(undefined8 *)(lVar11 + 0x38) = uVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar11 + 0x38),uVar8);
        if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_0355b574;
        *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_97_0_TypeInfo;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar8 = FUN_025be564(lVar11,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar8,param_1,0);
      }
    }
    lVar11 = *plVar1;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar11 == 0) goto LAB_0355b570;
    FUN_0369d098(0x40800000,lVar11,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x118),0);
    if (*plVar1 == 0) goto LAB_0355b570;
    iVar5 = FUN_0369ade4(*plVar1,0);
    if (iVar5 != 1) goto LAB_0355b4fc;
  }
  else {
    uVar8 = FUN_03597650(0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar2);
    }
    uVar7 = FUN_036cee6c(uVar8,0,0);
    if ((uVar7 & 1) == 0) {
      lVar11 = FUN_01fe050c(*(undefined8 *)OVRPlugin_PoseStatef_TypeInfo,
                            *(undefined8 *)OVRPlugin_OVRP_1_95_0_TypeInfo);
    }
    else {
      lVar11 = FUN_03597650(0);
    }
    *plVar10 = lVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar11);
    lVar11 = *plVar10;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_036d35a8(lVar11,0,0);
    if ((uVar7 & 1) != 0) {
      lVar11 = FUN_036cbbbc(param_1,0);
      if (lVar11 != 0) {
        uVar8 = FUN_036d3824(lVar11,0);
        uVar8 = FUN_025bdc88(*(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo,uVar8,
                             *(undefined8 *)PTR_DAT_03cc3930,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar8,param_1,0);
        return;
      }
      goto LAB_0355b570;
    }
    if (*plVar10 == 0) goto LAB_0355b570;
    lVar11 = FUN_03568ac0(*plVar10,0);
    if (lVar11 == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367a6ec(*(undefined8 *)OVRPlugin_OverlayShape_TypeInfo,0);
    }
    if (*plVar10 == 0) goto LAB_0355b570;
    param_1[0x22] = *(long *)(*plVar10 + 0x20);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x22);
    if (param_1[0x22] == 0) goto LAB_0355b570;
    FUN_0369d098(0,param_1[0x22],*(undefined8 *)PTR_DAT_03cfd918,0);
    lVar11 = param_1[0x22];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar11 == 0) goto LAB_0355b570;
    FUN_0369d098(0x40800000,lVar11,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x118),0);
  }
  if (param_1[0xdd] != 0) {
    FUN_03692cb8(param_1[0xdd],0,0);
    if (param_1[0xdd] != 0) {
      FUN_036920c0(param_1[0xdd],0,0);
LAB_0355b4fc:
      uVar12 = (**(code **)(*param_1 + 0x778))(param_1,*(undefined8 *)(*param_1 + 0x780));
      *(undefined4 *)(param_1 + 0xc3) = uVar12;
      lVar11 = param_1[0x22];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      bVar4 = FUN_0359924c(lVar11,0);
      *(byte *)((long)param_1 + 0x307) = bVar4 & 1;
      FUN_035914e0(param_1,param_1[0x1f],0);
                    /* WARNING: Could not recover jumptable at 0x0355b56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      return;
    }
  }
LAB_0355b570:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


