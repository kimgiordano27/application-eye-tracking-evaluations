/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SaveSpace
ENTRY_POINT: 03173778
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_72_0__ovrp_SaveSpace(ulong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 uVar8;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13568);
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    *(undefined1 *)(unaff_x23 + 0x11c) = 1;
  }
  if (unaff_w19 == 0) {
    if (*(int *)(*(long *)Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__ + 0xe0) ==
        0) {
      thunk_FUN_01ac7298();
    }
    FUN_03927648(&stack0x00000040,0);
    unaff_x20[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    *unaff_x20 = in_stack_00000040;
    *(undefined8 *)((long)unaff_x20 + 0x14) = uStack0000000000000054;
    *(ulong *)((long)unaff_x20 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
  }
  else {
    lVar3 = FUN_03171b2c(param_2);
    if (lVar3 == 0) {
      uStack0000000000000074 = *(undefined8 *)((long)unaff_x21 + 0x14);
      in_stack_00000060 = *unaff_x21;
      in_stack_00000070 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      in_stack_00000068 = (undefined4)unaff_x21[1];
      uStack000000000000006c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
    }
    else {
      plVar4 = (long *)FUN_03171b2c(param_2);
      uStack0000000000000014 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar8 = *unaff_x21;
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      uVar2 = uStack0000000000000050;
      uStack0000000000000048 = (undefined4)unaff_x21[1];
      uVar1 = uStack0000000000000048;
      uStack000000000000004c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
      in_stack_00000040 = uVar8;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uStack000000000000000c = uStack000000000000004c;
      lVar3 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_13568) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0317389c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(plVar4,*(long *)StringLiteral_13568,1);
LAB_0317389c:
      in_stack_00000068 = uVar1;
      uStack0000000000000074 = uStack0000000000000014;
      uStack000000000000006c = uStack000000000000000c;
      in_stack_00000070 = uVar2;
      in_stack_00000060 = uVar8;
      (*(code *)*puVar5)(&stack0x00000020,plVar4,&stack0x00000060,puVar5[1]);
      in_stack_00000068 = uStack0000000000000028;
      in_stack_00000060 = in_stack_00000020;
      uStack0000000000000074 = uStack0000000000000034;
      uStack000000000000006c = uStack000000000000002c;
      in_stack_00000070 = uStack0000000000000030;
    }
    *(undefined8 *)((long)unaff_x20 + 0x14) = uStack0000000000000074;
    *(ulong *)((long)unaff_x20 + 0xc) = CONCAT44(in_stack_00000070,uStack000000000000006c);
    unaff_x20[1] = CONCAT44(uStack000000000000006c,in_stack_00000068);
    *unaff_x20 = in_stack_00000060;
  }
  return unaff_w19 != 0;
}


