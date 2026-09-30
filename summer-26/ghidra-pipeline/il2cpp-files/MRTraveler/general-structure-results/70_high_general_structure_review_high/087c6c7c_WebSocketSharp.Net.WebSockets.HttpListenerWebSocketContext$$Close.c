/*
FUNCTION_NAME: WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext$$Close
ENTRY_POINT: 087c6c7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void WebSocketSharp_Net_WebSockets_HttpListenerWebSocketContext__Close(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int in_w8;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar11;
  long lVar12;
  long unaff_x23;
  long *plVar13;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  puVar11 = *(undefined8 **)(unaff_x21 + 0xc98);
  plVar13 = *(long **)(unaff_x23 + 0x720);
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = FUN_04ca4078(*puVar11);
  lVar7 = *plVar13;
  lVar12 = *(long *)(unaff_x19 + 0x3a0);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar7);
    lVar7 = *plVar13;
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar5 == unaff_x20) {
    if (lVar12 == 0) {
LAB_087c7010:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar5 = FUN_0878011c(lVar12,uVar1,0);
    plVar13 = *(long **)(unaff_x19 + 0x3a0);
    if (plVar13 == (long *)0x0) goto LAB_087c7010;
    plVar13 = (long *)(**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
    if (lVar5 != 0) {
      FUN_08797fc0(&stack0x00000060,lVar5 + 0x2c0,0);
      uVar4 = in_stack_00000070;
      uVar3 = in_stack_00000068;
      uVar2 = in_stack_00000060;
      if (plVar13 != (long *)0x0) {
        lVar5 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo) {
              puVar11 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_087c6ee4;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_03cf1348(plVar13,*(long *)
                                        System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo,0
                              );
LAB_087c6ee4:
        pcVar9 = (code *)*puVar11;
        uVar6 = puVar11[1];
        in_stack_00000060 = uVar2;
        in_stack_00000068 = uVar3;
        in_stack_00000070 = uVar4;
LAB_087c6f04:
        (*pcVar9)(plVar13,&stack0x00000060,uVar6);
        return;
      }
      goto LAB_087c7010;
    }
    if (plVar13 == (long *)0x0) goto LAB_087c7010;
    lVar7 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar5 = *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo;
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) goto LAB_087c6f1c;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
  }
  else {
    lVar5 = FUN_087aebc4(lVar12,uVar1,0);
    if ((lVar5 != 0) && (lVar5 != unaff_x19)) {
      return;
    }
    if (*(int *)(*(long *)System_Func<HashSet<MethodInfo>>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar7 = FUN_04ca4078(*(undefined8 *)System_Func<long,_Decimal,_object>_TypeInfo);
    if (lVar7 == unaff_x20) {
      lVar7 = *(long *)(unaff_x19 + 0x3a0);
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (lVar7 == 0) goto LAB_087c7010;
      lVar7 = FUN_0878011c(lVar7,*(undefined4 *)(*(long *)(*plVar13 + 0xb8) + 8),0);
      if (lVar7 == unaff_x19) {
        plVar13 = *(long **)(unaff_x19 + 0x3a0);
        if (plVar13 != (long *)0x0) {
          plVar13 = (long *)(**(code **)(*plVar13 + 0x368))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x370));
          FUN_08797fc0(&stack0x00000060,unaff_x19 + 0x2c0,0);
          uVar4 = in_stack_00000070;
          uVar3 = in_stack_00000068;
          uVar2 = in_stack_00000060;
          if (plVar13 != (long *)0x0) {
            lVar5 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo) {
                  puVar11 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_087c6fec;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_03cf1348(plVar13,*(long *)
                                            System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo
                                   ,0);
LAB_087c6fec:
            pcVar9 = (code *)*puVar11;
            uVar6 = puVar11[1];
            in_stack_00000060 = uVar2;
            in_stack_00000068 = uVar3;
            in_stack_00000070 = uVar4;
            goto LAB_087c6f04;
          }
        }
        goto LAB_087c7010;
      }
    }
    if (*(int *)(*(long *)System_Func<Task<HttpClientResponse>>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar7 = FUN_04ca4078(*(undefined8 *)System_Func<long,_double,_object>_TypeInfo);
    if ((lVar5 != 0) || (lVar7 != unaff_x20)) {
      return;
    }
    plVar13 = *(long **)(unaff_x19 + 0x3a0);
    if ((plVar13 == (long *)0x0) ||
       (plVar13 = (long *)(**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370))
       , plVar13 == (long *)0x0)) goto LAB_087c7010;
    lVar7 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar5 = *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo;
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) goto LAB_087c6f1c;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
  }
  puVar11 = (undefined8 *)FUN_03cf1348(plVar13,lVar5,1);
LAB_087c6f2c:
                    /* WARNING: Could not recover jumptable at 0x087c6f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar11)(plVar13,puVar11[1]);
  return;
LAB_087c6f1c:
  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
  goto LAB_087c6f2c;
}


