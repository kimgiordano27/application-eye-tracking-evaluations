/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateImmediate
ENTRY_POINT: 0566c8dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePoseStateImmediate(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
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
  undefined1 *in_stack_000000c8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  uVar5 = FUN_06350670(param_1,param_2,0);
  if ((uVar5 & 1) == 0) {
    if (unaff_x20 == 0) {
LAB_0566ca50:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05692630();
    uVar4 = in_stack_000000f8;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_06350670(uVar4,0,0);
    uVar4 = in_stack_000000f0;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_06350670(uVar4,0,0);
      uVar4 = in_stack_000000e8;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_06350670(uVar4,0,0);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0566ca50;
          FUN_04010c90(&stack0x000000d0,*(long *)(unaff_x19 + 0x38),
                       *(undefined8 *)System_Collections_Generic_List<GCHandle>_TypeInfo);
          puVar2 = System_Collections_Generic_List<FunctionTimer>_TypeInfo;
          puVar1 = PTR_DAT_069fc448;
          in_stack_000000c0 = 0;
          in_stack_000000c8 = &stack0x000000d0;
          while (uVar5 = FUN_05156804(&stack0x000000d0,*(undefined8 *)puVar2),
                lVar3 = in_stack_000000e0, (uVar5 & 1) != 0) {
            if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(undefined8 *)(in_stack_000000e0 + 0x20) = in_stack_000000e8;
            LeanTween__value();
            uVar4 = in_stack_000000f8;
            FUN_0567a320(&stack0x00000040,lVar3,0);
            in_stack_00000088 = in_stack_00000048;
            in_stack_00000080 = in_stack_00000040;
            in_stack_00000098 = in_stack_00000058;
            in_stack_00000090 = in_stack_00000050;
            in_stack_000000a8 = in_stack_00000068;
            in_stack_000000a0 = in_stack_00000060;
            in_stack_000000b8 = in_stack_00000078;
            in_stack_000000b0 = in_stack_00000070;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_06316894(uVar4);
          }
          FUN_02d01480(&stack0x000000c0);
        }
      }
    }
  }
  return;
}


