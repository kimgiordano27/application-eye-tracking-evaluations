/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.JsonParser.JsonValue$$ToString
ENTRY_POINT: 03193828
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;weak_data_support
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_Utilities_JsonParser_JsonValue__ToString(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w8;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar9;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000010;
  byte bStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  *unaff_x27 = param_1;
  if (in_w8 == 0) {
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    uVar6 = *(undefined4 *)(in_stack_00000058 + 8);
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(unaff_x27 + 7) = uVar6;
  puVar2 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
  if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                0x135) & 1) == 0) {
    FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20));
  }
  puVar3 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
  FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar2);
  uVar4 = FUN_01f62b8c();
  unaff_x27[6] = uVar4;
  if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  bVar1 = 0;
  if (0 < *(int *)(in_stack_00000058 + 8)) {
    bVar1 = bStack0000000000000020 ^ 1;
  }
  *(byte *)(unaff_x27 + 0x13) = bVar1;
  FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar3);
  if ((*(byte *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
    FUN_01a46ff8(*(long *)(*unaff_x26 + 0x20));
  }
  FUN_03194468();
  *(uint *)(unaff_x27 + 9) = uStack0000000000000024;
  lVar5 = FUN_01f62b8c();
  unaff_x27[8] = lVar5;
  if ((int)uStack0000000000000024 < 1) {
LAB_03193b74:
    if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = FUN_03175360(in_stack_00000028,0);
    uVar4 = FUN_03175360(in_stack_00000028,0);
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    FUN_031946a0(&stack0x00000070,uVar4);
    unaff_x27[0xd] = in_stack_00000078;
    unaff_x27[0xc] = in_stack_00000070;
    uVar4 = FUN_03175360(in_stack_00000028,0);
    in_stack_000000b0 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    FUN_03195530(&stack0x00000090,uVar4);
    unaff_x27[10] = 0;
    unaff_x27[0xb] = 0;
    unaff_x27[0x12] = in_stack_000000b0;
    unaff_x27[0xf] = in_stack_00000098;
    unaff_x27[0xe] = in_stack_00000090;
    unaff_x27[0x11] = in_stack_000000a8;
    unaff_x27[0x10] = in_stack_000000a0;
    puVar3 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
    puVar2 = PTR_DAT_03cda5e8;
    if (lVar5 != 0) {
      lVar7 = 0;
      while( true ) {
        lVar9 = *(long *)puVar3;
        if (DAT_04121ee6 == '\0') {
          FUN_01ab69ac(puVar2);
          DAT_04121ee6 = '\x01';
        }
        in_stack_00000080 = *(undefined8 *)(lVar5 + 0x78);
        in_stack_00000078 = *(undefined8 *)(lVar5 + 0x70);
        in_stack_00000070 = *(undefined8 *)(lVar5 + 0x68);
        lVar9 = *(long *)(lVar9 + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01a46ff8();
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        in_stack_00000098 = in_stack_00000078;
        in_stack_00000090 = in_stack_00000070;
        in_stack_000000a0 = in_stack_00000080;
        lVar9 = *(long *)(lVar8 + 0x38);
        if (lVar9 == 0) {
          FUN_01a47054(lVar8);
          lVar9 = *(long *)(lVar8 + 0x38);
        }
        lVar9 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar9 + 8));
        if (*(int *)(lVar9 + 8) <= lVar7) break;
        FUN_0319474c();
        lVar7 = lVar7 + 1;
      }
      lVar5 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
      if (DAT_04121ee6 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cda5e8);
        DAT_04121ee6 = '\x01';
      }
      in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x78);
      in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x70);
      in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0x68);
      lVar5 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8();
      }
      lVar7 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      in_stack_00000098 = in_stack_00000078;
      in_stack_00000090 = in_stack_00000070;
      in_stack_000000a0 = in_stack_00000080;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_01a47054(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar5 + 8));
      in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,unaff_w21);
      in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar5 + 8));
      FUN_020dd354(in_stack_00000010,&stack0x00000090,&stack0x00000070,
                   *(undefined8 *)
                    System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
      FUN_020de018((undefined8 *)(unaff_x20 + 0x68));
      *(undefined4 *)(unaff_x27 + 0x12) = 0;
      FUN_0318f878();
      return;
    }
  }
  else if (lVar5 != 0) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      if (in_stack_00000040 + lVar7 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar5 + 0x18) = uVar4;
      lVar5 = unaff_x27[8];
      if ((undefined8 *)(lVar7 + lVar5) == (undefined8 *)0x0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x38) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x50) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x68) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x80) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x20) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 8) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x40) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x58) = uVar4;
      lVar5 = unaff_x27[8];
      if (lVar7 + lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      *(undefined8 *)(lVar7 + lVar5 + 0x70) = uVar4;
      lVar5 = lVar7 + unaff_x27[8];
      if (lVar5 == 0) break;
      uVar4 = FUN_01f62b8c();
      lVar7 = lVar7 + 0x98;
      *(undefined8 *)(lVar5 + 0x88) = uVar4;
      if ((ulong)uStack0000000000000024 * 0x98 - lVar7 == 0) goto LAB_03193b74;
      lVar9 = lVar9 + 1;
      lVar5 = unaff_x27[8] + lVar9 * 0x98;
    } while (unaff_x27[8] + lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


