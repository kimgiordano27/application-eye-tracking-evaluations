/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingSupported
ENTRY_POINT: 07a6df74
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingSupported(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint in_w8;
  ulong uVar4;
  uint in_w9;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    if (in_w9 <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)in_w8 * 8 + 0x20) = param_1;
    uVar3 = FUN_07a6cd4c(unaff_x22);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) break;
    *(undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20) = uVar3;
    uVar2 = FUN_05385f24(&stack0x00000030,*unaff_x26);
    unaff_x22 = in_stack_00000048;
    uVar3 = in_stack_00000040;
    if ((uVar2 & 1) == 0) {
      FUN_05386044(&stack0x00000030,*unaff_x25);
      puVar1 = PTR_DAT_092acc38;
      FUN_076d5104((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x24);
      }
      FUN_07a6e0f4();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar2 = 0;
          uVar4 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar2 * 8);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            free(__ptr);
            uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    param_1 = FUN_07a6cd4c(uVar3);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_w9 = *(uint *)(unaff_x19 + 0x18);
    in_w8 = unaff_w27 + 1;
    unaff_w27 = unaff_w27 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


