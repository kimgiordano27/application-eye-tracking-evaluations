/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 05be9584
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__DestroyMarkerHandle(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uVar3;
  undefined4 unaff_s8;
  
  do {
    unaff_x22 = unaff_x22 + 1;
    *(undefined4 *)(param_1 + 0x20) = unaff_s8;
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar1 = *unaff_x21;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) {
LAB_05be95a4:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x22) {
      return;
    }
    lVar1 = *unaff_x19;
    if (lVar1 == 0) goto LAB_05be95a4;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) {
LAB_05be95a8:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar2 = *(long *)(unaff_x20 + 0x140);
    if (lVar2 == 0) goto LAB_05be95a4;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) goto LAB_05be95a8;
    lVar1 = lVar1 + unaff_x22 * 0x10;
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    lVar2 = lVar2 + unaff_x22 * 0x10;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    param_1 = *(long *)(unaff_x20 + 0xd0);
    if (param_1 == 0) goto LAB_05be95a4;
    if (*(uint *)(param_1 + 0x18) <= unaff_x22) goto LAB_05be95a8;
    param_1 = param_1 + unaff_x22 * 4;
  } while( true );
}


