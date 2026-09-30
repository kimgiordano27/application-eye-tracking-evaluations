/*
FUNCTION_NAME: WebSocketSharp.Net.WebSockets.HttpListenerWebSocketContext$$Close
ENTRY_POINT: 087c6c50
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
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  code *pcVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar15;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  FUN_03c8f898();
  *(undefined1 *)(unaff_x21 + 0xf6b) = 1;
  puVar3 = UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo;
  puVar2 = PTR_DAT_08e83720;
  if (*(long *)(unaff_x19 + 0x3a0) == 0) {
    return;
  }
  if (*(int *)(*(long *)Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JObject>_TypeInfo + 0xe0)
      == 0) {
    thunk_FUN_03cd7500();
  }
  lVar7 = FUN_04ca4078(*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar2;
  lVar15 = *(long *)(unaff_x19 + 0x3a0);
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar10);
    lVar10 = *(long *)puVar2;
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar7 == unaff_x20) {
    if (lVar15 == 0) {
LAB_087c7010:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = FUN_0878011c(lVar15,uVar1,0);
    plVar11 = *(long **)(unaff_x19 + 0x3a0);
    if (plVar11 == (long *)0x0) goto LAB_087c7010;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x368))(plVar11,*(undefined8 *)(*plVar11 + 0x370));
    if (lVar7 != 0) {
      FUN_08797fc0(&stack0x00000060,lVar7 + 0x2c0,0);
      uVar6 = in_stack_00000070;
      uVar5 = in_stack_00000068;
      uVar4 = in_stack_00000060;
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_087c6ee4;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_03cf1348(plVar11,*(long *)
                                       System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo,0)
        ;
LAB_087c6ee4:
        pcVar13 = (code *)*puVar8;
        uVar9 = puVar8[1];
        in_stack_00000060 = uVar4;
        in_stack_00000068 = uVar5;
        in_stack_00000070 = uVar6;
LAB_087c6f04:
        (*pcVar13)(plVar11,&stack0x00000060,uVar9);
        return;
      }
      goto LAB_087c7010;
    }
    if (plVar11 == (long *)0x0) goto LAB_087c7010;
    lVar10 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar7 = *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo;
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) goto LAB_087c6f1c;
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
    lVar7 = FUN_087aebc4(lVar15,uVar1,0);
    if ((lVar7 != 0) && (lVar7 != unaff_x19)) {
      return;
    }
    if (*(int *)(*(long *)System_Func<HashSet<MethodInfo>>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar10 = FUN_04ca4078(*(undefined8 *)System_Func<long,_Decimal,_object>_TypeInfo);
    if (lVar10 == unaff_x20) {
      lVar10 = *(long *)(unaff_x19 + 0x3a0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if (lVar10 == 0) goto LAB_087c7010;
      lVar10 = FUN_0878011c(lVar10,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
      if (lVar10 == unaff_x19) {
        plVar11 = *(long **)(unaff_x19 + 0x3a0);
        if (plVar11 != (long *)0x0) {
          plVar11 = (long *)(**(code **)(*plVar11 + 0x368))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x370));
          FUN_08797fc0(&stack0x00000060,unaff_x19 + 0x2c0,0);
          uVar6 = in_stack_00000070;
          uVar5 = in_stack_00000068;
          uVar4 = in_stack_00000060;
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_087c6fec;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_03cf1348(plVar11,*(long *)
                                           System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo
                                  ,0);
LAB_087c6fec:
            pcVar13 = (code *)*puVar8;
            uVar9 = puVar8[1];
            in_stack_00000060 = uVar4;
            in_stack_00000068 = uVar5;
            in_stack_00000070 = uVar6;
            goto LAB_087c6f04;
          }
        }
        goto LAB_087c7010;
      }
    }
    if (*(int *)(*(long *)System_Func<Task<HttpClientResponse>>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar10 = FUN_04ca4078(*(undefined8 *)System_Func<long,_double,_object>_TypeInfo);
    if ((lVar7 != 0) || (lVar10 != unaff_x20)) {
      return;
    }
    plVar11 = *(long **)(unaff_x19 + 0x3a0);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x368))(plVar11,*(undefined8 *)(*plVar11 + 0x370))
       , plVar11 == (long *)0x0)) goto LAB_087c7010;
    lVar10 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar7 = *(long *)System_Collections_Generic_Dictionary<ulong,_int>_TypeInfo;
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) goto LAB_087c6f1c;
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
  }
  puVar8 = (undefined8 *)FUN_03cf1348(plVar11,lVar7,1);
LAB_087c6f2c:
                    /* WARNING: Could not recover jumptable at 0x087c6f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar11,puVar8[1]);
  return;
LAB_087c6f1c:
  puVar8 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
  goto LAB_087c6f2c;
}


