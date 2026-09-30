/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetUnifiedConsent
ENTRY_POINT: 056989cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__GetUnifiedConsent(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  undefined8 *puVar7;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar8;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  
  puVar8 = *(undefined8 **)(unaff_x25 + 0x440);
  puVar7 = *(undefined8 **)(unaff_x23 + 0x438);
  FUN_03fb6fa8(&stack0x00000008,param_2,*param_1);
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000020;
  do {
    do {
      uVar3 = FUN_0514478c(&stack0x00000020,*puVar8);
      uVar2 = in_stack_00000030;
      if ((uVar3 & 1) == 0) {
        FUN_05144788(&stack0x00000020,*puVar7);
        return;
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    } while ((int)*(ulong *)(unaff_x20 + 0x18) < 1);
    uVar3 = 0;
    uVar5 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    do {
      if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (*(char *)(unaff_x20 + 0x20 + uVar3) != '\0') {
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_05699078(uVar2 & 0xffffffff,uVar3 & 0xffffffff);
        if (unaff_x19 == 0) {
LAB_05698af4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_05698af4;
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          LeanTween__value();
        }
        else {
          FUN_040101ec();
        }
      }
      uVar5 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  } while( true );
}


