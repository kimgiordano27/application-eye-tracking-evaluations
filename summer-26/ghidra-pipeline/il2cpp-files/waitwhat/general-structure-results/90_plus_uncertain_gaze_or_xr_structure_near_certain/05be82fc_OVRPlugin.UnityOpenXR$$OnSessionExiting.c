/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 05be82fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(undefined8 param_1)

{
  int iVar1;
  undefined1 in_CY;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  ulong uVar3;
  undefined8 uVar4;
  
  do {
    if ((bool)in_CY) {
LAB_05be83a4:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    iVar1 = *(int *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x25 + unaff_x21 * 8 + 0x20) = param_1;
    if (0 < iVar1) {
      uVar3 = 0;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x88);
        if (lVar2 == 0) goto LAB_05be8388;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_05be83a4;
        lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
        if (*(char *)(unaff_x23 + 0xbbe) == '\0') {
          FUN_03188a78();
          *(undefined1 *)(unaff_x23 + 0xbbe) = unaff_w24;
        }
        if (lVar2 == 0) goto LAB_05be8388;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_05be83a4;
        uVar4 = **(undefined8 **)(*unaff_x20 + 0xb8);
        lVar2 = lVar2 + uVar3 * 0x10;
        uVar3 = uVar3 + 1;
        *(undefined8 *)(lVar2 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
        *(undefined8 *)(lVar2 + 0x20) = uVar4;
      } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x80));
    }
    unaff_x25 = *(long *)(unaff_x19 + 0x88);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x25 == 0) {
LAB_05be8388:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((long)*(int *)(unaff_x25 + 0x18) <= (long)unaff_x21) {
      return;
    }
    param_1 = FUN_03188b1c(*unaff_x22,*(undefined4 *)(unaff_x19 + 0x80));
    in_CY = *(uint *)(unaff_x25 + 0x18) <= unaff_x21;
  } while( true );
}


