/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 05be94e8
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


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 unaff_s8;
  
  FUN_03188a78(PTR_DAT_07113448);
  *(undefined1 *)(unaff_x21 + 0xd3e) = 1;
  puVar1 = PTR_DAT_07113448;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_05be95a4:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = *unaff_x19;
    if (lVar2 == 0) goto LAB_05be95a4;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_05be95a8:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar3 = *(long *)(unaff_x20 + 0x140);
    if (lVar3 == 0) goto LAB_05be95a4;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_05be95a8;
    lVar2 = lVar2 + uVar4 * 0x10;
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar3 = lVar3 + uVar4 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    if (lVar2 == 0) goto LAB_05be95a4;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_05be95a8;
    lVar3 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(lVar2 + lVar3 + 0x20) = unaff_s8;
  } while( true );
}


