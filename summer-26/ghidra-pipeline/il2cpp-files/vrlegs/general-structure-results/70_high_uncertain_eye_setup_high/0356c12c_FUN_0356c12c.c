/*
FUNCTION_NAME: FUN_0356c12c
ENTRY_POINT: 0356c12c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_0356c12c(long param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((DAT_0412dfc1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4750);
    FUN_01ab69ac(PTR_DAT_03cc8e90);
    FUN_01ab69ac(PTR_DAT_03cc45a0);
    FUN_01ab69ac(PTR_DAT_03cc45a8);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    DAT_0412dfc1 = 1;
  }
  local_68 = 0;
  lVar8 = *(long *)(param_1 + 200);
  if (lVar8 == 0) {
    FUN_03568878(param_1);
    lVar8 = *(long *)(param_1 + 200);
    if (lVar8 != 0) goto LAB_0356c1d0;
  }
  else {
LAB_0356c1d0:
    local_58 = param_2;
    uVar9 = FUN_0219c130(lVar8,&local_58,*(undefined8 *)PTR_DAT_03cc4750);
    if ((uVar9 & 1) != 0) {
      uVar6 = 1;
      goto LAB_0356c344;
    }
    if (((param_4 & 1) == 0) || (*(int *)(param_1 + 0x48) != 1)) {
      if ((param_3 & 1) == 0) goto LAB_0356c340;
    }
    else {
      uVar6 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemSet(param_1,param_2,&local_68);
      if (((uVar6 & 1) != 0) || ((param_3 & 1) == 0)) goto LAB_0356c344;
    }
    puVar5 = OVRPlugin_OVRP_1_83_0_TypeInfo;
    puVar4 = PTR_DAT_03cc8e90;
    puVar3 = PTR_DAT_03cc45a8;
    puVar2 = PTR_DAT_03cbdf88;
    lVar8 = *(long *)(param_1 + 0x138);
    if ((lVar8 != 0) && ((*(int *)(lVar8 + 0x18) != 0 && (0 < *(int *)(lVar8 + 0x18))))) {
      iVar11 = 0;
      do {
        FUN_02215a88(lVar8,iVar11,&local_58,*(undefined8 *)puVar3);
        uVar1 = CONCAT44(uStack_54,local_58);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_036cee6c(uVar1,0,0);
        if ((uVar9 & 1) == 0) goto LAB_0356c340;
        if (*(long *)(param_1 + 0x138) == 0) {
LAB_0356c368:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_02215a88(*(long *)(param_1 + 0x138),iVar11,&local_58,*(undefined8 *)puVar3);
        lVar8 = CONCAT44(uStack_54,local_58);
        if (lVar8 == 0) goto LAB_0356c368;
        uVar7 = FUN_036d3364(lVar8,0);
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)puVar5;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x40);
        if (lVar10 == 0) goto LAB_0356c368;
        local_58 = uVar7;
        uVar9 = FUN_021e5f08(lVar10,&local_58,*(undefined8 *)puVar4);
        if ((uVar9 & 1) != 0) {
          uVar6 = 1;
          uVar9 = FUN_0356c12c(lVar8,param_2,1,param_4 & 1);
          if ((uVar9 & 1) != 0) break;
        }
        lVar8 = *(long *)(param_1 + 0x138);
        if (lVar8 == 0) goto LAB_0356c368;
        iVar11 = iVar11 + 1;
        uVar6 = 0;
      } while (iVar11 < *(int *)(lVar8 + 0x18));
      goto LAB_0356c344;
    }
  }
LAB_0356c340:
  uVar6 = 0;
LAB_0356c344:
  return uVar6 & 1;
}


