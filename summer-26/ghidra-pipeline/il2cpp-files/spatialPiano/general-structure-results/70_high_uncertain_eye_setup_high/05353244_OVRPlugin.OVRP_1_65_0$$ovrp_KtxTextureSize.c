/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureSize
ENTRY_POINT: 05353244
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureSize(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_05352050(unaff_x23);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w27 - 1) * 8 + 0x20) = uVar4;
    uVar4 = FUN_05352050(unaff_x22);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) break;
    lVar1 = (long)(int)unaff_w27;
    unaff_w27 = unaff_w27 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar4;
    uVar3 = FUN_04bbf644(&stack0x00000030,*unaff_x26);
    if ((uVar3 & 1) == 0) {
      FUN_04bbf758(&stack0x00000030,*unaff_x25);
      puVar2 = PTR_DAT_067c9c00;
      FUN_0512d418((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x24);
      }
      FUN_053533e4();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar3 = 0;
          uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            free(__ptr);
            uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_1 = *unaff_x24;
    unaff_x22 = in_stack_00000048;
    unaff_x23 = in_stack_00000040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


