/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.JsonParser.JsonValue$$op_Implicit
ENTRY_POINT: 0319325c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_Utilities_JsonParser_JsonValue__op_Implicit(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *unaff_x19;
  long lVar16;
  long lVar17;
  long unaff_x20;
  uint unaff_w21;
  long *plVar18;
  long lVar19;
  undefined8 *unaff_x23;
  long unaff_x24;
  long unaff_x26;
  int iVar20;
  undefined8 *puVar21;
  uint unaff_w28;
  int iVar22;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  int iStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  lVar15 = unaff_x26;
  do {
    uVar10 = FUN_031942e0(lVar15);
    unaff_x24 = unaff_x24 + -1;
    unaff_w21 = uVar10 ^ unaff_w21 * 0x18d;
    lVar15 = lVar15 + 0x98;
  } while (unaff_x24 != 0);
  uVar12 = FUN_0200404c(unaff_x20 + 0x80,*unaff_x23);
  _iStack0000000000000090 = CONCAT44(uStack0000000000000094,unaff_w21);
  uVar13 = FUN_020dd6dc(uVar12,&stack0x00000090,(long)&stack0x00000068 + 4,&stack0x00000060,
                        *unaff_x19);
  puVar3 = System_Collections_Generic_List<CloudSaveValidationErrorDetail>_TypeInfo;
  while ((uVar13 & 1) != 0) {
    puVar21 = *(undefined8 **)(*(long *)(unaff_x20 + 0x68) + (long)in_stack_00000068._4_4_ * 8);
    uVar13 = FUN_03193ffc(uVar13,puVar21);
    if ((uVar13 & 1) != 0) {
      if (puVar21 != (undefined8 *)0x0) goto LAB_03193d8c;
      break;
    }
    uVar13 = FUN_020dd7f4(uVar12,(long)&stack0x00000068 + 4,&stack0x00000060,*(undefined8 *)puVar3);
  }
  puVar5 = System_Collections_Generic_List<IDisposable>_TypeInfo;
  puVar4 = System_Collections_Generic_List<IDeserializable>_TypeInfo;
  puVar3 = PTR_DAT_03cd7b40;
  if (unaff_x26 != 0) {
    uVar10 = *(uint *)(unaff_x26 + 0x94) & 8;
    uVar2 = uVar10 >> 3;
    if (1 < (int)unaff_w28) {
      lVar15 = (ulong)unaff_w28 - 1;
      lVar16 = unaff_x26;
      do {
        if (lVar16 + 0x98 == 0) goto LAB_03193b70;
        if ((*(uint *)(lVar16 + 300) >> 3 & 1) != uVar2) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar12 = thunk_FUN_01a89e68();
          uVar14 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IGroupBoxOption>_TypeInfo);
          FUN_026b274c(uVar12,uVar14,0);
          uVar14 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,uVar14);
        }
        lVar15 = lVar15 + -1;
        lVar16 = lVar16 + 0x98;
      } while (lVar15 != 0);
    }
    if ((int)unaff_w28 < 1) {
      iVar20 = 0;
    }
    else {
      iVar20 = 0;
      uVar13 = (ulong)unaff_w28;
      lVar15 = unaff_x26;
      do {
        if (lVar15 == 0) goto LAB_03193b70;
        uVar13 = uVar13 - 1;
        iVar20 = *(int *)(lVar15 + 0x28) + iVar20 + *(int *)(lVar15 + 0x10) +
                 *(int *)(lVar15 + 0x48) + *(int *)(lVar15 + 0x60) + *(int *)(lVar15 + 0x78) +
                 *(int *)(lVar15 + 0x90);
        lVar15 = lVar15 + 0x98;
      } while (uVar13 != 0);
    }
    uVar11 = FUN_0310d940(2,0);
    FUN_0222f1ec(&stack0x00000058,iVar20,uVar11,*(undefined8 *)puVar5);
    uVar11 = FUN_0310d940(2,0);
    FUN_0222f1ec(&stack0x00000050,iVar20,uVar11,*(undefined8 *)puVar4);
    puVar5 = System_Collections_Generic_List<IDeserializable>_TypeInfo;
    puVar4 = System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo;
    uStack0000000000000024 = unaff_w28;
    if (0 < (int)unaff_w28) {
      uVar13 = 0;
      do {
        plVar18 = (long *)(unaff_x26 + uVar13 * 0x98);
        iVar20 = (int)plVar18[5];
        if (0 < iVar20) {
          lVar16 = 0;
          lVar15 = 0;
          do {
            if ((*(byte *)(lVar16 + plVar18[3] + 3) & 1) != 0) {
              FUN_0222f704(&stack0x00000058,lVar16 + plVar18[3],*(undefined8 *)puVar5);
              iVar20 = (int)plVar18[5];
            }
            lVar15 = lVar15 + 1;
            lVar16 = lVar16 + 4;
          } while (lVar15 < iVar20);
        }
        iVar20 = (int)plVar18[9];
        if (0 < iVar20) {
          lVar16 = 0;
          lVar15 = 0;
          do {
            if ((*(byte *)(lVar16 + plVar18[7] + 3) & 1) != 0) {
              FUN_0222f704(&stack0x00000058,lVar16 + plVar18[7],*(undefined8 *)puVar5);
              iVar20 = (int)plVar18[9];
            }
            lVar15 = lVar15 + 1;
            lVar16 = lVar16 + 4;
          } while (lVar15 < iVar20);
        }
        iVar20 = (int)plVar18[2];
        if (0 < iVar20) {
          lVar16 = 0;
          lVar15 = 0;
          do {
            if ((*(byte *)(lVar16 + *plVar18 + 3) & 1) != 0) {
              FUN_0222f704(&stack0x00000058,lVar16 + *plVar18,*(undefined8 *)puVar5);
              uVar11 = *(undefined4 *)(lVar16 + *plVar18);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_00000048 = FUN_031ae4f4(uVar11,0);
              FUN_0222f704(&stack0x00000050,&stack0x00000048,*(undefined8 *)puVar4);
              iVar20 = (int)plVar18[2];
            }
            lVar15 = lVar15 + 1;
            lVar16 = lVar16 + 4;
          } while (lVar15 < iVar20);
        }
        if (0 < (int)plVar18[0xc]) {
          lVar16 = 0;
          lVar15 = 0;
          do {
            FUN_0222f704(&stack0x00000058,lVar16 + plVar18[10],*(undefined8 *)puVar5);
            lVar15 = lVar15 + 1;
            lVar16 = lVar16 + 4;
          } while (lVar15 < (int)plVar18[0xc]);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != unaff_w28);
    }
    lVar15 = in_stack_00000058;
    puVar4 = System_Collections_Generic_List<IEnvelope>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    puVar7 = System_Collections_Generic_List<IEventDispatchingStrategy>_TypeInfo;
    puVar6 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
    puVar5 = System_Collections_Generic_List<IDrawGizmos>_TypeInfo;
    if (0 < *(int *)(lVar15 + 8)) {
      FUN_01fb70f4(in_stack_00000058,
                   *(undefined8 *)System_Collections_Generic_List<IExpressionCleanup>_TypeInfo);
      iVar20 = 0;
      iVar22 = 1;
      while( true ) {
        lVar15 = in_stack_00000058;
        if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        if (*(int *)(lVar15 + 8) <= iVar22) break;
        FUN_01f524a4(&stack0x00000058,iVar22,&stack0x00000090,*(undefined8 *)puVar5);
        iVar8 = iStack0000000000000090;
        FUN_01f524a4(&stack0x00000058,iVar20,&stack0x00000090,*(undefined8 *)puVar5);
        if (iVar8 != iStack0000000000000090) {
          iVar20 = iVar20 + 1;
          FUN_01f524a4(&stack0x00000058,iVar22,&stack0x00000090,*(undefined8 *)puVar5);
          FUN_0224d17c(&stack0x00000058,iVar20,&stack0x00000090,*(undefined8 *)puVar6);
        }
        iVar22 = iVar22 + 1;
      }
      FUN_0222f4b0(&stack0x00000058,iVar20 + 1,*(undefined8 *)puVar7);
      lVar15 = in_stack_00000058;
      if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      if (8 < *(int *)(lVar15 + 8)) {
        _iStack0000000000000090 = CONCAT44(uStack0000000000000094,8);
        uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar12 = thunk_FUN_01a89a98(uVar12,&stack0x00000090);
        uVar14 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IInRoomCallbacks>_TypeInfo);
        uVar12 = FUN_025b4d3c(uVar14,uVar12,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar14 = thunk_FUN_01a89e68();
        FUN_026b274c(uVar14,uVar12,0);
        uVar12 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,uVar12);
      }
    }
    lVar15 = in_stack_00000050;
    puVar4 = System_Collections_Generic_List<IEnumerator>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnumerator>_TypeInfo + 0x20)
                  + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    puVar6 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
    puVar5 = System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo;
    if (0 < *(int *)(lVar15 + 8)) {
      FUN_01fb70f4(in_stack_00000050,
                   *(undefined8 *)System_Collections_Generic_List<IEventHandler>_TypeInfo);
      iVar20 = 0;
      iVar22 = 1;
      while( true ) {
        lVar15 = in_stack_00000050;
        if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        if (*(int *)(lVar15 + 8) <= iVar22) break;
        FUN_01f524a4(&stack0x00000050,iVar22,&stack0x00000090,*(undefined8 *)puVar5);
        uVar14 = _iStack0000000000000090;
        FUN_01f524a4(&stack0x00000050,iVar20,&stack0x00000090,*(undefined8 *)puVar5);
        uVar9 = _iStack0000000000000090;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_031abb88(uVar14,uVar9,0);
        if ((uVar13 & 1) != 0) {
          iVar20 = iVar20 + 1;
          FUN_01f524a4(&stack0x00000050,iVar22,&stack0x00000090,*(undefined8 *)puVar5);
          FUN_0224d17c(&stack0x00000050,iVar20,&stack0x00000090,*(undefined8 *)puVar6);
        }
        iVar22 = iVar22 + 1;
      }
      FUN_0222f4b0(&stack0x00000050,iVar20 + 1,
                   *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
    }
    puVar21 = (undefined8 *)FUN_01f62b8c();
    if (puVar21 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar21 + 1) = in_stack_00000038._4_4_;
      uVar14 = FUN_01f62b8c();
      lVar15 = in_stack_00000058;
      *puVar21 = uVar14;
      if (uVar10 == 0) {
        if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        uVar11 = *(undefined4 *)(lVar15 + 8);
      }
      else {
        uVar11 = 0;
      }
      *(undefined4 *)(puVar21 + 7) = uVar11;
      puVar3 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20))
        ;
      }
      puVar5 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
      FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar3);
      uVar14 = FUN_01f62b8c();
      lVar15 = in_stack_00000058;
      puVar21[6] = uVar14;
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      bVar1 = 0;
      if (0 < *(int *)(lVar15 + 8)) {
        bVar1 = (byte)uVar2 ^ 1;
      }
      *(byte *)(puVar21 + 0x13) = bVar1;
      FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar5);
      lVar15 = *(long *)(*(long *)puVar4 + 0x20);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar15);
      }
      FUN_03194468();
      *(uint *)(puVar21 + 9) = uStack0000000000000024;
      lVar15 = FUN_01f62b8c();
      puVar21[8] = lVar15;
      if ((int)uStack0000000000000024 < 1) {
LAB_03193b74:
        if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar15 = FUN_03175360(in_stack_00000028,0);
        uVar14 = FUN_03175360(in_stack_00000028,0);
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_031946a0(&stack0x00000070,uVar14);
        puVar21[0xd] = in_stack_00000078;
        puVar21[0xc] = in_stack_00000070;
        uVar14 = FUN_03175360(in_stack_00000028,0);
        in_stack_000000b0 = 0;
        in_stack_00000098 = 0;
        _iStack0000000000000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        FUN_03195530(&stack0x00000090,uVar14);
        puVar21[10] = 0;
        puVar21[0xb] = 0;
        puVar21[0x12] = in_stack_000000b0;
        puVar21[0xf] = in_stack_00000098;
        puVar21[0xe] = _iStack0000000000000090;
        puVar21[0x11] = in_stack_000000a8;
        puVar21[0x10] = in_stack_000000a0;
        puVar4 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
        puVar3 = PTR_DAT_03cda5e8;
        if (lVar15 != 0) {
          lVar16 = 0;
          while( true ) {
            lVar19 = *(long *)puVar4;
            if (DAT_04121ee6 == '\0') {
              FUN_01ab69ac(puVar3);
              DAT_04121ee6 = '\x01';
            }
            in_stack_00000080 = *(undefined8 *)(lVar15 + 0x78);
            in_stack_00000078 = *(undefined8 *)(lVar15 + 0x70);
            in_stack_00000070 = *(undefined8 *)(lVar15 + 0x68);
            lVar19 = *(long *)(lVar19 + 0x20);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = FUN_01a46ff8();
            }
            lVar17 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
            in_stack_00000098 = in_stack_00000078;
            _iStack0000000000000090 = in_stack_00000070;
            in_stack_000000a0 = in_stack_00000080;
            lVar19 = *(long *)(lVar17 + 0x38);
            if (lVar19 == 0) {
              FUN_01a47054(lVar17);
              lVar19 = *(long *)(lVar17 + 0x38);
            }
            lVar19 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar19 + 8));
            if (*(int *)(lVar19 + 8) <= lVar16) break;
            FUN_0319474c();
            lVar16 = lVar16 + 1;
          }
          lVar15 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
          if (DAT_04121ee6 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cda5e8);
            DAT_04121ee6 = '\x01';
          }
          in_stack_00000080 = *(undefined8 *)(unaff_x20 + 0x78);
          in_stack_00000078 = *(undefined8 *)(unaff_x20 + 0x70);
          in_stack_00000070 = *(undefined8 *)(unaff_x20 + 0x68);
          lVar15 = *(long *)(lVar15 + 0x20);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01a46ff8();
          }
          lVar16 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
          in_stack_00000098 = in_stack_00000078;
          _iStack0000000000000090 = in_stack_00000070;
          in_stack_000000a0 = in_stack_00000080;
          lVar15 = *(long *)(lVar16 + 0x38);
          if (lVar15 == 0) {
            FUN_01a47054(lVar16);
            lVar15 = *(long *)(lVar16 + 0x38);
          }
          lVar15 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar15 + 8));
          _iStack0000000000000090 = CONCAT44(uStack0000000000000094,unaff_w21);
          in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar15 + 8));
          FUN_020dd354(uVar12,&stack0x00000090,&stack0x00000070,
                       *(undefined8 *)
                        System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
          FUN_020de018((undefined8 *)(unaff_x20 + 0x68),puVar21,
                       *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
          *(undefined4 *)(puVar21 + 0x12) = 0;
LAB_03193d8c:
          FUN_0318f878(puVar21,in_stack_00000028);
          return;
        }
      }
      else if (lVar15 != 0) {
        lVar16 = 0;
        lVar19 = 0;
        do {
          if (unaff_x26 + lVar16 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar15 + 0x18) = uVar14;
          lVar15 = puVar21[8];
          if ((undefined8 *)(lVar16 + lVar15) == (undefined8 *)0x0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x38) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x50) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x68) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x80) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x20) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 8) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x40) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x58) = uVar14;
          lVar15 = puVar21[8];
          if (lVar16 + lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          *(undefined8 *)(lVar16 + lVar15 + 0x70) = uVar14;
          lVar15 = lVar16 + puVar21[8];
          if (lVar15 == 0) break;
          uVar14 = FUN_01f62b8c();
          lVar16 = lVar16 + 0x98;
          *(undefined8 *)(lVar15 + 0x88) = uVar14;
          if ((ulong)uStack0000000000000024 * 0x98 - lVar16 == 0) goto LAB_03193b74;
          lVar19 = lVar19 + 1;
          lVar15 = puVar21[8] + lVar19 * 0x98;
        } while (puVar21[8] + lVar16 != 0);
      }
    }
  }
LAB_03193b70:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


