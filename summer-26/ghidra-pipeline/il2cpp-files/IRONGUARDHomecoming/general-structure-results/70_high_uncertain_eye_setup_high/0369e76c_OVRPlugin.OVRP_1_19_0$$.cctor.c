/*
FUNCTION_NAME: OVRPlugin.OVRP_1_19_0$$.cctor
ENTRY_POINT: 0369e76c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_19_0___cctor(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long *plVar7;
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
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0407bc90(&stack0x00000040,0);
    uStack0000000000000034 = uStack0000000000000054;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000030 = uStack0000000000000050;
    uStack0000000000000028 = uStack0000000000000048;
    uStack000000000000002c = uStack000000000000004c;
LAB_0369e880:
    unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *unaff_x19 = in_stack_00000020;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    return unaff_w20 & 1;
  }
  lVar3 = FUN_02a7787c();
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x58) != 0)) {
    plVar7 = *(long **)(*(long *)(lVar3 + 0x58) + 0x18);
    lVar3 = FUN_02a7787c();
    if (lVar3 != 0) {
      uStack0000000000000014 = *(undefined8 *)(lVar3 + 0x2c);
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
      uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x24) >> 0x20);
      uVar2 = uStack0000000000000050;
      uStack0000000000000048 = (undefined4)*(undefined8 *)(lVar3 + 0x20);
      uVar1 = uStack0000000000000048;
      uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
      in_stack_00000040 = uVar8;
      uStack0000000000000054 = uStack0000000000000014;
      if (plVar7 != (long *)0x0) {
        uStack000000000000000c = uStack000000000000004c;
        lVar3 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
               ) {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0369e850;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_47__
                              ,1);
LAB_0369e850:
        in_stack_00000068 = uVar1;
        uStack0000000000000074 = uStack0000000000000014;
        uStack000000000000006c = uStack000000000000000c;
        in_stack_00000070 = uVar2;
        in_stack_00000060 = uVar8;
        (*(code *)*puVar4)(&stack0x00000020,plVar7,&stack0x00000060,puVar4[1]);
        goto LAB_0369e880;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


