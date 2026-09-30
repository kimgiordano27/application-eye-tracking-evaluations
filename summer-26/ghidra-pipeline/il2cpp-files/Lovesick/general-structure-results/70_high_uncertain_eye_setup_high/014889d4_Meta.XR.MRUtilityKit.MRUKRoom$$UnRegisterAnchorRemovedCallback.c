/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$UnRegisterAnchorRemovedCallback
ENTRY_POINT: 014889d4
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


int Meta_XR_MRUtilityKit_MRUKRoom__UnRegisterAnchorRemovedCallback(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined4 unaff_w24;
  ulong uVar3;
  long unaff_x25;
  ulong unaff_x26;
  long lVar4;
  
  while (param_2 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar1 = FUN_0147e7c0(param_2,unaff_w24);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x26) goto LAB_01488c54;
    *(undefined4 *)(lVar4 + unaff_x23 * 4) = uVar1;
    lVar4 = *(long *)(unaff_x19 + 0x180);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_01488c54;
    lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_01488c54;
    if (*(long *)(unaff_x19 + 0xc0) == 0) break;
    lVar4 = *(long *)(lVar4 + 0x30);
    uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w24);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x26) goto LAB_01488c54;
    *(undefined4 *)(lVar4 + unaff_x23 * 4) = uVar1;
    lVar4 = unaff_x23 + 1;
    if (lVar4 == 0xe) {
      if (0 < unaff_w21) {
        lVar4 = 0xe;
        goto LAB_01488a6c;
      }
      lVar4 = *(long *)(unaff_x19 + 0x180);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_01488c54;
        lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_01488c54;
          FUN_0179519c(*(undefined8 *)(lVar4 + 0x20),6,6,0);
          lVar4 = *(long *)(unaff_x19 + 0x180);
          if (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_01488c54;
            lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_01488c54;
              FUN_0179519c(*(undefined8 *)(lVar4 + 0x28),6,6,0);
              lVar4 = *(long *)(unaff_x19 + 0x180);
              if (lVar4 != 0) {
                if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_01488c54;
                lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
                if (lVar4 != 0) {
                  if (2 < *(uint *)(lVar4 + 0x18)) {
                    FUN_0179519c(*(undefined8 *)(lVar4 + 0x30),6,6,0);
                    return unaff_w22;
                  }
                  goto LAB_01488c54;
                }
              }
            }
          }
        }
      }
      break;
    }
    lVar2 = *(long *)(unaff_x19 + 0x180);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
    lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_01488c54;
    if (*(long *)(unaff_x19 + 0xc0) == 0) break;
    lVar2 = *(long *)(lVar2 + 0x20);
    uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w24);
    if (lVar2 == 0) break;
    unaff_x26 = unaff_x23 - 7;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x26) goto LAB_01488c54;
    *(undefined4 *)(lVar2 + lVar4 * 4) = uVar1;
    lVar2 = *(long *)(unaff_x19 + 0x180);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
    param_1 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) < 2) goto LAB_01488c54;
    unaff_x23 = lVar4;
    param_2 = *(long *)(unaff_x19 + 0xc0);
  }
LAB_01488c50:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01488a6c:
  lVar2 = *(long *)(unaff_x19 + 0x180);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
LAB_01488c54:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(int *)(lVar2 + 0x18) == 0) goto LAB_01488c54;
  if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
  lVar2 = *(long *)(lVar2 + 0x20);
  uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
  if (lVar2 == 0) goto LAB_01488c50;
  uVar3 = lVar4 - 8;
  if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_01488c54;
  *(undefined4 *)(lVar2 + lVar4 * 4) = uVar1;
  lVar2 = *(long *)(unaff_x19 + 0x180);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
  lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_01488c54;
  if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
  lVar2 = *(long *)(lVar2 + 0x28);
  uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_01488c54;
  *(undefined4 *)(lVar2 + lVar4 * 4) = uVar1;
  lVar2 = *(long *)(unaff_x19 + 0x180);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_01488c54;
  lVar2 = *(long *)(lVar2 + unaff_x25 * 8 + 0x20);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_01488c54;
  if (*(long *)(unaff_x19 + 0xc0) == 0) goto LAB_01488c50;
  lVar2 = *(long *)(lVar2 + 0x30);
  uVar1 = FUN_0147e7c0(*(long *)(unaff_x19 + 0xc0),unaff_w21);
  if (lVar2 == 0) goto LAB_01488c50;
  if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_01488c54;
  *(undefined4 *)(lVar2 + lVar4 * 4) = uVar1;
  lVar4 = lVar4 + 1;
  if (lVar4 == 0x14) {
    return unaff_w22 + unaff_w21 * 0x12;
  }
  goto LAB_01488a6c;
}


