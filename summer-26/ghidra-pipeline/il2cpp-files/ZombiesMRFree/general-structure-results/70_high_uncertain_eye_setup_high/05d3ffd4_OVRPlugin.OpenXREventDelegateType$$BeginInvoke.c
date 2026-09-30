/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$BeginInvoke
ENTRY_POINT: 05d3ffd4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__BeginInvoke(long param_1)

{
  long lVar1;
  ulong in_x9;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar3;
  undefined4 unaff_s8;
  
  while (unaff_x21 < in_x9) {
    lVar2 = *(long *)(unaff_x20 + 0x140);
    if (lVar2 == 0) {
LAB_05d40038:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) break;
    param_1 = param_1 + unaff_x21 * 0x10;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar2 + unaff_x21 * 0x10;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    if (lVar2 == 0) goto LAB_05d40038;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) break;
    lVar1 = unaff_x21 * 4;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar2 + lVar1 + 0x20) = unaff_s8;
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x22;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_05d40038;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)unaff_x21) {
      return;
    }
    param_1 = *unaff_x19;
    if (param_1 == 0) goto LAB_05d40038;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


