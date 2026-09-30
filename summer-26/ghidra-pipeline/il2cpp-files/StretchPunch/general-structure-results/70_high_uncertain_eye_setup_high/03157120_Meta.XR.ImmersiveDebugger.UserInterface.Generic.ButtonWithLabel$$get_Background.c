/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$get_Background
ENTRY_POINT: 03157120
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


int Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__get_Background
              (code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  do {
    uVar2 = (*param_1)(param_2,&stack0x00000080,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
LAB_0315714c:
      uVar6 = (uint)unaff_x22;
      if ((int)uVar6 < iVar3) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) {
LAB_0315720c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_03157210;
        lVar5 = lVar4 + (long)(int)uVar6 * (long)(int)unaff_x23;
        uVar12 = *(undefined8 *)(lVar5 + 0x38);
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
        uVar8 = *(undefined8 *)(lVar5 + 0x48);
        uVar7 = *(undefined8 *)(lVar5 + 0x40);
        uVar10 = *(undefined8 *)(lVar5 + 0x28);
        uVar9 = *(undefined8 *)(lVar5 + 0x20);
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_03157210;
        lVar4 = lVar4 + (int)unaff_w21 * unaff_x23;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar5 + 0x50);
        *(undefined8 *)(lVar4 + 0x38) = uVar12;
        *(undefined8 *)(lVar4 + 0x30) = uVar11;
        *(undefined8 *)(lVar4 + 0x48) = uVar8;
        *(undefined8 *)(lVar4 + 0x40) = uVar7;
        *(undefined8 *)(lVar4 + 0x28) = uVar10;
        *(undefined8 *)(lVar4 + 0x20) = uVar9;
        thunk_FUN_01e10808(lVar4 + 0x20,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        uVar6 = uVar6 + 1;
      }
      if (iVar3 <= (int)uVar6) {
        FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar3 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      unaff_x24 = (long)(int)uVar6 * (long)(int)unaff_x23 + 0x20;
      unaff_x22 = (long)(int)uVar6;
    }
    else {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x38;
      if (iVar3 <= unaff_x22) goto LAB_0315714c;
    }
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto LAB_0315720c;
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) {
LAB_03157210:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    if (unaff_x20 == 0) goto LAB_0315720c;
    param_1 = *(code **)(unaff_x20 + 0x18);
    param_2 = *(undefined8 *)(unaff_x20 + 0x40);
    in_stack_00000080 = *puVar1;
    in_stack_00000088 = puVar1[1];
    in_stack_00000090 = puVar1[2];
    in_stack_00000098 = puVar1[3];
    in_stack_000000a0 = puVar1[4];
    in_stack_000000a8 = puVar1[5];
    in_stack_000000b0 = puVar1[6];
  } while( true );
}


