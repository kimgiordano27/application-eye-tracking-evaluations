/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_SetVoipGroup_Native
ENTRY_POINT: 055b60b8
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


/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b6418) */
/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_NetSync_SetVoipGroup_Native(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  int *in_x10;
  int *piVar14;
  int unaff_w19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long *plVar15;
  long unaff_x28;
  undefined1 auVar16 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
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
  
  (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (unaff_x23 == 0) {
    if ((unaff_w19 != 6) && (unaff_w19 != 0)) {
      return in_stack_00000020;
    }
    lVar6 = FUN_055aacb0();
    puVar2 = PTR_DAT_069fc180;
    if (lVar6 != 0) {
      uVar4 = FUN_047928e8(lVar6,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
      plVar7 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar4);
      puVar2 = 
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Dictionary<string,_TokenData>>>_TypeInfo
      ;
      if (unaff_x22 != 0) {
        FUN_04010c90(&stack0x00000040);
        in_stack_000000a0 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000b0 = in_stack_00000050;
        in_stack_00000048 = &stack0x000000a0;
LAB_055b6160:
        uVar8 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
        puVar3 = in_stack_000000b0;
        unaff_x23 = in_stack_00000040;
        if ((uVar8 & 1) != 0) {
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
            lVar6 = *(long *)(in_stack_000000b0 + 0x18);
            if ((lVar6 != 0) && (in_stack_000000b0[0x28] == '\0')) {
              if (*(long **)(in_stack_000000b0 + 0x30) == (long *)0x0) {
                uVar4 = 1;
              }
              else if (**(long **)(in_stack_000000b0 + 0x30) == *(long *)(PTR_DAT_069fb9c0 + 0x90))
              {
                uVar8 = FUN_055b129c(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48));
                uVar4 = 1;
                if ((uVar8 & 1) == 0) {
                  uVar4 = 2;
                }
              }
              else {
                uVar4 = 2;
              }
              in_stack_00000060 = 0;
              FUN_043301b0(&stack0x00000060,uVar4,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                          );
              *(long *)(puVar3 + 0x28) = in_stack_00000060;
            }
          }
          lVar6 = *(long *)(puVar3 + 0x20);
          if (lVar6 == 0) goto LAB_055b6330;
          goto LAB_055b61fc;
        }
        FUN_05156800(in_stack_00000048,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                    );
        if (unaff_x23 != 0) goto LAB_055b6ea0;
        if (in_stack_00000018 != 0) {
          uVar10 = (**(code **)(in_stack_00000018 + 0x18))
                             (*(undefined8 *)(in_stack_00000018 + 0x40),plVar7,
                              *(undefined8 *)(in_stack_00000018 + 0x28));
          if (in_stack_00000010 != 0) {
            FUN_055b4f70(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar10);
          }
          FUN_055b5334(in_stack_00000038,in_stack_00000028,unaff_x28,uVar10);
          FUN_04010c90(&stack0x00000040);
          in_stack_00000068 = &stack0x000000a0;
          in_stack_00000060 = 0;
          in_stack_000000a8 = in_stack_00000048;
          in_stack_000000a0 = in_stack_00000040;
          in_stack_000000b0 = in_stack_00000050;
LAB_055b64a4:
          do {
            uVar8 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
            puVar3 = in_stack_000000b0;
            lVar6 = in_stack_00000060;
            if ((uVar8 & 1) == 0) {
              FUN_05156800(in_stack_00000068,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
              if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96858(lVar6);
              }
              if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                FUN_04010c90(&stack0x00000040);
                in_stack_000000b0 = in_stack_00000050;
                in_stack_000000a8 = in_stack_00000048;
                in_stack_000000a0 = in_stack_00000040;
                in_stack_00000040 = 0;
                in_stack_00000048 = &stack0x000000a0;
                while (uVar8 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                      (uVar8 & 1) != 0) {
                  if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if ((in_stack_000000b0[0x38] == '\0') &&
                     ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
                      ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
                    lVar6 = *(long *)(in_stack_00000030 + 0xe0);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    (**(code **)(lVar6 + 0x18))
                              (*(undefined8 *)(lVar6 + 0x40),uVar10,
                               *(undefined8 *)(in_stack_000000b0 + 0x10),
                               *(undefined8 *)(in_stack_000000b0 + 0x30),
                               *(undefined8 *)(lVar6 + 0x28));
                  }
                }
                FUN_05156800(&stack0x000000a0,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                            );
              }
              if (unaff_w21 != 0) {
                FUN_04010c90(&stack0x00000040);
                in_stack_000000b0 = in_stack_00000050;
                in_stack_000000a8 = in_stack_00000048;
                in_stack_000000a0 = in_stack_00000040;
                in_stack_00000040 = 0;
                in_stack_00000048 = &stack0x000000a0;
                while (uVar8 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                      puVar3 = in_stack_000000b0, (uVar8 & 1) != 0) {
                  if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(long *)(in_stack_000000b0 + 0x18) != 0) {
                    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    uVar4 = (**(code **)(*in_stack_00000028 + 0x1b8))
                                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1c0)
                                      );
                    FUN_055b7880(in_stack_00000038,uVar10,in_stack_00000028,in_stack_00000030,uVar4,
                                 *(undefined8 *)(puVar3 + 0x18),*(undefined4 *)(puVar3 + 0x2c),
                                 puVar3[0x38] == '\0');
                  }
                }
                FUN_05156800(&stack0x000000a0,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                            );
              }
              FUN_055b5560(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar10);
              return uVar10;
            }
            if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
          } while ((((in_stack_000000b0[0x38] != '\0') ||
                    (lVar6 = *(long *)(in_stack_000000b0 + 0x18), lVar6 == 0)) ||
                   (*(char *)(lVar6 + 0x80) != '\0')) ||
                  ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
                   ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
          lVar9 = *(long *)(in_stack_000000b0 + 0x30);
          uVar8 = FUN_055b4e68(in_stack_00000038,lVar6,unaff_x28,lVar9);
          if ((uVar8 & 1) == 0) goto LAB_055b6554;
          plVar7 = *(long **)(lVar6 + 0x68);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar6 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  *(long *)
                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                 ) {
                puVar12 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_055b65cc;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_02dd004c(plVar7,*(long *)
                                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                                 ,0);
LAB_055b65cc:
          (*(code *)*puVar12)(plVar7,uVar10,lVar9,puVar12[1]);
          goto LAB_055b65e0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_055b6ea0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(unaff_x23);
LAB_055b6330:
  if (*(long *)(puVar3 + 0x18) != 0) {
    uVar10 = FUN_055aacb0(unaff_x28);
    lVar6 = *unaff_x20;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar6 = *unaff_x20;
    }
    puVar12 = *(undefined8 **)(lVar6 + 0xb8);
    lVar9 = puVar12[2];
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar12 = *(undefined8 **)(*unaff_x20 + 0xb8);
      }
      uVar11 = *puVar12;
      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                );
      FUN_03b78e40(lVar9,uVar11,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar15 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      *plVar15 = lVar9;
      LeanTween__value(plVar15,lVar9);
      unaff_x28 = in_stack_00000030;
    }
    if (*(long *)(puVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = FUN_0383594c(uVar10,lVar9,*(undefined8 *)(*(long *)(puVar3 + 0x18) + 0x60),
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                        );
    if (lVar6 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar6 + 0x80) == '\0') {
        if (((unaff_w21 != 0) && (*(ulong *)(puVar3 + 0x28) >> 0x21 == 0)) &&
           ((*(ulong *)(puVar3 + 0x28) & 0xff) != 0)) {
          plVar15 = (long *)(lVar6 + 0x48);
          if (*plVar15 == 0) {
            lVar9 = FUN_055ae608(in_stack_00000038,*(undefined8 *)(lVar6 + 0x40));
            *plVar15 = lVar9;
            LeanTween__value(plVar15);
          }
          in_stack_00000098 = *(undefined8 *)(lVar6 + 0x90);
          if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar5 = FUN_043301f4(&stack0x00000098,
                               *(undefined4 *)(*(long *)(in_stack_00000038 + 0x20) + 0x2c),
                               *(undefined8 *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                              );
          if ((uVar5 >> 1 & 1) != 0) {
            uVar10 = FUN_055ab994(lVar6);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_0547e2f8(0);
            uVar10 = FUN_055b0cf8(uVar11,in_stack_00000028,uVar10,uVar11,
                                  *(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x40));
            *(undefined8 *)(puVar3 + 0x30) = uVar10;
            LeanTween__value();
          }
        }
        lVar9 = FUN_055aacb0(unaff_x28);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_04792f70(lVar9,lVar6,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                            );
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *(long *)(puVar3 + 0x30);
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar10,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar7[(long)(int)uVar5 + 4] = lVar6;
        LeanTween__value(plVar7 + (long)(int)uVar5 + 4,lVar6);
        puVar3[0x38] = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar9 == 0) || (*(char *)(lVar6 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar7 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar13 = *plVar7;
  uVar11 = *(undefined8 *)(lVar6 + 0x40);
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar12 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar7 = (long *)(*(code *)*puVar12)(plVar7,uVar11,puVar12[1]);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar7 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar7);
    }
    if ((*(char *)((long)plVar7 + 0xf2) != '\0') && ((char)plVar7[5] == '\0')) {
      plVar7 = *(long **)(lVar6 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02dd004c(plVar7,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b66c4:
      lVar6 = (*(code *)*puVar12)(plVar7,uVar10,puVar12[1]);
      if (lVar6 != 0) {
        uVar11 = thunk_FUN_02da6564(lVar6,0);
        uVar11 = FUN_055ae66c(in_stack_00000038,uVar11);
        lVar13 = FUN_02979eb8(uVar11,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar13 + 0xf1) == '\0') {
          plVar7 = (long *)FUN_02979ef0(lVar6,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar7 = (long *)FUN_055a740c(lVar13,lVar6);
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar8 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar7);
        if ((uVar8 & 1) == 0) {
          if (*(char *)(lVar13 + 0xf1) == '\0') {
            auVar16 = FUN_02979ef0(lVar9,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar16 = FUN_055a740c(lVar13,lVar9);
          }
          uVar11 = auVar16._8_8_;
          if (auVar16._0_8_ != 0) {
            plVar15 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar16._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar15;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar6 = *plVar15;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar12 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar8 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              plVar15 = in_stack_00000090;
              if ((uVar8 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar6 = *in_stack_00000090;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              lVar6 = *plVar7;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar12)(plVar7,uVar11,puVar12[1]);
              plVar15 = in_stack_00000090;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
  }
  else if (*(int *)((long)plVar7 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar7);
    }
    if ((char)plVar7[5] == '\0') {
      plVar15 = *(long **)(lVar6 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02dd004c(plVar15,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar6 = (*(code *)*puVar12)(plVar15,uVar10,puVar12[1]);
      if (lVar6 != 0) {
        if ((char)plVar7[0x20] == '\0') {
          plVar15 = (long *)FUN_02979ef0(lVar6,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar15 = (long *)FUN_055a9a84(plVar7,lVar6);
        }
        if ((char)plVar7[0x20] == '\0') {
          auVar16 = FUN_02979ef0(lVar9,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar16 = FUN_055a9a84(plVar7,lVar9);
        }
        uVar11 = auVar16._8_8_;
        if (auVar16._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar7 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar6 = *in_stack_00000080;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar12 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar8 = (*(code *)*puVar12)(plVar7,puVar12[1]);
            plVar7 = in_stack_00000080;
            if ((uVar8 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar6 = *in_stack_00000080;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar16 = (*(code *)*puVar12)(plVar7,puVar12[1]);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar6 = *plVar15;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar12)(plVar15,auVar16._0_8_,auVar16._8_8_,puVar12[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar11,0);
      }
    }
  }
LAB_055b65e0:
  puVar3[0x38] = 1;
  unaff_x28 = in_stack_00000030;
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
}


