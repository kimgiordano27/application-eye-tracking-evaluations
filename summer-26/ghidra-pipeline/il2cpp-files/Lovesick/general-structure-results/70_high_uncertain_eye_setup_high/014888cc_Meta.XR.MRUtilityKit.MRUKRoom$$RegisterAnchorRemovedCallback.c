/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RegisterAnchorRemovedCallback
ENTRY_POINT: 014888cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_MRUKRoom__RegisterAnchorRemovedCallback(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  ulong uVar4;
  long unaff_x25;
  
  lVar2 = *(long *)(param_1 + unaff_x25 * 8 + 0x20);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) < 2) {
LAB_01488c54:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    FUN_0179519c(*(undefined8 *)(lVar2 + 0x28),0,6,0);
    lVar2 = *(long *)(unaff_x19 + 0x180);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_01488c54;
        FUN_0179519c(*(undefined8 *)(lVar2 + 0x30),0,6,0);
        if (unaff_w21 < 1) {
          lVar2 = *(long *)(unaff_x19 + 0x180);
          if (lVar2 != 0) {
            if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
              lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
              if (lVar2 == 0) goto LAB_01488c50;
              if (*(int *)(lVar2 + 0x18) != 0) {
                FUN_0179519c(*(undefined8 *)(lVar2 + 0x20),6,6,0);
                lVar2 = *(long *)(unaff_x19 + 0x180);
                if (lVar2 == 0) goto LAB_01488c50;
                if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
                  lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
                  if (lVar2 == 0) goto LAB_01488c50;
                  if (1 < *(uint *)(lVar2 + 0x18)) {
                    FUN_0179519c(*(undefined8 *)(lVar2 + 0x28),6,6,0);
                    lVar2 = *(long *)(unaff_x19 + 0x180);
                    if (lVar2 == 0) goto LAB_01488c50;
                    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
                      lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
                      if (lVar2 == 0) goto LAB_01488c50;
                      if (2 < *(uint *)(lVar2 + 0x18)) {
                        FUN_0179519c(*(undefined8 *)(lVar2 + 0x30),6,6,0);
                        return 0;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_01488c54;
          }
        }
        else {
          lVar2 = 0xe;
          while (lVar3 = *(long *)(unaff_x19 + 0x180), lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_01488c54;
            lVar3 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) == 0) goto LAB_01488c54;
            if (*(long *)(unaff_x19 + 0xc0) == 0) break;
            lVar3 = *(long *)(lVar3 + 0x20);
            uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
            if (lVar3 == 0) break;
            uVar4 = lVar2 - 8;
            if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_01488c54;
            *(undefined4 *)(lVar3 + lVar2 * 4) = uVar1;
            lVar3 = *(long *)(unaff_x19 + 0x180);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_01488c54;
            lVar3 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_01488c54;
            if (*(long *)(unaff_x19 + 0xc0) == 0) break;
            lVar3 = *(long *)(lVar3 + 0x28);
            uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_01488c54;
            *(undefined4 *)(lVar3 + lVar2 * 4) = uVar1;
            lVar3 = *(long *)(unaff_x19 + 0x180);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_01488c54;
            lVar3 = *(long *)(lVar3 + unaff_x25 * 8 + 0x20);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_01488c54;
            if (*(long *)(unaff_x19 + 0xc0) == 0) break;
            lVar3 = *(long *)(lVar3 + 0x30);
            uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_01488c54;
            *(undefined4 *)(lVar3 + lVar2 * 4) = uVar1;
            lVar2 = lVar2 + 1;
            if (lVar2 == 0x14) {
              return unaff_w21 * 0x12;
            }
          }
        }
      }
    }
  }
LAB_01488c50:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


