/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorHandle
ENTRY_POINT: 036a0f94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorHandle(long param_1,undefined1 param_2 [16])

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_s8;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
LAB_036a0fd4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar1 = unaff_x21 * 4;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar2 + lVar1 + 0x20) = unaff_s8;
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *unaff_x22;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) break;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)unaff_x21) {
      return;
    }
    lVar2 = *unaff_x19;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_036a0fd4;
    param_1 = *(long *)(unaff_x20 + 0x140);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) goto LAB_036a0fd4;
    lVar2 = lVar2 + unaff_x21 * 0x10;
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    param_1 = param_1 + unaff_x21 * 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


