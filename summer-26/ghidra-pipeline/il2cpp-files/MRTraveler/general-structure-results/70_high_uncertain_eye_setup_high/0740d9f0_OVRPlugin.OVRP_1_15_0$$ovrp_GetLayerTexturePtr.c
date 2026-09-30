/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetLayerTexturePtr
ENTRY_POINT: 0740d9f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0740dabc) */

void OVRPlugin_OVRP_1_15_0__ovrp_GetLayerTexturePtr(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *in_stack_00000008;
  long *in_stack_00000018;
  
  FUN_03c8f898(PTR_DAT_08eb64f0);
  FUN_03c8f898(PTR_DAT_08eb64f8);
  *(undefined1 *)(unaff_x20 + 0xa58) = 1;
  puVar1 = PTR_DAT_08e808e0;
  in_stack_00000018 = (long *)0x0;
  in_stack_00000008 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_0740db88;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_08e808e0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_0740db88;
    uVar3 = FUN_06b040e4(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000018,*(undefined8 *)PTR_DAT_08eb64f8);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_06b03abc(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)PTR_DAT_08eb64e8);
        return;
      }
      goto LAB_0740db88;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_0740db88:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar3 = FUN_06acf230(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000008,
                       *(undefined8 *)PTR_DAT_08eb64f0);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      thunk_FUN_03d233cc((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (in_stack_00000008 == (long *)0x0) goto LAB_0740db88;
    (**(code **)(*in_stack_00000008 + 0x178))();
  }
  return;
}


