/*
FUNCTION_NAME: UnityEngine.UI.InputField$$CreateCursorVerts
ENTRY_POINT: 07e9058c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


void UnityEngine_UI_InputField__CreateCursorVerts(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x23;
  long lVar6;
  long in_stack_00000008;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  lVar3 = FUN_07e717ac(param_1,0);
  if (lVar3 != 0) {
    *(undefined2 *)(lVar3 + 0x10) = 0x15;
    lVar6 = *(long *)(unaff_x20 + 0x28);
    in_stack_00000018 = 0;
    in_stack_00000008 = unaff_x19;
    thunk_FUN_03afed3c(&stack0x00000008);
    in_stack_00000018 = lVar3;
    thunk_FUN_03afed3c(&stack0x00000018,lVar3);
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateWebRequestAsync>d__3>__
    ;
    if (lVar6 != 0) {
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<CreateWebRequestAsync>d__3>__
      ;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(long *)(lVar4 + 0x30) = in_stack_00000018;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(long *)(lVar4 + 0x20) = in_stack_00000008;
          thunk_FUN_03afed3c(lVar4 + 0x20,0);
        }
        else {
          in_stack_00000028 = 0;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          FUN_05048edc(lVar6,&stack0x00000020,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x20 + 0x18) != 0) {
          FUN_07f65e94(*(long *)(unaff_x20 + 0x18),lVar3,*(undefined8 *)(unaff_x19 + 0x10));
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            FUN_07e6e4e4(*(long *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x18),0);
            if (*(long *)(unaff_x20 + 0x18) != 0) {
              FUN_07f66054(*(long *)(unaff_x20 + 0x18),0);
              if ((unaff_x23 & 1) != 0) {
                for (lVar6 = *(long *)(unaff_x19 + 0x38); lVar6 != 0;
                    lVar6 = *(long *)(lVar6 + 0x30)) {
                  FUN_07e90240();
                }
              }
              lVar6 = *(long *)(unaff_x20 + 0x28);
              in_stack_00000018 = 0;
              in_stack_00000008 = unaff_x19;
              thunk_FUN_03afed3c(&stack0x00000008);
              in_stack_00000018 = lVar3;
              thunk_FUN_03afed3c(&stack0x00000018,lVar3);
              if (lVar6 != 0) {
                lVar3 = *(long *)(lVar6 + 0x10);
                lVar4 = *(long *)puVar2;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar3 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(long *)(lVar3 + 0x30) = in_stack_00000018;
                    *(undefined8 *)(lVar3 + 0x28) = 1;
                    *(long *)(lVar3 + 0x20) = in_stack_00000008;
                    thunk_FUN_03afed3c(lVar3 + 0x20,0);
                  }
                  else {
                    in_stack_00000028 = 1;
                    in_stack_00000020 = in_stack_00000008;
                    in_stack_00000030 = in_stack_00000018;
                    FUN_05048edc(lVar6,&stack0x00000020,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


