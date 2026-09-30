/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 05d910e0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d911a8) */

void OVRPlugin__LocateSpace(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xaa0));
  thunk_FUN_032e1da0(PTR_DAT_072b1aa8);
  *(undefined1 *)(unaff_x20 + 0x91e) = 1;
  puVar1 = PTR_DAT_072800a0;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_05d91274;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_072800a0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_05d91274;
    uVar3 = FUN_0519cc78(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000018,*(undefined8 *)PTR_DAT_072b1aa8);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_0519c650(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)PTR_DAT_072b1a98);
        return;
      }
      goto LAB_05d91274;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_05d91274:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar3 = FUN_05199a70(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000008,
                       *(undefined8 *)PTR_DAT_072b1aa0);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      thunk_FUN_0333a630((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) goto LAB_05d91274;
    (**(code **)(*in_stack_00000008 + 0x178))();
  }
  return;
}


