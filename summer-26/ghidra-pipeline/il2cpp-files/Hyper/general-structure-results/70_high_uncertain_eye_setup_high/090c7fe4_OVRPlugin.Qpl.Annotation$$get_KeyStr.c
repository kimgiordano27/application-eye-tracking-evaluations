/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation$$get_KeyStr
ENTRY_POINT: 090c7fe4
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


void OVRPlugin_Qpl_Annotation__get_KeyStr(long param_1,undefined1 param_2 [16])

{
  long lVar1;
  uint in_w9;
  long in_x10;
  uint uVar2;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    lVar1 = *(long *)(unaff_x20 + 0x88);
    if (lVar1 == 0) break;
    uVar2 = (uint)in_x11;
    if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
LAB_090c8100:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar1 = *(long *)(lVar1 + in_x11 * 8 + 0x20);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= in_w9) goto LAB_090c8100;
    param_1 = *(long *)(unaff_x19 + 0x48);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uVar2) goto LAB_090c8100;
    lVar1 = lVar1 + in_x10 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    param_1 = param_1 + in_x11 * 0x10;
    in_x11 = in_x11 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


