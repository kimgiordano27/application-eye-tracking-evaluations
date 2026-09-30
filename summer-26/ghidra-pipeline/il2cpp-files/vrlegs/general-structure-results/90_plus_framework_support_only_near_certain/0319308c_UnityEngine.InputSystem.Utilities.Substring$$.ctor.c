/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.Substring$$.ctor
ENTRY_POINT: 0319308c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 111
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_Utilities_Substring___ctor
               (ulong param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
               undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x19;
  long lVar18;
  long lVar19;
  long lVar20;
  int unaff_w21;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 uStack0000000000000028;
  int iStack000000000000003c;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  int iStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  uStack0000000000000028 = param_3;
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7b40);
    FUN_01ab69ac(PTR_DAT_03cd7dc0);
    FUN_01ab69ac(System_Collections_Generic_List<IBindingRequest>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IBone>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<ICollisionHandler>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<ICollisionHandler>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IContextProperty>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IDeserializable>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IDeserializable>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IDisposable>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IDrawGizmos>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IEnumerator>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IEnvelope>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IEventBinding>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IEventDispatchingStrategy>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IEventHandler>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IExpressionCleanup>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<CloudSaveConflictErrorDetail>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<CloudSaveValidationErrorDetail>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<HoistedParameter>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_LinkedList<Action>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<HitboxHit>_TypeInfo);
    *(undefined1 *)(unaff_x19 + 0xc9) = 1;
  }
  puVar6 = System_Collections_Generic_List<HitboxHit>_TypeInfo;
  puVar5 = System_Collections_Generic_List<CloudSaveConflictErrorDetail>_TypeInfo;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  iStack000000000000003c = unaff_w21;
  uVar11 = FUN_032bc734(param_6,unaff_w21 << 3,0,0);
  if (0 < (int)param_5) {
    uVar23 = (ulong)param_5;
    lVar17 = param_4;
    do {
      uVar12 = FUN_031942e0(lVar17);
      uVar23 = uVar23 - 1;
      uVar11 = uVar12 ^ uVar11 * 0x18d;
      lVar17 = lVar17 + 0x98;
    } while (uVar23 != 0);
  }
  uVar14 = FUN_0200404c(param_2 + 0x80,*(undefined8 *)puVar6);
  _iStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar11);
  uVar23 = FUN_020dd6dc(uVar14,&stack0x00000090,(long)&stack0x00000068 + 4,&stack0x00000060,
                        *(undefined8 *)puVar5);
  iVar24 = iStack000000000000003c;
  puVar5 = System_Collections_Generic_List<CloudSaveValidationErrorDetail>_TypeInfo;
  while ((uVar23 & 1) != 0) {
    in_stack_00000068._4_4_ = (int)((ulong)in_stack_00000068 >> 0x20);
    puVar25 = *(undefined8 **)(*(long *)(param_2 + 0x68) + (long)in_stack_00000068._4_4_ * 8);
    uVar23 = FUN_03193ffc(uVar23,puVar25,param_4,param_5,param_6,iVar24);
    if ((uVar23 & 1) != 0) {
      if (puVar25 != (undefined8 *)0x0) goto LAB_03193d8c;
      break;
    }
    uVar23 = FUN_020dd7f4(uVar14,(long)&stack0x00000068 + 4,&stack0x00000060,*(undefined8 *)puVar5);
  }
  puVar7 = System_Collections_Generic_List<IDisposable>_TypeInfo;
  puVar6 = System_Collections_Generic_List<IDeserializable>_TypeInfo;
  puVar5 = PTR_DAT_03cd7b40;
  if (param_4 != 0) {
    uVar12 = *(uint *)(param_4 + 0x94) & 8;
    uVar4 = uVar12 >> 3;
    if (1 < (int)param_5) {
      lVar17 = (ulong)param_5 - 1;
      lVar18 = param_4;
      do {
        if (lVar18 + 0x98 == 0) goto LAB_03193b70;
        if ((*(uint *)(lVar18 + 300) >> 3 & 1) != uVar4) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar14 = thunk_FUN_01a89e68();
          uVar15 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IGroupBoxOption>_TypeInfo);
          FUN_026b274c(uVar14,uVar15,0);
          uVar15 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar14,uVar15);
        }
        lVar17 = lVar17 + -1;
        lVar18 = lVar18 + 0x98;
      } while (lVar17 != 0);
    }
    if ((int)param_5 < 1) {
      iVar24 = 0;
    }
    else {
      iVar24 = 0;
      uVar23 = (ulong)param_5;
      lVar17 = param_4;
      do {
        if (lVar17 == 0) goto LAB_03193b70;
        uVar23 = uVar23 - 1;
        iVar24 = *(int *)(lVar17 + 0x28) + iVar24 + *(int *)(lVar17 + 0x10) +
                 *(int *)(lVar17 + 0x48) + *(int *)(lVar17 + 0x60) + *(int *)(lVar17 + 0x78) +
                 *(int *)(lVar17 + 0x90);
        lVar17 = lVar17 + 0x98;
      } while (uVar23 != 0);
    }
    uVar13 = FUN_0310d940(2,0);
    FUN_0222f1ec(&stack0x00000058,iVar24,uVar13,*(undefined8 *)puVar7);
    uVar13 = FUN_0310d940(2,0);
    FUN_0222f1ec(&stack0x00000050,iVar24,uVar13,*(undefined8 *)puVar6);
    puVar7 = System_Collections_Generic_List<IDeserializable>_TypeInfo;
    puVar6 = System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo;
    if (0 < (int)param_5) {
      uVar23 = 0;
      do {
        plVar21 = (long *)(param_4 + uVar23 * 0x98);
        iVar24 = (int)plVar21[5];
        if (0 < iVar24) {
          lVar18 = 0;
          lVar17 = 0;
          do {
            if ((*(byte *)(lVar18 + plVar21[3] + 3) & 1) != 0) {
              FUN_0222f704(&stack0x00000058,lVar18 + plVar21[3],*(undefined8 *)puVar7);
              iVar24 = (int)plVar21[5];
            }
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + 4;
          } while (lVar17 < iVar24);
        }
        iVar24 = (int)plVar21[9];
        if (0 < iVar24) {
          lVar18 = 0;
          lVar17 = 0;
          do {
            if ((*(byte *)(lVar18 + plVar21[7] + 3) & 1) != 0) {
              FUN_0222f704(&stack0x00000058,lVar18 + plVar21[7],*(undefined8 *)puVar7);
              iVar24 = (int)plVar21[9];
            }
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + 4;
          } while (lVar17 < iVar24);
        }
        iVar24 = (int)plVar21[2];
        if (0 < iVar24) {
          lVar18 = 0;
          lVar17 = 0;
          do {
            if ((*(byte *)(lVar18 + *plVar21 + 3) & 1) != 0) {
              FUN_0222f704(&stack0x00000058,lVar18 + *plVar21,*(undefined8 *)puVar7);
              uVar13 = *(undefined4 *)(lVar18 + *plVar21);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              in_stack_00000048 = FUN_031ae4f4(uVar13,0);
              FUN_0222f704(&stack0x00000050,&stack0x00000048,*(undefined8 *)puVar6);
              iVar24 = (int)plVar21[2];
            }
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + 4;
          } while (lVar17 < iVar24);
        }
        if (0 < (int)plVar21[0xc]) {
          lVar18 = 0;
          lVar17 = 0;
          do {
            FUN_0222f704(&stack0x00000058,lVar18 + plVar21[10],*(undefined8 *)puVar7);
            lVar17 = lVar17 + 1;
            lVar18 = lVar18 + 4;
          } while (lVar17 < (int)plVar21[0xc]);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != param_5);
    }
    lVar17 = in_stack_00000058;
    puVar6 = System_Collections_Generic_List<IEnvelope>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    puVar9 = System_Collections_Generic_List<IEventDispatchingStrategy>_TypeInfo;
    puVar8 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
    puVar7 = System_Collections_Generic_List<IDrawGizmos>_TypeInfo;
    if (0 < *(int *)(lVar17 + 8)) {
      FUN_01fb70f4(in_stack_00000058,
                   *(undefined8 *)System_Collections_Generic_List<IExpressionCleanup>_TypeInfo);
      iVar24 = 0;
      iVar26 = 1;
      while( true ) {
        lVar17 = in_stack_00000058;
        if ((*(byte *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        if (*(int *)(lVar17 + 8) <= iVar26) break;
        FUN_01f524a4(&stack0x00000058,iVar26,&stack0x00000090,*(undefined8 *)puVar7);
        iVar10 = iStack0000000000000090;
        FUN_01f524a4(&stack0x00000058,iVar24,&stack0x00000090,*(undefined8 *)puVar7);
        if (iVar10 != iStack0000000000000090) {
          iVar24 = iVar24 + 1;
          FUN_01f524a4(&stack0x00000058,iVar26,&stack0x00000090,*(undefined8 *)puVar7);
          FUN_0224d17c(&stack0x00000058,iVar24,&stack0x00000090,*(undefined8 *)puVar8);
        }
        iVar26 = iVar26 + 1;
      }
      FUN_0222f4b0(&stack0x00000058,iVar24 + 1,*(undefined8 *)puVar9);
      lVar17 = in_stack_00000058;
      if ((*(byte *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      if (8 < *(int *)(lVar17 + 8)) {
        _iStack0000000000000090 = CONCAT44(uStack0000000000000094,8);
        uVar14 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar14 = thunk_FUN_01a89a98(uVar14,&stack0x00000090);
        uVar15 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IInRoomCallbacks>_TypeInfo);
        uVar14 = FUN_025b4d3c(uVar15,uVar14,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar15 = thunk_FUN_01a89e68();
        FUN_026b274c(uVar15,uVar14,0);
        uVar14 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar15,uVar14);
      }
    }
    lVar17 = in_stack_00000050;
    puVar6 = System_Collections_Generic_List<IEnumerator>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnumerator>_TypeInfo + 0x20)
                  + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    puVar9 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
    puVar8 = System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo;
    puVar7 = System_Collections_Generic_List<ICollisionHandler>_TypeInfo;
    if (0 < *(int *)(lVar17 + 8)) {
      FUN_01fb70f4(in_stack_00000050,
                   *(undefined8 *)System_Collections_Generic_List<IEventHandler>_TypeInfo);
      iVar24 = 0;
      iVar26 = 1;
      while( true ) {
        lVar17 = in_stack_00000050;
        if ((*(byte *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        if (*(int *)(lVar17 + 8) <= iVar26) break;
        FUN_01f524a4(&stack0x00000050,iVar26,&stack0x00000090,*(undefined8 *)puVar8);
        lVar17 = _iStack0000000000000090;
        FUN_01f524a4(&stack0x00000050,iVar24,&stack0x00000090,*(undefined8 *)puVar8);
        lVar18 = _iStack0000000000000090;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar23 = FUN_031abb88(lVar17,lVar18,0);
        if ((uVar23 & 1) != 0) {
          iVar24 = iVar24 + 1;
          FUN_01f524a4(&stack0x00000050,iVar26,&stack0x00000090,*(undefined8 *)puVar8);
          FUN_0224d17c(&stack0x00000050,iVar24,&stack0x00000090,*(undefined8 *)puVar9);
        }
        iVar26 = iVar26 + 1;
      }
      FUN_0222f4b0(&stack0x00000050,iVar24 + 1,
                   *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
    }
    puVar25 = (undefined8 *)FUN_01f62b8c(param_2,1,0,*(undefined8 *)puVar7);
    puVar5 = System_Collections_Generic_List<ICollisionHandler>_TypeInfo;
    if (puVar25 != (undefined8 *)0x0) {
      *(int *)(puVar25 + 1) = iStack000000000000003c;
      uVar15 = FUN_01f62b8c(param_2,iStack000000000000003c,param_6,*(undefined8 *)puVar5);
      lVar17 = in_stack_00000058;
      *puVar25 = uVar15;
      if (uVar12 == 0) {
        if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        uVar13 = *(undefined4 *)(lVar17 + 8);
      }
      else {
        uVar13 = 0;
      }
      lVar17 = in_stack_00000058;
      *(undefined4 *)(puVar25 + 7) = uVar13;
      puVar7 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
      puVar5 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20))
        ;
      }
      puVar8 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
      uVar13 = *(undefined4 *)(lVar17 + 8);
      uVar15 = FUN_01fb48f8(in_stack_00000058,*(undefined8 *)puVar7);
      uVar15 = FUN_01f62b8c(param_2,uVar13,uVar15,*(undefined8 *)puVar5);
      lVar17 = in_stack_00000058;
      puVar25[6] = uVar15;
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      bVar3 = 0;
      if (0 < *(int *)(lVar17 + 8)) {
        bVar3 = (byte)uVar4 ^ 1;
      }
      *(byte *)(puVar25 + 0x13) = bVar3;
      puVar7 = System_Collections_Generic_List<IBindingRequest>_TypeInfo;
      uVar15 = FUN_01fb48f8(in_stack_00000050,*(undefined8 *)puVar8);
      lVar17 = in_stack_00000050;
      lVar18 = *(long *)(*(long *)puVar6 + 0x20);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar18);
      }
      FUN_03194468(param_2,puVar25,param_6,iStack000000000000003c,uVar15,*(undefined4 *)(lVar17 + 8)
                  );
      *(uint *)(puVar25 + 9) = param_5;
      lVar17 = FUN_01f62b8c(param_2,param_5,param_4,*(undefined8 *)puVar7);
      puVar25[8] = lVar17;
      puVar6 = System_Collections_Generic_List<IBone>_TypeInfo;
      if ((int)param_5 < 1) {
LAB_03193b74:
        if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = uStack0000000000000028;
        lVar17 = FUN_03175360(uStack0000000000000028,0);
        uVar16 = FUN_03175360(uVar15,0);
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_031946a0(&stack0x00000070,uVar16);
        puVar25[0xd] = in_stack_00000078;
        puVar25[0xc] = in_stack_00000070;
        uVar15 = FUN_03175360(uVar15,0);
        in_stack_000000b0 = 0;
        in_stack_00000098 = 0;
        _iStack0000000000000090 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        FUN_03195530(&stack0x00000090,uVar15);
        puVar25[10] = 0;
        puVar25[0xb] = 0;
        puVar25[0x12] = in_stack_000000b0;
        puVar25[0xf] = in_stack_00000098;
        puVar25[0xe] = _iStack0000000000000090;
        puVar25[0x11] = in_stack_000000a8;
        puVar25[0x10] = in_stack_000000a0;
        puVar6 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
        puVar5 = PTR_DAT_03cda5e8;
        if (lVar17 != 0) {
          lVar22 = 0;
          lVar18 = 0;
          while( true ) {
            lVar19 = *(long *)puVar6;
            if (DAT_04121ee6 == '\0') {
              FUN_01ab69ac(puVar5);
              DAT_04121ee6 = '\x01';
            }
            in_stack_00000080 = *(undefined8 *)(lVar17 + 0x78);
            in_stack_00000078 = *(undefined8 *)(lVar17 + 0x70);
            in_stack_00000070 = *(long *)(lVar17 + 0x68);
            lVar19 = *(long *)(lVar19 + 0x20);
            if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
              lVar19 = FUN_01a46ff8();
            }
            lVar20 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
            in_stack_00000098 = in_stack_00000078;
            _iStack0000000000000090 = in_stack_00000070;
            in_stack_000000a0 = in_stack_00000080;
            lVar19 = *(long *)(lVar20 + 0x38);
            if (lVar19 == 0) {
              FUN_01a47054(lVar20);
              lVar19 = *(long *)(lVar20 + 0x38);
            }
            lVar19 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar19 + 8));
            if (*(int *)(lVar19 + 8) <= lVar18) break;
            FUN_0319474c(param_2,*(undefined8 *)(lVar22 + *(long *)(lVar17 + 0x68)),puVar25);
            lVar18 = lVar18 + 1;
            lVar22 = lVar22 + 8;
          }
          lVar17 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
          if (DAT_04121ee6 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cda5e8);
            DAT_04121ee6 = '\x01';
          }
          in_stack_00000080 = *(undefined8 *)(param_2 + 0x78);
          in_stack_00000078 = *(undefined8 *)(param_2 + 0x70);
          in_stack_00000070 = *(undefined8 *)(param_2 + 0x68);
          lVar17 = *(long *)(lVar17 + 0x20);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01a46ff8();
          }
          lVar18 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          in_stack_00000098 = in_stack_00000078;
          _iStack0000000000000090 = in_stack_00000070;
          in_stack_000000a0 = in_stack_00000080;
          lVar17 = *(long *)(lVar18 + 0x38);
          if (lVar17 == 0) {
            FUN_01a47054(lVar18);
            lVar17 = *(long *)(lVar18 + 0x38);
          }
          lVar17 = FUN_0200404c(&stack0x00000090,*(undefined8 *)(lVar17 + 8));
          _iStack0000000000000090 = CONCAT44(uStack0000000000000094,uVar11);
          in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,*(undefined4 *)(lVar17 + 8));
          FUN_020dd354(uVar14,&stack0x00000090,&stack0x00000070,
                       *(undefined8 *)
                        System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
          FUN_020de018((undefined8 *)(param_2 + 0x68),puVar25,
                       *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
          *(undefined4 *)(puVar25 + 0x12) = 0;
LAB_03193d8c:
          FUN_0318f878(puVar25,uStack0000000000000028);
          return;
        }
      }
      else if (lVar17 != 0) {
        lVar18 = 0;
        lVar22 = 0;
        do {
          puVar1 = (undefined8 *)(param_4 + lVar18);
          if (puVar1 == (undefined8 *)0x0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x28),puVar1[3],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar17 + 0x18) = uVar15;
          puVar2 = (undefined8 *)(lVar18 + puVar25[8]);
          if (puVar2 == (undefined8 *)0x0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(puVar2 + 2),*puVar1,*(undefined8 *)puVar5);
          *puVar2 = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x48),puVar1[7],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar17 + 0x38) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x60),puVar1[10],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar17 + 0x50) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x78),puVar1[0xd],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar17 + 0x68) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x90),puVar1[0x10],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar17 + 0x80) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x28),puVar1[4],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar17 + 0x20) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x10),puVar1[1],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar17 + 8) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x48),puVar1[8],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar17 + 0x40) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x60),puVar1[0xb],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar17 + 0x58) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x78),puVar1[0xe],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar17 + 0x70) = uVar15;
          lVar17 = lVar18 + puVar25[8];
          if (lVar17 == 0) break;
          uVar15 = FUN_01f62b8c(param_2,*(undefined4 *)(lVar17 + 0x90),puVar1[0x11],
                                *(undefined8 *)puVar6);
          lVar18 = lVar18 + 0x98;
          *(undefined8 *)(lVar17 + 0x88) = uVar15;
          if ((ulong)param_5 * 0x98 - lVar18 == 0) goto LAB_03193b74;
          lVar22 = lVar22 + 1;
          lVar17 = puVar25[8] + lVar22 * 0x98;
        } while (puVar25[8] + lVar18 != 0);
      }
    }
  }
LAB_03193b70:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


