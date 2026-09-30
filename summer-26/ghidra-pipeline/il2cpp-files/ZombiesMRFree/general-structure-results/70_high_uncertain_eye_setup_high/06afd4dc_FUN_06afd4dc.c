/*
FUNCTION_NAME: FUN_06afd4dc
ENTRY_POINT: 06afd4dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_06afd4dc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_073ab380 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(OVRPlugin_OVRP_1_40_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_41_0_TypeInfo);
    DAT_073ab380 = 1;
  }
  iVar7 = 0;
  do {
    lVar2 = FUN_06a34de8(param_1,0);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x2b8) == 0)) goto LAB_06afd6d0;
    uVar3 = FUN_069ea32c(*(long *)(lVar2 + 0x2b8),0);
    if ((uVar3 & 1) == 0) goto LAB_06afd698;
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) goto LAB_06afd6d0;
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05b11f04(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    if (iVar7 != 0) {
      plVar4 = (long *)FUN_06a33718(param_1,0);
      if (plVar4 == (long *)0x0) goto LAB_06afd6d0;
      (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
    }
    lVar2 = FUN_06a33718(param_1,0);
    if (lVar2 == 0) goto LAB_06afd6d0;
    *(undefined1 *)(lVar2 + 0x4c) = 1;
    lVar2 = FUN_06a34de8(param_1,0);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x2b8) == 0)) goto LAB_06afd6d0;
    FUN_069eb0fc(0x7fc00000,0x7fc00000,*(long *)(lVar2 + 0x2b8),0);
    lVar2 = FUN_06a33718(param_1,0);
    if (lVar2 == 0) goto LAB_06afd6d0;
    *(undefined1 *)(lVar2 + 0x4c) = 0;
    uVar5 = FUN_06a34de8(param_1,0);
    uVar5 = FUN_06afd6d4(param_1,uVar5,1,*(undefined8 *)(param_1 + 0x20));
    FUN_06afde00(uVar5,*(undefined8 *)(param_1 + 0x20),iVar7);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0xb);
  plVar4 = (long *)FUN_06a34de8(param_1,0);
  uVar5 = *(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo;
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  uVar5 = FUN_059687dc(uVar5,uVar6,0);
  if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
  }
  FUN_068bd958(uVar5,0);
LAB_06afd698:
  plVar4 = (long *)FUN_06a34de8(param_1,0);
  if (plVar4 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    if (lVar2 != 0) {
      FUN_06ad1954(lVar2,0);
      return;
    }
  }
LAB_06afd6d0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


