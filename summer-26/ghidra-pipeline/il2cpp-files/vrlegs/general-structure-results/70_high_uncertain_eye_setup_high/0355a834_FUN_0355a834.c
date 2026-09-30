/*
FUNCTION_NAME: FUN_0355a834
ENTRY_POINT: 0355a834
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_0355a834(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long local_58;
  
  puVar4 = PTR_DAT_03cbf5c8;
  puVar3 = PTR_DAT_03cbdf88;
  if ((DAT_0412df45 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_87_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe9d0);
    FUN_01ab69ac(PTR_DAT_03cbf5c8);
    FUN_01ab69ac(OVRPlugin_OVRP_1_88_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc46b8);
    FUN_01ab69ac(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe000);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_92_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_93_0_TypeInfo);
    DAT_0412df45 = 1;
  }
  FUN_01f49730(param_1,&local_58,*(undefined8 *)puVar4);
  plVar12 = param_1 + 0xdd;
  param_1[0xdd] = local_58;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12);
  lVar8 = param_1[0xdd];
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036d35a8(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    lVar8 = FUN_036cbbbc(param_1,0);
    if (lVar8 == 0) goto LAB_0355ac74;
    lVar8 = FUN_01f7e2fc(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_8_0_TypeInfo);
    *plVar12 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar8);
  }
  puVar4 = PTR_DAT_03cbe9d0;
  lVar8 = FUN_0357f10c(param_1,0);
  param_1[0x70] = lVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x70);
  lVar8 = FUN_03559490(param_1);
  param_1[0x6f] = lVar8;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x6f);
  FUN_01f49730(param_1,&local_58,*(undefined8 *)puVar4);
  plVar12 = param_1 + 0xde;
  param_1[0xde] = local_58;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12);
  lVar8 = param_1[0xde];
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036d35a8(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    lVar8 = FUN_036cbbbc(param_1,0);
    if (lVar8 == 0) goto LAB_0355ac74;
    lVar8 = FUN_01f7e2fc(lVar8,*(undefined8 *)PTR_DAT_03cc46b8);
    *plVar12 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar8);
  }
  lVar8 = param_1[0x74];
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036d35a8(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    plVar2 = param_1 + 0x74;
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
    FUN_036a1b5c(lVar8,0);
    *plVar2 = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar8);
    if (*plVar2 == 0) goto LAB_0355ac74;
    FUN_036d46a4(*plVar2,0x3d,0);
    if (*plVar12 == 0) goto LAB_0355ac74;
    FUN_036a0b88(*plVar12,param_1[0x74],0);
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_0359fdc4(lVar8,param_1,0);
    param_1[0x6d] = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x6d,lVar8);
  }
  puVar4 = OVRPlugin_OVRP_1_92_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_88_0_TypeInfo;
  if (*plVar12 != 0) {
    FUN_036d46a4(*plVar12,0x3f,0);
    FUN_03591254(param_1,0);
    (**(code **)(*param_1 + 0x698))(param_1,*(undefined8 *)(*param_1 + 0x6a0));
    if (param_1[0x8f] == 0) {
      lVar8 = FUN_01ab6a94(*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo,
                           *(undefined4 *)((long)param_1 + 0x6fc));
      param_1[0x8f] = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x8f,lVar8);
    }
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
    FUN_0359c584(lVar8,0);
    *(undefined1 *)(lVar8 + 0x10) = 1;
    *(undefined4 *)(lVar8 + 0x2c) = 0x3f800000;
    param_1[0xc9] = lVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xc9,lVar8);
    *(undefined1 *)(param_1 + 0xdf) = 1;
    lVar8 = FUN_01f49f50(param_1,*(undefined8 *)puVar3);
    if (lVar8 != 0) {
      uVar5 = *(ulong *)(lVar8 + 0x18);
      if (uVar5 != 0) {
        if (param_1[0xe1] == 0) goto LAB_0355ac74;
        iVar1 = (int)uVar5 + 1;
        if (*(int *)(param_1[0xe1] + 0x18) < iVar1) {
          FUN_01f25968(param_1 + 0xe1,iVar1,*(undefined8 *)OVRPlugin_OVRP_1_87_0_TypeInfo);
        }
        if (0 < (int)uVar5) {
          uVar10 = 0;
          lVar11 = 0x28;
          do {
            if (*(uint *)(lVar8 + 0x18) <= uVar10) {
LAB_0355ac70:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar12 = (long *)param_1[0xe1];
            if (plVar12 == (long *)0x0) goto LAB_0355ac74;
            lVar9 = *(long *)(lVar8 + 0x20 + uVar10 * 8);
            if ((lVar9 != 0) &&
               (lVar6 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar7,0);
            }
            uVar10 = uVar10 + 1;
            if (*(uint *)(plVar12 + 3) <= uVar10) goto LAB_0355ac70;
            *(long *)((long)plVar12 + lVar11) = lVar9;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)((long)plVar12 + lVar11),lVar9);
            lVar11 = lVar11 + 8;
          } while ((uVar5 & 0xffffffff) != uVar10);
        }
      }
      *(undefined1 *)(param_1 + 0x6e) = 1;
      *(undefined1 *)((long)param_1 + 0x3fd) = 1;
      return;
    }
  }
LAB_0355ac74:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


