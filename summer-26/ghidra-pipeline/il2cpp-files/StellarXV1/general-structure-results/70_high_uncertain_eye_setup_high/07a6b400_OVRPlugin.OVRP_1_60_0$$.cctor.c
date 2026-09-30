/*
FUNCTION_NAME: OVRPlugin.OVRP_1_60_0$$.cctor
ENTRY_POINT: 07a6b400
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07a6b4ac) */

void OVRPlugin_OVRP_1_60_0___cctor(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  plVar4 = *(long **)(unaff_x20 + 0x6a8);
  if (param_1 != 0) {
    lVar1 = *plVar4;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar1 = *plVar4;
    }
    if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_07a6b574;
    uVar2 = FUN_06fe48fc(**(long **)(lVar1 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000018,*(undefined8 *)PTR_DAT_092f0f00);
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar1 = *plVar4;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar1 = *plVar4;
      }
      if ((in_stack_00000028 != 0) && (**(long **)(lVar1 + 0xb8) != 0)) {
        FUN_06fe42d4(**(long **)(lVar1 + 0xb8),*(undefined8 *)(in_stack_00000028 + 0x18),
                     *(undefined8 *)PTR_DAT_092f0ef0);
        return;
      }
      goto LAB_07a6b574;
    }
  }
  lVar1 = *plVar4;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar1 = *plVar4;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_06fe15b4(lVar1,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000010,
                         *(undefined8 *)PTR_DAT_092f0ef8);
    if ((uVar2 & 1) == 0) {
      lVar1 = *plVar4;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar1 = *plVar4;
      }
      lVar3 = *(long *)(lVar1 + 0xb8);
      if ((*(char *)(lVar3 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar3 = *(long *)(*plVar4 + 0xb8);
        }
        *(long *)(lVar3 + 0x18) = unaff_x19;
        thunk_FUN_040ec700((long *)(lVar3 + 0x18));
      }
    }
    else {
      if (in_stack_00000010 == (long *)0x0) goto LAB_07a6b574;
      (**(code **)(*in_stack_00000010 + 0x178))();
    }
    return;
  }
LAB_07a6b574:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


