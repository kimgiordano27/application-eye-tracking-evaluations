/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakEnum$$set_Value
ENTRY_POINT: 01459c0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                undefined4 param_4,long *param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  float fVar7;
  float fVar8;
  undefined4 unaff_s9;
  undefined4 unaff_s11;
  float unaff_s12;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000038;
  
  puVar1 = Method_System_Linq_Enumerable_Contains<float>__;
  if (param_5 == (long *)0x0) {
LAB_01459e38:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)Method_System_Linq_Enumerable_Contains<float>__ != 0) &&
     (lVar3 = thunk_FUN_00d6225c(*(long *)Method_System_Linq_Enumerable_Contains<float>__,
                                 *(undefined8 *)(*param_5 + 0x40)), lVar3 == 0)) {
LAB_01459e40:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if ((int)param_5[3] != 0) {
    param_5[4] = *(long *)puVar1;
    lVar3 = FUN_01444238();
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_5 + 0x40)), lVar4 == 0))
    goto LAB_01459e40;
    puVar1 = StringLiteral_3287;
    uVar6 = *(uint *)(param_5 + 3);
    if (1 < uVar6) {
      param_5[5] = lVar3;
      if (*(long *)puVar1 != 0) {
        lVar3 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*param_5 + 0x40));
        if (lVar3 == 0) goto LAB_01459e40;
        uVar6 = *(uint *)(param_5 + 3);
      }
      if (2 < uVar6) {
        param_5[6] = *(long *)puVar1;
        in_stack_00000038 = unaff_s11;
        lVar3 = FUN_0269109c(&stack0x00000038,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_5 + 0x40)), lVar4 == 0))
        goto LAB_01459e40;
        uVar6 = *(uint *)(param_5 + 3);
        if (3 < uVar6) {
          param_5[7] = lVar3;
          if (*(long *)puVar1 != 0) {
            lVar3 = thunk_FUN_00d6225c(*(long *)puVar1,*(undefined8 *)(*param_5 + 0x40));
            if (lVar3 == 0) goto LAB_01459e40;
            uVar6 = *(uint *)(param_5 + 3);
          }
          if (4 < uVar6) {
            param_5[8] = *(long *)puVar1;
            in_stack_00000038 = unaff_s9;
            lVar3 = FUN_0269109c(&stack0x00000038,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*param_5 + 0x40)), lVar4 == 0))
            goto LAB_01459e40;
            puVar1 = StringLiteral_302;
            if (5 < *(uint *)(param_5 + 3)) {
              param_5[9] = lVar3;
              uVar5 = FUN_01600844(param_5,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar1);
              }
              FUN_02660dac(uVar5,0);
              uStack0000000000000024 = (undefined4)*(undefined8 *)(unaff_x20 + 0x20);
              uStack0000000000000020 = FUN_014315a4();
              uStack0000000000000028 = param_3;
              uStack000000000000002c = param_4;
              fVar7 = (float)FUN_026884c4(&stack0x00000020,0);
              iVar2 = FUN_01444120();
              FUN_026884d4(&stack0x00000020,0);
              FUN_014441ac();
              if (unaff_x19 != 0) {
                fVar8 = (float)*(int *)(unaff_x19 + 0x28);
                if (fVar7 * (float)iVar2 <= (float)*(int *)(unaff_x19 + 0x28)) {
                  fVar8 = fVar7 * (float)iVar2;
                }
                if (fVar8 <= unaff_s12) {
                  fVar8 = unaff_s12;
                }
                return fVar8;
              }
              goto LAB_01459e38;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


