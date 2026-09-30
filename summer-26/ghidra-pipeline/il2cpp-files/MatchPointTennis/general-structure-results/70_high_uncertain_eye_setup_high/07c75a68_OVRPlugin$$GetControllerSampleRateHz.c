/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 07c75a68
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerSampleRateHz(void)

{
  long lVar1;
  uint uVar2;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (0 < (int)in_w8) {
    uVar3 = 0;
    do {
      if (in_w8 <= uVar3) {
LAB_07c75b10:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      if (unaff_x21 == 0) {
LAB_07c75b14:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar2 = *(uint *)(unaff_x22 + (long)(int)uVar3 * 4 + 0x20);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar2) goto LAB_07c75b10;
      if (unaff_x20 == 0) goto LAB_07c75b14;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_07c75b10;
      lVar1 = unaff_x21 + (long)(int)uVar2 * 0x10;
      uVar5 = *(undefined4 *)(lVar1 + 0x24);
      uVar6 = *(undefined4 *)(lVar1 + 0x28);
      uVar7 = *(undefined4 *)(lVar1 + 0x2c);
      uVar4 = FUN_09516694(*(undefined4 *)(lVar1 + 0x20),0);
      if (unaff_x19 == 0) goto LAB_07c75b14;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar2) goto LAB_07c75b10;
      lVar1 = unaff_x19 + (long)(int)uVar2 * 0x10;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      *(undefined4 *)(lVar1 + 0x28) = uVar6;
      *(undefined4 *)(lVar1 + 0x2c) = uVar7;
      in_w8 = *(uint *)(unaff_x22 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)in_w8);
  }
  return;
}


