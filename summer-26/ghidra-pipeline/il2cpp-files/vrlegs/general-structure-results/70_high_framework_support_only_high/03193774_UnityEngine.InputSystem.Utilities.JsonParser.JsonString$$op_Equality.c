/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.JsonParser.JsonString$$op_Equality
ENTRY_POINT: 03193774
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_Utilities_JsonParser_JsonString__op_Equality(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 unaff_x19;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long lVar11;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  undefined8 unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  byte bStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  do {
    thunk_FUN_01a58e78();
    do {
      uVar4 = FUN_031abb88(unaff_x29,unaff_x19,0);
      if ((uVar4 & 1) != 0) {
        unaff_w27 = unaff_w27 + 1;
        FUN_01f524a4(&stack0x00000050,unaff_w28,&stack0x00000090,*unaff_x24);
        FUN_0224d17c(&stack0x00000050,unaff_w27,&stack0x00000090,*unaff_x22);
      }
      lVar7 = in_stack_00000050;
      unaff_w28 = unaff_w28 + 1;
      if ((*(byte *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      if (*(int *)(lVar7 + 8) <= unaff_w28) {
        FUN_0222f4b0(&stack0x00000050,unaff_w27 + 1,
                     *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
        puVar5 = (undefined8 *)FUN_01f62b8c();
        if (puVar5 == (undefined8 *)0x0) goto LAB_03193b70;
        *(undefined4 *)(puVar5 + 1) = in_stack_00000038._4_4_;
        uVar6 = FUN_01f62b8c();
        lVar7 = in_stack_00000058;
        *puVar5 = uVar6;
        if (in_stack_00000018._4_4_ == 0) {
          if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo +
                                  0x20) + 0x135) & 1) == 0) {
            FUN_01a46ff8();
          }
          uVar8 = *(undefined4 *)(lVar7 + 8);
        }
        else {
          uVar8 = 0;
        }
        *(undefined4 *)(puVar5 + 7) = uVar8;
        puVar2 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
        if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ) + 0x135) & 1) == 0) {
          FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ));
        }
        puVar3 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
        FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar2);
        uVar6 = FUN_01f62b8c();
        lVar7 = in_stack_00000058;
        puVar5[6] = uVar6;
        if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        bVar1 = 0;
        if (0 < *(int *)(lVar7 + 8)) {
          bVar1 = bStack0000000000000020 ^ 1;
        }
        *(byte *)(puVar5 + 0x13) = bVar1;
        FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar3);
        if ((*(byte *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8(*(long *)(*unaff_x26 + 0x20));
        }
        FUN_03194468();
        *(uint *)(puVar5 + 9) = uStack0000000000000024;
        lVar7 = FUN_01f62b8c();
        puVar5[8] = lVar7;
        if ((int)uStack0000000000000024 < 1) goto LAB_03193b74;
        if (lVar7 == 0) goto LAB_03193b70;
        lVar9 = 0;
        lVar11 = 0;
        goto LAB_0319399c;
      }
      FUN_01f524a4(&stack0x00000050,unaff_w28,&stack0x00000090,*unaff_x24);
      unaff_x29 = in_stack_00000090;
      FUN_01f524a4(&stack0x00000050,unaff_w27,&stack0x00000090,*unaff_x24);
      unaff_x19 = in_stack_00000090;
    } while (*(int *)(*unaff_x25 + 0xe0) != 0);
  } while( true );
LAB_03193b74:
  if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar7 = FUN_03175360(in_stack_00000028,0);
  uVar6 = FUN_03175360(in_stack_00000028,0);
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_031946a0(&stack0x00000070,uVar6);
  puVar5[0xd] = in_stack_00000078;
  puVar5[0xc] = in_stack_00000070;
  uVar6 = FUN_03175360(in_stack_00000028,0);
  in_stack_000000b0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  FUN_03195530(&stack0x00000090,uVar6);
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x12] = in_stack_000000b0;
  puVar5[0xf] = in_stack_00000098;
  puVar5[0xe] = in_stack_00000090;
  puVar5[0x11] = in_stack_000000a8;
  puVar5[0x10] = in_stack_000000a0;
  puVar3 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
  puVar2 = PTR_DAT_03cda5e8;
  if (lVar7 != 0) {
    lVar9 = 0;
    while( true ) {
      lVar11 = *(long *)puVar3;
      if (DAT_04121ee6 == '\0') {
        FUN_01ab69ac(puVar2);
        DAT_04121ee6 = '\x01';
      }
      in_stack_00000080 = *(undefined8 *)(lVar7 + 0x78);
      in_stack_00000078 = *(undefined8 *)(lVar7 + 0x70);
      in_stack_00000070 = *(undefined8 *)(lVar7 + 0x68);
      lVar11 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01a46ff8();
      }
      lVar10 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      in_stack_00000098 = in_stack_00000078;
      in_stack_00000090 = in_stack_00000070;
      in_stack_000000a0 = in_stack_00000080;
      lVar11 = *(long *)(lVar10 + 0x38);
      if (lVar11 == 0) {
        FUN_01a47054(lVar10);
        lVar11 = *(long *)(lVar10 + 0x38);
      }
      lVar11 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar11 + 8));
      if (*(int *)(lVar11 + 8) <= lVar9) break;
      FUN_0319474c();
      lVar9 = lVar9 + 1;
    }
    lVar7 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
    if (DAT_04121ee6 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cda5e8);
      DAT_04121ee6 = '\x01';
    }
    in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x78);
    in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x70);
    in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0x68);
    lVar7 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8();
    }
    lVar9 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    in_stack_00000098 = in_stack_00000078;
    in_stack_00000090 = in_stack_00000070;
    in_stack_000000a0 = in_stack_00000080;
    lVar7 = *(long *)(lVar9 + 0x38);
    if (lVar7 == 0) {
      FUN_01a47054(lVar9);
      lVar7 = *(long *)(lVar9 + 0x38);
    }
    lVar7 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar7 + 8));
    in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,unaff_w21);
    in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar7 + 8));
    FUN_020dd354(in_stack_00000010,&stack0x00000090,&stack0x00000070,
                 *(undefined8 *)
                  System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_020de018((undefined8 *)(unaff_x20 + 0x68),puVar5,
                 *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
    *(undefined4 *)(puVar5 + 0x12) = 0;
    FUN_0318f878(puVar5,in_stack_00000028);
    return;
  }
  goto LAB_03193b70;
  while( true ) {
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar7 + 0x18) = uVar6;
    lVar7 = puVar5[8];
    if ((undefined8 *)(lVar9 + lVar7) == (undefined8 *)0x0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x38) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x50) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x68) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x80) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x20) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 8) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x40) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x58) = uVar6;
    lVar7 = puVar5[8];
    if (lVar9 + lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    *(undefined8 *)(lVar9 + lVar7 + 0x70) = uVar6;
    lVar7 = lVar9 + puVar5[8];
    if (lVar7 == 0) break;
    uVar6 = FUN_01f62b8c();
    lVar9 = lVar9 + 0x98;
    *(undefined8 *)(lVar7 + 0x88) = uVar6;
    if ((ulong)uStack0000000000000024 * 0x98 - lVar9 == 0) goto LAB_03193b74;
    lVar11 = lVar11 + 1;
    lVar7 = puVar5[8] + lVar11 * 0x98;
    if (puVar5[8] + lVar9 == 0) break;
LAB_0319399c:
    if (in_stack_00000040 + lVar9 == 0) break;
  }
LAB_03193b70:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


