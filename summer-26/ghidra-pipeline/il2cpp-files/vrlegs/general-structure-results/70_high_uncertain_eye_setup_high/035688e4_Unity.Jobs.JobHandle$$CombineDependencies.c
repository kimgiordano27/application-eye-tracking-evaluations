/*
FUNCTION_NAME: Unity.Jobs.JobHandle$$CombineDependencies
ENTRY_POINT: 035688e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Jobs_JobHandle__CombineDependencies(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  float fVar8;
  
  uVar5 = FUN_036cee6c();
  if (((uVar5 & 1) != 0) &&
     (uVar5 = FUN_025be440(*(undefined8 *)(unaff_x19 + 0x30),0), (uVar5 & 1) != 0)) {
    FUN_035692cc();
  }
  FUN_03569df8();
  FUN_03569e18();
  lVar7 = unaff_x19 + 0x50;
  fVar8 = (float)FUN_03776960(lVar7,0);
  if (fVar8 == 0.0) {
    FUN_03776968(0x3f800000,lVar7,0);
  }
  fVar8 = (float)FUN_03776a30(lVar7,0);
  if (fVar8 == 0.0) {
    fVar8 = (float)FUN_03776990(lVar7,0);
    FUN_03776a38(fVar8 / 2.5,lVar7,0);
  }
  puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  if (*(int *)(unaff_x19 + 0x110) == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar7 == 0) {
LAB_03568aac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_03699d3c(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0);
    if ((uVar5 & 1) != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar7 == 0) goto LAB_03568aac;
      fVar8 = (float)FUN_0369e060(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0)
      ;
      iVar1 = 0x7fffffff;
      if (fVar8 != INFINITY) {
        iVar1 = (int)fVar8 + -1;
      }
      *(int *)(unaff_x19 + 0x110) = iVar1;
    }
  }
  puVar3 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  puVar2 = PTR_DAT_03d0bfe0;
  uVar6 = FUN_036d3824();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  uVar4 = FUN_0359b590(uVar6,0);
  *(undefined4 *)(unaff_x19 + 0x1c) = uVar4;
  uVar6 = FUN_036d3824();
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar7);
    lVar7 = *(long *)puVar3;
  }
  uVar6 = FUN_025b1328(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38),0);
  uVar4 = FUN_0359b590(uVar6,0);
  *(undefined4 *)(unaff_x19 + 0x28) = uVar4;
  *(undefined1 *)(unaff_x19 + 0x1ba) = 0;
  return;
}


