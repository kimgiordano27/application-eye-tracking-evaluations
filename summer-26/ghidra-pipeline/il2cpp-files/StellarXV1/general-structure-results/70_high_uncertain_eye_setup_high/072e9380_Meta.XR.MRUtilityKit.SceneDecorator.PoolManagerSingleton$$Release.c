/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerSingleton$$Release
ENTRY_POINT: 072e9380
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerSingleton__Release(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  long unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  if ((unaff_x29 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) {
LAB_072e94cc:
    uVar2 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar2,0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = unaff_x29;
    thunk_FUN_040ec700();
    if ((unaff_x28 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) goto LAB_072e94cc;
    if ((*(uint *)(param_1 + 0x18) & 0xfffffffe) != 0) {
      *(long *)(param_1 + 0x28) = unaff_x28;
      thunk_FUN_040ec700();
      if ((unaff_x24 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) goto LAB_072e94cc;
      if (2 < *(uint *)(param_1 + 0x18)) {
        *(long *)(param_1 + 0x30) = unaff_x24;
        thunk_FUN_040ec700();
        if ((unaff_x21 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) goto LAB_072e94cc;
        if ((*(uint *)(param_1 + 0x18) & 0xfffffffc) != 0) {
          *(long *)(param_1 + 0x38) = unaff_x21;
          thunk_FUN_040ec700();
          in_stack_000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          in_stack_000000b8 = 0;
          in_stack_000000b0 = 0;
          in_stack_00000088 = 0;
          in_stack_00000080 = 0;
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          FUN_072e2d7c(&stack0x00000070);
          memcpy(&stack0x00000018,&stack0x00000070,0x58);
          FUN_072e8ec4();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


