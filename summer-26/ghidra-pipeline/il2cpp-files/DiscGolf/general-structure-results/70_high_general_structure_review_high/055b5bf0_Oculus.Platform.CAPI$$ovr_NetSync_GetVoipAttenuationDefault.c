/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_GetVoipAttenuationDefault
ENTRY_POINT: 055b5bf0
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

undefined8
Oculus_Platform_CAPI__ovr_NetSync_GetVoipAttenuationDefault(long param_1,undefined8 param_2)

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
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x24;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
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
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c(param_1);
    param_1 = *unaff_x20;
  }
  puVar15 = *(undefined8 **)(param_1 + 0xb8);
  lVar21 = puVar15[1];
  uVar20 = *(undefined8 *)PTR_DAT_069fc558;
  if (lVar21 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02df485c(param_1);
      puVar15 = *(undefined8 **)(*unaff_x20 + 0xb8);
    }
    uVar22 = *puVar15;
    lVar21 = thunk_FUN_02dd3144(*(undefined8 *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                               );
    FUN_03b78e40(lVar21,uVar22,
                 *(undefined8 *)
                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinResponseBody>>_TypeInfo
                 ,0);
    plVar11 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    *plVar11 = lVar21;
    LeanTween__value(plVar11,lVar21);
  }
  uVar22 = FUN_0360ccb8(param_2,lVar21,
                        *(undefined8 *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SignedUrlResponse>>_TypeInfo
                       );
  uVar20 = FUN_0536e598(uVar20,uVar22,0);
  if (in_stack_00000028 == (long *)0x0) goto LAB_055b6e84;
  plVar11 = *(long **)(unaff_x24 + 0x28);
  uVar22 = (**(code **)(*in_stack_00000028 + 0x1c8))
                     (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1d0));
  if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
  }
  uVar12 = FUN_0547e2f8(0);
  uVar20 = FUN_05588558(*(undefined8 *)
                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                        ,uVar12,*(undefined8 *)(in_stack_00000030 + 0x60),uVar20,0);
  if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
  }
  uVar12 = thunk_FUN_02dd3048(in_stack_00000028,
                              *(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
  uVar20 = FUN_05570ab4(uVar12,uVar22,uVar20,0);
  if (plVar11 == (long *)0x0) goto LAB_055b6e84;
  lVar21 = *plVar11;
  uVar16 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x19) {
        puVar15 = (undefined8 *)(lVar21 + (long)(*piVar18 + 1) * 0x10 + 0x138);
        goto LAB_055b5db0;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar15 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x19,1);
LAB_055b5db0:
  (*(code *)*puVar15)(plVar11,3,uVar20,0,puVar15[1]);
  lVar21 = FUN_055b719c();
  if (unaff_w21 != 0) {
    if (*(long *)(in_stack_00000030 + 0xd8) != 0) {
      plVar11 = (long *)FUN_04792ee4(*(long *)(in_stack_00000030 + 0xd8),
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
          in_stack_000000b8 = plVar11;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar13 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff8) {
                puVar15 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_055b5e9c;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar15 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff8,0);
LAB_055b5e9c:
          uVar16 = (*(code *)*puVar15)(plVar11,puVar15[1]);
          plVar11 = in_stack_000000b8;
          unaff_x20 = (long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
          if ((uVar16 & 1) == 0) {
            if (in_stack_000000b8 == (long *)0x0) goto LAB_055b60e0;
            lVar13 = *in_stack_000000b8;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 == 0) goto LAB_055b60a8;
            piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_055b6090;
          }
          lVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
          FUN_0552aca4(lVar13,0);
          plVar11 = in_stack_000000b8;
          if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar14 = *in_stack_000000b8;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
                puVar15 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_055b5f14;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar15 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)puVar2,0);
LAB_055b5f14:
          lVar14 = (*(code *)*puVar15)(plVar11,puVar15[1]);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar19 = (long *)(lVar13 + 0x10);
          *plVar19 = lVar14;
          LeanTween__value(plVar19);
          if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar11 = in_stack_000000b8;
        } while (*(char *)(*plVar19 + 0x80) != '\0');
        uVar20 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
        FUN_03b7820c(uVar20,lVar13,*(undefined8 *)puVar6,0);
        uVar16 = FUN_035f7d60(lVar21,uVar20,*(undefined8 *)puVar3);
        plVar11 = in_stack_000000b8;
      } while ((uVar16 & 1) == 0);
      if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar20 = *(undefined8 *)(*plVar19 + 0x30);
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                 );
      FUN_0552aca4(lVar13,0);
      *(undefined8 *)(lVar13 + 0x10) = uVar20;
      LeanTween__value((undefined8 *)(lVar13 + 0x10),uVar20);
      *(long *)(lVar13 + 0x18) = *plVar19;
      LeanTween__value();
      in_stack_00000060 = 0;
      FUN_043301b0(&stack0x00000060,0,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                  );
      *(long *)(lVar13 + 0x28) = in_stack_00000060;
      if (lVar21 != 0) {
        lVar14 = *(long *)(lVar21 + 0x10);
        lVar17 = *(long *)puVar5;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar10 = *(uint *)(lVar21 + 0x18);
          if (uVar10 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar21 + 0x18) = uVar10 + 1;
            plVar11 = (long *)(lVar14 + (long)(int)uVar10 * 8 + 0x20);
            *plVar11 = lVar13;
            LeanTween__value(plVar11,lVar13);
            plVar11 = in_stack_000000b8;
          }
          else {
            FUN_040101ec(lVar21,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            plVar11 = in_stack_000000b8;
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
    uVar20 = FUN_055aacb0(in_stack_00000030);
    lVar13 = *unaff_x20;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar13 = *unaff_x20;
    }
    puVar15 = *(undefined8 **)(lVar13 + 0xb8);
    lVar14 = puVar15[2];
    if (lVar14 == 0) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar15 = *(undefined8 **)(*unaff_x20 + 0xb8);
      }
      uVar22 = *puVar15;
      lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                 );
      FUN_03b78e40(lVar14,uVar22,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar19 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      *plVar19 = lVar14;
      LeanTween__value(plVar19,lVar14);
    }
    if (*(long *)(puVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar13 = FUN_0383594c(uVar20,lVar14,*(undefined8 *)(*(long *)(puVar8 + 0x18) + 0x60),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
    if (lVar13 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar13 + 0x80) == '\0') {
        if (((unaff_w21 != 0) && (*(ulong *)(puVar8 + 0x28) >> 0x21 == 0)) &&
           ((*(ulong *)(puVar8 + 0x28) & 0xff) != 0)) {
          plVar19 = (long *)(lVar13 + 0x48);
          if (*plVar19 == 0) {
            lVar14 = FUN_055ae608(unaff_x24,*(undefined8 *)(lVar13 + 0x40));
            *plVar19 = lVar14;
            LeanTween__value(plVar19);
          }
          in_stack_00000098 = *(undefined8 *)(lVar13 + 0x90);
          if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar10 = FUN_043301f4(&stack0x00000098,*(undefined4 *)(*(long *)(unaff_x24 + 0x20) + 0x2c)
                                ,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                               );
          if ((uVar10 >> 1 & 1) != 0) {
            uVar20 = FUN_055ab994(lVar13);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar22 = FUN_0547e2f8(0);
            uVar20 = FUN_055b0cf8(uVar22,in_stack_00000028,uVar20,uVar22,
                                  *(undefined8 *)(lVar13 + 0x48),*(undefined8 *)(lVar13 + 0x40));
            *(undefined8 *)(puVar8 + 0x30) = uVar20;
            LeanTween__value();
          }
        }
        lVar14 = FUN_055aacb0(in_stack_00000030);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = FUN_04792f70(lVar14,lVar13,
                              *(undefined8 *)
                               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                             );
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar13 = *(long *)(puVar8 + 0x30);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_02dd3048(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0)) {
          uVar20 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar20,0);
        }
        if (*(uint *)(plVar11 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar11[(long)(int)uVar10 + 4] = lVar13;
        LeanTween__value(plVar11 + (long)(int)uVar10 + 4,lVar13);
        puVar8[0x38] = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar14 == 0) || (*(char *)(lVar13 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(unaff_x24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar11 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0x40);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar17 = *plVar11;
  uVar22 = *(undefined8 *)(lVar13 + 0x40);
  uVar16 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar16 != 0) {
    piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar15 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar16 = uVar16 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar16 != 0);
  }
  puVar15 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar11 = (long *)(*(code *)*puVar15)(plVar11,uVar22,puVar15[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar11 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar11);
    }
    if ((*(char *)((long)plVar11 + 0xf2) != '\0') && ((char)plVar11[5] == '\0')) {
      plVar11 = *(long **)(lVar13 + 0x68);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar15 = (undefined8 *)(lVar13 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_02dd004c(plVar11,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b66c4:
      lVar13 = (*(code *)*puVar15)(plVar11,uVar20,puVar15[1]);
      if (lVar13 != 0) {
        uVar22 = thunk_FUN_02da6564(lVar13,0);
        uVar22 = FUN_055ae66c(unaff_x24,uVar22);
        lVar17 = FUN_02979eb8(uVar22,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar17 + 0xf1) == '\0') {
          plVar11 = (long *)FUN_02979ef0(lVar13,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar11 = (long *)FUN_055a740c(lVar17,lVar13);
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar16 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar11);
        if ((uVar16 & 1) == 0) {
          if (*(char *)(lVar17 + 0xf1) == '\0') {
            auVar23 = FUN_02979ef0(lVar14,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar23 = FUN_055a740c(lVar17,lVar14);
          }
          uVar22 = auVar23._8_8_;
          if (auVar23._0_8_ != 0) {
            plVar19 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar23._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar19;
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar13 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar15 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar15 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar16 = (*(code *)*puVar15)(plVar19,puVar15[1]);
              plVar19 = in_stack_00000090;
              if ((uVar16 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar13 = *in_stack_00000090;
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar15 = (undefined8 *)(lVar13 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar15 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar22 = (*(code *)*puVar15)(plVar19,puVar15[1]);
              lVar13 = *plVar11;
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar16 != 0) {
                piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar15 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar16 = uVar16 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar16 != 0);
              }
              puVar15 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar15)(plVar11,uVar22,puVar15[1]);
              plVar19 = in_stack_00000090;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
  }
  else if (*(int *)((long)plVar11 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar11);
    }
    if ((char)plVar11[5] == '\0') {
      plVar19 = *(long **)(lVar13 + 0x68);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *plVar19;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar15 = (undefined8 *)(lVar13 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_02dd004c(plVar19,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar13 = (*(code *)*puVar15)(plVar19,uVar20,puVar15[1]);
      if (lVar13 != 0) {
        if ((char)plVar11[0x20] == '\0') {
          plVar19 = (long *)FUN_02979ef0(lVar13,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar19 = (long *)FUN_055a9a84(plVar11,lVar13);
        }
        if ((char)plVar11[0x20] == '\0') {
          auVar23 = FUN_02979ef0(lVar14,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar23 = FUN_055a9a84(plVar11,lVar14);
        }
        uVar22 = auVar23._8_8_;
        if (auVar23._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar11 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar13 = *in_stack_00000080;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar15 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar16 = (*(code *)*puVar15)(plVar11,puVar15[1]);
            plVar11 = in_stack_00000080;
            if ((uVar16 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar13 = *in_stack_00000080;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar15 = (undefined8 *)(lVar13 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar23 = (*(code *)*puVar15)(plVar11,puVar15[1]);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar13 = *plVar19;
            uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar15 = (undefined8 *)(lVar13 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar15)(plVar19,auVar23._0_8_,auVar23._8_8_,puVar15[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar22,0);
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
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_055b6090:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar15 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_055b60c4;
    }
  }
LAB_055b60a8:
  puVar15 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)PTR_DAT_069fbff0,0);
LAB_055b60c4:
  (*(code *)*puVar15)(plVar11,puVar15[1]);
LAB_055b60e0:
  lVar13 = FUN_055aacb0(in_stack_00000030);
  puVar2 = PTR_DAT_069fc180;
  if (lVar13 != 0) {
    uVar9 = FUN_047928e8(lVar13,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    plVar11 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar9);
    puVar2 = 
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Dictionary<string,_TokenData>>>_TypeInfo
    ;
    if (lVar21 != 0) {
      FUN_04010c90(&stack0x00000040,lVar21,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                  );
      in_stack_000000a0 = in_stack_00000040;
      in_stack_00000040 = 0;
      in_stack_000000a8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000050;
      in_stack_00000048 = &stack0x000000a0;
LAB_055b6160:
      uVar16 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
      puVar8 = in_stack_000000b0;
      lVar13 = in_stack_00000040;
      if ((uVar16 & 1) != 0) {
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
          lVar13 = *(long *)(in_stack_000000b0 + 0x18);
          if ((lVar13 != 0) && (in_stack_000000b0[0x28] == '\0')) {
            if (*(long **)(in_stack_000000b0 + 0x30) == (long *)0x0) {
              uVar9 = 1;
            }
            else if (**(long **)(in_stack_000000b0 + 0x30) == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar16 = FUN_055b129c(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x48));
              uVar9 = 1;
              if ((uVar16 & 1) == 0) {
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
        lVar13 = *(long *)(puVar8 + 0x20);
        if (lVar13 == 0) goto LAB_055b6330;
        goto LAB_055b61fc;
      }
      FUN_05156800(in_stack_00000048,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar13);
      }
      if (in_stack_00000018 != 0) {
        uVar20 = (**(code **)(in_stack_00000018 + 0x18))
                           (*(undefined8 *)(in_stack_00000018 + 0x40),plVar11,
                            *(undefined8 *)(in_stack_00000018 + 0x28));
        if (in_stack_00000010 != 0) {
          FUN_055b4f70(unaff_x24,in_stack_00000028,in_stack_00000010,uVar20);
        }
        FUN_055b5334(unaff_x24,in_stack_00000028,in_stack_00000030,uVar20);
        FUN_04010c90(&stack0x00000040,lVar21,
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
          uVar16 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
          puVar8 = in_stack_000000b0;
          lVar13 = in_stack_00000060;
          if ((uVar16 & 1) == 0) {
            FUN_05156800(in_stack_00000068,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar13);
            }
            if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
              FUN_04010c90(&stack0x00000040,lVar21,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar16 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    (uVar16 & 1) != 0) {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((in_stack_000000b0[0x38] == '\0') &&
                   ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
                    ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
                  lVar13 = *(long *)(in_stack_00000030 + 0xe0);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  (**(code **)(lVar13 + 0x18))
                            (*(undefined8 *)(lVar13 + 0x40),uVar20,
                             *(undefined8 *)(in_stack_000000b0 + 0x10),
                             *(undefined8 *)(in_stack_000000b0 + 0x30),
                             *(undefined8 *)(lVar13 + 0x28));
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            if (unaff_w21 != 0) {
              FUN_04010c90(&stack0x00000040,lVar21,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LegacyBackfillTicket>>_TypeInfo
                          );
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar16 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    puVar8 = in_stack_000000b0, (uVar16 & 1) != 0) {
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
                  FUN_055b7880(unaff_x24,uVar20,in_stack_00000028,in_stack_00000030,uVar9,
                               *(undefined8 *)(puVar8 + 0x18),*(undefined4 *)(puVar8 + 0x2c),
                               puVar8[0x38] == '\0');
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            FUN_055b5560(unaff_x24,in_stack_00000028,in_stack_00000030,uVar20);
            return uVar20;
          }
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        } while ((((in_stack_000000b0[0x38] != '\0') ||
                  (lVar13 = *(long *)(in_stack_000000b0 + 0x18), lVar13 == 0)) ||
                 (*(char *)(lVar13 + 0x80) != '\0')) ||
                ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
                 ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
        lVar14 = *(long *)(in_stack_000000b0 + 0x30);
        uVar16 = FUN_055b4e68(unaff_x24,lVar13,in_stack_00000030,lVar14);
        if ((uVar16 & 1) == 0) goto LAB_055b6554;
        plVar11 = *(long **)(lVar13 + 0x68);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar13 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar15 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_055b65cc;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_02dd004c(plVar11,*(long *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                               ,0);
LAB_055b65cc:
        (*(code *)*puVar15)(plVar11,uVar20,lVar14,puVar15[1]);
        goto LAB_055b65e0;
      }
    }
  }
LAB_055b6e84:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


