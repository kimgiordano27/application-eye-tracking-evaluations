/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_GetSessions
ENTRY_POINT: 055b5af8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x055b6418) */
/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b60dc) */
/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_NetSync_GetSessions(long param_1)

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
  long unaff_x20;
  uint uVar20;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *plVar21;
  undefined8 uVar22;
  long *plVar23;
  long unaff_x28;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  long *in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  long *in_stack_000000b8;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xc00));
  *(undefined1 *)(unaff_x20 + 0x64b) = 1;
  in_stack_000000b0 = (undefined8 *)0x0;
  in_stack_000000b8 = (long *)0x0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = (undefined8 *)0x0;
  in_stack_00000090 = (long *)0x0;
  in_stack_00000098 = 0;
  in_stack_00000080 = (long *)0x0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_055848a4();
  if (unaff_x28 == 0) goto LAB_055b6e84;
  uVar11 = FUN_055aae50();
  plVar14 = (long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
  puVar2 = System_Net_ServicePoint_var;
  if ((uVar11 & 1) == 0) {
    if (*(long *)(unaff_x24 + 0x20) == 0) goto LAB_055b6e84;
    uVar20 = *(uint *)(*(long *)(unaff_x24 + 0x20) + 0x2c) >> 1 & 1;
  }
  else {
    uVar20 = 1;
  }
  plVar21 = *(long **)(unaff_x24 + 0x28);
  if (plVar21 != (long *)0x0) {
    lVar15 = *plVar21;
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
    puVar12 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)System_Net_ServicePoint_var,0);
LAB_055b5bd0:
    iVar8 = (*(code *)*puVar12)(plVar21,puVar12[1]);
    if (2 < iVar8) {
      uVar13 = FUN_055aacb0();
      lVar15 = *plVar14;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar15);
        lVar15 = *plVar14;
      }
      puVar12 = *(undefined8 **)(lVar15 + 0xb8);
      lVar24 = puVar12[1];
      uVar22 = *(undefined8 *)PTR_DAT_069fc558;
      if (lVar24 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar15);
          puVar12 = *(undefined8 **)(*plVar14 + 0xb8);
        }
        uVar25 = *puVar12;
        lVar24 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                   );
        FUN_03b78e40(lVar24,uVar25,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinResponseBody>>_TypeInfo
                     ,0);
        plVar21 = (long *)(*(long *)(*plVar14 + 0xb8) + 8);
        *plVar21 = lVar24;
        LeanTween__value(plVar21,lVar24);
      }
      uVar13 = FUN_0360ccb8(uVar13,lVar24,
                            *(undefined8 *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                           );
      uVar13 = FUN_0536e598(uVar22,uVar13,0);
      if (unaff_x21 == (long *)0x0) goto LAB_055b6e84;
      plVar21 = *(long **)(unaff_x24 + 0x28);
      uVar22 = (**(code **)(*unaff_x21 + 0x1c8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1d0));
      if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
      }
      uVar25 = FUN_0547e2f8(0);
      uVar13 = FUN_05588558(*(undefined8 *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                            ,uVar25,*(undefined8 *)(unaff_x28 + 0x60),uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
      }
      uVar25 = thunk_FUN_02dd3048(unaff_x21,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var
                                 );
      uVar13 = FUN_05570ab4(uVar25,uVar22,uVar13,0);
      if (plVar21 == (long *)0x0) goto LAB_055b6e84;
      lVar15 = *plVar21;
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
      puVar12 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)puVar2,1);
LAB_055b5db0:
      (*(code *)*puVar12)(plVar21,3,uVar13,0,puVar12[1]);
    }
  }
  lVar15 = FUN_055b719c();
  if (uVar20 != 0) {
    if (*(long *)(unaff_x28 + 0xd8) != 0) {
      plVar14 = (long *)FUN_04792ee4(*(long *)(unaff_x28 + 0xd8),
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
      in_stack_00000048 = &stack0x000000b8;
      in_stack_00000040 = 0;
joined_r0x055b5e10:
      do {
        do {
          in_stack_000000b8 = plVar14;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar24 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                puVar12 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_055b5e9c;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069fbff8,0);
LAB_055b5e9c:
          uVar11 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          plVar21 = in_stack_000000b8;
          plVar14 = (long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
          if ((uVar11 & 1) == 0) {
            if (in_stack_000000b8 == (long *)0x0) goto LAB_055b60e0;
            lVar24 = *in_stack_000000b8;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 == 0) goto LAB_055b60a8;
            piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            goto LAB_055b6090;
          }
          lVar24 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
          FUN_0552aca4(lVar24,0);
          plVar14 = in_stack_000000b8;
          if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar16 = *in_stack_000000b8;
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
          puVar12 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)puVar2,0);
LAB_055b5f14:
          lVar16 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar21 = (long *)(lVar24 + 0x10);
          *plVar21 = lVar16;
          LeanTween__value(plVar21);
          if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar14 = in_stack_000000b8;
        } while (*(char *)(*plVar21 + 0x80) != '\0');
        uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_03b7820c(uVar13,lVar24,*(undefined8 *)puVar6,0);
        uVar11 = FUN_035f7d60(lVar15,uVar13,*(undefined8 *)puVar3);
        plVar14 = in_stack_000000b8;
      } while ((uVar11 & 1) == 0);
      if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar13 = *(undefined8 *)(*plVar21 + 0x30);
      lVar24 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                 );
      FUN_0552aca4(lVar24,0);
      *(undefined8 *)(lVar24 + 0x10) = uVar13;
      LeanTween__value((undefined8 *)(lVar24 + 0x10),uVar13);
      *(long *)(lVar24 + 0x18) = *plVar21;
      LeanTween__value();
      in_stack_00000060 = 0;
      FUN_043301b0(&stack0x00000060,0,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                  );
      *(long *)(lVar24 + 0x28) = in_stack_00000060;
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar18 = *(long *)puVar5;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar10 = *(uint *)(lVar15 + 0x18);
          if (uVar10 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar10 + 1;
            plVar14 = (long *)(lVar16 + (long)(int)uVar10 * 8 + 0x20);
            *plVar14 = lVar24;
            LeanTween__value(plVar14,lVar24);
            plVar14 = in_stack_000000b8;
          }
          else {
            FUN_040101ec(lVar15,lVar24,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            plVar14 = in_stack_000000b8;
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
    uVar13 = FUN_055aacb0(unaff_x28);
    lVar24 = *plVar14;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar24 = *plVar14;
    }
    puVar17 = *(undefined8 **)(lVar24 + 0xb8);
    lVar16 = puVar17[2];
    if (lVar16 == 0) {
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar17 = *(undefined8 **)(*plVar14 + 0xb8);
      }
      uVar22 = *puVar17;
      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                 );
      FUN_03b78e40(lVar16,uVar22,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar23 = (long *)(*(long *)(*plVar14 + 0xb8) + 0x10);
      *plVar23 = lVar16;
      LeanTween__value(plVar23,lVar16);
    }
    if (puVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar24 = FUN_0383594c(uVar13,lVar16,*(undefined8 *)(puVar12[3] + 0x60),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
    if (lVar24 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar24 + 0x80) == '\0') {
        if (((uVar20 != 0) && ((ulong)puVar12[5] >> 0x21 == 0)) && ((puVar12[5] & 0xff) != 0)) {
          plVar23 = (long *)(lVar24 + 0x48);
          if (*plVar23 == 0) {
            lVar16 = FUN_055ae608(unaff_x24,*(undefined8 *)(lVar24 + 0x40));
            *plVar23 = lVar16;
            LeanTween__value(plVar23);
          }
          in_stack_00000098 = *(undefined8 *)(lVar24 + 0x90);
          if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar10 = FUN_043301f4(&stack0x00000098,*(undefined4 *)(*(long *)(unaff_x24 + 0x20) + 0x2c)
                                ,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                               );
          if ((uVar10 >> 1 & 1) != 0) {
            uVar13 = FUN_055ab994(lVar24);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar22 = FUN_0547e2f8(0);
            uVar13 = FUN_055b0cf8(uVar22,unaff_x21,uVar13,uVar22,*(undefined8 *)(lVar24 + 0x48),
                                  *(undefined8 *)(lVar24 + 0x40));
            puVar12[6] = uVar13;
            LeanTween__value();
          }
        }
        lVar16 = FUN_055aacb0(unaff_x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = FUN_04792f70(lVar16,lVar24,
                              *(undefined8 *)
                               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                             );
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar24 = puVar12[6];
        if ((lVar24 != 0) &&
           (lVar16 = thunk_FUN_02dd3048(lVar24,*(undefined8 *)(*plVar21 + 0x40)), lVar16 == 0)) {
          uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar13,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar21[(long)(int)uVar10 + 4] = lVar24;
        LeanTween__value(plVar21 + (long)(int)uVar10 + 4,lVar24);
        *(undefined1 *)(puVar12 + 7) = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar16 == 0) || (*(char *)(lVar24 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar14 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0x40);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar18 = *plVar14;
  uVar22 = *(undefined8 *)(lVar24 + 0x40);
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
  plVar14 = (long *)(*(code *)*puVar17)(plVar14,uVar22,puVar17[1]);
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
      plVar14 = *(long **)(lVar24 + 0x68);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar24 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
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
      lVar24 = (*(code *)*puVar17)(plVar14,uVar13,puVar17[1]);
      if (lVar24 != 0) {
        uVar22 = thunk_FUN_02da6564(lVar24,0);
        uVar22 = FUN_055ae66c(unaff_x24,uVar22);
        lVar18 = FUN_02979eb8(uVar22,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar18 + 0xf1) == '\0') {
          plVar14 = (long *)FUN_02979ef0(lVar24,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar14 = (long *)FUN_055a740c(lVar18,lVar24);
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar11 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar14);
        if ((uVar11 & 1) == 0) {
          if (*(char *)(lVar18 + 0xf1) == '\0') {
            auVar26 = FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar26 = FUN_055a740c(lVar18,lVar16);
          }
          uVar22 = auVar26._8_8_;
          if (auVar26._0_8_ != 0) {
            plVar21 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar26._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar21;
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar24 = *plVar21;
              uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar17 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar11 = (*(code *)*puVar17)(plVar21,puVar17[1]);
              plVar21 = in_stack_00000090;
              if ((uVar11 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar24 = *in_stack_00000090;
              uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar22 = (*(code *)*puVar17)(plVar21,puVar17[1]);
              lVar24 = *plVar14;
              uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
              if (uVar11 != 0) {
                piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar11 = uVar11 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar11 != 0);
              }
              puVar17 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar17)(plVar14,uVar22,puVar17[1]);
              plVar21 = in_stack_00000090;
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
      plVar21 = *(long **)(lVar24 + 0x68);
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar24 = *plVar21;
      uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar17 = (undefined8 *)
                FUN_02dd004c(plVar21,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar24 = (*(code *)*puVar17)(plVar21,uVar13,puVar17[1]);
      if (lVar24 != 0) {
        if ((char)plVar14[0x20] == '\0') {
          plVar21 = (long *)FUN_02979ef0(lVar24,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar21 = (long *)FUN_055a9a84(plVar14,lVar24);
        }
        if ((char)plVar14[0x20] == '\0') {
          auVar26 = FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar26 = FUN_055a9a84(plVar14,lVar16);
        }
        uVar22 = auVar26._8_8_;
        if (auVar26._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar14 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar24 = *in_stack_00000080;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar17 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar11 = (*(code *)*puVar17)(plVar14,puVar17[1]);
            plVar14 = in_stack_00000080;
            if ((uVar11 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar24 = *in_stack_00000080;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar26 = (*(code *)*puVar17)(plVar14,puVar17[1]);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar24 = *plVar21;
            uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar11 != 0) {
              piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar17 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar11 = uVar11 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar11 != 0);
            }
            puVar17 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar17)(plVar21,auVar26._0_8_,auVar26._8_8_,puVar17[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar22,0);
      }
    }
  }
LAB_055b65e0:
  *(undefined1 *)(puVar12 + 7) = 1;
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar19 = piVar19 + 4;
    if (uVar11 == 0) break;
LAB_055b6090:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar12 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_055b60c4;
    }
  }
LAB_055b60a8:
  puVar12 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)PTR_DAT_069fbff0,0);
LAB_055b60c4:
  (*(code *)*puVar12)(plVar21,puVar12[1]);
LAB_055b60e0:
  lVar24 = FUN_055aacb0(unaff_x28);
  puVar2 = PTR_DAT_069fc180;
  if (lVar24 != 0) {
    uVar9 = FUN_047928e8(lVar24,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    plVar21 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar9);
    puVar2 = 
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Dictionary<string,_TokenData>>>_TypeInfo
    ;
    if (lVar15 != 0) {
      FUN_04010c90(&stack0x00000040,lVar15,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                  );
      in_stack_000000a0 = in_stack_00000040;
      in_stack_00000040 = 0;
      in_stack_000000a8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000050;
      in_stack_00000048 = &stack0x000000a0;
LAB_055b6160:
      uVar11 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
      puVar12 = in_stack_000000b0;
      lVar24 = in_stack_00000040;
      if ((uVar11 & 1) != 0) {
        if (uVar20 == 0) {
          if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        else {
          if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar24 = in_stack_000000b0[3];
          if ((lVar24 != 0) && (*(char *)(in_stack_000000b0 + 5) == '\0')) {
            if ((long *)in_stack_000000b0[6] == (long *)0x0) {
              uVar9 = 1;
            }
            else if (*(long *)in_stack_000000b0[6] == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar11 = FUN_055b129c(*(undefined8 *)(lVar24 + 0x40),*(undefined8 *)(lVar24 + 0x48));
              uVar9 = 1;
              if ((uVar11 & 1) == 0) {
                uVar9 = 2;
              }
            }
            else {
              uVar9 = 2;
            }
            in_stack_00000060 = 0;
            FUN_043301b0(&stack0x00000060,uVar9,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                        );
            puVar12[5] = in_stack_00000060;
          }
        }
        lVar24 = puVar12[4];
        if (lVar24 == 0) goto LAB_055b6330;
        goto LAB_055b61fc;
      }
      FUN_05156800(in_stack_00000048,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar24);
      }
      if (unaff_x25 != 0) {
        uVar13 = (**(code **)(unaff_x25 + 0x18))
                           (*(undefined8 *)(unaff_x25 + 0x40),plVar21,
                            *(undefined8 *)(unaff_x25 + 0x28));
        if (unaff_x23 != 0) {
          FUN_055b4f70(unaff_x24,unaff_x21,unaff_x23,uVar13);
        }
        FUN_055b5334(unaff_x24,unaff_x21,unaff_x28,uVar13);
        FUN_04010c90(&stack0x00000040,lVar15,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                    );
        in_stack_00000068 = &stack0x000000a0;
        in_stack_00000060 = 0;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000050;
LAB_055b64a4:
        do {
          uVar11 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
          puVar12 = in_stack_000000b0;
          lVar24 = in_stack_00000060;
          if ((uVar11 & 1) == 0) {
            FUN_05156800(in_stack_00000068,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar24 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar24);
            }
            if (*(long *)(unaff_x28 + 0xe0) != 0) {
              FUN_04010c90(&stack0x00000040,lVar15,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar11 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    (uVar11 & 1) != 0) {
                if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((*(char *)(in_stack_000000b0 + 7) == '\0') &&
                   (((ulong)in_stack_000000b0[5] >> 0x20 != 0 ||
                    ((in_stack_000000b0[5] & 0xff) == 0)))) {
                  lVar24 = *(long *)(unaff_x28 + 0xe0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  (**(code **)(lVar24 + 0x18))
                            (*(undefined8 *)(lVar24 + 0x40),uVar13,in_stack_000000b0[2],
                             in_stack_000000b0[6],*(undefined8 *)(lVar24 + 0x28));
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            if (uVar20 != 0) {
              FUN_04010c90(&stack0x00000040,lVar15,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar11 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    puVar12 = in_stack_000000b0, (uVar11 & 1) != 0) {
                if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (in_stack_000000b0[3] != 0) {
                  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar9 = (**(code **)(*unaff_x21 + 0x1b8))
                                    (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1c0));
                  FUN_055b7880(unaff_x24,uVar13,unaff_x21,unaff_x28,uVar9,puVar12[3],
                               *(undefined4 *)((long)puVar12 + 0x2c),*(char *)(puVar12 + 7) == '\0')
                  ;
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            FUN_055b5560(unaff_x24,unaff_x21,unaff_x28,uVar13);
            return uVar13;
          }
          if (in_stack_000000b0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        } while ((((*(char *)(in_stack_000000b0 + 7) != '\0') ||
                  (lVar24 = in_stack_000000b0[3], lVar24 == 0)) ||
                 (*(char *)(lVar24 + 0x80) != '\0')) ||
                (((ulong)in_stack_000000b0[5] >> 0x20 == 0 && ((in_stack_000000b0[5] & 0xff) != 0)))
                );
        lVar16 = in_stack_000000b0[6];
        uVar11 = FUN_055b4e68(unaff_x24,lVar24,unaff_x28,lVar16);
        if ((uVar11 & 1) == 0) goto LAB_055b6554;
        plVar14 = *(long **)(lVar24 + 0x68);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar24 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar17 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
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
        (*(code *)*puVar17)(plVar14,uVar13,lVar16,puVar17[1]);
        goto LAB_055b65e0;
      }
    }
  }
LAB_055b6e84:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


