/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 0697289c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000030;
  
  while (uVar3 = FUN_069729e8(), unaff_x20 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    lVar5 = *unaff_x23;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      thunk_FUN_03afed3c();
    }
    else {
      FUN_04de85b0(unaff_x20,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                  );
    }
    uVar2 = FUN_061c1964(&stack0x00000020,*unaff_x22);
    if ((uVar2 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,*unaff_x21);
      return;
    }
    unaff_x20 = *(long *)(unaff_x19 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


