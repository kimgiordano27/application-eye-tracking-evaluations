/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeAcceleration
ENTRY_POINT: 0316a550
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_3__ovrp_GetNodeAcceleration
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  long unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
  *(undefined1 *)(unaff_x22 + 0x25c) = 1;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar10 = SQRT(unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8);
    fVar7 = (float)FUN_03928d34(*(long *)(unaff_x19 + 0x128),0);
    fVar9 = param_3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar8 = (float)FUN_039274f8();
    plVar6 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_03927140(fVar7 + fVar10 * fVar8,*(undefined4 *)(unaff_x21 + 4),param_3 + fVar10 * fVar9,
                 *(undefined4 *)(unaff_x20 + 0xc),*(undefined4 *)(unaff_x20 + 0x10),
                 *(undefined4 *)(unaff_x20 + 0x14),*(undefined4 *)(unaff_x20 + 0x18),
                 &stack0x00000040,0);
    uStack0000000000000074 = CONCAT44(in_stack_00000058,uStack0000000000000054);
    uStack0000000000000068 = uStack0000000000000048;
    in_stack_00000060 = in_stack_00000040;
    uStack000000000000006c = uStack000000000000004c;
    uStack0000000000000070 = uStack0000000000000050;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_13568) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0316a674;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)StringLiteral_13568,2);
LAB_0316a674:
      (*(code *)*puVar2)(plVar6,&stack0x00000060,puVar2[1]);
      *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


