/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.JsonParser.JsonString$$op_Implicit
ENTRY_POINT: 031937a4
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


void UnityEngine_InputSystem_Utilities_JsonParser_JsonString__op_Implicit(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long lVar12;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  int unaff_w27;
  int unaff_w28;
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
    FUN_0224d17c(&stack0x00000050,unaff_w27,&stack0x00000090,*unaff_x22);
    do {
      lVar8 = in_stack_00000050;
      unaff_w28 = unaff_w28 + 1;
      if ((*(byte *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      if (*(int *)(lVar8 + 8) <= unaff_w28) {
        FUN_0222f4b0(&stack0x00000050,unaff_w27 + 1,
                     *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
        puVar6 = (undefined8 *)FUN_01f62b8c();
        if (puVar6 == (undefined8 *)0x0) goto LAB_03193b70;
        *(undefined4 *)(puVar6 + 1) = in_stack_00000038._4_4_;
        uVar7 = FUN_01f62b8c();
        lVar8 = in_stack_00000058;
        *puVar6 = uVar7;
        if (in_stack_00000018._4_4_ == 0) {
          if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo +
                                  0x20) + 0x135) & 1) == 0) {
            FUN_01a46ff8();
          }
          uVar9 = *(undefined4 *)(lVar8 + 8);
        }
        else {
          uVar9 = 0;
        }
        *(undefined4 *)(puVar6 + 7) = uVar9;
        puVar2 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
        if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ) + 0x135) & 1) == 0) {
          FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ));
        }
        puVar3 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
        FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar2);
        uVar7 = FUN_01f62b8c();
        lVar8 = in_stack_00000058;
        puVar6[6] = uVar7;
        if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        bVar1 = 0;
        if (0 < *(int *)(lVar8 + 8)) {
          bVar1 = bStack0000000000000020 ^ 1;
        }
        *(byte *)(puVar6 + 0x13) = bVar1;
        FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar3);
        if ((*(byte *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8(*(long *)(*unaff_x26 + 0x20));
        }
        FUN_03194468();
        *(uint *)(puVar6 + 9) = uStack0000000000000024;
        lVar8 = FUN_01f62b8c();
        puVar6[8] = lVar8;
        if ((int)uStack0000000000000024 < 1) goto LAB_03193b74;
        if (lVar8 == 0) goto LAB_03193b70;
        lVar10 = 0;
        lVar12 = 0;
        goto LAB_0319399c;
      }
      FUN_01f524a4(&stack0x00000050,unaff_w28,&stack0x00000090,*unaff_x24);
      uVar7 = in_stack_00000090;
      FUN_01f524a4(&stack0x00000050,unaff_w27,&stack0x00000090,*unaff_x24);
      uVar4 = in_stack_00000090;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_031abb88(uVar7,uVar4,0);
    } while ((uVar5 & 1) == 0);
    unaff_w27 = unaff_w27 + 1;
    FUN_01f524a4(&stack0x00000050,unaff_w28,&stack0x00000090,*unaff_x24);
  } while( true );
LAB_03193b74:
  if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar8 = FUN_03175360(in_stack_00000028,0);
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
  if (lVar8 != 0) {
    lVar10 = 0;
    while( true ) {
      lVar12 = *(long *)puVar3;
      if (DAT_04121ee6 == '\0') {
        FUN_01ab69ac(puVar2);
        DAT_04121ee6 = '\x01';
      }
      in_stack_00000080 = *(undefined8 *)(lVar8 + 0x78);
      in_stack_00000078 = *(undefined8 *)(lVar8 + 0x70);
      in_stack_00000070 = *(undefined8 *)(lVar8 + 0x68);
      lVar12 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01a46ff8();
      }
      lVar11 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
      in_stack_00000098 = in_stack_00000078;
      in_stack_00000090 = in_stack_00000070;
      in_stack_000000a0 = in_stack_00000080;
      lVar12 = *(long *)(lVar11 + 0x38);
      if (lVar12 == 0) {
        FUN_01a47054(lVar11);
        lVar12 = *(long *)(lVar11 + 0x38);
      }
      lVar12 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar12 + 8));
      if (*(int *)(lVar12 + 8) <= lVar10) break;
      FUN_0319474c();
      lVar10 = lVar10 + 1;
    }
    lVar8 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
    if (DAT_04121ee6 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cda5e8);
      DAT_04121ee6 = '\x01';
    }
    in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x78);
    in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x70);
    in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0x68);
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8();
    }
    lVar10 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    in_stack_00000098 = in_stack_00000078;
    in_stack_00000090 = in_stack_00000070;
    in_stack_000000a0 = in_stack_00000080;
    lVar8 = *(long *)(lVar10 + 0x38);
    if (lVar8 == 0) {
      FUN_01a47054(lVar10);
      lVar8 = *(long *)(lVar10 + 0x38);
    }
    lVar8 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar8 + 8));
    in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,unaff_w21);
    in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar8 + 8));
    FUN_020dd354(in_stack_00000010,&stack0x00000090,&stack0x00000070,
                 *(undefined8 *)
                  System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_020de018((undefined8 *)(unaff_x20 + 0x68),puVar6,
                 *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
    *(undefined4 *)(puVar6 + 0x12) = 0;
    FUN_0318f878(puVar6,in_stack_00000028);
    return;
  }
  goto LAB_03193b70;
  while( true ) {
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar8 + 0x18) = uVar7;
    lVar8 = puVar6[8];
    if ((undefined8 *)(lVar10 + lVar8) == (undefined8 *)0x0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x38) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x50) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x68) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x80) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x20) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 8) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x40) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x58) = uVar7;
    lVar8 = puVar6[8];
    if (lVar10 + lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    *(undefined8 *)(lVar10 + lVar8 + 0x70) = uVar7;
    lVar8 = lVar10 + puVar6[8];
    if (lVar8 == 0) break;
    uVar7 = FUN_01f62b8c();
    lVar10 = lVar10 + 0x98;
    *(undefined8 *)(lVar8 + 0x88) = uVar7;
    if ((ulong)uStack0000000000000024 * 0x98 - lVar10 == 0) goto LAB_03193b74;
    lVar12 = lVar12 + 1;
    lVar8 = puVar6[8] + lVar12 * 0x98;
    if (puVar6[8] + lVar10 == 0) break;
LAB_0319399c:
    if (in_stack_00000040 + lVar10 == 0) break;
  }
LAB_03193b70:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


