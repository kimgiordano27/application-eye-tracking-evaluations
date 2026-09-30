/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 033ef504
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(long param_1)

{
  long lVar1;
  int *piVar2;
  uint *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar3;
  long unaff_x22;
  ulong uVar4;
  long unaff_x23;
  long *unaff_x24;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000018;
  
  uVar4 = unaff_x22 + param_1 * (ulong)unaff_x19[1];
  if (uVar4 >> 0x20 == 0) {
    if ((int)uVar4 == 0) {
      uVar3 = 1;
      if (iStack0000000000000004 == 0) {
        piVar2 = (int *)((long)&stack0x00000000 + 4);
        lVar1 = 1;
        do {
          piVar2 = piVar2 + -1;
          if (lVar1 == 0) {
            unaff_x19[0] = 0;
            unaff_x19[1] = 0;
            unaff_x19[2] = 0;
            unaff_x19[3] = 0;
            goto LAB_033ef5e0;
          }
          lVar1 = lVar1 + -1;
        } while (*piVar2 == 0);
        uVar3 = (uint)lVar1;
      }
    }
    else {
      _uStack0000000000000008 = CONCAT44(uStack000000000000000c,(int)uVar4);
      uVar3 = 2;
    }
    uVar4 = _uStack0000000000000008;
    if ((unaff_w21 < 0x1d) && (uVar3 < 3)) goto LAB_033ef5a8;
  }
  _uStack0000000000000008 = uVar4;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  unaff_w21 = FUN_033f1594();
LAB_033ef5a8:
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  *(ulong *)(unaff_x19 + 2) = CONCAT44(iStack0000000000000004,uStack0000000000000000);
  unaff_x19[1] = uStack0000000000000008;
  *unaff_x19 = (*unaff_x19 ^ *unaff_x20) & 0x80000000 | unaff_w21 << 0x10;
LAB_033ef5e0:
  if (*(long *)(unaff_x23 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


