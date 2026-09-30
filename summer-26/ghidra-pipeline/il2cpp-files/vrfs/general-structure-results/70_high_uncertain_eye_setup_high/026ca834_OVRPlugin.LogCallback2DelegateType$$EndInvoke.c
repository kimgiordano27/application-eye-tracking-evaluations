/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 026ca834
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_LogCallback2DelegateType__EndInvoke(ulong param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long in_x9;
  int unaff_w21;
  uint uVar4;
  int iVar5;
  long unaff_x23;
  long unaff_x24;
  
  iVar5 = *(int *)(unaff_x23 + (param_1 & 0xffffffff) * 4 + 0x20);
  plVar2 = (long *)(**(code **)(*(long *)(*(long *)(in_x9 + 0xc0) + 0x10) + 8))();
  if (unaff_x24 != 0) {
    uVar1 = *(uint *)(unaff_x24 + 0x18);
    uVar4 = iVar5 - 1;
    if (uVar4 < uVar1) {
      iVar5 = 0;
      do {
        if (*(int *)(unaff_x24 + (long)(int)uVar4 * 0x18 + 0x20) == unaff_w21) {
          if (plVar2 == (long *)0x0) goto LAB_026caa34;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined8 *)(unaff_x24 + (long)(int)uVar4 * 0x18 + 0x28));
          if ((uVar3 & 1) != 0) {
            return uVar4;
          }
          uVar1 = *(uint *)(unaff_x24 + 0x18);
        }
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        uVar4 = *(uint *)(unaff_x24 + (long)(int)uVar4 * 0x18 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_031dbf48(0);
        }
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar4 < uVar1);
    }
    return uVar4;
  }
LAB_026caa34:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


