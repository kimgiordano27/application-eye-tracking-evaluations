/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 06ac0384
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPassthroughCapabilities(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar7;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  while (lVar2 = *(long *)(unaff_x20 + 0x10), lVar2 != 0) {
    uVar6 = *unaff_x24;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
LAB_06ac0430:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar2 = lVar2 + unaff_x21 * unaff_x25;
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(unaff_x24 + 1);
    *(undefined8 *)(lVar2 + 0x20) = uVar6;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (((lVar2 == 0) || (unaff_x19 == 0)) || (lVar4 = *(long *)(unaff_x19 + 0x38), lVar4 == 0))
    break;
    if ((*(uint *)(lVar4 + 0x18) <= unaff_x21) || (*(uint *)(lVar2 + 0x18) <= unaff_x21))
    goto LAB_06ac0430;
    lVar4 = lVar4 + unaff_x21 * 0x10;
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    lVar2 = lVar2 + unaff_x21 * unaff_x25;
    unaff_x21 = unaff_x21 + 1;
    *(undefined8 *)(lVar2 + 0x34) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar2 + 0x2c) = uVar6;
    if (unaff_x21 == 0x18) {
      return;
    }
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) break;
    lVar2 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(unaff_x23 + 0xf80)) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06ac0364;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x23 + 0xf80),0);
LAB_06ac0364:
    (*(code *)*puVar1)(plVar7,unaff_x21 & 0xffffffff,puVar1[1]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


