/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorHandle
ENTRY_POINT: 031710c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorHandle
               (undefined4 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(unaff_x21 + 0xef) & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13715);
    *(undefined1 *)(unaff_x21 + 0xef) = 1;
  }
  puVar1 = StringLiteral_13715;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_03171198:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = *param_3;
    if (lVar2 == 0) goto LAB_03171198;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_0317119c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar3 = *(long *)(param_2 + 0x140);
    if (lVar3 == 0) goto LAB_03171198;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_0317119c;
    lVar2 = lVar2 + uVar4 * 0x10;
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar3 = lVar3 + uVar4 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    lVar2 = *(long *)(param_2 + 0xd0);
    if (lVar2 == 0) goto LAB_03171198;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_0317119c;
    lVar3 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(lVar2 + lVar3 + 0x20) = param_1;
  } while( true );
}


