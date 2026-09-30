/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_SetVoipAttenuationModel_Native
ENTRY_POINT: 055b5dd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x055b6418) */
/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b60dc) */
/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_NetSync_SetVoipAttenuationModel_Native(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x24;
  long *plVar21;
  long unaff_x28;
  undefined1 auVar22 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000028;
  long in_stack_00000030;
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
  
  lVar11 = FUN_055b719c();
  if (unaff_w21 != 0) {
    if (*(long *)(unaff_x28 + 0xd8) != 0) {
      plVar12 = (long *)FUN_04792ee4(*(long *)(unaff_x28 + 0xd8),
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
          in_stack_000000b8 = plVar12;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar16 = *plVar12;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069fbff8) {
                puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_055b5e9c;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar13 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069fbff8,0);
LAB_055b5e9c:
          uVar18 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          plVar12 = in_stack_000000b8;
          unaff_x20 = (long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
          if ((uVar18 & 1) == 0) {
            unaff_x28 = in_stack_00000030;
            if (in_stack_000000b8 == (long *)0x0) goto LAB_055b60e0;
            lVar16 = *in_stack_000000b8;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 == 0) goto LAB_055b60a8;
            piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_055b6090;
          }
          lVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
          FUN_0552aca4(lVar16,0);
          plVar12 = in_stack_000000b8;
          if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar17 = *in_stack_000000b8;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_055b5f14;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar13 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)puVar2,0);
LAB_055b5f14:
          lVar17 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar21 = (long *)(lVar16 + 0x10);
          *plVar21 = lVar17;
          LeanTween__value(plVar21);
          if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar12 = in_stack_000000b8;
        } while (*(char *)(*plVar21 + 0x80) != '\0');
        uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_03b7820c(uVar14,lVar16,*(undefined8 *)puVar6,0);
        uVar18 = FUN_035f7d60(lVar11,uVar14,*(undefined8 *)puVar3);
        plVar12 = in_stack_000000b8;
      } while ((uVar18 & 1) == 0);
      if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar14 = *(undefined8 *)(*plVar21 + 0x30);
      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                 );
      FUN_0552aca4(lVar16,0);
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
      LeanTween__value((undefined8 *)(lVar16 + 0x10),uVar14);
      *(long *)(lVar16 + 0x18) = *plVar21;
      LeanTween__value();
      in_stack_00000060 = 0;
      FUN_043301b0(&stack0x00000060,0,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                  );
      *(long *)(lVar16 + 0x28) = in_stack_00000060;
      if (lVar11 != 0) {
        lVar17 = *(long *)(lVar11 + 0x10);
        lVar19 = *(long *)puVar5;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar17 != 0) {
          uVar10 = *(uint *)(lVar11 + 0x18);
          if (uVar10 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar10 + 1;
            plVar12 = (long *)(lVar17 + (long)(int)uVar10 * 8 + 0x20);
            *plVar12 = lVar16;
            LeanTween__value(plVar12,lVar16);
            plVar12 = in_stack_000000b8;
          }
          else {
            FUN_040101ec(lVar11,lVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            plVar12 = in_stack_000000b8;
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
    uVar14 = FUN_055aacb0(unaff_x28);
    lVar16 = *unaff_x20;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar16 = *unaff_x20;
    }
    puVar13 = *(undefined8 **)(lVar16 + 0xb8);
    lVar17 = puVar13[2];
    if (lVar17 == 0) {
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar13 = *(undefined8 **)(*unaff_x20 + 0xb8);
      }
      uVar15 = *puVar13;
      lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                 );
      FUN_03b78e40(lVar17,uVar15,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar21 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      *plVar21 = lVar17;
      LeanTween__value(plVar21,lVar17);
      unaff_x28 = in_stack_00000030;
    }
    if (*(long *)(puVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar16 = FUN_0383594c(uVar14,lVar17,*(undefined8 *)(*(long *)(puVar8 + 0x18) + 0x60),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
    if (lVar16 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar16 + 0x80) == '\0') {
        if (((unaff_w21 != 0) && (*(ulong *)(puVar8 + 0x28) >> 0x21 == 0)) &&
           ((*(ulong *)(puVar8 + 0x28) & 0xff) != 0)) {
          plVar21 = (long *)(lVar16 + 0x48);
          if (*plVar21 == 0) {
            lVar17 = FUN_055ae608(unaff_x24,*(undefined8 *)(lVar16 + 0x40));
            *plVar21 = lVar17;
            LeanTween__value(plVar21);
          }
          in_stack_00000098 = *(undefined8 *)(lVar16 + 0x90);
          if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar10 = FUN_043301f4(&stack0x00000098,*(undefined4 *)(*(long *)(unaff_x24 + 0x20) + 0x2c)
                                ,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                               );
          if ((uVar10 >> 1 & 1) != 0) {
            uVar14 = FUN_055ab994(lVar16);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar15 = FUN_0547e2f8(0);
            uVar14 = FUN_055b0cf8(uVar15,in_stack_00000028,uVar14,uVar15,
                                  *(undefined8 *)(lVar16 + 0x48),*(undefined8 *)(lVar16 + 0x40));
            *(undefined8 *)(puVar8 + 0x30) = uVar14;
            LeanTween__value();
          }
        }
        lVar17 = FUN_055aacb0(unaff_x28);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = FUN_04792f70(lVar17,lVar16,
                              *(undefined8 *)
                               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                             );
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar16 = *(long *)(puVar8 + 0x30);
        if ((lVar16 != 0) &&
           (lVar17 = thunk_FUN_02dd3048(lVar16,*(undefined8 *)(*plVar12 + 0x40)), lVar17 == 0)) {
          uVar14 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar14,0);
        }
        if (*(uint *)(plVar12 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar12[(long)(int)uVar10 + 4] = lVar16;
        LeanTween__value(plVar12 + (long)(int)uVar10 + 4,lVar16);
        puVar8[0x38] = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar17 == 0) || (*(char *)(lVar16 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar12 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0x40);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar19 = *plVar12;
  uVar15 = *(undefined8 *)(lVar16 + 0x40);
  uVar18 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar18 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar13 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar18 = uVar18 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar18 != 0);
  }
  puVar13 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,uVar15,puVar13[1]);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar12 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar12);
    }
    if ((*(char *)((long)plVar12 + 0xf2) != '\0') && ((char)plVar12[5] == '\0')) {
      plVar12 = *(long **)(lVar16 + 0x68);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *plVar12;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_02dd004c(plVar12,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b66c4:
      lVar16 = (*(code *)*puVar13)(plVar12,uVar14,puVar13[1]);
      if (lVar16 != 0) {
        uVar15 = thunk_FUN_02da6564(lVar16,0);
        uVar15 = FUN_055ae66c(unaff_x24,uVar15);
        lVar19 = FUN_02979eb8(uVar15,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar19 + 0xf1) == '\0') {
          plVar12 = (long *)FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar12 = (long *)FUN_055a740c(lVar19,lVar16);
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar18 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar12);
        if ((uVar18 & 1) == 0) {
          if (*(char *)(lVar19 + 0xf1) == '\0') {
            auVar22 = FUN_02979ef0(lVar17,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar22 = FUN_055a740c(lVar19,lVar17);
          }
          uVar15 = auVar22._8_8_;
          if (auVar22._0_8_ != 0) {
            plVar21 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar22._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar21;
              if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar16 = *plVar21;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar13 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar18 = (*(code *)*puVar13)(plVar21,puVar13[1]);
              plVar21 = in_stack_00000090;
              if ((uVar18 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar16 = *in_stack_00000090;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar13 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar15 = (*(code *)*puVar13)(plVar21,puVar13[1]);
              lVar16 = *plVar12;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar13 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar13)(plVar12,uVar15,puVar13[1]);
              plVar21 = in_stack_00000090;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
  }
  else if (*(int *)((long)plVar12 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar12);
    }
    if ((char)plVar12[5] == '\0') {
      plVar21 = *(long **)(lVar16 + 0x68);
      if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *plVar21;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_02dd004c(plVar21,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar16 = (*(code *)*puVar13)(plVar21,uVar14,puVar13[1]);
      if (lVar16 != 0) {
        if ((char)plVar12[0x20] == '\0') {
          plVar21 = (long *)FUN_02979ef0(lVar16,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar21 = (long *)FUN_055a9a84(plVar12,lVar16);
        }
        if ((char)plVar12[0x20] == '\0') {
          auVar22 = FUN_02979ef0(lVar17,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar22 = FUN_055a9a84(plVar12,lVar17);
        }
        uVar15 = auVar22._8_8_;
        if (auVar22._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar12 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar16 = *in_stack_00000080;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar18 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            plVar12 = in_stack_00000080;
            if ((uVar18 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar16 = *in_stack_00000080;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar22 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar16 = *plVar21;
            uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar18 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar18 = uVar18 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar18 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar13)(plVar21,auVar22._0_8_,auVar22._8_8_,puVar13[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar15,0);
      }
    }
  }
LAB_055b65e0:
  puVar8[0x38] = 1;
  unaff_x28 = in_stack_00000030;
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_055b6090:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_055b60c4;
    }
  }
LAB_055b60a8:
  puVar13 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)PTR_DAT_069fbff0,0);
LAB_055b60c4:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_055b60e0:
  lVar16 = FUN_055aacb0(unaff_x28);
  puVar2 = PTR_DAT_069fc180;
  if (lVar16 != 0) {
    uVar9 = FUN_047928e8(lVar16,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    plVar12 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar9);
    puVar2 = 
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Dictionary<string,_TokenData>>>_TypeInfo
    ;
    if (lVar11 != 0) {
      FUN_04010c90(&stack0x00000040,lVar11,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                  );
      in_stack_000000a0 = in_stack_00000040;
      in_stack_00000040 = 0;
      in_stack_000000a8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000050;
      in_stack_00000048 = &stack0x000000a0;
LAB_055b6160:
      uVar18 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
      puVar8 = in_stack_000000b0;
      lVar16 = in_stack_00000040;
      if ((uVar18 & 1) != 0) {
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
          lVar16 = *(long *)(in_stack_000000b0 + 0x18);
          if ((lVar16 != 0) && (in_stack_000000b0[0x28] == '\0')) {
            if (*(long **)(in_stack_000000b0 + 0x30) == (long *)0x0) {
              uVar9 = 1;
            }
            else if (**(long **)(in_stack_000000b0 + 0x30) == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar18 = FUN_055b129c(*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x48));
              uVar9 = 1;
              if ((uVar18 & 1) == 0) {
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
            *(long *)(puVar8 + 0x28) = in_stack_00000060;
          }
        }
        lVar16 = *(long *)(puVar8 + 0x20);
        if (lVar16 == 0) goto LAB_055b6330;
        goto LAB_055b61fc;
      }
      FUN_05156800(in_stack_00000048,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar16);
      }
      if (in_stack_00000018 != 0) {
        uVar14 = (**(code **)(in_stack_00000018 + 0x18))
                           (*(undefined8 *)(in_stack_00000018 + 0x40),plVar12,
                            *(undefined8 *)(in_stack_00000018 + 0x28));
        if (in_stack_00000010 != 0) {
          FUN_055b4f70(unaff_x24,in_stack_00000028,in_stack_00000010,uVar14);
        }
        FUN_055b5334(unaff_x24,in_stack_00000028,unaff_x28,uVar14);
        FUN_04010c90(&stack0x00000040,lVar11,
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
          uVar18 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
          puVar8 = in_stack_000000b0;
          lVar16 = in_stack_00000060;
          if ((uVar18 & 1) == 0) {
            FUN_05156800(in_stack_00000068,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar16);
            }
            if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
              FUN_04010c90(&stack0x00000040,lVar11,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar18 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    (uVar18 & 1) != 0) {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((in_stack_000000b0[0x38] == '\0') &&
                   ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
                    ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
                  lVar16 = *(long *)(in_stack_00000030 + 0xe0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  (**(code **)(lVar16 + 0x18))
                            (*(undefined8 *)(lVar16 + 0x40),uVar14,
                             *(undefined8 *)(in_stack_000000b0 + 0x10),
                             *(undefined8 *)(in_stack_000000b0 + 0x30),
                             *(undefined8 *)(lVar16 + 0x28));
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            if (unaff_w21 != 0) {
              FUN_04010c90(&stack0x00000040,lVar11,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar18 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    puVar8 = in_stack_000000b0, (uVar18 & 1) != 0) {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(long *)(in_stack_000000b0 + 0x18) != 0) {
                  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar9 = (**(code **)(*in_stack_00000028 + 0x1b8))
                                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1c0));
                  FUN_055b7880(unaff_x24,uVar14,in_stack_00000028,in_stack_00000030,uVar9,
                               *(undefined8 *)(puVar8 + 0x18),*(undefined4 *)(puVar8 + 0x2c),
                               puVar8[0x38] == '\0');
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            FUN_055b5560(unaff_x24,in_stack_00000028,in_stack_00000030,uVar14);
            return uVar14;
          }
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        } while ((((in_stack_000000b0[0x38] != '\0') ||
                  (lVar16 = *(long *)(in_stack_000000b0 + 0x18), lVar16 == 0)) ||
                 (*(char *)(lVar16 + 0x80) != '\0')) ||
                ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
                 ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
        lVar17 = *(long *)(in_stack_000000b0 + 0x30);
        uVar18 = FUN_055b4e68(unaff_x24,lVar16,unaff_x28,lVar17);
        if ((uVar18 & 1) == 0) goto LAB_055b6554;
        plVar12 = *(long **)(lVar16 + 0x68);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar16 = *plVar12;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_055b65cc;
            }
            uVar18 = uVar18 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_02dd004c(plVar12,*(long *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                               ,0);
LAB_055b65cc:
        (*(code *)*puVar13)(plVar12,uVar14,lVar17,puVar13[1]);
        goto LAB_055b65e0;
      }
    }
  }
LAB_055b6e84:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


