/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 06972818
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000030;
  
  (*(code *)*param_1)();
  puVar4 = PTR_DAT_084b7348;
  puVar3 = PTR_DAT_084b5eb8;
  puVar2 = PTR_DAT_084b5ea0;
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  if (((*(long *)(unaff_x19 + 0x20) == 0) ||
      (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xe8), lVar7 == 0)) ||
     (lVar7 = *(long *)(lVar7 + 0x50), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04de90b8(&stack0x00000020,lVar7,*(undefined8 *)PTR_DAT_084b5ed0);
  while( true ) {
    uVar5 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar3);
    if ((uVar5 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,*(undefined8 *)puVar2);
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x38);
    uVar6 = FUN_069729e8();
    if (lVar7 == 0) break;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)puVar4;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


