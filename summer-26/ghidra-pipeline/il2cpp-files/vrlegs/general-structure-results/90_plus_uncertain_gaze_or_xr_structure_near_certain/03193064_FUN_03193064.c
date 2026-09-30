/*
FUNCTION_NAME: FUN_03193064
ENTRY_POINT: 03193064
PROGRAM: vrlegs-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_03193064(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 int param_6)

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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0412c0c9 & 1) == 0) {
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
    DAT_0412c0c9 = 1;
  }
  puVar6 = System_Collections_Generic_List<HitboxHit>_TypeInfo;
  puVar5 = System_Collections_Generic_List<CloudSaveConflictErrorDetail>_TypeInfo;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  uVar11 = FUN_032bc734(param_5,param_6 << 3,0,0);
  if (0 < (int)param_4) {
    uVar22 = (ulong)param_4;
    lVar16 = param_3;
    do {
      uVar12 = FUN_031942e0(lVar16);
      uVar22 = uVar22 - 1;
      uVar11 = uVar12 ^ uVar11 * 0x18d;
      lVar16 = lVar16 + 0x98;
    } while (uVar22 != 0);
  }
  uVar14 = FUN_0200404c(param_1 + 0x80,*(undefined8 *)puVar6);
  local_90 = CONCAT44(local_90._4_4_,uVar11);
  uVar22 = FUN_020dd6dc(uVar14,&local_90,(long)&uStack_b8 + 4,&local_c0,*(undefined8 *)puVar5);
  puVar5 = System_Collections_Generic_List<CloudSaveValidationErrorDetail>_TypeInfo;
  while ((uVar22 & 1) != 0) {
    uStack_b8._4_4_ = (int)((ulong)uStack_b8 >> 0x20);
    puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x68) + (long)uStack_b8._4_4_ * 8);
    uVar22 = FUN_03193ffc(uVar22,puVar24,param_3,param_4,param_5,param_6);
    if ((uVar22 & 1) != 0) {
      if (puVar24 != (undefined8 *)0x0) goto LAB_03193d8c;
      break;
    }
    uVar22 = FUN_020dd7f4(uVar14,(long)&uStack_b8 + 4,&local_c0,*(undefined8 *)puVar5);
  }
  puVar7 = System_Collections_Generic_List<IDisposable>_TypeInfo;
  puVar6 = System_Collections_Generic_List<IDeserializable>_TypeInfo;
  puVar5 = PTR_DAT_03cd7b40;
  if (param_3 != 0) {
    uVar12 = *(uint *)(param_3 + 0x94) & 8;
    uVar4 = uVar12 >> 3;
    if (1 < (int)param_4) {
      lVar16 = (ulong)param_4 - 1;
      lVar17 = param_3;
      do {
        if (lVar17 + 0x98 == 0) goto LAB_03193b70;
        if ((*(uint *)(lVar17 + 300) >> 3 & 1) != uVar4) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
          uVar14 = thunk_FUN_01a89e68();
          uVar15 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IGroupBoxOption>_TypeInfo);
          FUN_026b274c(uVar14,uVar15,0);
          uVar15 = thunk_FUN_01a6ca08(System_Collections_Generic_List<IIdleAutoDespawn>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar14,uVar15);
        }
        lVar16 = lVar16 + -1;
        lVar17 = lVar17 + 0x98;
      } while (lVar16 != 0);
    }
    if ((int)param_4 < 1) {
      iVar23 = 0;
    }
    else {
      iVar23 = 0;
      uVar22 = (ulong)param_4;
      lVar16 = param_3;
      do {
        if (lVar16 == 0) goto LAB_03193b70;
        uVar22 = uVar22 - 1;
        iVar23 = *(int *)(lVar16 + 0x28) + iVar23 + *(int *)(lVar16 + 0x10) +
                 *(int *)(lVar16 + 0x48) + *(int *)(lVar16 + 0x60) + *(int *)(lVar16 + 0x78) +
                 *(int *)(lVar16 + 0x90);
        lVar16 = lVar16 + 0x98;
      } while (uVar22 != 0);
    }
    uVar13 = FUN_0310d940(2,0);
    FUN_0222f1ec(&local_c8,iVar23,uVar13,*(undefined8 *)puVar7);
    uVar13 = FUN_0310d940(2,0);
    FUN_0222f1ec(&local_d0,iVar23,uVar13,*(undefined8 *)puVar6);
    puVar7 = System_Collections_Generic_List<IDeserializable>_TypeInfo;
    puVar6 = System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo;
    if (0 < (int)param_4) {
      uVar22 = 0;
      do {
        plVar20 = (long *)(param_3 + uVar22 * 0x98);
        iVar23 = (int)plVar20[5];
        if (0 < iVar23) {
          lVar17 = 0;
          lVar16 = 0;
          do {
            if ((*(byte *)(lVar17 + plVar20[3] + 3) & 1) != 0) {
              FUN_0222f704(&local_c8,lVar17 + plVar20[3],*(undefined8 *)puVar7);
              iVar23 = (int)plVar20[5];
            }
            lVar16 = lVar16 + 1;
            lVar17 = lVar17 + 4;
          } while (lVar16 < iVar23);
        }
        iVar23 = (int)plVar20[9];
        if (0 < iVar23) {
          lVar17 = 0;
          lVar16 = 0;
          do {
            if ((*(byte *)(lVar17 + plVar20[7] + 3) & 1) != 0) {
              FUN_0222f704(&local_c8,lVar17 + plVar20[7],*(undefined8 *)puVar7);
              iVar23 = (int)plVar20[9];
            }
            lVar16 = lVar16 + 1;
            lVar17 = lVar17 + 4;
          } while (lVar16 < iVar23);
        }
        iVar23 = (int)plVar20[2];
        if (0 < iVar23) {
          lVar17 = 0;
          lVar16 = 0;
          do {
            if ((*(byte *)(lVar17 + *plVar20 + 3) & 1) != 0) {
              FUN_0222f704(&local_c8,lVar17 + *plVar20,*(undefined8 *)puVar7);
              uVar13 = *(undefined4 *)(lVar17 + *plVar20);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              local_d8 = FUN_031ae4f4(uVar13,0);
              FUN_0222f704(&local_d0,&local_d8,*(undefined8 *)puVar6);
              iVar23 = (int)plVar20[2];
            }
            lVar16 = lVar16 + 1;
            lVar17 = lVar17 + 4;
          } while (lVar16 < iVar23);
        }
        if (0 < (int)plVar20[0xc]) {
          lVar17 = 0;
          lVar16 = 0;
          do {
            FUN_0222f704(&local_c8,lVar17 + plVar20[10],*(undefined8 *)puVar7);
            lVar16 = lVar16 + 1;
            lVar17 = lVar17 + 4;
          } while (lVar16 < (int)plVar20[0xc]);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != param_4);
    }
    lVar16 = local_c8;
    puVar6 = System_Collections_Generic_List<IEnvelope>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20) +
                  0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    puVar9 = System_Collections_Generic_List<IEventDispatchingStrategy>_TypeInfo;
    puVar8 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
    puVar7 = System_Collections_Generic_List<IDrawGizmos>_TypeInfo;
    if (0 < *(int *)(lVar16 + 8)) {
      FUN_01fb70f4(local_c8,*(undefined8 *)
                             System_Collections_Generic_List<IExpressionCleanup>_TypeInfo);
      iVar23 = 0;
      iVar25 = 1;
      while( true ) {
        lVar16 = local_c8;
        if ((*(byte *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        if (*(int *)(lVar16 + 8) <= iVar25) break;
        FUN_01f524a4(&local_c8,iVar25,&local_90,*(undefined8 *)puVar7);
        iVar10 = (int)local_90;
        FUN_01f524a4(&local_c8,iVar23,&local_90,*(undefined8 *)puVar7);
        if (iVar10 != (int)local_90) {
          iVar23 = iVar23 + 1;
          FUN_01f524a4(&local_c8,iVar25,&local_90,*(undefined8 *)puVar7);
          FUN_0224d17c(&local_c8,iVar23,&local_90,*(undefined8 *)puVar8);
        }
        iVar25 = iVar25 + 1;
      }
      FUN_0222f4b0(&local_c8,iVar23 + 1,*(undefined8 *)puVar9);
      lVar16 = local_c8;
      if ((*(byte *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      if (8 < *(int *)(lVar16 + 8)) {
        local_90 = CONCAT44(local_90._4_4_,8);
        uVar14 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar14 = thunk_FUN_01a89a98(uVar14,&local_90);
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
    lVar16 = local_d0;
    puVar6 = System_Collections_Generic_List<IEnumerator>_TypeInfo;
    if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnumerator>_TypeInfo + 0x20)
                  + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    puVar9 = System_Collections_Generic_List<IErrorInfoCallback>_TypeInfo;
    puVar8 = System_Collections_Generic_List<IDtdDefaultAttributeInfo>_TypeInfo;
    puVar7 = System_Collections_Generic_List<ICollisionHandler>_TypeInfo;
    if (0 < *(int *)(lVar16 + 8)) {
      FUN_01fb70f4(local_d0,*(undefined8 *)System_Collections_Generic_List<IEventHandler>_TypeInfo);
      iVar23 = 0;
      iVar25 = 1;
      while( true ) {
        lVar16 = local_d0;
        if ((*(byte *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        if (*(int *)(lVar16 + 8) <= iVar25) break;
        FUN_01f524a4(&local_d0,iVar25,&local_90,*(undefined8 *)puVar8);
        lVar16 = local_90;
        FUN_01f524a4(&local_d0,iVar23,&local_90,*(undefined8 *)puVar8);
        lVar17 = local_90;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar22 = FUN_031abb88(lVar16,lVar17,0);
        if ((uVar22 & 1) != 0) {
          iVar23 = iVar23 + 1;
          FUN_01f524a4(&local_d0,iVar25,&local_90,*(undefined8 *)puVar8);
          FUN_0224d17c(&local_d0,iVar23,&local_90,*(undefined8 *)puVar9);
        }
        iVar25 = iVar25 + 1;
      }
      FUN_0222f4b0(&local_d0,iVar23 + 1,
                   *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo);
    }
    puVar24 = (undefined8 *)FUN_01f62b8c(param_1,1,0,*(undefined8 *)puVar7);
    puVar5 = System_Collections_Generic_List<ICollisionHandler>_TypeInfo;
    if (puVar24 != (undefined8 *)0x0) {
      *(int *)(puVar24 + 1) = param_6;
      uVar15 = FUN_01f62b8c(param_1,param_6,param_5,*(undefined8 *)puVar5);
      lVar16 = local_c8;
      *puVar24 = uVar15;
      if (uVar12 == 0) {
        if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20
                                ) + 0x135) & 1) == 0) {
          FUN_01a46ff8();
        }
        uVar13 = *(undefined4 *)(lVar16 + 8);
      }
      else {
        uVar13 = 0;
      }
      lVar16 = local_c8;
      *(undefined4 *)(puVar24 + 7) = uVar13;
      puVar7 = System_Collections_Generic_List<IContextProperty>_TypeInfo;
      puVar5 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20))
        ;
      }
      puVar8 = System_Collections_Generic_List<IConnectionCallbacks>_TypeInfo;
      uVar13 = *(undefined4 *)(lVar16 + 8);
      uVar15 = FUN_01fb48f8(local_c8,*(undefined8 *)puVar7);
      uVar15 = FUN_01f62b8c(param_1,uVar13,uVar15,*(undefined8 *)puVar5);
      lVar16 = local_c8;
      puVar24[6] = uVar15;
      if ((*(byte *)(*(long *)(*(long *)System_Collections_Generic_List<IEnvelope>_TypeInfo + 0x20)
                    + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      bVar3 = 0;
      if (0 < *(int *)(lVar16 + 8)) {
        bVar3 = (byte)uVar4 ^ 1;
      }
      *(byte *)(puVar24 + 0x13) = bVar3;
      puVar7 = System_Collections_Generic_List<IBindingRequest>_TypeInfo;
      uVar15 = FUN_01fb48f8(local_d0,*(undefined8 *)puVar8);
      lVar16 = local_d0;
      lVar17 = *(long *)(*(long *)puVar6 + 0x20);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar17);
      }
      FUN_03194468(param_1,puVar24,param_5,param_6,uVar15,*(undefined4 *)(lVar16 + 8));
      *(uint *)(puVar24 + 9) = param_4;
      lVar16 = FUN_01f62b8c(param_1,param_4,param_3,*(undefined8 *)puVar7);
      puVar24[8] = lVar16;
      puVar6 = System_Collections_Generic_List<IBone>_TypeInfo;
      if ((int)param_4 < 1) {
LAB_03193b74:
        if (*(int *)(*(long *)PTR_DAT_03cd7dc0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar16 = FUN_03175360(param_2,0);
        uVar15 = FUN_03175360(param_2,0);
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_031946a0(&local_b0,uVar15);
        puVar24[0xd] = uStack_a8;
        puVar24[0xc] = local_b0;
        uVar15 = FUN_03175360(param_2,0);
        local_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        local_80 = 0;
        FUN_03195530(&local_90,uVar15);
        puVar24[10] = 0;
        puVar24[0xb] = 0;
        puVar24[0x12] = local_70;
        puVar24[0xf] = uStack_88;
        puVar24[0xe] = local_90;
        puVar24[0x11] = uStack_78;
        puVar24[0x10] = local_80;
        puVar6 = System_Collections_Generic_LinkedList<Action>_TypeInfo;
        puVar5 = PTR_DAT_03cda5e8;
        if (lVar16 != 0) {
          lVar21 = 0;
          lVar17 = 0;
          while( true ) {
            lVar18 = *(long *)puVar6;
            if (DAT_04121ee6 == '\0') {
              FUN_01ab69ac(puVar5);
              DAT_04121ee6 = '\x01';
            }
            local_a0 = *(undefined8 *)(lVar16 + 0x78);
            uStack_a8 = *(undefined8 *)(lVar16 + 0x70);
            local_b0 = *(long *)(lVar16 + 0x68);
            lVar18 = *(long *)(lVar18 + 0x20);
            if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
              lVar18 = FUN_01a46ff8();
            }
            lVar19 = *(long *)(*(long *)(lVar18 + 0xc0) + 8);
            uStack_88 = uStack_a8;
            local_90 = local_b0;
            local_80 = local_a0;
            lVar18 = *(long *)(lVar19 + 0x38);
            if (lVar18 == 0) {
              FUN_01a47054(lVar19);
              lVar18 = *(long *)(lVar19 + 0x38);
            }
            lVar18 = FUN_0200404c(&local_90,*(undefined8 *)(lVar18 + 8));
            if (*(int *)(lVar18 + 8) <= lVar17) break;
            FUN_0319474c(param_1,*(undefined8 *)(lVar21 + *(long *)(lVar16 + 0x68)),puVar24);
            lVar17 = lVar17 + 1;
            lVar21 = lVar21 + 8;
          }
          lVar16 = *(long *)System_Collections_Generic_List<HoistedParameter>_TypeInfo;
          if (DAT_04121ee6 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cda5e8);
            DAT_04121ee6 = '\x01';
          }
          local_a0 = *(undefined8 *)(param_1 + 0x78);
          uStack_a8 = *(undefined8 *)(param_1 + 0x70);
          local_b0 = *(long *)(param_1 + 0x68);
          lVar16 = *(long *)(lVar16 + 0x20);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01a46ff8();
          }
          lVar17 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          uStack_88 = uStack_a8;
          local_90 = local_b0;
          local_80 = local_a0;
          lVar16 = *(long *)(lVar17 + 0x38);
          if (lVar16 == 0) {
            FUN_01a47054(lVar17);
            lVar16 = *(long *)(lVar17 + 0x38);
          }
          lVar16 = FUN_0200404c(&local_90,*(undefined8 *)(lVar16 + 8));
          local_90 = CONCAT44(local_90._4_4_,uVar11);
          local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar16 + 8));
          FUN_020dd354(uVar14,&local_90,&local_b0,
                       *(undefined8 *)
                        System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
          FUN_020de018((long *)(param_1 + 0x68),puVar24,
                       *(undefined8 *)System_Collections_Generic_List<IFusionStatsView>_TypeInfo);
          *(undefined4 *)(puVar24 + 0x12) = 0;
LAB_03193d8c:
          FUN_0318f878(puVar24,param_2);
          return;
        }
      }
      else if (lVar16 != 0) {
        lVar17 = 0;
        lVar21 = 0;
        do {
          puVar1 = (undefined8 *)(param_3 + lVar17);
          if (puVar1 == (undefined8 *)0x0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x28),puVar1[3],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar16 + 0x18) = uVar15;
          puVar2 = (undefined8 *)(lVar17 + puVar24[8]);
          if (puVar2 == (undefined8 *)0x0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(puVar2 + 2),*puVar1,*(undefined8 *)puVar5);
          *puVar2 = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x48),puVar1[7],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar16 + 0x38) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x60),puVar1[10],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar16 + 0x50) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x78),puVar1[0xd],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar16 + 0x68) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x90),puVar1[0x10],
                                *(undefined8 *)puVar5);
          *(undefined8 *)(lVar16 + 0x80) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x28),puVar1[4],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar16 + 0x20) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x10),puVar1[1],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar16 + 8) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x48),puVar1[8],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar16 + 0x40) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x60),puVar1[0xb],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar16 + 0x58) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x78),puVar1[0xe],
                                *(undefined8 *)puVar6);
          *(undefined8 *)(lVar16 + 0x70) = uVar15;
          lVar16 = lVar17 + puVar24[8];
          if (lVar16 == 0) break;
          uVar15 = FUN_01f62b8c(param_1,*(undefined4 *)(lVar16 + 0x90),puVar1[0x11],
                                *(undefined8 *)puVar6);
          lVar17 = lVar17 + 0x98;
          *(undefined8 *)(lVar16 + 0x88) = uVar15;
          if ((ulong)param_4 * 0x98 - lVar17 == 0) goto LAB_03193b74;
          lVar21 = lVar21 + 1;
          lVar16 = puVar24[8] + lVar21 * 0x98;
        } while (puVar24[8] + lVar17 != 0);
      }
    }
  }
LAB_03193b70:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


