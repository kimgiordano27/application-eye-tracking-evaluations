/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsent
ENTRY_POINT: 04f88d44
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SaveUnifiedConsent(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  uint unaff_w26;
  long lVar4;
  ulong uVar5;
  ulong in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  while (uVar2 = in_stack_00000008, unaff_x23 < param_1) {
    FUN_04ef5c3c(in_x9 + (ulong)unaff_w26 * (unaff_x25 & 0xffffffff) + 0x20,in_x9 + unaff_x24,0);
    if (((unaff_x19 == 0) || (lVar4 = *(long *)(unaff_x19 + 0x38), lVar4 == 0)) ||
       (lVar3 = *(long *)(unaff_x19 + 0x48), lVar3 == 0)) {
LAB_04f88e2c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) break;
    lVar3 = lVar3 + unaff_x22 * 4;
    uVar5 = in_stack_00000000 & 0xffffffff;
    uVar1 = in_stack_00000000._4_4_;
    in_stack_00000000 = 0;
    in_stack_00000008 = 0;
    FUN_05c99d80(uVar5,uVar1,uVar2,*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                 *(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x2c));
    uStack0000000000000034 = 0;
    lVar3 = *(long *)(unaff_x19 + 0x38);
    uStack0000000000000028 = 0;
    in_stack_00000020 = 0;
    uStack000000000000002c = 0;
    uStack0000000000000030 = 0;
    if (lVar3 == 0) goto LAB_04f88e2c;
    if ((*(uint *)(lVar4 + 0x18) <= unaff_w26) || (*(uint *)(lVar3 + 0x18) <= unaff_x23)) break;
    FUN_04ef5cac(lVar4 + (ulong)unaff_w26 * (unaff_x25 & 0xffffffff) + 0x20,&stack0x00000020,
                 lVar3 + unaff_x24,0);
    lVar4 = *unaff_x21;
    do {
      unaff_x22 = unaff_x22 + 4;
      unaff_x23 = unaff_x23 + 1;
      unaff_x24 = unaff_x24 + 0x1c;
      if (unaff_x22 == 0x68) {
        return;
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *unaff_x21;
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_04f88e2c;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_04f88e30;
      unaff_w26 = *(uint *)(lVar3 + unaff_x22 + 0x20);
    } while ((int)unaff_w26 < 0);
    if ((*(long *)(unaff_x20 + 0xc0) == 0) ||
       (in_x9 = *(long *)(*(long *)(unaff_x20 + 0xc0) + 0x38), in_x9 == 0)) goto LAB_04f88e2c;
    if ((uint)*(ulong *)(in_x9 + 0x18) <= unaff_w26) break;
    param_1 = *(ulong *)(in_x9 + 0x18) & 0xffffffff;
  }
LAB_04f88e30:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


