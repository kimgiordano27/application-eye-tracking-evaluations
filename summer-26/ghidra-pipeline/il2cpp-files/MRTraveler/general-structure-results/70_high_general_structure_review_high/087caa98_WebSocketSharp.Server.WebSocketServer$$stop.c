/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketServer$$stop
ENTRY_POINT: 087caa98
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_6
*/


void WebSocketSharp_Server_WebSocketServer__stop(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 in_ZR;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong in_x9;
  int *piVar11;
  int *in_x10;
  long *unaff_x19;
  long unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  int unaff_w29;
  long in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  int in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  long in_stack_00000168;
  
code_r0x087caa98:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_087caa88;
LAB_087caaa0:
  puVar9 = (undefined8 *)FUN_03cf1348();
  do {
    (*(code *)*puVar9)();
switchD_087ca380_caseD_70001:
    do {
      while( true ) {
        uVar8 = FUN_049e8244(&stack0x00000140,*unaff_x24);
        uVar7 = uStack0000000000000164;
        uVar6 = uStack0000000000000160;
        uVar5 = uStack000000000000015c;
        uVar4 = uStack0000000000000158;
        if ((uVar8 & 1) == 0) {
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
        if (in_stack_00000150 <= unaff_w26) break;
        if (unaff_w27 < in_stack_00000150) {
          if (in_stack_00000150 - 0x70000U < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x087ca380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)*(ushort *)(unaff_x28 + (ulong)(in_stack_00000150 - 0x70000U) * 2) * 4
                      + 0x87ca334))();
            return;
          }
        }
        else if (in_stack_00000150 == unaff_w29) {
          WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                    (&stack0x00000110,uStack0000000000000158,uStack000000000000015c,
                     uStack0000000000000160,uStack0000000000000164,0);
          uVar4 = in_stack_00000120;
          uVar2 = in_stack_00000118;
          uVar1 = in_stack_00000110;
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0x31) * 0x10 + 0x138);
                goto LAB_087ca8ac;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_087ca8ac:
          in_stack_00000110 = uVar1;
          in_stack_00000118 = uVar2;
          in_stack_00000120 = uVar4;
          (*(code *)*puVar9)();
        }
        else if (in_stack_00000150 == unaff_w27) {
          WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                    (&stack0x00000110,uStack0000000000000158,uStack000000000000015c,
                     uStack0000000000000160,uStack0000000000000164,0);
          uVar3 = in_stack_00000120;
          uVar2 = in_stack_00000118;
          uVar1 = in_stack_00000110;
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                goto LAB_087ca80c;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_087ca80c:
          in_stack_00000110 = uVar1;
          in_stack_00000118 = uVar2;
          in_stack_00000120 = uVar3;
          (*(code *)*puVar9)();
          WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                    (&stack0x00000110,uVar4,uVar5,uVar6,uVar7,0);
          uVar3 = in_stack_00000120;
          uVar2 = in_stack_00000118;
          uVar1 = in_stack_00000110;
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 10) * 0x10 + 0x138);
                goto LAB_087ca8e4;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_087ca8e4:
          in_stack_00000110 = uVar1;
          in_stack_00000118 = uVar2;
          in_stack_00000120 = uVar3;
          (*(code *)*puVar9)();
          WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                    (&stack0x00000110,uVar4,uVar5,uVar6,uVar7,0);
          uVar3 = in_stack_00000120;
          uVar2 = in_stack_00000118;
          uVar1 = in_stack_00000110;
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                goto LAB_087ca984;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_087ca984:
          in_stack_00000110 = uVar1;
          in_stack_00000118 = uVar2;
          in_stack_00000120 = uVar3;
          (*(code *)*puVar9)();
          WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                    (&stack0x00000110,uVar4,uVar5,uVar6,uVar7,0);
          uVar4 = in_stack_00000120;
          uVar2 = in_stack_00000118;
          uVar1 = in_stack_00000110;
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_087caa24;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_087caa24:
          in_stack_00000110 = uVar1;
          in_stack_00000118 = uVar2;
          in_stack_00000120 = uVar4;
          (*(code *)*puVar9)();
        }
      }
      if (in_stack_00000150 < 0x10001) {
        if (in_stack_00000150 == 0x10000) {
          WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                    (&stack0x00000110,uStack0000000000000158,uStack000000000000015c,
                     uStack0000000000000160,uStack0000000000000164,0);
          uVar4 = in_stack_00000120;
          uVar2 = in_stack_00000118;
          uVar1 = in_stack_00000110;
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar10 = *unaff_x19;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
                goto LAB_087ca620;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_03cf1348();
LAB_087ca620:
          in_stack_00000110 = uVar1;
          in_stack_00000118 = uVar2;
          in_stack_00000120 = uVar4;
          (*(code *)*puVar9)();
        }
        goto switchD_087ca380_caseD_70001;
      }
      if ((uint)(in_stack_00000150 + unaff_w23) < 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x087ca424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(unaff_x22 + (ulong)(uint)(in_stack_00000150 + unaff_w23) * 2)
                   * 4 + 0x87ca334))();
        return;
      }
    } while (in_stack_00000150 != 0x10001);
    FUN_087d5b58(uStack0000000000000158,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_087caaa0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_087caa88:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x087caa98;
    }
    puVar9 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x17) * 0x10 + 0x138);
  } while( true );
}


