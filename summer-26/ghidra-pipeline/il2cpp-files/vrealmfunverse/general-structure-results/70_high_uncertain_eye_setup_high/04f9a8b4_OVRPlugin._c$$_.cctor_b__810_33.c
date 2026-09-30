/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_33
ENTRY_POINT: 04f9a8b4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9a99c) */

void OVRPlugin_<>c__<_cctor>b__810_33(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  FUN_02b3c81c(System_Func<Enum,_int>_TypeInfo);
  FUN_02b3c81c(System_Func<EnumMemberAttribute,_string>_TypeInfo);
  FUN_02b3c81c(System_Func<Event,_EventBase>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xe27) = 1;
  puVar1 = PTR_DAT_0631ef00;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_04f9aa64;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_0631ef00;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04f9aa64;
    uVar3 = FUN_045f784c(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000018,*(undefined8 *)System_Func<Event,_EventBase>_TypeInfo);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      if ((in_stack_00000028 != 0) && (**(long **)(lVar2 + 0xb8) != 0)) {
        FUN_045f7224(**(long **)(lVar2 + 0xb8),*(undefined8 *)(in_stack_00000028 + 0x18),
                     *(undefined8 *)System_Func<Enum,_int>_TypeInfo);
        return;
      }
      goto LAB_04f9aa64;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_04f9aa64:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = FUN_045f09d4(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000010,
                       *(undefined8 *)System_Func<EnumMemberAttribute,_string>_TypeInfo);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      thunk_FUN_02bb0e9c((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (in_stack_00000010 == (long *)0x0) goto LAB_04f9aa64;
    (**(code **)(*in_stack_00000010 + 0x178))();
  }
  return;
}


