/*
FUNCTION_NAME: FUN_0356b47c
ENTRY_POINT: 0356b47c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 FUN_0356b47c(long param_1,uint param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 local_68;
  uint local_58;
  undefined4 uStack_54;
  
  if ((DAT_0412dfc0 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03ccbbf8);
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(PTR_DAT_03cc45a8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    DAT_0412dfc0 = 1;
  }
  local_68 = 0;
  lVar6 = *(long *)(param_1 + 200);
  if (lVar6 == 0) {
    FUN_03568878(param_1);
    lVar6 = *(long *)(param_1 + 200);
    if (lVar6 == 0) {
      return 0;
    }
  }
  param_2 = param_2 & 0xffff;
  local_58 = param_2;
  uVar7 = FUN_0219c130(lVar6,&local_58,*(undefined8 *)PTR_DAT_03cc4750);
  if (((uVar7 & 1) != 0) ||
     ((((param_4 & 1) != 0 && (*(int *)(param_1 + 0x48) == 1)) &&
      (uVar7 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(param_1,param_2,&local_68),
      (uVar7 & 1) != 0)))) {
    return 1;
  }
  puVar4 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if ((param_3 & 1) != 0) {
    lVar6 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar4;
    }
    lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    if (lVar10 == 0) {
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8ba8);
      FUN_021e44d8(uVar9,*(undefined8 *)PTR_DAT_03cc8bb0);
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar4;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x40);
      *puVar8 = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8,uVar9);
    }
    else {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
        if (lVar10 == 0) goto LAB_0356b980;
      }
      FUN_021e4d64(lVar10,*(undefined8 *)PTR_DAT_03ccbbf8);
    }
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar4;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x40);
    uVar5 = FUN_036d3364(param_1,0);
    puVar3 = PTR_DAT_03cc8e90;
    if (lVar6 == 0) goto LAB_0356b980;
    local_58 = uVar5;
    FUN_021e5f08(lVar6,&local_58,*(undefined8 *)PTR_DAT_03cc8e90);
    puVar2 = PTR_DAT_03cc45a8;
    puVar1 = PTR_DAT_03cbdf88;
    lVar6 = *(long *)(param_1 + 0x138);
    if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x18))) {
      iVar11 = 0;
      do {
        FUN_02215a88(lVar6,iVar11,&local_58,*(undefined8 *)puVar2);
        uVar9 = CONCAT44(uStack_54,local_58);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036cee6c(uVar9,0,0);
        if ((uVar7 & 1) == 0) break;
        if (*(long *)(param_1 + 0x138) == 0) goto LAB_0356b980;
        FUN_02215a88(*(long *)(param_1 + 0x138),iVar11,&local_58,*(undefined8 *)puVar2);
        lVar6 = CONCAT44(uStack_54,local_58);
        if (lVar6 == 0) goto LAB_0356b980;
        uVar5 = FUN_036d3364(lVar6,0);
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)puVar4;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
        if (lVar10 == 0) goto LAB_0356b980;
        local_58 = uVar5;
        uVar7 = FUN_021e5f08(lVar10,&local_58,*(undefined8 *)puVar3);
        if (((uVar7 & 1) != 0) &&
           (uVar7 = FUN_0356c12c(lVar6,param_2,1,param_4 & 1), (uVar7 & 1) != 0)) {
          return 1;
        }
        lVar6 = *(long *)(param_1 + 0x138);
        if (lVar6 == 0) goto LAB_0356b980;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar6 + 0x18));
    }
    lVar6 = FUN_03597770(0);
    if (lVar6 != 0) {
      lVar6 = FUN_03597770(0);
      if (lVar6 == 0) goto LAB_0356b980;
      if (0 < *(int *)(lVar6 + 0x18)) {
        lVar6 = FUN_03597770(0);
        puVar2 = PTR_DAT_03cc45a8;
        puVar1 = PTR_DAT_03cbdf88;
        if (lVar6 != 0) {
          iVar11 = 0;
          do {
            if (*(int *)(lVar6 + 0x18) <= iVar11) goto LAB_0356b8ac;
            lVar6 = FUN_03597770(0);
            if (lVar6 == 0) break;
            FUN_02215a88(lVar6,iVar11,&local_58,*(undefined8 *)puVar2);
            uVar9 = CONCAT44(uStack_54,local_58);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = FUN_036cee6c(uVar9,0,0);
            if ((uVar7 & 1) == 0) goto LAB_0356b8ac;
            lVar6 = FUN_03597770(0);
            if (lVar6 == 0) break;
            FUN_02215a88(lVar6,iVar11,&local_58,*(undefined8 *)puVar2);
            lVar6 = CONCAT44(uStack_54,local_58);
            if (lVar6 == 0) break;
            uVar5 = FUN_036d3364(lVar6,0);
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar10);
              lVar10 = *(long *)puVar4;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
            if (lVar10 == 0) break;
            local_58 = uVar5;
            uVar7 = FUN_021e5f08(lVar10,&local_58,*(undefined8 *)puVar3);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = FUN_0356c12c(lVar6,param_2,1,param_4 & 1), (uVar7 & 1) != 0)) {
              return 1;
            }
            iVar11 = iVar11 + 1;
            lVar6 = FUN_03597770(0);
          } while (lVar6 != 0);
        }
        goto LAB_0356b980;
      }
    }
LAB_0356b8ac:
    uVar9 = FUN_03597650(0);
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar7 = FUN_036cee6c(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      lVar6 = FUN_03597650(0);
      if (lVar6 != 0) {
        uVar5 = FUN_036d3364(lVar6,0);
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)puVar4;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
        if (lVar10 != 0) {
          local_58 = uVar5;
          uVar7 = FUN_021e5f08(lVar10,&local_58,*(undefined8 *)puVar3);
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          uVar7 = FUN_0356c12c(lVar6,param_2,1,param_4 & 1);
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
LAB_0356b980:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  return 0;
}


