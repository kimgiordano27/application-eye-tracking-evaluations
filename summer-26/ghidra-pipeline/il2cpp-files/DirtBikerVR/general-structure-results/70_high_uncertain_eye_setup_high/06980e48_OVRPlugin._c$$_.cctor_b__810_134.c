/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_134
ENTRY_POINT: 06980e48
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_134(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    uVar4 = FUN_06290cc0(&stack0x00000030,param_2);
    uVar3 = in_stack_00000048;
    uVar5 = in_stack_00000040;
    if ((uVar4 & 1) == 0) {
      FUN_06290de0(&stack0x00000030,*unaff_x25);
      puVar2 = PTR_DAT_08490748;
      FUN_067aa750((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x24);
      }
      FUN_06980ffc();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      System_Type__IsValueTypeImpl(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar4 = 0;
          uVar6 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar4 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            System_Type__IsValueTypeImpl(__ptr);
            uVar6 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_0697fc58(uVar5);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w27 - 1) * 8 + 0x20) = uVar5;
    uVar5 = FUN_0697fc58(uVar3);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) break;
    lVar1 = (long)(int)unaff_w27;
    unaff_w27 = unaff_w27 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar5;
    param_2 = *unaff_x26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


