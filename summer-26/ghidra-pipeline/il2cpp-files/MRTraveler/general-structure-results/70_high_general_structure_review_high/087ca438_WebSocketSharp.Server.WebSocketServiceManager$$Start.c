/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketServiceManager$$Start
ENTRY_POINT: 087ca438
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_14;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void WebSocketSharp_Server_WebSocketServiceManager__Start(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
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
  
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x25) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
        goto LAB_087cb3b4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087cb3b4:
  (*(code *)*puVar8)();
switchD_087ca380_caseD_70001:
  do {
    while( true ) {
      uVar10 = FUN_049e8244(&stack0x00000140,*unaff_x24);
      uVar7 = uStack0000000000000164;
      uVar6 = uStack0000000000000160;
      uVar5 = uStack000000000000015c;
      uVar4 = uStack0000000000000158;
      if ((uVar10 & 1) == 0) {
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
      if (unaff_w26 < in_stack_00000150) break;
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
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
                goto LAB_087ca620;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087ca620:
          in_stack_00000110 = uVar1;
          in_stack_00000118 = uVar2;
          in_stack_00000120 = uVar4;
          (*(code *)*puVar8)();
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
          FUN_087d5b58(uStack0000000000000158,0);
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x25) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
                goto LAB_087cb534;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087cb534:
          (*(code *)*puVar8)();
        }
      }
    }
    if (in_stack_00000150 <= unaff_w27) {
      if (in_stack_00000150 == unaff_w29) {
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
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x31) * 0x10 + 0x138);
              goto LAB_087ca8ac;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087ca8ac:
        in_stack_00000110 = uVar1;
        in_stack_00000118 = uVar2;
        in_stack_00000120 = uVar4;
        (*(code *)*puVar8)();
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
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
              goto LAB_087ca80c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087ca80c:
        in_stack_00000110 = uVar1;
        in_stack_00000118 = uVar2;
        in_stack_00000120 = uVar3;
        (*(code *)*puVar8)();
        WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                  (&stack0x00000110,uVar4,uVar5,uVar6,uVar7,0);
        uVar3 = in_stack_00000120;
        uVar2 = in_stack_00000118;
        uVar1 = in_stack_00000110;
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
              goto LAB_087ca8e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087ca8e4:
        in_stack_00000110 = uVar1;
        in_stack_00000118 = uVar2;
        in_stack_00000120 = uVar3;
        (*(code *)*puVar8)();
        WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                  (&stack0x00000110,uVar4,uVar5,uVar6,uVar7,0);
        uVar3 = in_stack_00000120;
        uVar2 = in_stack_00000118;
        uVar1 = in_stack_00000110;
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
              goto LAB_087ca984;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087ca984:
        in_stack_00000110 = uVar1;
        in_stack_00000118 = uVar2;
        in_stack_00000120 = uVar3;
        (*(code *)*puVar8)();
        WebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__13__MoveNext
                  (&stack0x00000110,uVar4,uVar5,uVar6,uVar7,0);
        uVar4 = in_stack_00000120;
        uVar2 = in_stack_00000118;
        uVar1 = in_stack_00000110;
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_087caa24;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348();
LAB_087caa24:
        in_stack_00000110 = uVar1;
        in_stack_00000118 = uVar2;
        in_stack_00000120 = uVar4;
        (*(code *)*puVar8)();
      }
      goto switchD_087ca380_caseD_70001;
    }
    if (in_stack_00000150 - 0x70000U < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x087ca380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(unaff_x28 + (ulong)(in_stack_00000150 - 0x70000U) * 2) * 4 +
                0x87ca334))();
      return;
    }
  } while( true );
}


