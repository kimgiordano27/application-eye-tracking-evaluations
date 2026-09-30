/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<object>$$BeginInvoke
ENTRY_POINT: 03eb3614
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<object>__BeginInvoke
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined8 *unaff_x19;
  long *unaff_x22;
  undefined4 unaff_w25;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  if (*unaff_x22 != 0) {
    fVar1 = (float)FUN_05c9a10c(*unaff_x22,0);
    if (unaff_x22[1] != 0) {
      fVar4 = param_2;
      fVar6 = param_3;
      fVar8 = param_4;
      FUN_05c9a10c(unaff_x22[1],0);
      fVar2 = (float)FUN_05c7b504(0);
      if (unaff_x22[2] != 0) {
        fVar5 = fVar1 * fVar4;
        fVar7 = param_2 * fVar6;
        fVar9 = param_3 * fVar4 + fVar1 * fVar8 + param_4 * fVar2;
        fVar10 = (param_2 * fVar2 + param_3 * fVar8 + param_4 * fVar6) - fVar5;
        fVar11 = fVar9 - fVar7;
        FUN_05c9a10c(unaff_x22[2],0);
        fVar3 = (float)FUN_05c7b504(0);
        FUN_056c6360();
        auVar12 = FUN_056be164();
        FUN_056c63ec();
        auVar13 = FUN_056be164();
        FUN_056c642c();
        auVar14 = FUN_056be2e4();
        FUN_056c646c();
        auVar15 = FUN_056be2e4();
        *(undefined4 *)(unaff_x19 + 1) = unaff_w25;
        *(float *)((long)unaff_x19 + 0x4c) =
             (fVar1 * fVar6 + param_2 * fVar8 + param_4 * fVar4) - param_3 * fVar2;
        *(float *)(unaff_x19 + 10) = fVar10;
        *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000088;
        *(undefined8 *)((long)unaff_x19 + 0xc) = in_stack_00000080;
        *unaff_x19 = in_stack_00000028;
        *(undefined8 *)((long)unaff_x19 + 0x2c) = in_stack_00000068;
        *(undefined8 *)((long)unaff_x19 + 0x24) = in_stack_00000060;
        *(undefined8 *)((long)unaff_x19 + 0x1c) = in_stack_00000090;
        *(float *)((long)unaff_x19 + 100) =
             (param_3 * fVar5 + fVar1 * fVar9 + param_4 * fVar3) - param_2 * fVar7;
        *(float *)(unaff_x19 + 0xd) =
             (fVar1 * fVar7 + param_2 * fVar9 + param_4 * fVar5) - param_3 * fVar3;
        *(undefined4 *)((long)unaff_x19 + 0x3c) = uStack000000000000001c;
        *(undefined4 *)(unaff_x19 + 8) = uStack0000000000000020;
        *(undefined8 *)((long)unaff_x19 + 0x34) = in_stack_00000070;
        *(undefined4 *)((long)unaff_x19 + 0x44) = uStack0000000000000024;
        *(float *)(unaff_x19 + 9) = fVar11;
        *(float *)((long)unaff_x19 + 0x6c) =
             (param_2 * fVar3 + param_3 * fVar9 + param_4 * fVar7) - fVar1 * fVar5;
        *(float *)(unaff_x19 + 0xe) =
             ((param_4 * fVar9 - fVar1 * fVar3) - param_2 * fVar5) - param_3 * fVar7;
        *(float *)((long)unaff_x19 + 0x54) =
             ((param_4 * fVar8 - fVar1 * fVar2) - param_2 * fVar4) - param_3 * fVar6;
        *(undefined4 *)(unaff_x19 + 0xb) = uStack0000000000000018;
        *(undefined4 *)((long)unaff_x19 + 0x5c) = uStack0000000000000014;
        *(undefined4 *)(unaff_x19 + 0xc) = uStack0000000000000010;
        *(undefined1 (*) [16])((long)unaff_x19 + 0x74) = auVar12;
        *(undefined1 (*) [16])((long)unaff_x19 + 0x84) = auVar13;
        *(undefined1 (*) [16])((long)unaff_x19 + 0x94) = auVar14;
        *(undefined1 (*) [16])((long)unaff_x19 + 0xa4) = auVar15;
        *(undefined8 *)((long)unaff_x19 + 0xbc) = 0;
        *(undefined8 *)((long)unaff_x19 + 0xb4) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


