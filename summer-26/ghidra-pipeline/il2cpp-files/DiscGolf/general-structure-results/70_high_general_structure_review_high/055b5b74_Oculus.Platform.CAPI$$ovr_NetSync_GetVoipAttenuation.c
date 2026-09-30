/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_GetVoipAttenuation
ENTRY_POINT: 055b5b74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x055b6418) */
/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b60dc) */
/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_NetSync_GetVoipAttenuation(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x24;
  long *unaff_x26;
  long *plVar20;
  undefined8 uVar21;
  long unaff_x28;
  long lVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000028;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined1 *in_stack_00000050;
  undefined1 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 *in_stack_00000068;
  long *in_stack_00000080;
  long *in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined1 *in_stack_000000b0;
  long *in_stack_000000b8;
  
  puVar2 = System_Net_ServicePoint_var;
  if (unaff_x26 != (long *)0x0) {
    lVar15 = *unaff_x26;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)System_Net_ServicePoint_var) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_055b5bd0;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_02dd004c();
LAB_055b5bd0:
    iVar9 = (*(code *)*puVar12)();
    if (2 < iVar9) {
      uVar13 = FUN_055aacb0();
      lVar15 = *unaff_x20;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar15);
        lVar15 = *unaff_x20;
      }
      puVar12 = *(undefined8 **)(lVar15 + 0xb8);
      lVar22 = puVar12[1];
      uVar21 = *(undefined8 *)PTR_DAT_069fc558;
      if (lVar22 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar15);
          puVar12 = *(undefined8 **)(*unaff_x20 + 0xb8);
        }
        uVar23 = *puVar12;
        lVar22 = thunk_FUN_02dd3144(*(undefined8 *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                   );
        FUN_03b78e40(lVar22,uVar23,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinResponseBody>>_TypeInfo
                     ,0);
        plVar14 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
        *plVar14 = lVar22;
        LeanTween__value(plVar14,lVar22);
      }
      uVar13 = FUN_0360ccb8(uVar13,lVar22,
                            *(undefined8 *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                           );
      uVar13 = FUN_0536e598(uVar21,uVar13,0);
      if (in_stack_00000028 == (long *)0x0) goto LAB_055b6e84;
      plVar14 = *(long **)(unaff_x24 + 0x28);
      uVar21 = (**(code **)(*in_stack_00000028 + 0x1c8))
                         (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1d0));
      if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
      }
      uVar23 = FUN_0547e2f8(0);
      uVar13 = FUN_05588558(*(undefined8 *)
                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                            ,uVar23,*(undefined8 *)(unaff_x28 + 0x60),uVar13,0);
      if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
      }
      uVar23 = thunk_FUN_02dd3048(in_stack_00000028,
                                  *(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
      uVar13 = FUN_05570ab4(uVar23,uVar21,uVar13,0);
      if (plVar14 == (long *)0x0) goto LAB_055b6e84;
      lVar15 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_055b5db0;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)puVar2,1);
LAB_055b5db0:
      (*(code *)*puVar12)(plVar14,3,uVar13,0,puVar12[1]);
    }
  }
  lVar15 = FUN_055b719c();
  if (unaff_w21 != 0) {
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
          lVar22 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                puVar12 = (undefined8 *)(lVar22 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_055b5e9c;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069fbff8,0);
LAB_055b5e9c:
          uVar17 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          plVar14 = in_stack_000000b8;
          unaff_x20 = (long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
          if ((uVar17 & 1) == 0) {
            if (in_stack_000000b8 == (long *)0x0) goto LAB_055b60e0;
            lVar22 = *in_stack_000000b8;
            uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar17 == 0) goto LAB_055b60a8;
            piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            goto LAB_055b6090;
          }
          lVar22 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
          FUN_0552aca4(lVar22,0);
          plVar14 = in_stack_000000b8;
          if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar16 = *in_stack_000000b8;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_055b5f14;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)puVar2,0);
LAB_055b5f14:
          lVar16 = (*(code *)*puVar12)(plVar14,puVar12[1]);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar20 = (long *)(lVar22 + 0x10);
          *plVar20 = lVar16;
          LeanTween__value(plVar20);
          if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar14 = in_stack_000000b8;
        } while (*(char *)(*plVar20 + 0x80) != '\0');
        uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_03b7820c(uVar13,lVar22,*(undefined8 *)puVar6,0);
        uVar17 = FUN_035f7d60(lVar15,uVar13,*(undefined8 *)puVar3);
        plVar14 = in_stack_000000b8;
      } while ((uVar17 & 1) == 0);
      if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar13 = *(undefined8 *)(*plVar20 + 0x30);
      lVar22 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                 );
      FUN_0552aca4(lVar22,0);
      *(undefined8 *)(lVar22 + 0x10) = uVar13;
      LeanTween__value((undefined8 *)(lVar22 + 0x10),uVar13);
      *(long *)(lVar22 + 0x18) = *plVar20;
      LeanTween__value();
      in_stack_00000060 = 0;
      FUN_043301b0(&stack0x00000060,0,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                  );
      *(long *)(lVar22 + 0x28) = in_stack_00000060;
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar18 = *(long *)puVar5;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar11 = *(uint *)(lVar15 + 0x18);
          if (uVar11 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar11 + 1;
            plVar14 = (long *)(lVar16 + (long)(int)uVar11 * 8 + 0x20);
            *plVar14 = lVar22;
            LeanTween__value(plVar14,lVar22);
            plVar14 = in_stack_000000b8;
          }
          else {
            FUN_040101ec(lVar15,lVar22,
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
  if (*(long *)(puVar8 + 0x18) != 0) {
    uVar13 = FUN_055aacb0(unaff_x28);
    lVar22 = *unaff_x20;
    if (*(int *)(lVar22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar22 = *unaff_x20;
    }
    puVar12 = *(undefined8 **)(lVar22 + 0xb8);
    lVar16 = puVar12[2];
    if (lVar16 == 0) {
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar12 = *(undefined8 **)(*unaff_x20 + 0xb8);
      }
      uVar21 = *puVar12;
      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                 );
      FUN_03b78e40(lVar16,uVar21,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar20 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      *plVar20 = lVar16;
      LeanTween__value(plVar20,lVar16);
    }
    if (*(long *)(puVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar22 = FUN_0383594c(uVar13,lVar16,*(undefined8 *)(*(long *)(puVar8 + 0x18) + 0x60),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
    if (lVar22 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar22 + 0x80) == '\0') {
        if (((unaff_w21 != 0) && (*(ulong *)(puVar8 + 0x28) >> 0x21 == 0)) &&
           ((*(ulong *)(puVar8 + 0x28) & 0xff) != 0)) {
          plVar20 = (long *)(lVar22 + 0x48);
          if (*plVar20 == 0) {
            lVar16 = FUN_055ae608(unaff_x24,*(undefined8 *)(lVar22 + 0x40));
            *plVar20 = lVar16;
            LeanTween__value(plVar20);
          }
          in_stack_00000098 = *(undefined8 *)(lVar22 + 0x90);
          if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar11 = FUN_043301f4(&stack0x00000098,*(undefined4 *)(*(long *)(unaff_x24 + 0x20) + 0x2c)
                                ,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                               );
          if ((uVar11 >> 1 & 1) != 0) {
            uVar13 = FUN_055ab994(lVar22);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar21 = FUN_0547e2f8(0);
            uVar13 = FUN_055b0cf8(uVar21,in_stack_00000028,uVar13,uVar21,
                                  *(undefined8 *)(lVar22 + 0x48),*(undefined8 *)(lVar22 + 0x40));
            *(undefined8 *)(puVar8 + 0x30) = uVar13;
            LeanTween__value();
          }
        }
        lVar16 = FUN_055aacb0(unaff_x28);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar11 = FUN_04792f70(lVar16,lVar22,
                              *(undefined8 *)
                               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                             );
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar22 = *(long *)(puVar8 + 0x30);
        if ((lVar22 != 0) &&
           (lVar16 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar14 + 0x40)), lVar16 == 0)) {
          uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar13,0);
        }
        if (*(uint *)(plVar14 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar14[(long)(int)uVar11 + 4] = lVar22;
        LeanTween__value(plVar14 + (long)(int)uVar11 + 4,lVar22);
        puVar8[0x38] = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar16 == 0) || (*(char *)(lVar22 + 0x82) != '\0')) goto LAB_055b64a4;
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
  uVar21 = *(undefined8 *)(lVar22 + 0x40);
  uVar17 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar12 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar12 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar14 = (long *)(*(code *)*puVar12)(plVar14,uVar21,puVar12[1]);
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
      plVar14 = *(long **)(lVar22 + 0x68);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar22 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar12 = (undefined8 *)(lVar22 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02dd004c(plVar14,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b66c4:
      lVar22 = (*(code *)*puVar12)(plVar14,uVar13,puVar12[1]);
      if (lVar22 != 0) {
        uVar21 = thunk_FUN_02da6564(lVar22,0);
        uVar21 = FUN_055ae66c(unaff_x24,uVar21);
        lVar18 = FUN_02979eb8(uVar21,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar18 + 0xf1) == '\0') {
          plVar14 = (long *)FUN_02979ef0(lVar22,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar14 = (long *)FUN_055a740c(lVar18,lVar22);
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar17 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar14);
        if ((uVar17 & 1) == 0) {
          if (*(char *)(lVar18 + 0xf1) == '\0') {
            auVar24 = FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar24 = FUN_055a740c(lVar18,lVar16);
          }
          uVar21 = auVar24._8_8_;
          if (auVar24._0_8_ != 0) {
            plVar20 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar24._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar20;
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar22 = *plVar20;
              uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar12 = (undefined8 *)(lVar22 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(plVar20,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar17 = (*(code *)*puVar12)(plVar20,puVar12[1]);
              plVar20 = in_stack_00000090;
              if ((uVar17 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar22 = *in_stack_00000090;
              uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar12 = (undefined8 *)(lVar22 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar21 = (*(code *)*puVar12)(plVar20,puVar12[1]);
              lVar22 = *plVar14;
              uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar12 = (undefined8 *)(lVar22 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar12)(plVar14,uVar21,puVar12[1]);
              plVar20 = in_stack_00000090;
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
      plVar20 = *(long **)(lVar22 + 0x68);
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar22 = *plVar20;
      uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar12 = (undefined8 *)(lVar22 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02dd004c(plVar20,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar22 = (*(code *)*puVar12)(plVar20,uVar13,puVar12[1]);
      if (lVar22 != 0) {
        if ((char)plVar14[0x20] == '\0') {
          plVar20 = (long *)FUN_02979ef0(lVar22,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar20 = (long *)FUN_055a9a84(plVar14,lVar22);
        }
        if ((char)plVar14[0x20] == '\0') {
          auVar24 = FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar24 = FUN_055a9a84(plVar14,lVar16);
        }
        uVar21 = auVar24._8_8_;
        if (auVar24._0_8_ != 0) {
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
            lVar22 = *in_stack_00000080;
            uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar12 = (undefined8 *)(lVar22 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar17 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            plVar14 = in_stack_00000080;
            if ((uVar17 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar22 = *in_stack_00000080;
            uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar12 = (undefined8 *)(lVar22 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar24 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar22 = *plVar20;
            uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar12 = (undefined8 *)(lVar22 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(plVar20,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar12)(plVar20,auVar24._0_8_,auVar24._8_8_,puVar12[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar21,0);
      }
    }
  }
LAB_055b65e0:
  puVar8[0x38] = 1;
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_055b6090:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar12 = (undefined8 *)(lVar22 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_055b60c4;
    }
  }
LAB_055b60a8:
  puVar12 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)PTR_DAT_069fbff0,0);
LAB_055b60c4:
  (*(code *)*puVar12)(plVar14,puVar12[1]);
LAB_055b60e0:
  lVar22 = FUN_055aacb0(unaff_x28);
  puVar2 = PTR_DAT_069fc180;
  if (lVar22 != 0) {
    uVar10 = FUN_047928e8(lVar22,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    plVar14 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar10);
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
      uVar17 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
      puVar8 = in_stack_000000b0;
      lVar22 = in_stack_00000040;
      if ((uVar17 & 1) != 0) {
        if (unaff_w21 == 0) {
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        else {
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar22 = *(long *)(in_stack_000000b0 + 0x18);
          if ((lVar22 != 0) && (in_stack_000000b0[0x28] == '\0')) {
            if (*(long **)(in_stack_000000b0 + 0x30) == (long *)0x0) {
              uVar10 = 1;
            }
            else if (**(long **)(in_stack_000000b0 + 0x30) == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar17 = FUN_055b129c(*(undefined8 *)(lVar22 + 0x40),*(undefined8 *)(lVar22 + 0x48));
              uVar10 = 1;
              if ((uVar17 & 1) == 0) {
                uVar10 = 2;
              }
            }
            else {
              uVar10 = 2;
            }
            in_stack_00000060 = 0;
            FUN_043301b0(&stack0x00000060,uVar10,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                        );
            *(long *)(puVar8 + 0x28) = in_stack_00000060;
          }
        }
        lVar22 = *(long *)(puVar8 + 0x20);
        if (lVar22 == 0) goto LAB_055b6330;
        goto LAB_055b61fc;
      }
      FUN_05156800(in_stack_00000048,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar22);
      }
      if (in_stack_00000018 != 0) {
        uVar13 = (**(code **)(in_stack_00000018 + 0x18))
                           (*(undefined8 *)(in_stack_00000018 + 0x40),plVar14,
                            *(undefined8 *)(in_stack_00000018 + 0x28));
        if (in_stack_00000010 != 0) {
          FUN_055b4f70(unaff_x24,in_stack_00000028,in_stack_00000010,uVar13);
        }
        FUN_055b5334(unaff_x24,in_stack_00000028,unaff_x28,uVar13);
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
          uVar17 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
          puVar8 = in_stack_000000b0;
          lVar22 = in_stack_00000060;
          if ((uVar17 & 1) == 0) {
            FUN_05156800(in_stack_00000068,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar22 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar22);
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
              while (uVar17 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    (uVar17 & 1) != 0) {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((in_stack_000000b0[0x38] == '\0') &&
                   ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
                    ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
                  lVar22 = *(long *)(unaff_x28 + 0xe0);
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  (**(code **)(lVar22 + 0x18))
                            (*(undefined8 *)(lVar22 + 0x40),uVar13,
                             *(undefined8 *)(in_stack_000000b0 + 0x10),
                             *(undefined8 *)(in_stack_000000b0 + 0x30),
                             *(undefined8 *)(lVar22 + 0x28));
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            if (unaff_w21 != 0) {
              FUN_04010c90(&stack0x00000040,lVar15,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar17 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    puVar8 = in_stack_000000b0, (uVar17 & 1) != 0) {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(long *)(in_stack_000000b0 + 0x18) != 0) {
                  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar10 = (**(code **)(*in_stack_00000028 + 0x1b8))
                                     (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1c0))
                  ;
                  FUN_055b7880(unaff_x24,uVar13,in_stack_00000028,unaff_x28,uVar10,
                               *(undefined8 *)(puVar8 + 0x18),*(undefined4 *)(puVar8 + 0x2c),
                               puVar8[0x38] == '\0');
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            FUN_055b5560(unaff_x24,in_stack_00000028,unaff_x28,uVar13);
            return uVar13;
          }
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        } while ((((in_stack_000000b0[0x38] != '\0') ||
                  (lVar22 = *(long *)(in_stack_000000b0 + 0x18), lVar22 == 0)) ||
                 (*(char *)(lVar22 + 0x80) != '\0')) ||
                ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
                 ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
        lVar16 = *(long *)(in_stack_000000b0 + 0x30);
        uVar17 = FUN_055b4e68(unaff_x24,lVar22,unaff_x28,lVar16);
        if ((uVar17 & 1) == 0) goto LAB_055b6554;
        plVar14 = *(long **)(lVar22 + 0x68);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar22 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar12 = (undefined8 *)(lVar22 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_055b65cc;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_02dd004c(plVar14,*(long *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                               ,0);
LAB_055b65cc:
        (*(code *)*puVar12)(plVar14,uVar13,lVar16,puVar12[1]);
        goto LAB_055b65e0;
      }
    }
  }
LAB_055b6e84:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


