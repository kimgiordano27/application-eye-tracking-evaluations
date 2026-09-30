/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Extensions$$SetSizeOptimized
ENTRY_POINT: 0144c7b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_13;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Extensions__SetSizeOptimized(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x26;
  long *unaff_x28;
  long *plVar9;
  undefined8 *unaff_x29;
  float fVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  double in_stack_00000088;
  
  puVar1 = System_Action<TimerState>_TypeInfo;
  if (param_1 == 0) {
    uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar2,0);
  }
  if (*(uint *)(unaff_x23 + 0x18) < 4) goto LAB_0144cde8;
  *(undefined8 *)(unaff_x23 + 0x38) = unaff_x24;
  uVar2 = FUN_01600be4(*(undefined8 *)puVar1);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x28);
  }
  FUN_02660dac(uVar2,0);
  lVar5 = *(long *)(unaff_x19 + 0x58);
  if (lVar5 == 0) goto LAB_0144c5a8;
  if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x84)) goto LAB_0144cde8;
  lVar5 = lVar5 + (long)(int)*(uint *)(unaff_x19 + 0x84) * 0x10;
  in_stack_00000078 = *(undefined8 *)(lVar5 + 0x28);
  in_stack_00000070 = *(undefined8 *)(lVar5 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) goto LAB_0144c5a8;
  if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 0x68)) goto LAB_0144cde8;
  if (*(long *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20) == 0) goto LAB_0144c5a8;
  uVar2 = FUN_01443ffc();
  fVar10 = (float)FUN_02688390(&stack0x00000070,0);
  iVar11 = *(int *)(unaff_x19 + 0x60);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  modf((double)(fVar10 * (float)iVar11),&stack0x00000088);
  fVar10 = (float)FUN_026883a0(0x80000000,&stack0x00000070,0);
  iVar11 = *(int *)(unaff_x19 + 100);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  modf((double)(fVar10 * (float)iVar11),&stack0x00000088);
  fVar10 = (float)FUN_026884c4(0x80000000,&stack0x00000070,0);
  iVar11 = *(int *)(unaff_x19 + 0x60);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  fVar10 = fVar10 * (float)iVar11;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar14 = (double)fVar10;
  dVar13 = modf(dVar14,&stack0x00000088);
  if (0.0 <= fVar10) {
    if (dVar13 == 0.5) {
      dVar13 = in_stack_00000088 + 1.0;
      goto LAB_0144cac4;
    }
    dVar14 = (double)(long)(dVar14 + 0.5);
  }
  else if (dVar13 == -0.5) {
    dVar13 = in_stack_00000088 + -1.0;
LAB_0144cac4:
    dVar14 = in_stack_00000088;
    if (((long)in_stack_00000088 & 1U) != 0) {
      dVar14 = dVar13;
    }
  }
  else {
    dVar14 = (double)(long)(dVar14 + -0.5);
  }
  iVar11 = -0x80000000;
  if (dVar14 != INFINITY) {
    iVar11 = (int)dVar14;
  }
  fVar10 = (float)FUN_026884d4(&stack0x00000070,0);
  iVar12 = *(int *)(unaff_x19 + 100);
  if (DAT_03774fe0 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774fe0 = '\x01';
  }
  fVar10 = fVar10 * (float)iVar12;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar14 = (double)fVar10;
  dVar13 = modf(dVar14,&stack0x00000088);
  puVar1 = PTR_DAT_033ebdf0;
  if (0.0 <= fVar10) {
    if (dVar13 == 0.5) {
      dVar13 = in_stack_00000088 + 1.0;
      goto LAB_0144cb88;
    }
    dVar14 = (double)(long)(dVar14 + 0.5);
  }
  else if (dVar13 == -0.5) {
    dVar13 = in_stack_00000088 + -1.0;
LAB_0144cb88:
    dVar14 = in_stack_00000088;
    if (((long)in_stack_00000088 & 1U) != 0) {
      dVar14 = dVar13;
    }
  }
  else {
    dVar14 = (double)(long)(dVar14 + -0.5);
  }
  iVar12 = -0x80000000;
  if (dVar14 != INFINITY) {
    iVar12 = (int)dVar14;
  }
  if ((iVar11 == 0) || (iVar12 == 0)) {
    in_stack_00000068 = in_stack_00000078;
    in_stack_00000060 = in_stack_00000070;
    uVar3 = FUN_02688894(&stack0x00000060,0);
    uVar3 = FUN_015f5b28(*(undefined8 *)puVar1,uVar3,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x28);
    }
    FUN_026610e4(uVar3,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x40);
  if (lVar5 != 0) {
    uVar3 = FUN_015f5b28(unaff_x22,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__
                         ,0);
    (**(code **)(lVar5 + 0x18))
              (*(undefined4 *)(unaff_x26 + 0x28),*(undefined8 *)(lVar5 + 0x40),uVar3,
               *(undefined8 *)(lVar5 + 0x28));
  }
  plVar9 = *(long **)(unaff_x19 + 0x48);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2590) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0144ccb8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_2590,2);
LAB_0144ccb8:
    (*(code *)*puVar4)(plVar9,uVar2,1,1,puVar4[1]);
  }
  puVar1 = Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__;
  lVar5 = *(long *)(unaff_x19 + 0x40);
  if (lVar5 != 0) {
    uVar2 = FUN_01444238();
    uVar2 = FUN_0160073c(unaff_x22,*(undefined8 *)puVar1,uVar2,*unaff_x29,0);
    (**(code **)(lVar5 + 0x18))
              (DAT_028aa4e0,*(undefined8 *)(lVar5 + 0x40),uVar2,*(undefined8 *)(lVar5 + 0x28));
  }
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 != 0) {
    if (*(uint *)(unaff_x19 + 0x68) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20);
      if (((lVar5 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) ||
         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar6 == 0)) goto LAB_0144c5a8;
      if (*(uint *)(unaff_x19 + 0x84) < *(uint *)(lVar6 + 0x18)) {
        uVar2 = FUN_0144bba0(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),
                             *(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x38));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return;
      }
    }
LAB_0144cde8:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0144c5a8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


