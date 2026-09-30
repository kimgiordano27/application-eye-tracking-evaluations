/*
FUNCTION_NAME: FUN_055b58c0
ENTRY_POINT: 055b58c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_12;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055b6418) */
/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b60dc) */
/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8
FUN_055b58c0(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5,long param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long *local_e0;
  long **pplStack_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  long local_c0;
  long **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  long **pplStack_78;
  undefined8 *local_70;
  long *local_68;
  
  puVar2 = PTR_DAT_06a10c00;
  if ((DAT_06dbb64b & 1) == 0) {
    FUN_02d965b8(System_Action<string>_TypeInfo);
                    /* try { // try from 055b591c to 056b592b has its CatchHandler @ 055b592c */
    FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                );
    FUN_02d965b8(System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
                    /* catch() { ... } // from try @ 055b585c with catch @ 055b592c
                       catch() { ... } // from try @ 055b591c with catch @ 055b592c */
                    /* try { // try from 055b5930 to 056b5933 has its CatchHandler @ 055b5950 */
                    /* try { // try from 055b5934 to 056b5953 has its CatchHandler @ 055b576c */
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_TypeInfo
                );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 055b5930 with catch @ 055b5950
                        */
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                );
    FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo)
    ;
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Dictionary<string,_TokenData>>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<string>>>_TypeInfo
                );
    FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_TypeInfo);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                );
    FUN_02d965b8(System_Action<ZipArchiveEntry>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a11758);
    FUN_02d965b8(PTR_DAT_069ff850);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069ff8a8);
    FUN_02d965b8(System_Action<StringBuilder>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(PTR_DAT_069ff858);
    FUN_02d965b8(System_Net_ServicePoint_var);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                );
    FUN_02d965b8(System_Xml_XmlTextReaderImpl_ParsingState_var);
    FUN_02d965b8(System_Xml_Schema_XmlAtomicValue_Union_var);
    FUN_02d965b8(PTR_DAT_06a119e8);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CreateBackfillTicketResponse>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                );
    FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<StoredMatchmakingResults>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinResponseBody>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                );
    FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<string>>_TypeInfo);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<Lobby,_bool>>_TypeInfo
                );
    FUN_02d965b8(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fc558);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_06a10c00);
    DAT_06dbb64b = 1;
  }
  local_70 = (undefined8 *)0x0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_90 = (long *)0x0;
  local_88 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_055848a4(param_5,*(undefined8 *)puVar2,0);
  if (param_3 == 0) goto LAB_055b6e84;
  uVar11 = FUN_055aae50(param_3);
  plVar14 = (long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
  puVar2 = System_Net_ServicePoint_var;
  if ((uVar11 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_055b6e84;
    uVar20 = *(uint *)(*(long *)(param_1 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar20 = 1;
  }
  plVar22 = *(long **)(param_1 + 0x28);
  uVar21 = *(undefined8 *)(param_3 + 0x60);
  if (plVar22 != (long *)0x0) {
    lVar15 = *plVar22;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)System_Net_ServicePoint_var) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_055b5bd0;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_02dd004c(plVar22,*(long *)System_Net_ServicePoint_var,0);
LAB_055b5bd0:
    iVar8 = (*(code *)*puVar12)(plVar22,puVar12[1]);
    if (2 < iVar8) {
      uVar13 = FUN_055aacb0(param_3);
      lVar15 = *plVar14;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar15);
        lVar15 = *plVar14;
      }
      puVar12 = *(undefined8 **)(lVar15 + 0xb8);
      lVar25 = puVar12[1];
      uVar23 = *(undefined8 *)PTR_DAT_069fc558;
      if (lVar25 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar15);
          puVar12 = *(undefined8 **)(*plVar14 + 0xb8);
        }
        uVar26 = *puVar12;
        lVar25 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                   );
        FUN_03b78e40(lVar25,uVar26,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinResponseBody>>_TypeInfo
                     ,0);
        plVar22 = (long *)(*(long *)(*plVar14 + 0xb8) + 8);
        *plVar22 = lVar25;
        LeanTween__value(plVar22,lVar25);
      }
      uVar13 = FUN_0360ccb8(uVar13,lVar25,
                            *(undefined8 *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                           );
      uVar13 = FUN_0536e598(uVar23,uVar13,0);
      if (param_2 == (long *)0x0) goto LAB_055b6e84;
      plVar22 = *(long **)(param_1 + 0x28);
      uVar23 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
      }
      uVar26 = FUN_0547e2f8(0);
      uVar13 = FUN_05588558(*(undefined8 *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                            ,uVar26,*(undefined8 *)(param_3 + 0x60),uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
      }
      uVar26 = thunk_FUN_02dd3048(param_2,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
      uVar13 = FUN_05570ab4(uVar26,uVar23,uVar13,0);
      if (plVar22 == (long *)0x0) goto LAB_055b6e84;
      lVar15 = *plVar22;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_055b5db0;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02dd004c(plVar22,*(long *)puVar2,1);
LAB_055b5db0:
      (*(code *)*puVar12)(plVar22,3,uVar13,0,puVar12[1]);
    }
  }
  lVar15 = FUN_055b719c(param_1,param_3,param_4,param_2,uVar21);
  if (uVar20 != 0) {
    if (*(long *)(param_3 + 0xd8) != 0) {
      plVar14 = (long *)FUN_04792ee4(*(long *)(param_3 + 0xd8),
                                     *(undefined8 *)System_Action<string>_TypeInfo);
      puVar7 = 
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<Lobby,_bool>>_TypeInfo;
      puVar6 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<string>>_TypeInfo;
      puVar5 = 
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CreateBackfillTicketResponse>>_TypeInfo
      ;
      puVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Lobby>>_TypeInfo;
      puVar3 = 
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemBatchResponse>>_TypeInfo
      ;
      puVar2 = System_Action<StringBuilder>_TypeInfo;
      pplStack_d8 = &local_68;
      local_e0 = (long *)0x0;
joined_r0x055b5e10:
      do {
        do {
          local_68 = plVar14;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar25 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                puVar12 = (undefined8 *)(lVar25 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_055b5e9c;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069fbff8,0);
LAB_055b5e9c:
          uVar11 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          plVar22 = local_68;
          plVar14 = (long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
          if ((uVar11 & 1) == 0) {
            if (local_68 == (long *)0x0) goto LAB_055b60e0;
            lVar25 = *local_68;
            uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar11 == 0) goto LAB_055b60a8;
            piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            goto LAB_055b6090;
          }
          lVar25 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
          FUN_0552aca4(lVar25,0);
          plVar14 = local_68;
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar16 = *local_68;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_055b5f14;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar2,0);
LAB_055b5f14:
          lVar16 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar22 = (long *)(lVar25 + 0x10);
          *plVar22 = lVar16;
          LeanTween__value(plVar22);
          if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar14 = local_68;
        } while (*(char *)(*plVar22 + 0x80) != '\0');
        uVar21 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_03b7820c(uVar21,lVar25,*(undefined8 *)puVar6,0);
        uVar11 = FUN_035f7d60(lVar15,uVar21,*(undefined8 *)puVar3);
        plVar14 = local_68;
      } while ((uVar11 & 1) == 0);
      if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar21 = *(undefined8 *)(*plVar22 + 0x30);
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                 );
      FUN_0552aca4(lVar25,0);
      *(undefined8 *)(lVar25 + 0x10) = uVar21;
      LeanTween__value((undefined8 *)(lVar25 + 0x10),uVar21);
      *(long *)(lVar25 + 0x18) = *plVar22;
      LeanTween__value();
      local_c0 = 0;
      FUN_043301b0(&local_c0,0,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                  );
      *(long *)(lVar25 + 0x28) = local_c0;
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar18 = *(long *)puVar5;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar10 = *(uint *)(lVar15 + 0x18);
          if (uVar10 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar10 + 1;
            plVar14 = (long *)(lVar16 + (long)(int)uVar10 * 8 + 0x20);
            *plVar14 = lVar25;
            LeanTween__value(plVar14,lVar25);
            plVar14 = local_68;
          }
          else {
            FUN_040101ec(lVar15,lVar25,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            plVar14 = local_68;
          }
          goto joined_r0x055b5e10;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    goto LAB_055b6e84;
  }
  goto LAB_055b60e0;
LAB_055b6330:
  if (puVar12[3] != 0) {
    uVar21 = FUN_055aacb0(param_3);
    lVar25 = *plVar14;
    if (*(int *)(lVar25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar25 = *plVar14;
    }
    puVar17 = *(undefined8 **)(lVar25 + 0xb8);
    lVar16 = puVar17[2];
    if (lVar16 == 0) {
      if (*(int *)(lVar25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar17 = *(undefined8 **)(*plVar14 + 0xb8);
      }
      uVar13 = *puVar17;
      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                 );
      FUN_03b78e40(lVar16,uVar13,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar24 = (long *)(*(long *)(*plVar14 + 0xb8) + 0x10);
      *plVar24 = lVar16;
      LeanTween__value(plVar24,lVar16);
    }
    if (puVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar25 = FUN_0383594c(uVar21,lVar16,*(undefined8 *)(puVar12[3] + 0x60),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
    if (lVar25 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar25 + 0x80) == '\0') {
        if (((uVar20 != 0) && ((ulong)puVar12[5] >> 0x21 == 0)) && ((puVar12[5] & 0xff) != 0)) {
          plVar24 = (long *)(lVar25 + 0x48);
          if (*plVar24 == 0) {
            lVar16 = FUN_055ae608(param_1,*(undefined8 *)(lVar25 + 0x40));
            *plVar24 = lVar16;
            LeanTween__value(plVar24);
          }
          local_88 = *(undefined8 *)(lVar25 + 0x90);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar10 = FUN_043301f4(&local_88,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                                *(undefined8 *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                               );
          if ((uVar10 >> 1 & 1) != 0) {
            uVar21 = FUN_055ab994(lVar25);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar13 = FUN_0547e2f8(0);
            uVar21 = FUN_055b0cf8(uVar13,param_2,uVar21,uVar13,*(undefined8 *)(lVar25 + 0x48),
                                  *(undefined8 *)(lVar25 + 0x40));
            puVar12[6] = uVar21;
            LeanTween__value();
          }
        }
        lVar16 = FUN_055aacb0(param_3);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = FUN_04792f70(lVar16,lVar25,
                              *(undefined8 *)
                               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                             );
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar25 = puVar12[6];
        if ((lVar25 != 0) &&
           (lVar16 = thunk_FUN_02dd3048(lVar25,*(undefined8 *)(*plVar22 + 0x40)), lVar16 == 0)) {
          uVar21 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar21,0);
        }
        if (*(uint *)(plVar22 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar22[(long)(int)uVar10 + 4] = lVar25;
        LeanTween__value(plVar22 + (long)(int)uVar10 + 4,lVar25);
        *(undefined1 *)(puVar12 + 7) = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar16 == 0) || (*(char *)(lVar25 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar18 = *plVar14;
  uVar13 = *(undefined8 *)(lVar25 + 0x40);
  uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar11 != 0) {
    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar17 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar11 = uVar11 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar11 != 0);
  }
  puVar17 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar14 = (long *)(*(code *)*puVar17)(plVar14,uVar13,puVar17[1]);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar14 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar14);
    }
    if ((*(char *)((long)plVar14 + 0xf2) != '\0') && ((char)plVar14[5] == '\0')) {
      plVar14 = *(long **)(lVar25 + 0x68);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar25 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar17 = (undefined8 *)(lVar25 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_02dd004c(plVar14,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b66c4:
      lVar25 = (*(code *)*puVar17)(plVar14,uVar21,puVar17[1]);
      if (lVar25 != 0) {
        uVar13 = thunk_FUN_02da6564(lVar25,0);
        uVar13 = FUN_055ae66c(param_1,uVar13);
        lVar18 = FUN_02979eb8(uVar13,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar18 + 0xf1) == '\0') {
          plVar14 = (long *)FUN_02979ef0(lVar25,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar14 = (long *)FUN_055a740c(lVar18,lVar25);
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar11 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar14);
        if ((uVar11 & 1) == 0) {
          if (*(char *)(lVar18 + 0xf1) == '\0') {
            auVar27 = FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar27 = FUN_055a740c(lVar18,lVar16);
          }
          uVar13 = auVar27._8_8_;
          if (auVar27._0_8_ != 0) {
            plVar22 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar27._0_8_);
            pplStack_d8 = &local_90;
            local_e0 = (long *)0x0;
            local_d0 = &uStack_98;
            do {
              local_90 = plVar22;
              if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar25 = *plVar22;
              uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar17 = (undefined8 *)(lVar25 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_02dd004c(plVar22,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar11 = (*(code *)*puVar17)(plVar22,puVar17[1]);
              plVar22 = local_90;
              if ((uVar11 & 1) == 0) goto LAB_055b690c;
              if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar25 = *local_90;
              uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar17 = (undefined8 *)(lVar25 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_02dd004c(local_90,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar13 = (*(code *)*puVar17)(plVar22,puVar17[1]);
              lVar25 = *plVar14;
              uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar17 = (undefined8 *)(lVar25 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar17)(plVar14,uVar13,puVar17[1]);
              plVar22 = local_90;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
  }
  else if (*(int *)((long)plVar14 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar14);
    }
    if ((char)plVar14[5] == '\0') {
      plVar22 = *(long **)(lVar25 + 0x68);
      if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar25 = *plVar22;
      uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar17 = (undefined8 *)(lVar25 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_02dd004c(plVar22,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar25 = (*(code *)*puVar17)(plVar22,uVar21,puVar17[1]);
      if (lVar25 != 0) {
        if ((char)plVar14[0x20] == '\0') {
          plVar22 = (long *)FUN_02979ef0(lVar25,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar22 = (long *)FUN_055a9a84(plVar14,lVar25);
        }
        if ((char)plVar14[0x20] == '\0') {
          auVar27 = FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar27 = FUN_055a9a84(plVar14,lVar16);
        }
        uVar13 = auVar27._8_8_;
        if (auVar27._0_8_ != 0) {
          local_a0 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          pplStack_d8 = &local_a0;
          local_e0 = (long *)0x0;
          local_d0 = &uStack_a8;
          local_c8 = &local_b0;
          do {
            plVar14 = local_a0;
            if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar25 = *local_a0;
            uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar17 = (undefined8 *)(lVar25 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_02dd004c(local_a0,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar11 = (*(code *)*puVar17)(plVar14,puVar17[1]);
            plVar14 = local_a0;
            if ((uVar11 & 1) == 0) goto LAB_055b6bd0;
            if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar25 = *local_a0;
            uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar17 = (undefined8 *)(lVar25 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_02dd004c(local_a0,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar27 = (*(code *)*puVar17)(plVar14,puVar17[1]);
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar25 = *plVar22;
            uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar17 = (undefined8 *)(lVar25 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_02dd004c(plVar22,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar17)(plVar22,auVar27._0_8_,auVar27._8_8_,puVar17[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar13,0);
      }
    }
  }
LAB_055b65e0:
  *(undefined1 *)(puVar12 + 7) = 1;
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&local_e0);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&local_e0);
  goto LAB_055b65e0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar19 = piVar19 + 4;
    if (uVar11 == 0) break;
LAB_055b6090:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar12 = (undefined8 *)(lVar25 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_055b60c4;
    }
  }
LAB_055b60a8:
  puVar12 = (undefined8 *)FUN_02dd004c(local_68,*(long *)PTR_DAT_069fbff0,0);
LAB_055b60c4:
  (*(code *)*puVar12)(plVar22,puVar12[1]);
LAB_055b60e0:
  lVar25 = FUN_055aacb0(param_3);
  puVar2 = PTR_DAT_069fc180;
  if (lVar25 != 0) {
    uVar9 = FUN_047928e8(lVar25,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    plVar22 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar9);
    puVar2 = 
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Dictionary<string,_TokenData>>>_TypeInfo
    ;
    if (lVar15 != 0) {
      FUN_04010c90(&local_e0,lVar15,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                  );
      local_80 = local_e0;
      local_e0 = (long *)0x0;
      pplStack_78 = pplStack_d8;
      local_70 = local_d0;
      pplStack_d8 = &local_80;
LAB_055b6160:
      uVar11 = FUN_05156804(&local_80,*(undefined8 *)puVar2);
      puVar12 = local_70;
      plVar24 = local_e0;
      if ((uVar11 & 1) != 0) {
        if (uVar20 == 0) {
          if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        else {
          if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar25 = local_70[3];
          if ((lVar25 != 0) && (*(char *)(local_70 + 5) == '\0')) {
            if ((long *)local_70[6] == (long *)0x0) {
              uVar9 = 1;
            }
            else if (*(long *)local_70[6] == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar11 = FUN_055b129c(*(undefined8 *)(lVar25 + 0x40),*(undefined8 *)(lVar25 + 0x48));
              uVar9 = 1;
              if ((uVar11 & 1) == 0) {
                uVar9 = 2;
              }
            }
            else {
              uVar9 = 2;
            }
            local_c0 = 0;
            FUN_043301b0(&local_c0,uVar9,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                        );
            puVar12[5] = local_c0;
          }
        }
        lVar25 = puVar12[4];
        if (lVar25 == 0) goto LAB_055b6330;
        goto LAB_055b61fc;
      }
      FUN_05156800(pplStack_d8,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (plVar24 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(plVar24);
      }
      if (param_5 != 0) {
        uVar21 = (**(code **)(param_5 + 0x18))
                           (*(undefined8 *)(param_5 + 0x40),plVar22,*(undefined8 *)(param_5 + 0x28))
        ;
        if (param_6 != 0) {
          FUN_055b4f70(param_1,param_2,param_6,uVar21);
        }
        FUN_055b5334(param_1,param_2,param_3,uVar21);
        FUN_04010c90(&local_e0,lVar15,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                    );
        local_b8 = &local_80;
        local_c0 = 0;
        pplStack_78 = pplStack_d8;
        local_80 = local_e0;
        local_70 = local_d0;
LAB_055b64a4:
        do {
          uVar11 = FUN_05156804(&local_80,*(undefined8 *)puVar2);
          puVar12 = local_70;
          lVar25 = local_c0;
          if ((uVar11 & 1) == 0) {
            FUN_05156800(local_b8,*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar25 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar25);
            }
            if (*(long *)(param_3 + 0xe0) != 0) {
              FUN_04010c90(&local_e0,lVar15,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              local_70 = local_d0;
              pplStack_78 = pplStack_d8;
              local_80 = local_e0;
              local_e0 = (long *)0x0;
              pplStack_d8 = &local_80;
              while (uVar11 = FUN_05156804(&local_80,*(undefined8 *)puVar2), (uVar11 & 1) != 0) {
                if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((*(char *)(local_70 + 7) == '\0') &&
                   (((ulong)local_70[5] >> 0x20 != 0 || ((local_70[5] & 0xff) == 0)))) {
                  lVar25 = *(long *)(param_3 + 0xe0);
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  (**(code **)(lVar25 + 0x18))
                            (*(undefined8 *)(lVar25 + 0x40),uVar21,local_70[2],local_70[6],
                             *(undefined8 *)(lVar25 + 0x28));
                }
              }
              FUN_05156800(&local_80,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            if (uVar20 != 0) {
              FUN_04010c90(&local_e0,lVar15,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              local_70 = local_d0;
              pplStack_78 = pplStack_d8;
              local_80 = local_e0;
              local_e0 = (long *)0x0;
              pplStack_d8 = &local_80;
              while (uVar11 = FUN_05156804(&local_80,*(undefined8 *)puVar2), puVar12 = local_70,
                    (uVar11 & 1) != 0) {
                if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (local_70[3] != 0) {
                  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0))
                  ;
                  FUN_055b7880(param_1,uVar21,param_2,param_3,uVar9,puVar12[3],
                               *(undefined4 *)((long)puVar12 + 0x2c),*(char *)(puVar12 + 7) == '\0')
                  ;
                }
              }
              FUN_05156800(&local_80,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            FUN_055b5560(param_1,param_2,param_3,uVar21);
            return uVar21;
          }
          if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        } while ((((*(char *)(local_70 + 7) != '\0') || (lVar25 = local_70[3], lVar25 == 0)) ||
                 (*(char *)(lVar25 + 0x80) != '\0')) ||
                (((ulong)local_70[5] >> 0x20 == 0 && ((local_70[5] & 0xff) != 0))));
        lVar16 = local_70[6];
        uVar11 = FUN_055b4e68(param_1,lVar25,param_3,lVar16);
        if ((uVar11 & 1) == 0) goto LAB_055b6554;
        plVar14 = *(long **)(lVar25 + 0x68);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar25 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar17 = (undefined8 *)(lVar25 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_055b65cc;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar17 = (undefined8 *)
                  FUN_02dd004c(plVar14,*(long *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                               ,0);
LAB_055b65cc:
        (*(code *)*puVar17)(plVar14,uVar21,lVar16,puVar17[1]);
        goto LAB_055b65e0;
      }
    }
  }
LAB_055b6e84:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


