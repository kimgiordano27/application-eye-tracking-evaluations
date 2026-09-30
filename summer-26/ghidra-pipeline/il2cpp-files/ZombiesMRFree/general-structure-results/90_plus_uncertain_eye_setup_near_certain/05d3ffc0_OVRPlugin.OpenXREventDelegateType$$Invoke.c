/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$Invoke
ENTRY_POINT: 05d3ffc0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__Invoke(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar3;
  undefined4 unaff_s8;
  
  while( true ) {
    if (param_1 <= (long)unaff_x21) {
      return;
    }
    lVar1 = *unaff_x19;
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
LAB_05d4003c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar2 = *(long *)(unaff_x20 + 0x140);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_05d4003c;
    lVar1 = lVar1 + unaff_x21 * 0x10;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    lVar2 = lVar2 + unaff_x21 * 0x10;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    lVar1 = *(long *)(unaff_x20 + 0xd0);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) goto LAB_05d4003c;
    lVar2 = unaff_x21 * 4;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar1 + lVar2 + 0x20) = unaff_s8;
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar1 = *unaff_x22;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) break;
    param_1 = (long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


