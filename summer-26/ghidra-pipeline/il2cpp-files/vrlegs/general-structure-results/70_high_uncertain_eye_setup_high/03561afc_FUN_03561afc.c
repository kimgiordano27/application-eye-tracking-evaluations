/*
FUNCTION_NAME: FUN_03561afc
ENTRY_POINT: 03561afc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_03561afc(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long local_58;
  
  if ((DAT_0412df7f & 1) == 0) {
    FUN_01ab69ac(OVRSpatialAnchor_<>c__DisplayClass54_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d0d5f8);
    FUN_01ab69ac(PTR_DAT_03cc44e8);
    FUN_01ab69ac(PTR_DAT_03d05d90);
    FUN_01ab69ac(PTR_DAT_03cc0ce0);
    FUN_01ab69ac(PTR_DAT_03cd09e8);
    FUN_01ab69ac(PTR_DAT_03cbe000);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_93_0_TypeInfo);
    DAT_0412df7f = 1;
  }
  lVar4 = FUN_037b4188(param_1,0);
  param_1[0xe5] = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xe5);
  *(undefined1 *)((long)param_1 + 0x305) = 1;
  lVar4 = FUN_036cbbbc(param_1,0);
  puVar2 = PTR_DAT_03cbdf88;
  if (lVar4 != 0) {
    FUN_01f7e3e4(lVar4,&local_58,*(undefined8 *)PTR_DAT_03cd09e8);
    plVar11 = param_1 + 0x70;
    param_1[0x70] = local_58;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11);
    lVar4 = param_1[0x70];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036d35a8(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = FUN_036cbbbc(param_1,0);
      if (lVar4 == 0) goto LAB_03561f10;
      lVar4 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03cc0ce0);
      *plVar11 = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar4);
    }
    FUN_01f49730(param_1,&local_58,*(undefined8 *)PTR_DAT_03d0d5f8);
    plVar11 = param_1 + 0xe4;
    param_1[0xe4] = local_58;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11);
    lVar4 = param_1[0xe4];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036d35a8(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = FUN_036cbbbc(param_1,0);
      if (lVar4 == 0) goto LAB_03561f10;
      lVar4 = FUN_01f7e2fc(lVar4,*(undefined8 *)PTR_DAT_03d05d90);
      *plVar11 = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar4);
    }
    lVar4 = param_1[0x74];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = FUN_036d35a8(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      plVar11 = param_1 + 0x74;
      lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
      FUN_036a1b5c(lVar4,0);
      *plVar11 = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar4);
      if (*plVar11 == 0) goto LAB_03561f10;
      FUN_036d46a4(*plVar11,0x3d,0);
      lVar4 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_0_1_1_TypeInfo);
      FUN_0359fdc4(lVar4,param_1,0);
      param_1[0x6d] = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x6d,lVar4);
    }
    puVar3 = OVRPlugin_OVRP_1_92_0_TypeInfo;
    puVar2 = PTR_DAT_03cc44e8;
    FUN_03591254(param_1,0);
    (**(code **)(*param_1 + 0x698))(param_1,*(undefined8 *)(*param_1 + 0x6a0));
    if (param_1[0x8f] == 0) {
      lVar4 = FUN_01ab6a94(*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo,(int)param_1[0xe7]);
      param_1[0x8f] = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x8f,lVar4);
    }
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_0359c584(lVar4,0);
    *(undefined1 *)(lVar4 + 0x10) = 1;
    *(undefined4 *)(lVar4 + 0x2c) = 0x3f800000;
    param_1[0xc9] = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xc9,lVar4);
    *(undefined1 *)((long)param_1 + 0x734) = 1;
    lVar4 = FUN_01f49f50(param_1,*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(lVar4 + 0x18);
      if (uVar5 != 0) {
        if (param_1[0xe1] == 0) goto LAB_03561f10;
        iVar1 = (int)uVar5 + 1;
        if (*(int *)(param_1[0xe1] + 0x18) < iVar1) {
          FUN_01f25968(param_1 + 0xe1,iVar1,
                       *(undefined8 *)OVRSpatialAnchor_<>c__DisplayClass54_0_TypeInfo);
        }
        if (0 < (int)uVar5) {
          uVar9 = 0;
          lVar10 = 0x28;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_03561f0c:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar11 = (long *)param_1[0xe1];
            if (plVar11 == (long *)0x0) goto LAB_03561f10;
            lVar8 = *(long *)(lVar4 + 0x20 + uVar9 * 8);
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar7,0);
            }
            uVar9 = uVar9 + 1;
            if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_03561f0c;
            *(long *)((long)plVar11 + lVar10) = lVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)((long)plVar11 + lVar10),lVar8);
            lVar10 = lVar10 + 8;
          } while ((uVar5 & 0xffffffff) != uVar9);
        }
      }
      *(undefined1 *)(param_1 + 0x6e) = 1;
      *(undefined1 *)((long)param_1 + 0x3fd) = 1;
      return;
    }
  }
LAB_03561f10:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


