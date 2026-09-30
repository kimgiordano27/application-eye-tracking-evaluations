/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 090c7fbc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(long param_1)

{
  undefined1 in_CY;
  uint in_w9;
  long in_x10;
  long in_x11;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  while (!(bool)in_CY) {
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) {
LAB_090c80fc:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar1 + 0x18) <= (uint)in_x11) break;
    param_1 = param_1 + in_x10 * 0x10;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = lVar1 + in_x11 * 0x10;
    in_x11 = in_x11 + 1;
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    lVar1 = *(long *)(unaff_x20 + 0x88);
    if (lVar1 == 0) goto LAB_090c80fc;
    if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)in_x11) {
      return;
    }
    if (*(uint *)(lVar1 + 0x18) <= (uint)in_x11) break;
    param_1 = *(long *)(lVar1 + in_x11 * 8 + 0x20);
    if (param_1 == 0) goto LAB_090c80fc;
    in_CY = *(uint *)(param_1 + 0x18) <= in_w9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


