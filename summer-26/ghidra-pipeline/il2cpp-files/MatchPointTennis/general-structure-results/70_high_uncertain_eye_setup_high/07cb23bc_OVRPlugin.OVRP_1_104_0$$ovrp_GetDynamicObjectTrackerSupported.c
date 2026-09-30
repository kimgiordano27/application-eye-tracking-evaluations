/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetDynamicObjectTrackerSupported
ENTRY_POINT: 07cb23bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07cb247c) */

void OVRPlugin_OVRP_1_104_0__ovrp_GetDynamicObjectTrackerSupported(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  FUN_04447ba8(PTR_DAT_09f513a8);
  *(undefined1 *)(unaff_x20 + 0xaf4) = 1;
  puVar1 = PTR_DAT_09f25658;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_07cb2548;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_09f25658;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_07cb2548;
    uVar3 = System_Array_EmptyInternalEnumerator<Binding_Baselib_Socket_Handle>__MoveNext
                      (**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000018,
                       *(undefined8 *)PTR_DAT_09f513a8);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_07515d1c(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)PTR_DAT_09f51398);
        return;
      }
      goto LAB_07cb2548;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_07cb2548:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar3 = FUN_0750881c(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000008,
                       *(undefined8 *)PTR_DAT_09f513a0);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      thunk_FUN_044bb4b4((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) goto LAB_07cb2548;
    (**(code **)(*in_stack_00000008 + 0x178))();
  }
  return;
}


