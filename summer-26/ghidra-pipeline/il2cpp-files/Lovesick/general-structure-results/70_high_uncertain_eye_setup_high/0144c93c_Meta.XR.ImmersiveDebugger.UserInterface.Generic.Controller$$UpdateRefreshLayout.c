/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$UpdateRefreshLayout
ENTRY_POINT: 0144c93c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__UpdateRefreshLayout(void)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long lVar8;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long *plVar9;
  undefined8 *unaff_x29;
  float fVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double unaff_d12;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  double in_stack_00000088;
  
  fVar10 = (float)FUN_026883a0(0x80000000,&stack0x00000070,0);
  iVar11 = *(int *)(unaff_x19 + 100);
  if (*(char *)(unaff_x27 + 0xfe0) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x27 + 0xfe0) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  modf((double)(fVar10 * (float)iVar11),&stack0x00000088);
  fVar10 = (float)FUN_026884c4(0x80000000,&stack0x00000070,0);
  iVar11 = *(int *)(unaff_x19 + 0x60);
  if (*(char *)(unaff_x27 + 0xfe0) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x27 + 0xfe0) = 1;
  }
  fVar10 = fVar10 * (float)iVar11;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar14 = (double)fVar10;
  dVar13 = modf(dVar14,&stack0x00000088);
  if (0.0 <= fVar10) {
    dVar1 = unaff_d9;
    if (dVar13 == unaff_d10) goto LAB_0144cac4;
    dVar13 = (double)(long)(dVar14 + unaff_d10);
  }
  else {
    dVar1 = unaff_d11;
    if (dVar13 == unaff_d12) {
LAB_0144cac4:
      dVar13 = in_stack_00000088;
      if (((long)in_stack_00000088 & 1U) != 0) {
        dVar13 = in_stack_00000088 + dVar1;
      }
    }
    else {
      dVar13 = (double)(long)(dVar14 + unaff_d12);
    }
  }
  iVar11 = -0x80000000;
  if (dVar13 != INFINITY) {
    iVar11 = (int)dVar13;
  }
  fVar10 = (float)FUN_026884d4(&stack0x00000070,0);
  iVar12 = *(int *)(unaff_x19 + 100);
  if (*(char *)(unaff_x27 + 0xfe0) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x27 + 0xfe0) = 1;
  }
  fVar10 = fVar10 * (float)iVar12;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  dVar14 = (double)fVar10;
  dVar13 = modf(dVar14,&stack0x00000088);
  puVar2 = PTR_DAT_033ebdf0;
  if (0.0 <= fVar10) {
    unaff_d11 = unaff_d9;
    if (dVar13 == unaff_d10) goto LAB_0144cb88;
    dVar13 = (double)(long)(dVar14 + unaff_d10);
  }
  else if (dVar13 == unaff_d12) {
LAB_0144cb88:
    dVar13 = in_stack_00000088;
    if (((long)in_stack_00000088 & 1U) != 0) {
      dVar13 = in_stack_00000088 + unaff_d11;
    }
  }
  else {
    dVar13 = (double)(long)(dVar14 + unaff_d12);
  }
  iVar12 = -0x80000000;
  if (dVar13 != INFINITY) {
    iVar12 = (int)dVar13;
  }
  if ((iVar11 == 0) || (iVar12 == 0)) {
    in_stack_00000068 = in_stack_00000078;
    in_stack_00000060 = in_stack_00000070;
    uVar3 = FUN_02688894(&stack0x00000060,0);
    uVar3 = FUN_015f5b28(*(undefined8 *)puVar2,uVar3,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x28);
    }
    FUN_026610e4(uVar3,0);
  }
  lVar8 = *(long *)(unaff_x19 + 0x40);
  if (lVar8 != 0) {
    uVar3 = FUN_015f5b28(in_stack_00000050,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__
                         ,0);
    (**(code **)(lVar8 + 0x18))
              (*(undefined4 *)(unaff_x26 + 0x28),*(undefined8 *)(lVar8 + 0x40),uVar3,
               *(undefined8 *)(lVar8 + 0x28));
  }
  plVar9 = *(long **)(unaff_x19 + 0x48);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_2590) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0144ccb8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_2590,2);
LAB_0144ccb8:
    (*(code *)*puVar4)(plVar9,in_stack_00000048,1,1,puVar4[1]);
  }
  puVar2 = Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__;
  lVar8 = *(long *)(unaff_x19 + 0x40);
  if (lVar8 != 0) {
    uVar3 = FUN_01444238();
    uVar3 = FUN_0160073c(in_stack_00000050,*(undefined8 *)puVar2,uVar3,*unaff_x29,0);
    (**(code **)(lVar8 + 0x18))
              (DAT_028aa4e0,*(undefined8 *)(lVar8 + 0x40),uVar3,*(undefined8 *)(lVar8 + 0x28));
  }
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (lVar8 == 0) {
LAB_0144c5a8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(unaff_x19 + 0x68) < *(uint *)(lVar8 + 0x18)) {
    lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20);
    if (((lVar8 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar5 == 0)) goto LAB_0144c5a8;
    if (*(uint *)(unaff_x19 + 0x84) < *(uint *)(lVar5 + 0x18)) {
      uVar3 = FUN_0144bba0(*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                           *(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x38));
      *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


