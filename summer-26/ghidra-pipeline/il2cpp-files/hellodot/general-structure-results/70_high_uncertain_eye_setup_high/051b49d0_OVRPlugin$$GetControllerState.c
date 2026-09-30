/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 051b49d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState(void)

{
  long lVar1;
  uint uVar2;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  while ((uint)unaff_x24 < in_w8) {
    lVar1 = unaff_x21 + unaff_x24 * 0x10;
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    uVar5 = *(undefined4 *)(lVar1 + 0x28);
    uVar6 = *(undefined4 *)(lVar1 + 0x2c);
    uVar3 = FUN_05ee9aa8(*(undefined4 *)(lVar1 + 0x20),0);
    if (unaff_x19 == 0) {
LAB_051b4a48:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x24) break;
    lVar1 = unaff_x19 + unaff_x24 * 0x10;
    *(undefined4 *)(lVar1 + 0x20) = uVar3;
    *(undefined4 *)(lVar1 + 0x24) = uVar4;
    *(undefined4 *)(lVar1 + 0x28) = uVar5;
    *(undefined4 *)(lVar1 + 0x2c) = uVar6;
    unaff_w23 = unaff_w23 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w23) {
      return;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w23) break;
    if (unaff_x21 == 0) goto LAB_051b4a48;
    uVar2 = *(uint *)(unaff_x22 + (long)(int)unaff_w23 * 4 + 0x20);
    unaff_x24 = (long)(int)uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar2) break;
    if (unaff_x20 == 0) goto LAB_051b4a48;
    in_w8 = *(uint *)(unaff_x20 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


