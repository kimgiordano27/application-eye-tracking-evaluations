/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$remove_OnVisibilityChangedEvent
ENTRY_POINT: 0144cafc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;weak_vector_component_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__remove_OnVisibilityChangedEvent
               (undefined8 param_1)

{
  undefined *puVar1;
  bool in_ZR;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w8;
  long lVar4;
  int in_w9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  long lVar7;
  long unaff_x27;
  long *unaff_x28;
  long *plVar8;
  undefined8 *unaff_x29;
  float fVar9;
  int iVar10;
  double dVar11;
  double __x;
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
  
  if (!in_ZR) {
    in_w8 = in_w9;
  }
  fVar9 = (float)FUN_026884d4(param_1,0);
  iVar10 = *(int *)(unaff_x19 + 100);
  if (*(char *)(unaff_x27 + 0xfe0) == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    *(undefined1 *)(unaff_x27 + 0xfe0) = 1;
  }
  fVar9 = fVar9 * (float)iVar10;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  __x = (double)fVar9;
  dVar11 = modf(__x,&stack0x00000088);
  puVar1 = PTR_DAT_033ebdf0;
  if (0.0 <= fVar9) {
    unaff_d11 = unaff_d9;
    if (dVar11 == unaff_d10) goto LAB_0144cb88;
    dVar11 = (double)(long)(__x + unaff_d10);
  }
  else if (dVar11 == unaff_d12) {
LAB_0144cb88:
    dVar11 = in_stack_00000088;
    if (((long)in_stack_00000088 & 1U) != 0) {
      dVar11 = in_stack_00000088 + unaff_d11;
    }
  }
  else {
    dVar11 = (double)(long)(__x + unaff_d12);
  }
  iVar10 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar10 = (int)dVar11;
  }
  if ((in_w8 == 0) || (iVar10 == 0)) {
    in_stack_00000068 = in_stack_00000078;
    in_stack_00000060 = in_stack_00000070;
    uVar2 = FUN_02688894(&stack0x00000060,0);
    uVar2 = FUN_015f5b28(*(undefined8 *)puVar1,uVar2,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x28);
    }
    FUN_026610e4(uVar2,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x40);
  if (lVar7 != 0) {
    uVar2 = FUN_015f5b28(in_stack_00000050,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<IAnimationWindowPreview>_AddRange__
                         ,0);
    (**(code **)(lVar7 + 0x18))
              (*(undefined4 *)(unaff_x22 + 0x28),*(undefined8 *)(lVar7 + 0x40),uVar2,
               *(undefined8 *)(lVar7 + 0x28));
  }
  plVar8 = *(long **)(unaff_x19 + 0x48);
  if (plVar8 != (long *)0x0) {
    lVar7 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_2590) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0144ccb8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_2590,2);
LAB_0144ccb8:
    (*(code *)*puVar3)(plVar8,in_stack_00000048,1,1,puVar3[1]);
  }
  puVar1 = Method_System_Linq_Expressions_DebugInfoExpression_get_IsClear__;
  lVar7 = *(long *)(unaff_x19 + 0x40);
  if (lVar7 != 0) {
    uVar2 = FUN_01444238();
    uVar2 = FUN_0160073c(in_stack_00000050,*(undefined8 *)puVar1,uVar2,*unaff_x29,0);
    (**(code **)(lVar7 + 0x18))
              (DAT_028aa4e0,*(undefined8 *)(lVar7 + 0x40),uVar2,*(undefined8 *)(lVar7 + 0x28));
  }
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 != 0) {
    if (*(uint *)(unaff_x19 + 0x68) < *(uint *)(lVar7 + 0x18)) {
      lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 0x68) * 8 + 0x20);
      if (((lVar7 == 0) || (*(long *)(unaff_x19 + 0x20) == 0)) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar4 == 0)) goto LAB_0144c5a8;
      if (*(uint *)(unaff_x19 + 0x84) < *(uint *)(lVar4 + 0x18)) {
        uVar2 = FUN_0144bba0(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                             *(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38));
        *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0144c5a8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


