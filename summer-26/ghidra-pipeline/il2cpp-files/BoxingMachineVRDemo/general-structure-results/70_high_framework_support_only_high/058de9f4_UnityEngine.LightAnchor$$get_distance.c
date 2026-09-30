/*
FUNCTION_NAME: UnityEngine.LightAnchor$$get_distance
ENTRY_POINT: 058de9f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;weak_vector_component_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void UnityEngine_LightAnchor__get_distance(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long in_stack_000001d0;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x20 + 0xb3c) = 1;
  lVar7 = FUN_058ddbdc();
  puVar6 = OVRPlugin_OVRP_1_85_0_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_84_0_TypeInfo;
  puVar4 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if (*(long *)(lVar7 + 0x1d0) != 0) {
    if ((*(int *)(*(long *)(lVar7 + 0x1d0) + 0x194) != 2) ||
       ((*(char *)(lVar7 + 8) == '\0' && (1 < *(int *)(lVar7 + 0xc) - 1U)))) {
      piVar1 = (int *)(unaff_x19 + 0x160);
      FUN_03799508(piVar1,unaff_w22,*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo);
      if (*(int *)(unaff_x19 + 300) == unaff_w22) {
        *(undefined8 *)(unaff_x19 + 0x128) = 0xffffffffffffffff;
        *(undefined4 *)(unaff_x19 + 0x130) = 0;
      }
      else if (*(int *)(unaff_x19 + 300) == *(int *)(unaff_x19 + 0x138) + -1) {
        *(int *)(unaff_x19 + 300) = unaff_w22;
      }
      FUN_03795c78(unaff_x19 + 0x138,unaff_w22,*(undefined8 *)puVar5);
      FUN_03798ba4(unaff_x19 + 0x148,unaff_w22,*(undefined8 *)puVar4);
      FUN_0379a7c4(piVar1,unaff_w22,*(undefined8 *)puVar6);
      if ((in_stack_000001d0 == 0) || (lVar7 = *(long *)(in_stack_000001d0 + 0xf0), lVar7 == 0))
      goto LAB_058dec00;
      iVar2 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar2) {
        FUN_05029664(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
      }
      *(undefined8 *)(in_stack_000001d0 + 0x188) = 0;
      thunk_FUN_02dd37b4(in_stack_000001d0 + 0x188,0);
      *(undefined8 *)(in_stack_000001d0 + 0x58) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x50) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x88) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x80) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x98) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x90) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x68) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x60) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x78) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0x70) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_000001d0 + 0x50),0);
      *(undefined8 *)(in_stack_000001d0 + 0xd8) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xd0) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xe8) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xe0) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xb8) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xb0) = 0;
      *(undefined8 *)(in_stack_000001d0 + 200) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xc0) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xa8) = 0;
      *(undefined8 *)(in_stack_000001d0 + 0xa0) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_000001d0 + 0xa0),0);
      FUN_0636a964(in_stack_000001d0,0,0);
      FUN_0636a964(in_stack_000001d0,0,0);
      *(undefined8 *)(in_stack_000001d0 + 0x40) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_000001d0 + 0x40),0);
      *(undefined8 *)(in_stack_000001d0 + 0x20) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_000001d0 + 0x20),0);
      *(undefined8 *)(in_stack_000001d0 + 0x38) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_000001d0 + 0x38),0);
      if (*piVar1 == 0) {
        lVar7 = unaff_x19 + 0x338;
        *(long *)(unaff_x19 + 0x338) = in_stack_000001d0;
      }
      else {
        lVar8 = *(long *)(unaff_x19 + 0x388);
        if (lVar8 == 0) goto LAB_058dec00;
        uVar3 = *piVar1 - 1;
        if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar8 = lVar8 + (long)(int)uVar3 * 0x220;
        lVar7 = lVar8 + 0x1f0;
        *(long *)(lVar8 + 0x1f0) = in_stack_000001d0;
      }
      thunk_FUN_02dd37b4(lVar7,in_stack_000001d0);
    }
    return;
  }
LAB_058dec00:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


