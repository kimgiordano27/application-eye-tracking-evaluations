/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$.cctor
ENTRY_POINT: 0369a310
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2___cctor(void)

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
  float fVar10;
  float unaff_s9;
  float fVar11;
  float unaff_s10;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
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
  undefined8 in_stack_000000c8;
  
  *(undefined1 *)(unaff_x22 + 0x8ab) = 1;
  fVar7 = unaff_s14 * unaff_s14 + unaff_s11 * unaff_s11 + unaff_s15 * unaff_s15;
  fVar11 = unaff_s13 - unaff_s9;
  fVar12 = unaff_s12 - unaff_s10;
  fVar10 = in_stack_000000c8._4_4_ - unaff_s8;
  fVar9 = **(float **)
            (*(long *)
              Method_UnityEngine_UIElements_PanelChangedEventBase<DetachFromPanelEvent>_GetPooled__
            + 0xb8);
  if (fVar9 <= fVar7) {
    fVar8 = fVar10 * unaff_s14 + fVar11 * unaff_s11 + fVar12 * unaff_s15;
    fVar9 = (unaff_s11 * fVar8) / fVar7;
    fVar11 = fVar11 - fVar9;
    fVar12 = fVar12 - (unaff_s15 * fVar8) / fVar7;
    fVar10 = fVar10 - (unaff_s14 * fVar8) / fVar7;
  }
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__;
  if (*(long *)(unaff_x19 + 0x128) != 0) {
    fVar11 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10);
    fVar10 = (float)FUN_0407d3c8(*(long *)(unaff_x19 + 0x128),0);
    fVar7 = fVar9;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar12 = (float)FUN_0407bb40();
    plVar6 = *(long **)(unaff_x19 + 0x138);
    in_stack_00000040 = 0;
    uStack0000000000000048 = 0;
    uStack000000000000004c = 0;
    in_stack_00000058 = 0;
    uStack0000000000000050 = 0;
    uStack0000000000000054 = 0;
    FUN_0407b788(fVar10 + fVar11 * fVar12,*(undefined4 *)(unaff_x21 + 4),fVar9 + fVar11 * fVar7,
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
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__)
          {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0369a4c0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                            ,2);
LAB_0369a4c0:
      (*(code *)*puVar2)(plVar6,&stack0x00000060,puVar2[1]);
      *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
      *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
      *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


