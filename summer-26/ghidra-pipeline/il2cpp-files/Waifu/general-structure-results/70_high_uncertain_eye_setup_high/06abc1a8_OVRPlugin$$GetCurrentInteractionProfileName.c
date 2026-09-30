/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 06abc1a8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfileName(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w24;
  long unaff_x25;
  undefined8 uVar5;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x25) {
LAB_06abc1e8:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(undefined4 *)(param_1 + unaff_x25 * 4 + 0x20) = unaff_w24;
    unaff_x22 = unaff_x22 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x22) {
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x22) goto LAB_06abc1e8;
    lVar3 = *(long *)(unaff_x21 + 0x858);
    uVar2 = *(uint *)(unaff_x23 + unaff_x22 * 4);
    unaff_x25 = (long)(int)uVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      FUN_033b9870();
      lVar3 = *(long *)(unaff_x21 + 0x858);
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) {
LAB_06abc1e4:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_06abc1e8;
    if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x38), lVar4 == 0)) goto LAB_06abc1e4;
    uVar1 = *(uint *)(lVar3 + unaff_x25 * 4 + 0x20);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_06abc1e8;
    lVar3 = *(long *)(unaff_x19 + 0x140);
    if (lVar3 == 0) goto LAB_06abc1e4;
    if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_06abc1e8;
    lVar4 = lVar4 + (long)(int)uVar1 * 0x10;
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    lVar3 = lVar3 + unaff_x25 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    param_1 = *(long *)(unaff_x19 + 0xd0);
    if (param_1 == 0) goto LAB_06abc1e4;
  } while( true );
}


