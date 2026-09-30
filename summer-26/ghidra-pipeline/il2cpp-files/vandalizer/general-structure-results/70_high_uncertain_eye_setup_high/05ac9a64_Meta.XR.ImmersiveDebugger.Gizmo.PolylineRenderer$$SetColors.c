/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 05ac9a64
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if ((int)param_1[1] != *(int *)(lVar5 + 0x2c)) {
      FUN_05e229e0(0);
      lVar5 = *param_1;
      if (lVar5 == 0) goto LAB_05ac9b94;
    }
    uVar3 = *(uint *)(lVar5 + 0x20);
    uVar4 = *(uint *)((long)param_1 + 0xc);
    do {
      uVar8 = uVar4;
      if (uVar3 <= uVar8) {
        *(uint *)((long)param_1 + 0xc) = uVar3 + 1;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
        goto LAB_05ac9b74;
      }
      lVar6 = *(long *)(lVar5 + 0x18);
      *(uint *)((long)param_1 + 0xc) = uVar8 + 1;
      if (lVar6 == 0) goto LAB_05ac9b94;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar4 = uVar8 + 1;
    } while (*(int *)(lVar6 + (long)(int)uVar8 * 0x30 + 0x20) < 0);
    lVar6 = lVar6 + (long)(int)uVar8 * 0x30;
    uVar10 = *(undefined8 *)(lVar6 + 0x40);
    uVar9 = *(undefined8 *)(lVar6 + 0x38);
    uVar7 = *(undefined8 *)(lVar6 + 0x48);
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x30);
    in_stack_00000040 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4();
    }
    in_stack_00000050 = uVar9;
    in_stack_00000058 = uVar10;
    in_stack_00000060 = uVar7;
    FUN_045d86e0(&stack0x00000020,uVar1,uVar2,&stack0x00000050,
                 *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    param_1[6] = in_stack_00000040;
    param_1[3] = in_stack_00000028;
    param_1[2] = in_stack_00000020;
    param_1[5] = in_stack_00000038;
    param_1[4] = in_stack_00000030;
LAB_05ac9b74:
    return uVar8 < uVar3;
  }
LAB_05ac9b94:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


