/*
FUNCTION_NAME: OVRManager$$PrepareCameraForSpaceWarp
ENTRY_POINT: 033ab1f0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__PrepareCameraForSpaceWarp(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  uint uVar6;
  
  if ((param_1 & 1) == 0) {
    uVar3 = (**(code **)(*unaff_x19 + 0x3a8))();
    if ((uVar3 & 1) != 0) {
      lVar4 = (**(code **)(*unaff_x19 + 0x458))();
      if (lVar4 == 0) {
LAB_033ab290:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar5 = *(long **)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_033ab290;
          uVar2 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
          if ((uVar2 & 1) != 0) break;
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
        goto LAB_033ab280;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
LAB_033ab280:
  return uVar2 & 1;
}


