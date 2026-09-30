/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.JsonParser.JsonString$$Equals
ENTRY_POINT: 03193460
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


void UnityEngine_InputSystem_Utilities_JsonParser_JsonString__Equals
               (undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long unaff_x19;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long lVar14;
  long unaff_x23;
  long lVar15;
  long *unaff_x25;
  long unaff_x26;
  int iVar16;
  undefined8 *unaff_x27;
  int iVar17;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  byte bStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
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
  
  do {
    FUN_0222f704(&stack0x00000058,param_2,*unaff_x27);
    iVar16 = (int)unaff_x22[5];
    do {
      unaff_x23 = unaff_x23 + 1;
      unaff_x19 = unaff_x19 + 4;
      if (iVar16 <= unaff_x23) {
        do {
          iVar16 = (int)unaff_x22[9];
          if (0 < iVar16) {
            lVar12 = 0;
            lVar15 = 0;
            do {
              if ((*(byte *)(lVar12 + unaff_x22[7] + 3) & 1) != 0) {
                FUN_0222f704(&stack0x00000058,lVar12 + unaff_x22[7],*unaff_x27);
                iVar16 = (int)unaff_x22[9];
              }
              lVar15 = lVar15 + 1;
              lVar12 = lVar12 + 4;
            } while (lVar15 < iVar16);
          }
          iVar16 = (int)unaff_x22[2];
          if (0 < iVar16) {
            lVar12 = 0;
            lVar15 = 0;
            do {
              if ((*(byte *)(lVar12 + *unaff_x22 + 3) & 1) != 0) {
                FUN_0222f704(&stack0x00000058,lVar12 + *unaff_x22,*unaff_x27);
                uVar11 = *(undefined4 *)(lVar12 + *unaff_x22);
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                in_stack_00000048 = FUN_031ae4f4(uVar11,0);
                FUN_0222f704(&stack0x00000050,&stack0x00000048,*unaff_x28);
                iVar16 = (int)unaff_x22[2];
              }
              lVar15 = lVar15 + 1;
              lVar12 = lVar12 + 4;
            } while (lVar15 < iVar16);
          }
          if (0 < (int)unaff_x22[0xc]) {
            lVar12 = 0;
            lVar15 = 0;
            do {
              FUN_0222f704(&stack0x00000058,lVar12 + unaff_x22[10],*unaff_x27);
              lVar15 = lVar15 + 1;
              lVar12 = lVar12 + 4;
            } while (lVar15 < (int)unaff_x22[0xc]);
          }
          lVar15 = in_stack_00000058;
          puVar2 = System_Collections_Generic_List<IEnvelope>_TypeInfo;
          unaff_x26 = unaff_x26 + 1;
          if (unaff_x26 == unaff_x29) {
            if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo +
                                    0x20) + 0x135) & 1) == 0) {
              FUN_01a46ff8();
            }
            puVar5 = System_Collections_Generic_List<IEventDispatchingStrategy>_TypeInfo;
            puVar4 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
            puVar3 = System_Collections_Generic_List<IDrawGizmos>_TypeInfo;
            if (0 < *(int *)(lVar15 + 8)) {
              FUN_01fb70f4(in_stack_00000058,
                           *(undefined8 *)
                            System_Collections_Generic_List<IExpressionCleanup>_TypeInfo);
              iVar16 = 0;
              iVar17 = 1;
              while( true ) {
                lVar15 = in_stack_00000058;
                if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
                  FUN_01a46ff8();
                }
                if (*(int *)(lVar15 + 8) <= iVar17) break;
                FUN_01f524a4(&stack0x00000058,iVar17,&stack0x00000090,*(undefined8 *)puVar3);
                iVar6 = iStack0000000000000090;
                FUN_01f524a4(&stack0x00000058,iVar16,&stack0x00000090,*(undefined8 *)puVar3);
                if (iVar6 != iStack0000000000000090) {
                  iVar16 = iVar16 + 1;
                  FUN_01f524a4(&stack0x00000058,iVar17,&stack0x00000090,*(undefined8 *)puVar3);
                  FUN_0224d17c(&stack0x00000058,iVar16,&stack0x00000090,*(undefined8 *)puVar4);
                }
                iVar17 = iVar17 + 1;
              }
              FUN_0222f4b0(&stack0x00000058,iVar16 + 1,*(undefined8 *)puVar5);
              lVar15 = in_stack_00000058;
              if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
                FUN_01a46ff8();
              }
              if (8 < *(int *)(lVar15 + 8)) {
                _iStack0000000000000090 = CONCAT44(uStack0000000000000094,8);
                uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
                uVar9 = thunk_FUN_01a89a98(uVar9,&stack0x00000090);
                uVar10 = thunk_FUN_01a6ca08(
                                           System_Collections_Generic_List<IInRoomCallbacks>_TypeInfo
                                           );
                uVar9 = FUN_025b4d3c(uVar10,uVar9,0);
                thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
                uVar10 = thunk_FUN_01a89e68();
                FUN_026b274c(uVar10,uVar9,0);
                uVar9 = thunk_FUN_01a6ca08(
                                          System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar10,uVar9);
              }
            }
            lVar15 = in_stack_00000050;
            puVar2 = System_Collections_Generic_List<IEnumerator>_TypeInfo;
            if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnumerator>_TypeInfo
                                    + 0x20) + 0x135) & 1) == 0) {
              FUN_01a46ff8();
            }
            puVar4 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
            puVar3 = System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo;
            if (0 < *(int *)(lVar15 + 8)) {
              FUN_01fb70f4(in_stack_00000050,
                           *(undefined8 *)System_Collections_Generic_List<IEventHandler>_TypeInfo);
              iVar16 = 0;
              iVar17 = 1;
              while( true ) {
                lVar15 = in_stack_00000050;
                if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
                  FUN_01a46ff8();
                }
                if (*(int *)(lVar15 + 8) <= iVar17) break;
                FUN_01f524a4(&stack0x00000050,iVar17,&stack0x00000090,*(undefined8 *)puVar3);
                uVar9 = _iStack0000000000000090;
                FUN_01f524a4(&stack0x00000050,iVar16,&stack0x00000090,*(undefined8 *)puVar3);
                uVar10 = _iStack0000000000000090;
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar7 = FUN_031abb88(uVar9,uVar10,0);
                if ((uVar7 & 1) != 0) {
                  iVar16 = iVar16 + 1;
                  FUN_01f524a4(&stack0x00000050,iVar17,&stack0x00000090,*(undefined8 *)puVar3);
                  FUN_0224d17c(&stack0x00000050,iVar16,&stack0x00000090,*(undefined8 *)puVar4);
                }
                iVar17 = iVar17 + 1;
              }
              FUN_0222f4b0(&stack0x00000050,iVar16 + 1,
                           *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
            }
            puVar8 = (undefined8 *)FUN_01f62b8c();
            if (puVar8 == (undefined8 *)0x0) goto LAB_03193b70;
            *(undefined4 *)(puVar8 + 1) = in_stack_00000038._4_4_;
            uVar9 = FUN_01f62b8c();
            lVar15 = in_stack_00000058;
            *puVar8 = uVar9;
            if (in_stack_00000018._4_4_ == 0) {
              if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo
                                      + 0x20) + 0x135) & 1) == 0) {
                FUN_01a46ff8();
              }
              uVar11 = *(undefined4 *)(lVar15 + 8);
            }
            else {
              uVar11 = 0;
            }
            *(undefined4 *)(puVar8 + 7) = uVar11;
            puVar3 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
            if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo +
                                    0x20) + 0x135) & 1) == 0) {
              FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo +
                                    0x20));
            }
            puVar4 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
            FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar3);
            uVar9 = FUN_01f62b8c();
            lVar15 = in_stack_00000058;
            puVar8[6] = uVar9;
            if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo +
                                    0x20) + 0x135) & 1) == 0) {
              FUN_01a46ff8();
            }
            bVar1 = 0;
            if (0 < *(int *)(lVar15 + 8)) {
              bVar1 = bStack0000000000000020 ^ 1;
            }
            *(byte *)(puVar8 + 0x13) = bVar1;
            FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar4);
            lVar15 = *(long *)(*(long *)puVar2 + 0x20);
            if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
              FUN_01a46ff8(lVar15);
            }
            FUN_03194468();
            *(uint *)(puVar8 + 9) = uStack0000000000000024;
            lVar15 = FUN_01f62b8c();
            puVar8[8] = lVar15;
            if (0 < (int)uStack0000000000000024) {
              if (lVar15 == 0) goto LAB_03193b70;
              lVar12 = 0;
              lVar14 = 0;
              while( true ) {
                if (in_stack_00000040 + lVar12 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar15 + 0x18) = uVar9;
                lVar15 = puVar8[8];
                if ((undefined8 *)(lVar12 + lVar15) == (undefined8 *)0x0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x38) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x50) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x68) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x80) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x20) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 8) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x40) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x58) = uVar9;
                lVar15 = puVar8[8];
                if (lVar12 + lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                *(undefined8 *)(lVar12 + lVar15 + 0x70) = uVar9;
                lVar15 = lVar12 + puVar8[8];
                if (lVar15 == 0) goto LAB_03193b70;
                uVar9 = FUN_01f62b8c();
                lVar12 = lVar12 + 0x98;
                *(undefined8 *)(lVar15 + 0x88) = uVar9;
                if ((ulong)uStack0000000000000024 * 0x98 - lVar12 == 0) break;
                lVar14 = lVar14 + 1;
                lVar15 = puVar8[8] + lVar14 * 0x98;
                if (puVar8[8] + lVar12 == 0) goto LAB_03193b70;
              }
            }
            if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar15 = FUN_03175360(in_stack_00000028,0);
            uVar9 = FUN_03175360(in_stack_00000028,0);
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_031946a0(&stack0x00000070,uVar9);
            puVar8[0xd] = in_stack_00000078;
            puVar8[0xc] = in_stack_00000070;
            uVar9 = FUN_03175360(in_stack_00000028,0);
            in_stack_000000b0 = 0;
            in_stack_00000098 = 0;
            _iStack0000000000000090 = 0;
            in_stack_000000a8 = 0;
            in_stack_000000a0 = 0;
            FUN_03195530(&stack0x00000090,uVar9);
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            puVar8[0x12] = in_stack_000000b0;
            puVar8[0xf] = in_stack_00000098;
            puVar8[0xe] = _iStack0000000000000090;
            puVar8[0x11] = in_stack_000000a8;
            puVar8[0x10] = in_stack_000000a0;
            puVar3 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
            puVar2 = PTR_DAT_03cda5e8;
            if (lVar15 != 0) {
              lVar12 = 0;
              while( true ) {
                lVar14 = *(long *)puVar3;
                if (DAT_04121ee6 == '\0') {
                  FUN_01ab69ac(puVar2);
                  DAT_04121ee6 = '\x01';
                }
                in_stack_00000080 = *(undefined8 *)(lVar15 + 0x78);
                in_stack_00000078 = *(undefined8 *)(lVar15 + 0x70);
                in_stack_00000070 = *(undefined8 *)(lVar15 + 0x68);
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
              lVar12 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
              in_stack_00000098 = in_stack_00000078;
              _iStack0000000000000090 = in_stack_00000070;
              in_stack_000000a0 = in_stack_00000080;
              lVar15 = *(long *)(lVar12 + 0x38);
              if (lVar15 == 0) {
                FUN_01a47054(lVar12);
                lVar15 = *(long *)(lVar12 + 0x38);
              }
              lVar15 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar15 + 8));
              _iStack0000000000000090 = CONCAT44(uStack0000000000000094,unaff_w21);
              in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar15 + 8));
              FUN_020dd354(in_stack_00000010,&stack0x00000090,&stack0x00000070,
                           *(undefined8 *)
                            System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
              FUN_020de018((undefined8 *)(unaff_x20 + 0x68),puVar8,
                           *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo
                          );
              *(undefined4 *)(puVar8 + 0x12) = 0;
              FUN_0318f878(puVar8,in_stack_00000028);
              return;
            }
LAB_03193b70:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          unaff_x22 = (long *)(in_stack_00000040 + unaff_x26 * 0x98);
          iVar16 = (int)unaff_x22[5];
        } while (iVar16 < 1);
        unaff_x19 = 0;
        unaff_x23 = 0;
      }
      param_2 = unaff_x19 + unaff_x22[3];
    } while ((*(byte *)(param_2 + 3) & 1) == 0);
  } while( true );
}


