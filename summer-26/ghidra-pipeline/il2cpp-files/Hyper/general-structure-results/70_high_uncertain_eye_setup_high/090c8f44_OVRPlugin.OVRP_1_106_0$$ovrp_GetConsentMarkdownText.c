/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentMarkdownText
ENTRY_POINT: 090c8f44
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentMarkdownText(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  uVar6 = 0;
  lVar7 = 0x20;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  do {
    uVar3 = in_stack_00000008;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      param_1 = *unaff_x21;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
    if (lVar4 == 0) goto LAB_090c9098;
    if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_090c909c;
    uVar1 = *(uint *)(lVar4 + unaff_x22 + 0x20);
    if (-1 < (int)uVar1) {
      if ((*(long *)(unaff_x20 + 0xc0) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x20 + 0xc0) + 0x38), lVar4 == 0)) {
LAB_090c9098:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (((uint)*(ulong *)(lVar4 + 0x18) <= uVar1) ||
         ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= uVar6)) {
LAB_090c909c:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      FUN_09035e64(lVar4 + (ulong)uVar1 * 0x1c + 0x20,lVar4 + lVar7,0);
      if (((unaff_x19 == 0) || (lVar4 = *(long *)(unaff_x19 + 0x38), lVar4 == 0)) ||
         (lVar5 = *(long *)(unaff_x19 + 0x48), lVar5 == 0)) goto LAB_090c9098;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_090c909c;
      lVar5 = lVar5 + unaff_x22 * 4;
      uVar8 = in_stack_00000000 & 0xffffffff;
      uVar2 = in_stack_00000000._4_4_;
      in_stack_00000000 = 0;
      in_stack_00000008 = 0;
      FUN_0a188128(uVar8,uVar2,uVar3,*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                   *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c));
      lVar5 = *(long *)(unaff_x19 + 0x38);
      uStack0000000000000028 = 0;
      uStack0000000000000020 = 0;
      uStack0000000000000034 = 0;
      uStack0000000000000038 = 0;
      uStack000000000000002c = 0;
      uStack0000000000000030 = 0;
      if (lVar5 == 0) goto LAB_090c9098;
      if ((*(uint *)(lVar4 + 0x18) <= uVar1) || (*(uint *)(lVar5 + 0x18) <= uVar6))
      goto LAB_090c909c;
      FUN_09035ed4(lVar4 + (ulong)uVar1 * 0x1c + 0x20,&stack0x00000020,lVar5 + lVar7,0);
      param_1 = *unaff_x21;
    }
    unaff_x22 = unaff_x22 + 4;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x1c;
    if (unaff_x22 == 0x68) {
      return;
    }
  } while( true );
}


