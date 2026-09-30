/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_SetVoipMicSource
ENTRY_POINT: 055b627c
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


/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b6418) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_NetSync_SetVoipMicSource(undefined8 param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *plVar14;
  long unaff_x28;
  undefined8 uVar15;
  undefined8 *unaff_x29;
  undefined1 auVar16 [16];
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
  
  do {
    if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0547e2f8(0);
    uVar6 = FUN_055b0cf8(uVar6,in_stack_00000028,param_1,uVar6,*(undefined8 *)(unaff_x23 + 0x48),
                         *(undefined8 *)(unaff_x23 + 0x40));
    *(undefined8 *)(unaff_x25 + 0x30) = uVar6;
    LeanTween__value();
    do {
      do {
        lVar7 = FUN_055aacb0(unaff_x28);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar3 = FUN_04792f70(lVar7,unaff_x23,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                            );
        if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar7 = *(long *)(unaff_x25 + 0x30);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*unaff_x26 + 0x40)), lVar8 == 0)) {
          uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar6,0);
        }
        if (*(uint *)(unaff_x26 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        unaff_x26[(long)(int)uVar3 + 4] = lVar7;
        LeanTween__value(unaff_x20 + (long)(int)uVar3 * 8,lVar7);
        *(char *)(unaff_x25 + 0x38) = (char)unaff_w19;
LAB_055b6160:
        do {
          uVar5 = FUN_05156804(&stack0x000000a0,*unaff_x29);
          unaff_x25 = (long)in_stack_000000b0;
          lVar7 = in_stack_00000040;
          if ((uVar5 & 1) == 0) {
            FUN_05156800(in_stack_00000048,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar7);
            }
            if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar6 = (**(code **)(in_stack_00000018 + 0x18))
                              (*(undefined8 *)(in_stack_00000018 + 0x40));
            if (in_stack_00000010 != 0) {
              FUN_055b4f70(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar6);
            }
            FUN_055b5334(in_stack_00000038,in_stack_00000028,unaff_x28,uVar6);
            FUN_04010c90(&stack0x00000040);
            in_stack_00000068 = &stack0x000000a0;
            in_stack_00000060 = 0;
            in_stack_000000a8 = in_stack_00000048;
            in_stack_000000a0 = in_stack_00000040;
            in_stack_000000b0 = in_stack_00000050;
            goto LAB_055b64a4;
          }
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
            lVar7 = *(long *)((long)in_stack_000000b0 + 0x18);
            if ((lVar7 != 0) && (*(char *)((long)in_stack_000000b0 + 0x28) == '\0')) {
              if (*(long **)((long)in_stack_000000b0 + 0x30) == (long *)0x0) {
                iVar10 = 1;
              }
              else if (**(long **)((long)in_stack_000000b0 + 0x30) ==
                       *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
                uVar5 = FUN_055b129c(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x48));
                iVar10 = unaff_w19;
                if ((uVar5 & 1) == 0) {
                  iVar10 = unaff_w19 + 1;
                }
              }
              else {
                iVar10 = 2;
              }
              in_stack_00000060 = 0;
              FUN_043301b0(&stack0x00000060,iVar10,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                          );
              *(long *)(unaff_x25 + 0x28) = in_stack_00000060;
            }
          }
          unaff_x23 = *(long *)(unaff_x25 + 0x20);
          if (unaff_x23 == 0) {
            if (*(long *)(unaff_x25 + 0x18) == 0) goto LAB_055b6160;
            uVar6 = FUN_055aacb0(unaff_x28);
            lVar7 = *unaff_x24;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar7 = *unaff_x24;
            }
            puVar11 = *(undefined8 **)(lVar7 + 0xb8);
            lVar8 = puVar11[2];
            if (lVar8 == 0) {
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar11 = *(undefined8 **)(*unaff_x24 + 0xb8);
              }
              uVar15 = *puVar11;
              lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                        );
              FUN_03b78e40(lVar8,uVar15,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                           ,0);
              plVar14 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
              *plVar14 = lVar8;
              LeanTween__value(plVar14,lVar8);
              unaff_x28 = in_stack_00000030;
            }
            if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            unaff_x23 = FUN_0383594c(uVar6,lVar8,*(undefined8 *)(*(long *)(unaff_x25 + 0x18) + 0x60)
                                     ,*(undefined8 *)
                                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                                    );
            if (unaff_x23 == 0) goto LAB_055b6160;
          }
        } while (*(char *)(unaff_x23 + 0x80) != '\0');
      } while (((unaff_w21 == 0) || (*(ulong *)(unaff_x25 + 0x28) >> 0x21 != 0)) ||
              ((*(ulong *)(unaff_x25 + 0x28) & 0xff) == 0));
      plVar14 = (long *)(unaff_x23 + 0x48);
      if (*plVar14 == 0) {
        lVar7 = FUN_055ae608(in_stack_00000038,*(undefined8 *)(unaff_x23 + 0x40));
        *plVar14 = lVar7;
        LeanTween__value(plVar14);
      }
      in_stack_00000098 = *(undefined8 *)(unaff_x23 + 0x90);
      if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = FUN_043301f4(&stack0x00000098,
                           *(undefined4 *)(*(long *)(in_stack_00000038 + 0x20) + 0x2c),
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                          );
    } while ((uVar3 >> 1 & 1) == 0);
    param_1 = FUN_055ab994(unaff_x23);
  } while( true );
LAB_055b64a4:
  do {
    uVar5 = FUN_05156804(&stack0x000000a0,*unaff_x29);
    puVar2 = in_stack_000000b0;
    lVar7 = in_stack_00000060;
    if ((uVar5 & 1) == 0) {
      FUN_05156800(in_stack_00000068,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar7);
      }
      if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
        FUN_04010c90(&stack0x00000040);
        in_stack_000000b0 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x000000a0;
        while (uVar5 = FUN_05156804(&stack0x000000a0,*unaff_x29), (uVar5 & 1) != 0) {
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((in_stack_000000b0[0x38] == '\0') &&
             ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
              ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
            lVar7 = *(long *)(in_stack_00000030 + 0xe0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),uVar6,*(undefined8 *)(in_stack_000000b0 + 0x10)
                       ,*(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar7 + 0x28));
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
        while (uVar5 = FUN_05156804(&stack0x000000a0,*unaff_x29), puVar2 = in_stack_000000b0,
              (uVar5 & 1) != 0) {
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
                              (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1c0));
            FUN_055b7880(in_stack_00000038,uVar6,in_stack_00000028,in_stack_00000030,uVar4,
                         *(undefined8 *)(puVar2 + 0x18),*(undefined4 *)(puVar2 + 0x2c),
                         puVar2[0x38] == '\0');
          }
        }
        FUN_05156800(&stack0x000000a0,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                    );
      }
      FUN_055b5560(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar6);
      return uVar6;
    }
    if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  } while ((((in_stack_000000b0[0x38] != '\0') ||
            (lVar7 = *(long *)(in_stack_000000b0 + 0x18), lVar7 == 0)) ||
           (*(char *)(lVar7 + 0x80) != '\0')) ||
          ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
           ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
  lVar8 = *(long *)(in_stack_000000b0 + 0x30);
  uVar5 = FUN_055b4e68(in_stack_00000038,lVar7,unaff_x28,lVar8);
  if ((uVar5 & 1) == 0) goto LAB_055b6554;
  plVar14 = *(long **)(lVar7 + 0x68);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar7 = *plVar14;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar11 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_055b65cc;
      }
      uVar5 = uVar5 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar5 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_02dd004c(plVar14,*(long *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                         ,0);
LAB_055b65cc:
  (*(code *)*puVar11)(plVar14,uVar6,lVar8,puVar11[1]);
  goto LAB_055b65e0;
LAB_055b6554:
  if ((lVar8 == 0) || (*(char *)(lVar7 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar14 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar12 = *plVar14;
  uVar15 = *(undefined8 *)(lVar7 + 0x40);
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar5 = uVar5 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar5 != 0);
  }
  puVar11 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar14 = (long *)(*(code *)*puVar11)(plVar14,uVar15,puVar11[1]);
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
      plVar14 = *(long **)(lVar7 + 0x68);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar14;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_02dd004c(plVar14,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b66c4:
      lVar7 = (*(code *)*puVar11)(plVar14,uVar6,puVar11[1]);
      if (lVar7 != 0) {
        uVar15 = thunk_FUN_02da6564(lVar7,0);
        uVar15 = FUN_055ae66c(in_stack_00000038,uVar15);
        lVar12 = FUN_02979eb8(uVar15,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar12 + 0xf1) == '\0') {
          plVar14 = (long *)FUN_02979ef0(lVar7,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar14 = (long *)FUN_055a740c(lVar12,lVar7);
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar14);
        if ((uVar5 & 1) == 0) {
          if (*(char *)(lVar12 + 0xf1) == '\0') {
            auVar16 = FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar16 = FUN_055a740c(lVar12,lVar8);
          }
          uVar15 = auVar16._8_8_;
          if (auVar16._0_8_ != 0) {
            plVar9 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar16._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar9;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar7 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar11 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar11 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar5 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              plVar9 = in_stack_00000090;
              if ((uVar5 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar7 = *in_stack_00000090;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar11 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar15 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              lVar7 = *plVar14;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar11 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar11)(plVar14,uVar15,puVar11[1]);
              plVar9 = in_stack_00000090;
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
      plVar9 = *(long **)(lVar7 + 0x68);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_02dd004c(plVar9,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar7 = (*(code *)*puVar11)(plVar9,uVar6,puVar11[1]);
      if (lVar7 != 0) {
        if ((char)plVar14[0x20] == '\0') {
          plVar9 = (long *)FUN_02979ef0(lVar7,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar9 = (long *)FUN_055a9a84(plVar14,lVar7);
        }
        if ((char)plVar14[0x20] == '\0') {
          auVar16 = FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar16 = FUN_055a9a84(plVar14,lVar8);
        }
        uVar15 = auVar16._8_8_;
        if (auVar16._0_8_ != 0) {
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
            lVar7 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar5 = (*(code *)*puVar11)(plVar14,puVar11[1]);
            plVar14 = in_stack_00000080;
            if ((uVar5 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar7 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar16 = (*(code *)*puVar11)(plVar14,puVar11[1]);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar7 = *plVar9;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar11)(plVar9,auVar16._0_8_,auVar16._8_8_,puVar11[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar15,0);
      }
    }
  }
LAB_055b65e0:
  puVar2[0x38] = 1;
  unaff_x28 = in_stack_00000030;
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
}


