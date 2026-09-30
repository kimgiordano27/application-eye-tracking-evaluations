/*
FUNCTION_NAME: OVRPlugin$$GetCurrentDetachedInteractionProfile
ENTRY_POINT: 06abc0d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentDetachedInteractionProfile(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = *unaff_x20;
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870();
    param_1 = *(long *)(unaff_x21 + 0x858);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_06abc1e8:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) goto LAB_06abc1e8;
          lVar3 = *(long *)(unaff_x21 + 0x858);
          uVar1 = *(uint *)(lVar4 + 0x20 + lVar6 * 4);
          lVar7 = (long)(int)uVar1;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            FUN_033b9870();
            lVar3 = *(long *)(unaff_x21 + 0x858);
          }
          lVar3 = **(long **)(lVar3 + 0xb8);
          if (lVar3 == 0) goto LAB_06abc1e4;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_06abc1e8;
          if ((*(long *)(unaff_x19 + 0xc0) == 0) ||
             (lVar5 = *(long *)(*(long *)(unaff_x19 + 0xc0) + 0x38), lVar5 == 0)) goto LAB_06abc1e4;
          uVar2 = *(uint *)(lVar3 + lVar7 * 4 + 0x20);
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_06abc1e8;
          lVar3 = *(long *)(unaff_x19 + 0x140);
          if (lVar3 == 0) goto LAB_06abc1e4;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_06abc1e8;
          lVar5 = lVar5 + (long)(int)uVar2 * 0x10;
          uVar8 = *(undefined8 *)(lVar5 + 0x20);
          lVar3 = lVar3 + lVar7 * 0x10;
          *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(lVar3 + 0x20) = uVar8;
          lVar3 = *(long *)(unaff_x19 + 0xd0);
          if (lVar3 == 0) goto LAB_06abc1e4;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_06abc1e8;
          *(undefined4 *)(lVar3 + lVar7 * 4 + 0x20) = 0x3f800000;
          uVar1 = *(uint *)(lVar4 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
      return;
    }
  }
LAB_06abc1e4:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


