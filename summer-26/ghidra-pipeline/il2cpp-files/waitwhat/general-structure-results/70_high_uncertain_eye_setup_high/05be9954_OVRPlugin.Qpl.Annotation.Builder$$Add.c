/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05be9954
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(undefined1 param_1 [16])

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w23;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  while( true ) {
    lVar4 = in_x10 + unaff_x24 * 0x10;
    *(undefined8 *)(lVar4 + 0x28) = uVar6;
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    lVar4 = *(long *)(unaff_x19 + 0xd0);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x24) {
LAB_05be99a0:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    *(undefined4 *)(lVar4 + unaff_x24 * 4 + 0x20) = unaff_w23;
    if ((int)uVar1 <= (int)unaff_w22) {
      return;
    }
    if (uVar1 <= unaff_w22) goto LAB_05be99a0;
    lVar4 = *unaff_x21;
    uVar1 = *(uint *)(unaff_x20 + (long)(int)unaff_w22 * 4 + 0x20);
    unaff_x24 = (long)(int)uVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar4 = *unaff_x21;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_05be99a0;
    if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x38), lVar3 == 0)) break;
    uVar2 = *(uint *)(lVar4 + unaff_x24 * 4 + 0x20);
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_05be99a0;
    in_x10 = *(long *)(unaff_x19 + 0x140);
    if (in_x10 == 0) break;
    if (*(uint *)(in_x10 + 0x18) <= uVar1) goto LAB_05be99a0;
    lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


