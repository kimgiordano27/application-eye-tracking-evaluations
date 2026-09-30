/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManagerAddon<object>$$.ctor
ENTRY_POINT: 04f78800
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<object>___ctor(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  int in_w10;
  uint *unaff_x19;
  int unaff_w20;
  uint unaff_w23;
  long unaff_x24;
  uint uVar4;
  uint unaff_w26;
  ulong uVar5;
  
code_r0x04f78800:
  if (in_w10 == 0) {
LAB_04f78858:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  *(uint *)(in_x9 + (long)(int)(in_w10 - 1U & unaff_w23) * 4 + 0x20) = unaff_w26;
  uVar4 = 0;
  do {
    if ((int)unaff_w26 < 1) {
LAB_04f78824:
      uVar2 = 0;
      unaff_w26 = uVar4;
LAB_04f78828:
      *unaff_x19 = unaff_w26;
      return uVar2;
    }
    while( true ) {
      if (param_1 == 0) goto LAB_04f78854;
      if (*(uint *)(param_1 + 0x18) <= unaff_w26) goto LAB_04f78858;
      uVar5 = (ulong)unaff_w26;
      if (*(uint *)(param_1 + 0x20 + uVar5 * 0x10 + 8) != unaff_w23) goto LAB_04f787d0;
      lVar3 = *(long *)(unaff_x24 + 0x28);
      if (lVar3 == 0) goto LAB_04f78854;
      lVar3 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),
                         *(undefined8 *)(param_1 + 0x20 + uVar5 * 0x10),
                         *(undefined8 *)(lVar3 + 0x28));
      if (lVar3 != 0) break;
      lVar3 = *(long *)(unaff_x24 + 0x18);
      if (lVar3 == 0) goto LAB_04f78854;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w26) goto LAB_04f78858;
      if (*(int *)(lVar3 + 0x20 + uVar5 * 0x10 + 0xc) < 1) goto LAB_04f787d0;
      *(undefined8 *)(lVar3 + 0x20 + uVar5 * 0x10) = 0;
      param_1 = *(long *)(unaff_x24 + 0x18);
      if (param_1 == 0) goto LAB_04f78854;
      if (*(uint *)(param_1 + 0x18) <= unaff_w26) goto LAB_04f78858;
      unaff_w26 = *(uint *)(param_1 + 0x20 + uVar5 * 0x10 + 0xc);
      if (uVar4 == 0) {
        in_x9 = *(long *)(unaff_x24 + 0x10);
        if (in_x9 == 0) goto LAB_04f78854;
        in_w10 = *(int *)(in_x9 + 0x18);
        goto code_r0x04f78800;
      }
      if (*(uint *)(param_1 + 0x18) <= uVar4) goto LAB_04f78858;
      *(uint *)(param_1 + 0x20 + (long)(int)uVar4 * 0x10 + 0xc) = unaff_w26;
      if ((int)unaff_w26 < 1) goto LAB_04f78824;
    }
    if ((*(int *)(lVar3 + 0x10) == unaff_w20) && (iVar1 = FUN_057bd09c(), iVar1 == 0)) {
      uVar2 = 1;
      goto LAB_04f78828;
    }
LAB_04f787d0:
    param_1 = *(long *)(unaff_x24 + 0x18);
    if (param_1 == 0) {
LAB_04f78854:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w26) goto LAB_04f78858;
    uVar4 = unaff_w26;
    unaff_w26 = *(uint *)(param_1 + uVar5 * 0x10 + 0x2c);
  } while( true );
}


