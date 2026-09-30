/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Create
ENTRY_POINT: 05be98e4
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


void OVRPlugin_Qpl_Annotation_Builder__Create(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w23;
  long lVar5;
  undefined8 uVar6;
  
  do {
    uVar1 = *(uint *)(unaff_x20 + (long)(int)unaff_w22 * 4 + 0x20);
    lVar5 = (long)(int)uVar1;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      param_1 = *unaff_x21;
    }
    lVar4 = **(long **)(param_1 + 0xb8);
    if (lVar4 == 0) {
LAB_05be999c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_05be99a0:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x38), lVar3 == 0)) goto LAB_05be999c;
    uVar2 = *(uint *)(lVar4 + lVar5 * 4 + 0x20);
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_05be99a0;
    lVar4 = *(long *)(unaff_x19 + 0x140);
    if (lVar4 == 0) goto LAB_05be999c;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_05be99a0;
    lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    lVar4 = lVar4 + lVar5 * 0x10;
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar4 + 0x20) = uVar6;
    lVar4 = *(long *)(unaff_x19 + 0xd0);
    if (lVar4 == 0) goto LAB_05be999c;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_05be99a0;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    *(undefined4 *)(lVar4 + lVar5 * 4 + 0x20) = unaff_w23;
    if ((int)uVar1 <= (int)unaff_w22) {
      return;
    }
    if (uVar1 <= unaff_w22) goto LAB_05be99a0;
    param_1 = *unaff_x21;
  } while( true );
}


