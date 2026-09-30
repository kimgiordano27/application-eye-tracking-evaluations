/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketServiceManager$$Stop
ENTRY_POINT: 087ca840
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_6
*/


void WebSocketSharp_Server_WebSocketServiceManager__Stop
               (undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  int unaff_w29;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  long in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  int in_stack_00000150;
  uint uStack0000000000000158;
  uint uStack000000000000015c;
  uint uStack0000000000000160;
  uint uStack0000000000000164;
  long in_stack_00000168;
  
  do {
    WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
              (param_1,param_2,param_3,param_4,unaff_d9,0);
    uVar3 = in_stack_00000120;
    uVar2 = in_stack_00000118;
    uVar1 = in_stack_00000110;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 10) * 0x10 + 0x138);
          goto LAB_087ca8e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_087ca8e4:
    in_stack_00000110 = uVar1;
    in_stack_00000118 = uVar2;
    in_stack_00000120 = uVar3;
    (*(code *)*puVar4)();
    WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
              (&stack0x00000110,unaff_d8,unaff_d11,unaff_d10,unaff_d9,0);
    uVar3 = in_stack_00000120;
    uVar2 = in_stack_00000118;
    uVar1 = in_stack_00000110;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_087ca984;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_087ca984:
    in_stack_00000110 = uVar1;
    in_stack_00000118 = uVar2;
    in_stack_00000120 = uVar3;
    (*(code *)*puVar4)();
    WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
              (&stack0x00000110,unaff_d8,unaff_d11,unaff_d10,unaff_d9,0);
    uVar3 = in_stack_00000120;
    uVar2 = in_stack_00000118;
    uVar1 = in_stack_00000110;
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_087caa24;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_087caa24:
    in_stack_00000110 = uVar1;
    in_stack_00000118 = uVar2;
    in_stack_00000120 = uVar3;
    (*(code *)*puVar4)();
switchD_087ca380_caseD_70001:
    do {
      while( true ) {
        uVar6 = FUN_049e8244(&stack0x00000140,*unaff_x24);
        if ((uVar6 & 1) == 0) {
          FUN_049e8240(&stack0x00000140,
                       *(undefined8 *)
                        UnityEngine_Pool_CollectionPool<List<ValueTuple<LocaleIdentifier,_string>>,_ValueTuple<LocaleIdentifier,_string>>_TypeInfo
                      );
          if (*(long *)(in_stack_00000008 + 0x28) == in_stack_00000168) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        param_2 = (ulong)uStack0000000000000158;
        param_3 = (ulong)uStack000000000000015c;
        param_4 = (ulong)uStack0000000000000160;
        unaff_d9 = (ulong)uStack0000000000000164;
        if (unaff_w26 < in_stack_00000150) break;
        if (in_stack_00000150 < 0x10001) {
          if (in_stack_00000150 == 0x10000) {
            WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                      (&stack0x00000110,param_2,param_3,param_4,unaff_d9,0);
            uVar3 = in_stack_00000120;
            uVar2 = in_stack_00000118;
            uVar1 = in_stack_00000110;
            if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar5 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x25) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
                  goto LAB_087ca620;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_03cf1348();
LAB_087ca620:
            in_stack_00000110 = uVar1;
            in_stack_00000118 = uVar2;
            in_stack_00000120 = uVar3;
            (*(code *)*puVar4)();
          }
        }
        else {
          if ((uint)(in_stack_00000150 + unaff_w23) < 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x087ca424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)*(ushort *)
                               (unaff_x22 + (ulong)(uint)(in_stack_00000150 + unaff_w23) * 2) * 4 +
                      0x87ca334))();
            return;
          }
          if (in_stack_00000150 == 0x10001) {
            FUN_087d5b58(param_2,0);
            if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar5 = *unaff_x19;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x25) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
                  goto LAB_087cb534;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_03cf1348();
LAB_087cb534:
            (*(code *)*puVar4)();
          }
        }
      }
      if (unaff_w27 < in_stack_00000150) {
        if (in_stack_00000150 - 0x70000U < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x087ca380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(unaff_x28 + (ulong)(in_stack_00000150 - 0x70000U) * 2) * 4 +
                    0x87ca334))();
          return;
        }
        goto switchD_087ca380_caseD_70001;
      }
      if (in_stack_00000150 == unaff_w29) {
        WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                  (&stack0x00000110,param_2,param_3,param_4,unaff_d9,0);
        uVar3 = in_stack_00000120;
        uVar2 = in_stack_00000118;
        uVar1 = in_stack_00000110;
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar5 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x31) * 0x10 + 0x138);
              goto LAB_087ca8ac;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03cf1348();
LAB_087ca8ac:
        in_stack_00000110 = uVar1;
        in_stack_00000118 = uVar2;
        in_stack_00000120 = uVar3;
        (*(code *)*puVar4)();
        goto switchD_087ca380_caseD_70001;
      }
    } while (in_stack_00000150 != unaff_w27);
    WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
              (&stack0x00000110,param_2,param_3,param_4,unaff_d9,0);
    uVar3 = in_stack_00000120;
    uVar2 = in_stack_00000118;
    uVar1 = in_stack_00000110;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_087ca80c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_087ca80c:
    in_stack_00000110 = uVar1;
    in_stack_00000118 = uVar2;
    in_stack_00000120 = uVar3;
    (*(code *)*puVar4)();
    param_1 = &stack0x00000110;
    unaff_d8 = param_2;
    unaff_d10 = param_4;
    unaff_d11 = param_3;
  } while( true );
}


