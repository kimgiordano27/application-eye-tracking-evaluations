/*
FUNCTION_NAME: Unity.VisualScripting.Member$$Invoke
ENTRY_POINT: 063abd48
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_Member__Invoke(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  long lVar5;
  long unaff_x27;
  long *plVar6;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  puVar1 = System_Action<Type>_TypeInfo;
  plVar6 = *(long **)(unaff_x27 + 0xb88);
  FUN_03b648f8(&stack0x00000040);
  lVar4 = in_stack_00000108;
  in_stack_00000118 = in_stack_00000048;
  in_stack_00000110 = in_stack_00000040;
  in_stack_00000128 = in_stack_00000058;
  in_stack_00000120 = in_stack_00000050;
  uVar2 = FUN_0628b734(&stack0x00000110);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  FUN_06282c94(&stack0x00000110,0,0);
  lVar4 = *plVar6;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar4);
    lVar4 = *plVar6;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58(lVar4);
      lVar4 = *plVar6;
    }
    uVar2 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)System_Action<TransformRecordSerializeData>_TypeInfo);
    FUN_045fdd18(lVar5,uVar2,*(undefined8 *)System_Action<ulong>_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*plVar6 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_02f411dc(plVar3,lVar5);
  }
  FUN_03b64a64(&stack0x00000110,lVar5,*(undefined8 *)puVar1);
  FUN_0628be4c(&stack0x00000110,0);
  FUN_03b648f8(&stack0x00000040);
  in_stack_000000e8 = in_stack_00000048;
  in_stack_000000e0 = in_stack_00000040;
  in_stack_000000f8 = in_stack_00000058;
  in_stack_000000f0 = in_stack_00000050;
  in_stack_000000d0 = *(undefined4 *)(unaff_x20 + 0x24);
  in_stack_000000b8 = unaff_x20[0x21];
  in_stack_000000b0 = unaff_x20[0x20];
  in_stack_000000c8 = unaff_x20[0x23];
  in_stack_000000c0 = unaff_x20[0x22];
  in_stack_000000a8 = unaff_x20[0x1f];
  in_stack_000000a0 = unaff_x20[0x1e];
  FUN_066b5b18(&stack0x000000a0,0x31,0);
  in_stack_000000b8 = in_stack_000000b8 & 0xffffffff;
  FUN_066b5c2c(&stack0x000000a0,0,0);
  in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
  in_stack_00000058 = in_stack_000000b8;
  in_stack_00000050 = in_stack_000000b0;
  in_stack_00000068 = in_stack_000000c8;
  in_stack_00000060 = in_stack_000000c0;
  in_stack_00000070 = in_stack_000000d0;
  in_stack_00000048 = in_stack_000000a8;
  in_stack_00000040 = in_stack_000000a0;
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var + 0xe0) == 0)
  {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_06385084();
  *unaff_x19 = uVar2;
  if (in_stack_000000d8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(in_stack_000000d8 + 0x238) = *(undefined8 *)(unaff_x22 + 0xf8);
  thunk_FUN_02f411dc(in_stack_000000d8 + 0x238);
  lVar4 = in_stack_000000d8;
  if (in_stack_000000d8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined4 *)(in_stack_000000d8 + 0x240) = *(undefined4 *)(unaff_x22 + 0xf0);
  memmove((void *)(in_stack_000000d8 + 0x28),unaff_x20 + 3,0x210);
  thunk_FUN_02f411dc(lVar4 + 0xe8,0);
  if (in_stack_000000d8 != 0) {
    *(undefined8 *)(in_stack_000000d8 + 0x20) = *unaff_x20;
    thunk_FUN_02f411dc();
    lVar4 = in_stack_000000d8;
    if (in_stack_000000d8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined1 *)(in_stack_000000d8 + 0x244) = *(undefined1 *)(unaff_x22 + 0x100);
    *(undefined1 *)(in_stack_000000d8 + 0x245) = *(undefined1 *)(unaff_x22 + 0xf4);
    uVar2 = FUN_0628b734(&stack0x000000e0);
    lVar5 = in_stack_000000d8;
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    uVar2 = FUN_0628b3b4(&stack0x000000e0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = uVar2;
      FUN_06282c94(&stack0x000000e0,0,0);
      lVar4 = *plVar6;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02f12b58(lVar4);
        lVar4 = *plVar6;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar5 == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar4);
          lVar4 = *plVar6;
        }
        uVar2 = **(undefined8 **)(lVar4 + 0xb8);
        lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                    System_Action<TransformRecordSerializeData>_TypeInfo);
        FUN_045fdd18(lVar5,uVar2,*(undefined8 *)System_Action<UntangledEntity>_TypeInfo,0);
        plVar3 = (long *)(*(long *)(*plVar6 + 0xb8) + 0x10);
        *plVar3 = lVar5;
        thunk_FUN_02f411dc(plVar3,lVar5);
      }
      FUN_03b64a64(&stack0x000000e0,lVar5,*(undefined8 *)puVar1);
      FUN_0628be4c(&stack0x000000e0,0);
      FUN_03b648f8(&stack0x00000040);
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      in_stack_00000098 = in_stack_00000058;
      in_stack_00000090 = in_stack_00000050;
      if (in_stack_00000078 != 0) {
        *(undefined8 *)(in_stack_00000078 + 0x20) = *unaff_x20;
        thunk_FUN_02f411dc();
        lVar4 = in_stack_00000078;
        uVar2 = FUN_0628b3b4(&stack0x00000080);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x18) = uVar2;
          FUN_06282c94(&stack0x00000080,0,0);
          lVar4 = *plVar6;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_02f12b58(lVar4);
            lVar4 = *plVar6;
          }
          lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
          if (lVar5 == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_02f12b58(lVar4);
              lVar4 = *plVar6;
            }
            uVar2 = **(undefined8 **)(lVar4 + 0xb8);
            lVar5 = thunk_FUN_02ef1808(*(undefined8 *)
                                        System_Action<TransformRecordSerializeData>_TypeInfo);
            FUN_045fdd18(lVar5,uVar2,
                         *(undefined8 *)System_Action<UpdatePlayerStatisticsResult>_TypeInfo,0);
            plVar6 = (long *)(*(long *)(*plVar6 + 0xb8) + 0x18);
            *plVar6 = lVar5;
            thunk_FUN_02f411dc(plVar6,lVar5);
          }
          FUN_03b64a64(&stack0x00000080,lVar5,*(undefined8 *)puVar1);
          FUN_0628be4c(&stack0x00000080,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


