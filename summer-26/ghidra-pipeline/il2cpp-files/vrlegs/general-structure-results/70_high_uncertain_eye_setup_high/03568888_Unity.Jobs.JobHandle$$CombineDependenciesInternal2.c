/*
FUNCTION_NAME: Unity.Jobs.JobHandle$$CombineDependenciesInternal2
ENTRY_POINT: 03568888
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


void Unity_Jobs_JobHandle__CombineDependenciesInternal2(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x21;
  float fVar9;
  
  plVar6 = *(long **)(unaff_x20 + 0xf88);
  if ((*(byte *)(unaff_x21 + 0xfb6) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d0bfe0);
    *(undefined1 *)(unaff_x21 + 0xfb6) = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*plVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_036cee6c(uVar7,0,0);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = FUN_025be440(*(undefined8 *)(param_1 + 0x30),0), (uVar5 & 1) != 0)) {
    FUN_035692cc(param_1);
  }
  FUN_03569df8(param_1);
  FUN_03569e18(param_1);
  lVar8 = param_1 + 0x50;
  fVar9 = (float)FUN_03776960(lVar8,0);
  if (fVar9 == 0.0) {
    FUN_03776968(0x3f800000,lVar8,0);
  }
  fVar9 = (float)FUN_03776a30(lVar8,0);
  if (fVar9 == 0.0) {
    fVar9 = (float)FUN_03776990(lVar8,0);
    FUN_03776a38(fVar9 / 2.5,lVar8,0);
  }
  puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if (*(int *)(param_1 + 0x110) == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar8 == 0) {
LAB_03568aac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_03699d3c(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0);
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar8 == 0) goto LAB_03568aac;
      fVar9 = (float)FUN_0369e060(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0)
      ;
      iVar1 = 0x7fffffff;
      if (fVar9 != INFINITY) {
        iVar1 = (int)fVar9 + -1;
      }
      *(int *)(param_1 + 0x110) = iVar1;
    }
  }
  puVar3 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  puVar2 = PTR_DAT_03d0bfe0;
  uVar7 = FUN_036d3824(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  uVar4 = FUN_0359b590(uVar7,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  uVar7 = FUN_036d3824(param_1,0);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar8);
    lVar8 = *(long *)puVar3;
  }
  uVar7 = FUN_025b1328(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x38),0);
  uVar4 = FUN_0359b590(uVar7,0);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  return;
}


