/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_SetBoundaryVisible
ENTRY_POINT: 0603af74
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_SetBoundaryVisible(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) goto LAB_0603b0e4;
  uVar1 = FUN_06dcb3b4(param_1,0);
  if (((uVar1 & 1) == 0) && (DAT_014baab8 < *(float *)(unaff_x19 + 0x28))) {
    fVar4 = *(float *)(unaff_x19 + 0x24);
    fVar3 = (float)FUN_06e66384(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x24) = fVar4;
    if (fVar4 <= 0.0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0603b0e4;
      FUN_06dcaebc(*(long *)(unaff_x19 + 0x10),0);
    }
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0603b0e4;
  uVar1 = FUN_06dcb3b4(*(long *)(unaff_x19 + 0x10),0);
  fVar3 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_0603affc:
    if (0.0 < fVar3) {
      return;
    }
  }
  else {
    fVar4 = (float)FUN_06e66384(0);
    fVar3 = fVar3 - fVar4;
    *(float *)(unaff_x19 + 0x28) = fVar3;
    if (0.0 <= fVar3) goto LAB_0603affc;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar1 = FUN_06dcb3b4(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06deed24(*(undefined8 *)PTR_DAT_075f7bc0,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      in_stack_00000008 = FUN_05de2cc8(0);
      uVar2 = FUN_05de3aac(&stack0x00000008,0);
      uVar2 = FUN_05c7e0d4(*(undefined8 *)PTR_DAT_075f7bb8,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759b238);
      }
      FUN_06dee5ec(uVar2,0);
      FUN_0603aec4();
    }
    return;
  }
LAB_0603b0e4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


