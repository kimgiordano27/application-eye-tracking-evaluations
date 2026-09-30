/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.JsonParser.JsonString$$GetHashCode
ENTRY_POINT: 031936ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_Utilities_JsonParser_JsonString__GetHashCode(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar13;
  long *unaff_x25;
  int iVar14;
  int iVar15;
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
  
  lVar10 = in_stack_00000050;
  puVar2 = System_Collections_Generic_List<IEnumerator>_TypeInfo;
  if (8 < in_w8) {
    in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,8);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
    uVar7 = thunk_FUN_01a89a98(uVar7,&stack0x00000090);
    uVar8 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IInRoomCallbacks>_TypeInfo);
    uVar7 = FUN_025b4d3c(uVar8,uVar7,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar8 = thunk_FUN_01a89e68();
    FUN_026b274c(uVar8,uVar7,0);
    uVar7 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar8,uVar7);
  }
  if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnumerator>_TypeInfo + 0x20) +
                0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  puVar4 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
  puVar3 = System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo;
  if (0 < *(int *)(lVar10 + 8)) {
    FUN_01fb70f4(in_stack_00000050,
                 *(undefined8 *)System_Collections_Generic_List<IEventHandler>_TypeInfo);
    iVar14 = 0;
    iVar15 = 1;
    while( true ) {
      lVar10 = in_stack_00000050;
      if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      if (*(int *)(lVar10 + 8) <= iVar15) break;
      FUN_01f524a4(&stack0x00000050,iVar15,&stack0x00000090,*(undefined8 *)puVar3);
      uVar7 = in_stack_00000090;
      FUN_01f524a4(&stack0x00000050,iVar14,&stack0x00000090,*(undefined8 *)puVar3);
      uVar8 = in_stack_00000090;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_031abb88(uVar7,uVar8,0);
      if ((uVar5 & 1) != 0) {
        iVar14 = iVar14 + 1;
        FUN_01f524a4(&stack0x00000050,iVar15,&stack0x00000090,*(undefined8 *)puVar3);
        FUN_0224d17c(&stack0x00000050,iVar14,&stack0x00000090,*(undefined8 *)puVar4);
      }
      iVar15 = iVar15 + 1;
    }
    FUN_0222f4b0(&stack0x00000050,iVar14 + 1,
                 *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
  }
  puVar6 = (undefined8 *)FUN_01f62b8c();
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = in_stack_00000038._4_4_;
    uVar7 = FUN_01f62b8c();
    lVar10 = in_stack_00000058;
    *puVar6 = uVar7;
    if (in_stack_00000018._4_4_ == 0) {
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      uVar9 = *(undefined4 *)(lVar10 + 8);
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)(puVar6 + 7) = uVar9;
    puVar3 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20));
    }
    puVar4 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
    FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar3);
    uVar7 = FUN_01f62b8c();
    lVar10 = in_stack_00000058;
    puVar6[6] = uVar7;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    bVar1 = 0;
    if (0 < *(int *)(lVar10 + 8)) {
      bVar1 = bStack0000000000000020 ^ 1;
    }
    *(byte *)(puVar6 + 0x13) = bVar1;
    FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar4);
    lVar10 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      FUN_01a46ff8(lVar10);
    }
    FUN_03194468();
    *(uint *)(puVar6 + 9) = uStack0000000000000024;
    lVar10 = FUN_01f62b8c();
    puVar6[8] = lVar10;
    if ((int)uStack0000000000000024 < 1) {
LAB_03193b74:
      if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar10 = FUN_03175360(in_stack_00000028,0);
      uVar7 = FUN_03175360(in_stack_00000028,0);
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_031946a0(&stack0x00000070,uVar7);
      puVar6[0xd] = in_stack_00000078;
      puVar6[0xc] = in_stack_00000070;
      uVar7 = FUN_03175360(in_stack_00000028,0);
      in_stack_000000b0 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      FUN_03195530(&stack0x00000090,uVar7);
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar6[0x12] = in_stack_000000b0;
      puVar6[0xf] = in_stack_00000098;
      puVar6[0xe] = in_stack_00000090;
      puVar6[0x11] = in_stack_000000a8;
      puVar6[0x10] = in_stack_000000a0;
      puVar3 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
      puVar2 = PTR_DAT_03cda5e8;
      if (lVar10 != 0) {
        lVar11 = 0;
        while( true ) {
          lVar13 = *(long *)puVar3;
          if (DAT_04121ee6 == '\0') {
            FUN_01ab69ac(puVar2);
            DAT_04121ee6 = '\x01';
          }
          in_stack_00000080 = *(undefined8 *)(lVar10 + 0x78);
          in_stack_00000078 = *(undefined8 *)(lVar10 + 0x70);
          in_stack_00000070 = *(undefined8 *)(lVar10 + 0x68);
          lVar13 = *(long *)(lVar13 + 0x20);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01a46ff8();
          }
          lVar12 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
          in_stack_00000098 = in_stack_00000078;
          in_stack_00000090 = in_stack_00000070;
          in_stack_000000a0 = in_stack_00000080;
          lVar13 = *(long *)(lVar12 + 0x38);
          if (lVar13 == 0) {
            FUN_01a47054(lVar12);
            lVar13 = *(long *)(lVar12 + 0x38);
          }
          lVar13 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar13 + 8));
          if (*(int *)(lVar13 + 8) <= lVar11) break;
          FUN_0319474c();
          lVar11 = lVar11 + 1;
        }
        lVar10 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
        if (DAT_04121ee6 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cda5e8);
          DAT_04121ee6 = '\x01';
        }
        in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x78);
        in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x70);
        in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0x68);
        lVar10 = *(long *)(lVar10 + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01a46ff8();
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        in_stack_00000098 = in_stack_00000078;
        in_stack_00000090 = in_stack_00000070;
        in_stack_000000a0 = in_stack_00000080;
        lVar10 = *(long *)(lVar11 + 0x38);
        if (lVar10 == 0) {
          FUN_01a47054(lVar11);
          lVar10 = *(long *)(lVar11 + 0x38);
        }
        lVar10 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar10 + 8));
        in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,unaff_w21);
        in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar10 + 8));
        FUN_020dd354(in_stack_00000010,&stack0x00000090,&stack0x00000070,
                     *(undefined8 *)
                      System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
        FUN_020de018((undefined8 *)(unaff_x20 + 0x68),puVar6,
                     *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
        *(undefined4 *)(puVar6 + 0x12) = 0;
        FUN_0318f878(puVar6,in_stack_00000028);
        return;
      }
    }
    else if (lVar10 != 0) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        if (in_stack_00000040 + lVar11 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar10 + 0x18) = uVar7;
        lVar10 = puVar6[8];
        if ((undefined8 *)(lVar11 + lVar10) == (undefined8 *)0x0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x38) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x50) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x68) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x80) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x20) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 8) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x40) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x58) = uVar7;
        lVar10 = puVar6[8];
        if (lVar11 + lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + lVar10 + 0x70) = uVar7;
        lVar10 = lVar11 + puVar6[8];
        if (lVar10 == 0) break;
        uVar7 = FUN_01f62b8c();
        lVar11 = lVar11 + 0x98;
        *(undefined8 *)(lVar10 + 0x88) = uVar7;
        if ((ulong)uStack0000000000000024 * 0x98 - lVar11 == 0) goto LAB_03193b74;
        lVar13 = lVar13 + 1;
        lVar10 = puVar6[8] + lVar13 * 0x98;
      } while (puVar6[8] + lVar11 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


