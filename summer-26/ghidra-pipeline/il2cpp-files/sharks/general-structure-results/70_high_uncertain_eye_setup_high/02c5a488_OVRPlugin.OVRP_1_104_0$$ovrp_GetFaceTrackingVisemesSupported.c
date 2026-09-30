/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceTrackingVisemesSupported
ENTRY_POINT: 02c5a488
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetFaceTrackingVisemesSupported(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  void *__ptr;
  void *unaff_x20;
  int unaff_w21;
  ulong uVar3;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_02358984(&stack0x00000030,*unaff_x25);
  puVar1 = PTR_DAT_037f90f8;
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a0();
  }
  FUN_02c28224((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*unaff_x24);
  }
  FUN_02c5a4d0();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  free(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar3 = 0;
      uVar2 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        free(__ptr);
        uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


