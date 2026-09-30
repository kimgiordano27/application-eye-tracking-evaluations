/*
FUNCTION_NAME: FUN_06b02cdc
ENTRY_POINT: 06b02cdc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_06b02cdc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_073ab3bf & 1) == 0) {
    FUN_02fe925c(OVRPlugin_OVRP_1_98_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_99_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_9_0_TypeInfo);
    DAT_073ab3bf = 1;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_06b02e38;
    uVar3 = FUN_04430678(*(long *)(param_1 + 0x10),param_2,
                         *(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
    if ((uVar3 & 1) != 0) goto LAB_06b02e3c;
    lVar4 = *(long *)(param_1 + 0x10);
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_06b02e38;
    uVar3 = FUN_03fca534(*(long *)(param_1 + 0x28),param_2,
                         *(undefined8 *)OVRPlugin_OVRP_1_98_0_TypeInfo);
    puVar2 = OVRPlugin_OVRP_1_9_0_TypeInfo;
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_06b02e38;
    uVar3 = FUN_04430678(*(long *)(param_1 + 0x10),param_2,
                         *(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
    if ((uVar3 & 1) != 0) {
LAB_06b02e3c:
      uVar5 = thunk_FUN_03037804(OVRPlugin_OverlayShape_TypeInfo);
      uVar6 = thunk_FUN_03037804(OVRPlugin_PoseStatef_TypeInfo);
      uVar5 = FUN_05971dd0(uVar5,param_2,uVar6,0);
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar6 = thunk_FUN_0301080c();
      FUN_05a64d00(uVar6,uVar5,0);
      uVar5 = thunk_FUN_03037804(OVRPlugin_Posef_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar6,uVar5);
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_06b02e38;
    uVar3 = FUN_04430678(*(long *)(param_1 + 0x20),param_2,*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) goto LAB_06b02e3c;
    lVar4 = *(long *)(param_1 + 0x20);
  }
  if (lVar4 != 0) {
    lVar7 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)OVRPlugin_OVRP_1_99_0_TypeInfo;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
        FUN_044302e8(lVar4,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                    );
        return;
      }
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar8 = param_2;
      thunk_FUN_03048534(plVar8,param_2);
      return;
    }
  }
LAB_06b02e38:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


