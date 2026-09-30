/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_137
ENTRY_POINT: 06980f9c
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


void OVRPlugin_<>c__<_cctor>b__810_137(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  void *__ptr;
  void *unaff_x20;
  int unaff_w21;
  ulong uVar4;
  long lVar5;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_039b2ce0(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_03b79cbc(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar5 = *plVar2;
  in_stack_00000008 = lVar5;
  __cxa_end_catch();
  FUN_06290de0(in_stack_00000010,*unaff_x25);
  puVar1 = PTR_DAT_08490748;
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8(lVar5);
  }
  FUN_067aa750((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
  FUN_06980ffc();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  System_Type__IsValueTypeImpl(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar4 = 0;
      uVar3 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar4 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        System_Type__IsValueTypeImpl(__ptr);
        uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


