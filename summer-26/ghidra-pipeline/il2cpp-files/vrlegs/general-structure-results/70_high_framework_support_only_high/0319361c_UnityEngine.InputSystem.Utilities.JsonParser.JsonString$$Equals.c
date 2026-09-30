/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.JsonParser.JsonString$$Equals
ENTRY_POINT: 0319361c
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


void UnityEngine_InputSystem_Utilities_JsonParser_JsonString__Equals
               (undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long lVar14;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  int iVar15;
  int iVar16;
  ulong unaff_x28;
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
  int iStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  while( true ) {
    FUN_01f524a4(param_1,param_2,param_3,param_4);
    iVar15 = iStack0000000000000090;
    FUN_01f524a4(&stack0x00000058,unaff_w27,&stack0x00000090,*unaff_x22);
    if (iVar15 != iStack0000000000000090) {
      unaff_w27 = unaff_w27 + 1;
      FUN_01f524a4(&stack0x00000058,unaff_x28 & 0xffffffff,&stack0x00000090,*unaff_x22);
      FUN_0224d17c(&stack0x00000058,unaff_w27,&stack0x00000090,*unaff_x24);
    }
    lVar11 = in_stack_00000058;
    uVar1 = (int)unaff_x28 + 1;
    param_2 = (ulong)uVar1;
    if ((*(byte *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    if (*(int *)(lVar11 + 8) <= (int)uVar1) break;
    param_4 = *unaff_x22;
    param_1 = &stack0x00000058;
    param_3 = (undefined8 *)&stack0x00000090;
    unaff_x28 = param_2;
  }
  FUN_0222f4b0(&stack0x00000058,unaff_w27 + 1,*unaff_x19);
  lVar11 = in_stack_00000058;
  if ((*(byte *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar12 = in_stack_00000050;
  puVar3 = System_Collections_Generic_List<IEnumerator>_TypeInfo;
  if (8 < *(int *)(lVar11 + 8)) {
    _iStack0000000000000090 = CONCAT44(uStack0000000000000094,8);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
    uVar8 = thunk_FUN_01a89a98(uVar8,&stack0x00000090);
    uVar9 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IInRoomCallbacks>_TypeInfo);
    uVar8 = FUN_025b4d3c(uVar9,uVar8,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar9 = thunk_FUN_01a89e68();
    FUN_026b274c(uVar9,uVar8,0);
    uVar8 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar9,uVar8);
  }
  if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnumerator>_TypeInfo + 0x20) +
                0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  puVar5 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
  puVar4 = System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo;
  if (0 < *(int *)(lVar12 + 8)) {
    FUN_01fb70f4(in_stack_00000050,
                 *(undefined8 *)System_Collections_Generic_List<IEventHandler>_TypeInfo);
    iVar15 = 0;
    iVar16 = 1;
    while( true ) {
      lVar11 = in_stack_00000050;
      if ((*(byte *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      if (*(int *)(lVar11 + 8) <= iVar16) break;
      FUN_01f524a4(&stack0x00000050,iVar16,&stack0x00000090,*(undefined8 *)puVar4);
      uVar8 = _iStack0000000000000090;
      FUN_01f524a4(&stack0x00000050,iVar15,&stack0x00000090,*(undefined8 *)puVar4);
      uVar9 = _iStack0000000000000090;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_031abb88(uVar8,uVar9,0);
      if ((uVar6 & 1) != 0) {
        iVar15 = iVar15 + 1;
        FUN_01f524a4(&stack0x00000050,iVar16,&stack0x00000090,*(undefined8 *)puVar4);
        FUN_0224d17c(&stack0x00000050,iVar15,&stack0x00000090,*(undefined8 *)puVar5);
      }
      iVar16 = iVar16 + 1;
    }
    FUN_0222f4b0(&stack0x00000050,iVar15 + 1,
                 *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
  }
  puVar7 = (undefined8 *)FUN_01f62b8c();
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = in_stack_00000038._4_4_;
    uVar8 = FUN_01f62b8c();
    lVar11 = in_stack_00000058;
    *puVar7 = uVar8;
    if (in_stack_00000018._4_4_ == 0) {
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      uVar10 = *(undefined4 *)(lVar11 + 8);
    }
    else {
      uVar10 = 0;
    }
    *(undefined4 *)(puVar7 + 7) = uVar10;
    puVar4 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20));
    }
    puVar5 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
    FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar4);
    uVar8 = FUN_01f62b8c();
    lVar11 = in_stack_00000058;
    puVar7[6] = uVar8;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    bVar2 = 0;
    if (0 < *(int *)(lVar11 + 8)) {
      bVar2 = bStack0000000000000020 ^ 1;
    }
    *(byte *)(puVar7 + 0x13) = bVar2;
    FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar5);
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      FUN_01a46ff8(lVar11);
    }
    FUN_03194468();
    *(uint *)(puVar7 + 9) = uStack0000000000000024;
    lVar11 = FUN_01f62b8c();
    puVar7[8] = lVar11;
    if ((int)uStack0000000000000024 < 1) {
LAB_03193b74:
      if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar11 = FUN_03175360(in_stack_00000028,0);
      uVar8 = FUN_03175360(in_stack_00000028,0);
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_031946a0(&stack0x00000070,uVar8);
      puVar7[0xd] = in_stack_00000078;
      puVar7[0xc] = in_stack_00000070;
      uVar8 = FUN_03175360(in_stack_00000028,0);
      in_stack_000000b0 = 0;
      in_stack_00000098 = 0;
      _iStack0000000000000090 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      FUN_03195530(&stack0x00000090,uVar8);
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0x12] = in_stack_000000b0;
      puVar7[0xf] = in_stack_00000098;
      puVar7[0xe] = _iStack0000000000000090;
      puVar7[0x11] = in_stack_000000a8;
      puVar7[0x10] = in_stack_000000a0;
      puVar4 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
      puVar3 = PTR_DAT_03cda5e8;
      if (lVar11 != 0) {
        lVar12 = 0;
        while( true ) {
          lVar14 = *(long *)puVar4;
          if (DAT_04121ee6 == '\0') {
            FUN_01ab69ac(puVar3);
            DAT_04121ee6 = '\x01';
          }
          in_stack_00000080 = *(undefined8 *)(lVar11 + 0x78);
          in_stack_00000078 = *(undefined8 *)(lVar11 + 0x70);
          in_stack_00000070 = *(undefined8 *)(lVar11 + 0x68);
          lVar14 = *(long *)(lVar14 + 0x20);
          if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_01a46ff8();
          }
          lVar13 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
          in_stack_00000098 = in_stack_00000078;
          _iStack0000000000000090 = in_stack_00000070;
          in_stack_000000a0 = in_stack_00000080;
          lVar14 = *(long *)(lVar13 + 0x38);
          if (lVar14 == 0) {
            FUN_01a47054(lVar13);
            lVar14 = *(long *)(lVar13 + 0x38);
          }
          lVar14 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar14 + 8));
          if (*(int *)(lVar14 + 8) <= lVar12) break;
          FUN_0319474c();
          lVar12 = lVar12 + 1;
        }
        lVar11 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
        if (DAT_04121ee6 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cda5e8);
          DAT_04121ee6 = '\x01';
        }
        in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x78);
        in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x70);
        in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0x68);
        lVar11 = *(long *)(lVar11 + 0x20);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01a46ff8();
        }
        lVar12 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        in_stack_00000098 = in_stack_00000078;
        _iStack0000000000000090 = in_stack_00000070;
        in_stack_000000a0 = in_stack_00000080;
        lVar11 = *(long *)(lVar12 + 0x38);
        if (lVar11 == 0) {
          FUN_01a47054(lVar12);
          lVar11 = *(long *)(lVar12 + 0x38);
        }
        lVar11 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar11 + 8));
        _iStack0000000000000090 = CONCAT44(uStack0000000000000094,unaff_w21);
        in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar11 + 8));
        FUN_020dd354(in_stack_00000010,&stack0x00000090,&stack0x00000070,
                     *(undefined8 *)
                      System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
        FUN_020de018((undefined8 *)(unaff_x20 + 0x68),puVar7,
                     *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
        *(undefined4 *)(puVar7 + 0x12) = 0;
        FUN_0318f878(puVar7,in_stack_00000028);
        return;
      }
    }
    else if (lVar11 != 0) {
      lVar12 = 0;
      lVar14 = 0;
      do {
        if (in_stack_00000040 + lVar12 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar11 + 0x18) = uVar8;
        lVar11 = puVar7[8];
        if ((undefined8 *)(lVar12 + lVar11) == (undefined8 *)0x0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x38) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x50) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x68) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x80) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x20) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 8) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x40) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x58) = uVar8;
        lVar11 = puVar7[8];
        if (lVar12 + lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        *(undefined8 *)(lVar12 + lVar11 + 0x70) = uVar8;
        lVar11 = lVar12 + puVar7[8];
        if (lVar11 == 0) break;
        uVar8 = FUN_01f62b8c();
        lVar12 = lVar12 + 0x98;
        *(undefined8 *)(lVar11 + 0x88) = uVar8;
        if ((ulong)uStack0000000000000024 * 0x98 - lVar12 == 0) goto LAB_03193b74;
        lVar14 = lVar14 + 1;
        lVar11 = puVar7[8] + lVar14 * 0x98;
      } while (puVar7[8] + lVar12 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


