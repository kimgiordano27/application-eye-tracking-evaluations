/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetAccessToken
ENTRY_POINT: 055b70a0
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

undefined8 Oculus_Platform_CAPI__ovr_User_GetAccessToken(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int unaff_w21;
  long unaff_x22;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long in_stack_00000010;
  long in_stack_00000018;
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
  
  puVar3 = System_Action<bool,_List<OVRAnchor>>_TypeInfo;
  if (param_2 != 1) {
    FUN_029794b4(&stack0x00000040);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar10 = (long *)__cxa_begin_catch();
  lVar15 = *plVar10;
  in_stack_00000040 = lVar15;
  __cxa_end_catch();
  plVar10 = (long *)*in_stack_00000048;
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_055b60c4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_055b60c4:
    (*(code *)*puVar7)(plVar10,puVar7[1]);
  }
  if (lVar15 != 0) {
LAB_055b6ea0:
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar15);
  }
  lVar15 = FUN_055aacb0(in_stack_00000030);
  puVar2 = PTR_DAT_069fc180;
  if (lVar15 != 0) {
    uVar5 = FUN_047928e8(lVar15,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    plVar10 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar5);
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
      uVar13 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
      puVar4 = in_stack_000000b0;
      lVar15 = in_stack_00000040;
      if ((uVar13 & 1) != 0) {
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
          lVar15 = *(long *)(in_stack_000000b0 + 0x18);
          if ((lVar15 != 0) && (in_stack_000000b0[0x28] == '\0')) {
            if (*(long **)(in_stack_000000b0 + 0x30) == (long *)0x0) {
              uVar5 = 1;
            }
            else if (**(long **)(in_stack_000000b0 + 0x30) == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar13 = FUN_055b129c(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x48));
              uVar5 = 1;
              if ((uVar13 & 1) == 0) {
                uVar5 = 2;
              }
            }
            else {
              uVar5 = 2;
            }
            in_stack_00000060 = 0;
            FUN_043301b0(&stack0x00000060,uVar5,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                        );
            *(long *)(puVar4 + 0x28) = in_stack_00000060;
          }
        }
        lVar15 = *(long *)(puVar4 + 0x20);
        if (lVar15 == 0) goto LAB_055b6330;
        goto LAB_055b61fc;
      }
      FUN_05156800(in_stack_00000048,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar15 != 0) goto LAB_055b6ea0;
      if (in_stack_00000018 != 0) {
        uVar8 = (**(code **)(in_stack_00000018 + 0x18))
                          (*(undefined8 *)(in_stack_00000018 + 0x40),plVar10,
                           *(undefined8 *)(in_stack_00000018 + 0x28));
        if (in_stack_00000010 != 0) {
          FUN_055b4f70(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar8);
        }
        FUN_055b5334(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar8);
        FUN_04010c90(&stack0x00000040);
        in_stack_00000068 = &stack0x000000a0;
        in_stack_00000060 = 0;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000050;
LAB_055b64a4:
        do {
          uVar13 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
          puVar4 = in_stack_000000b0;
          lVar15 = in_stack_00000060;
          if ((uVar13 & 1) == 0) {
            FUN_05156800(in_stack_00000068,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar15);
            }
            if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
              FUN_04010c90(&stack0x00000040);
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar13 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    (uVar13 & 1) != 0) {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((in_stack_000000b0[0x38] == '\0') &&
                   ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
                    ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
                  lVar15 = *(long *)(in_stack_00000030 + 0xe0);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  (**(code **)(lVar15 + 0x18))
                            (*(undefined8 *)(lVar15 + 0x40),uVar8,
                             *(undefined8 *)(in_stack_000000b0 + 0x10),
                             *(undefined8 *)(in_stack_000000b0 + 0x30),
                             *(undefined8 *)(lVar15 + 0x28));
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
              while (uVar13 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    puVar4 = in_stack_000000b0, (uVar13 & 1) != 0) {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(long *)(in_stack_000000b0 + 0x18) != 0) {
                  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar5 = (**(code **)(*in_stack_00000028 + 0x1b8))
                                    (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1c0));
                  FUN_055b7880(in_stack_00000038,uVar8,in_stack_00000028,in_stack_00000030,uVar5,
                               *(undefined8 *)(puVar4 + 0x18),*(undefined4 *)(puVar4 + 0x2c),
                               puVar4[0x38] == '\0');
                }
              }
              FUN_05156800(&stack0x000000a0,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                          );
            }
            FUN_055b5560(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar8);
            return uVar8;
          }
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        } while ((((in_stack_000000b0[0x38] != '\0') ||
                  (lVar15 = *(long *)(in_stack_000000b0 + 0x18), lVar15 == 0)) ||
                 (*(char *)(lVar15 + 0x80) != '\0')) ||
                ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
                 ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
        lVar11 = *(long *)(in_stack_000000b0 + 0x30);
        uVar13 = FUN_055b4e68(in_stack_00000038,lVar15,in_stack_00000030,lVar11);
        if ((uVar13 & 1) == 0) goto LAB_055b6554;
        plVar10 = *(long **)(lVar15 + 0x68);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar15 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_055b65cc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02dd004c(plVar10,*(long *)
                                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                              ,0);
LAB_055b65cc:
        (*(code *)*puVar7)(plVar10,uVar8,lVar11,puVar7[1]);
        goto LAB_055b65e0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_055b6330:
  if (*(long *)(puVar4 + 0x18) != 0) {
    uVar8 = FUN_055aacb0(in_stack_00000030);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar15 = *(long *)puVar3;
    }
    puVar7 = *(undefined8 **)(lVar15 + 0xb8);
    lVar11 = puVar7[2];
    if (lVar11 == 0) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar9 = *puVar7;
      lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                 );
      FUN_03b78e40(lVar11,uVar9,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar16 = lVar11;
      LeanTween__value(plVar16,lVar11);
    }
    if (*(long *)(puVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = FUN_0383594c(uVar8,lVar11,*(undefined8 *)(*(long *)(puVar4 + 0x18) + 0x60),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
    if (lVar15 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar15 + 0x80) == '\0') {
        if (((unaff_w21 != 0) && (*(ulong *)(puVar4 + 0x28) >> 0x21 == 0)) &&
           ((*(ulong *)(puVar4 + 0x28) & 0xff) != 0)) {
          plVar16 = (long *)(lVar15 + 0x48);
          if (*plVar16 == 0) {
            lVar11 = FUN_055ae608(in_stack_00000038,*(undefined8 *)(lVar15 + 0x40));
            *plVar16 = lVar11;
            LeanTween__value(plVar16);
          }
          in_stack_00000098 = *(undefined8 *)(lVar15 + 0x90);
          if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar6 = FUN_043301f4(&stack0x00000098,
                               *(undefined4 *)(*(long *)(in_stack_00000038 + 0x20) + 0x2c),
                               *(undefined8 *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                              );
          if ((uVar6 >> 1 & 1) != 0) {
            uVar8 = FUN_055ab994(lVar15);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar9 = FUN_0547e2f8(0);
            uVar8 = FUN_055b0cf8(uVar9,in_stack_00000028,uVar8,uVar9,*(undefined8 *)(lVar15 + 0x48),
                                 *(undefined8 *)(lVar15 + 0x40));
            *(undefined8 *)(puVar4 + 0x30) = uVar8;
            LeanTween__value();
          }
        }
        lVar11 = FUN_055aacb0(in_stack_00000030);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = FUN_04792f70(lVar11,lVar15,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                            );
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar15 = *(long *)(puVar4 + 0x30);
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_02dd3048(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
          uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar8,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar10[(long)(int)uVar6 + 4] = lVar15;
        LeanTween__value(plVar10 + (long)(int)uVar6 + 4,lVar15);
        puVar4[0x38] = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar11 == 0) || (*(char *)(lVar15 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar10 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *plVar10;
  uVar9 = *(undefined8 *)(lVar15 + 0x40);
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar10 = (long *)(*(code *)*puVar7)(plVar10,uVar9,puVar7[1]);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar10 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar10);
    }
    if ((*(char *)((long)plVar10 + 0xf2) != '\0') && ((char)plVar10[5] == '\0')) {
      plVar10 = *(long **)(lVar15 + 0x68);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar15 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar10,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b66c4:
      lVar15 = (*(code *)*puVar7)(plVar10,uVar8,puVar7[1]);
      if (lVar15 != 0) {
        uVar9 = thunk_FUN_02da6564(lVar15,0);
        uVar9 = FUN_055ae66c(in_stack_00000038,uVar9);
        lVar12 = FUN_02979eb8(uVar9,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar12 + 0xf1) == '\0') {
          plVar10 = (long *)FUN_02979ef0(lVar15,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar10 = (long *)FUN_055a740c(lVar12,lVar15);
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar13 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar10);
        if ((uVar13 & 1) == 0) {
          if (*(char *)(lVar12 + 0xf1) == '\0') {
            auVar17 = FUN_02979ef0(lVar11,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar17 = FUN_055a740c(lVar12,lVar11);
          }
          uVar9 = auVar17._8_8_;
          if (auVar17._0_8_ != 0) {
            plVar16 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar17._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar16;
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar15 = *plVar16;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar7 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_02dd004c(plVar16,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar13 = (*(code *)*puVar7)(plVar16,puVar7[1]);
              plVar16 = in_stack_00000090;
              if ((uVar13 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar15 = *in_stack_00000090;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar9 = (*(code *)*puVar7)(plVar16,puVar7[1]);
              lVar15 = *plVar10;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar7)(plVar10,uVar9,puVar7[1]);
              plVar16 = in_stack_00000090;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
  }
  else if (*(int *)((long)plVar10 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar10);
    }
    if ((char)plVar10[5] == '\0') {
      plVar16 = *(long **)(lVar15 + 0x68);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar15 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar16,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b69d0:
      lVar15 = (*(code *)*puVar7)(plVar16,uVar8,puVar7[1]);
      if (lVar15 != 0) {
        if ((char)plVar10[0x20] == '\0') {
          plVar16 = (long *)FUN_02979ef0(lVar15,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar16 = (long *)FUN_055a9a84(plVar10,lVar15);
        }
        if ((char)plVar10[0x20] == '\0') {
          auVar17 = FUN_02979ef0(lVar11,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar17 = FUN_055a9a84(plVar10,lVar11);
        }
        uVar9 = auVar17._8_8_;
        if (auVar17._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar10 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar15 = *in_stack_00000080;
            uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar7 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar13 = (*(code *)*puVar7)(plVar10,puVar7[1]);
            plVar10 = in_stack_00000080;
            if ((uVar13 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar15 = *in_stack_00000080;
            uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar17 = (*(code *)*puVar7)(plVar10,puVar7[1]);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar15 = *plVar16;
            uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar7 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)FUN_02dd004c(plVar16,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar7)(plVar16,auVar17._0_8_,auVar17._8_8_,puVar7[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar9,0);
      }
    }
  }
LAB_055b65e0:
  puVar4[0x38] = 1;
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
}


