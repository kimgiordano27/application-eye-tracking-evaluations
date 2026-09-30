/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas$$Start
ENTRY_POINT: 051a4250
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas__Start(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_051a4308:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar4 + 0x2c)) {
    FUN_055095dc(0);
    lVar4 = *param_1;
    if (lVar4 == 0) goto LAB_051a4308;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)(lVar4 + 0x20);
  uVar1 = uVar2;
  if (uVar2 <= uVar3) {
    uVar1 = uVar3;
  }
  do {
    uVar5 = uVar2;
    if (uVar1 == uVar5) {
      param_1[2] = 0;
      param_1[3] = 0;
      *(uint *)(param_1 + 1) = uVar3 + 1;
      goto LAB_051a42f4;
    }
    lVar6 = *(long *)(lVar4 + 0x18);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (lVar6 == 0) goto LAB_051a4308;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar2 = uVar5 + 1;
  } while (*(int *)(lVar6 + 0x20 +
                   (-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5)) < 0);
  lVar4 = lVar6 + 0x20 + (long)(int)uVar5 * 0x20;
  lVar6 = *(long *)(lVar4 + 8);
  param_1[3] = *(long *)(lVar4 + 0x10);
  param_1[2] = lVar6;
  LeanTween__value(param_1 + 3,0);
LAB_051a42f4:
  return uVar5 < uVar3;
}


