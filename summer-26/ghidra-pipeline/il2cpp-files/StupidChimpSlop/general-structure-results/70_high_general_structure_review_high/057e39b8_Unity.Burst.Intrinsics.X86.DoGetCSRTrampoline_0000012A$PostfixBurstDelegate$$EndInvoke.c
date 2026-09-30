/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.DoGetCSRTrampoline_0000012A$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 057e39b8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x057e3c20) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Burst_Intrinsics_X86_DoGetCSRTrampoline_0000012A_PostfixBurstDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar7;
  long unaff_x21;
  char cStack0000000000000024;
  
  FUN_02d4dc40(PTR_DAT_0665bf50);
  FUN_02d4dc40(System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo);
  FUN_02d4dc40(System_Linq_Expressions_Interpreter_RuntimeVariablesInstruction_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x5e9) = 1;
  if ((unaff_x20 & 1) != 0) {
    cStack0000000000000024 = '\0';
    FUN_05065dd8();
    puVar1 = System_Linq_Expressions_Interpreter_RuntimeVariablesInstruction_TypeInfo;
    plVar7 = *(long **)(unaff_x19 + 0x18);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)System_Linq_Expressions_Interpreter_RuntimeVariablesInstruction_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_057e3a78;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02d87540(plVar7,*(long *)
                                    System_Linq_Expressions_Interpreter_RuntimeVariablesInstruction_TypeInfo
                            ,1);
LAB_057e3a78:
      lVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (lVar4 != 0) {
        plVar7 = *(long **)(unaff_x19 + 0x18);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_057e3ae0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02d87540(plVar7,*(long *)puVar1,1);
LAB_057e3ae0:
        plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_057e3b4c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02d87540(plVar7,*(long *)
                                      System_Linq_Expressions_RuntimeVariablesExpression_TypeInfo,3)
        ;
LAB_057e3b4c:
        (*(code *)*puVar2)(plVar7);
      }
    }
    puVar1 = 
    Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JConstructor>_get_IsCompleted__
    ;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if (lVar4 != 0) {
      lVar3 = *(long *)
               Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JConstructor>_get_IsCompleted__
      ;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar3 = *(long *)puVar1;
      }
      plVar7 = (long *)FUN_057bcd44(lVar4,**(undefined8 **)(lVar3 + 0xb8),0);
      if (plVar7 != (long *)0x0) {
        if (*plVar7 != *(long *)PTR_DAT_0665bf50) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar7);
        }
        if (*(int *)(*(long *)PTR_DAT_0664c0c8 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        (*(code *)plVar7[3])(plVar7[8]);
      }
    }
    if (cStack0000000000000024 != '\0') {
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(unaff_x19,0);
    }
  }
  return;
}


