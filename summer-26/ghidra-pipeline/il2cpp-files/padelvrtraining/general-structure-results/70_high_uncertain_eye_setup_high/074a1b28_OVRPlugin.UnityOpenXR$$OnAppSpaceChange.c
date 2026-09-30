/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 074a1b28
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074a1be4) */

void OVRPlugin_UnityOpenXR__OnAppSpaceChange(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0xd70));
  *(undefined1 *)(unaff_x20 + 0xba8) = 1;
  puVar1 = PTR_DAT_091f94d8;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_074a1cb0;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_091f94d8;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_074a1cb0;
    uVar3 = FUN_06c51130(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000018,*(undefined8 *)PTR_DAT_09223d70);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_06c50b08(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)PTR_DAT_09223d60);
        return;
      }
      goto LAB_074a1cb0;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_074a1cb0:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar3 = FUN_06c400bc(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000008,
                       *(undefined8 *)PTR_DAT_09223d68);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      thunk_FUN_03d1023c((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) goto LAB_074a1cb0;
    (**(code **)(*in_stack_00000008 + 0x178))();
  }
  return;
}


