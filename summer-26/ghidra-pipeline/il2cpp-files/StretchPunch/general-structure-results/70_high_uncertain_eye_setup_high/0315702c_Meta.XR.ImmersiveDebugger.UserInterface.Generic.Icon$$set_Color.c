/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$set_Color
ENTRY_POINT: 0315702c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_Color(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  long unaff_x21;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  while (!(bool)in_CY) {
    puVar1 = (undefined8 *)(param_1 + unaff_x21);
    if (unaff_x20 == 0) goto LAB_0315720c;
    in_stack_00000080 = *puVar1;
    in_stack_00000088 = puVar1[1];
    in_stack_00000090 = puVar1[2];
    in_stack_00000098 = puVar1[3];
    in_stack_000000a0 = puVar1[4];
    in_stack_000000a8 = puVar1[5];
    in_stack_000000b0 = puVar1[6];
    uVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) != 0) {
      uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
LAB_031570a4:
      if ((int)uVar2 <= (int)unaff_x22) {
        return 0;
      }
      uVar6 = unaff_x22 & 0xffffffff;
      goto LAB_031570b4;
    }
    uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x38;
    if ((long)uVar2 <= (long)unaff_x22) goto LAB_031570a4;
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto LAB_0315720c;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x22;
  }
LAB_03157210:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
LAB_031570b4:
  unaff_x22 = (ulong)((int)unaff_x22 + 1);
  do {
    iVar7 = (int)unaff_x22;
    uVar5 = (uint)uVar6;
    if ((int)uVar2 <= iVar7) {
      FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),uVar6,(int)uVar2 - uVar5,0);
      iVar7 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = uVar5;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar7 - uVar5;
    }
    lVar4 = (long)iVar7 * 0x38 + 0x20;
    unaff_x22 = (ulong)iVar7;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_0315720c;
      if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_03157210;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      if (unaff_x20 == 0) goto LAB_0315720c;
      in_stack_00000080 = *puVar1;
      in_stack_00000088 = puVar1[1];
      in_stack_00000090 = puVar1[2];
      in_stack_00000098 = puVar1[3];
      in_stack_000000a0 = puVar1[4];
      in_stack_000000a8 = puVar1[5];
      in_stack_000000b0 = puVar1[6];
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) == 0) {
        uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      lVar4 = lVar4 + 0x38;
    } while ((long)unaff_x22 < (long)uVar2);
    uVar8 = (uint)unaff_x22;
  } while ((int)uVar2 <= (int)uVar8);
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 == 0) {
LAB_0315720c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_03157210;
  lVar3 = lVar4 + (long)(int)uVar8 * 0x38;
  uVar14 = *(undefined8 *)(lVar3 + 0x38);
  uVar13 = *(undefined8 *)(lVar3 + 0x30);
  uVar10 = *(undefined8 *)(lVar3 + 0x48);
  uVar9 = *(undefined8 *)(lVar3 + 0x40);
  uVar12 = *(undefined8 *)(lVar3 + 0x28);
  uVar11 = *(undefined8 *)(lVar3 + 0x20);
  if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_03157210;
  lVar4 = lVar4 + (long)(int)uVar5 * 0x38;
  *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar4 + 0x38) = uVar14;
  *(undefined8 *)(lVar4 + 0x30) = uVar13;
  *(undefined8 *)(lVar4 + 0x48) = uVar10;
  *(undefined8 *)(lVar4 + 0x40) = uVar9;
  *(undefined8 *)(lVar4 + 0x28) = uVar12;
  *(undefined8 *)(lVar4 + 0x20) = uVar11;
  thunk_FUN_01e10808(lVar4 + 0x20,0);
  uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
  uVar6 = (ulong)(uVar5 + 1);
  goto LAB_031570b4;
}


