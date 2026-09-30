/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_SetVoipSessionMuted
ENTRY_POINT: 055b6300
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_12
*/


/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b6418) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_NetSync_SetVoipSessionMuted(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  uint unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *plVar15;
  long unaff_x27;
  long unaff_x28;
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
    lVar9 = thunk_FUN_02dd3048(param_1,param_2);
    param_1 = unaff_x27;
    if (lVar9 == 0) {
      uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,0);
    }
    do {
      if (*(uint *)(unaff_x26 + 3) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      unaff_x26[(long)(int)unaff_w23 + 4] = param_1;
      LeanTween__value(unaff_x20 + (long)(int)unaff_w23 * 8,param_1);
      *(char *)(unaff_x25 + 0x38) = (char)unaff_w19;
LAB_055b6160:
      do {
        uVar5 = FUN_05156804(&stack0x000000a0,*unaff_x29);
        unaff_x25 = (long)in_stack_000000b0;
        lVar9 = in_stack_00000040;
        if ((uVar5 & 1) == 0) {
          FUN_05156800(in_stack_00000048,
                       *(undefined8 *)
                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                      );
          if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96858(lVar9);
          }
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar7 = (**(code **)(in_stack_00000018 + 0x18))(*(undefined8 *)(in_stack_00000018 + 0x40))
          ;
          if (in_stack_00000010 != 0) {
            FUN_055b4f70(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar7);
          }
          FUN_055b5334(in_stack_00000038,in_stack_00000028,unaff_x28,uVar7);
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
          lVar9 = *(long *)((long)in_stack_000000b0 + 0x18);
          if ((lVar9 != 0) && (*(char *)((long)in_stack_000000b0 + 0x28) == '\0')) {
            if (*(long **)((long)in_stack_000000b0 + 0x30) == (long *)0x0) {
              iVar11 = 1;
            }
            else if (**(long **)((long)in_stack_000000b0 + 0x30) ==
                     *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar5 = FUN_055b129c(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x48));
              iVar11 = unaff_w19;
              if ((uVar5 & 1) == 0) {
                iVar11 = unaff_w19 + 1;
              }
            }
            else {
              iVar11 = 2;
            }
            in_stack_00000060 = 0;
            FUN_043301b0(&stack0x00000060,iVar11,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                        );
            *(long *)(unaff_x25 + 0x28) = in_stack_00000060;
          }
        }
        lVar9 = *(long *)(unaff_x25 + 0x20);
        if (lVar9 == 0) {
          if (*(long *)(unaff_x25 + 0x18) == 0) goto LAB_055b6160;
          uVar7 = FUN_055aacb0(unaff_x28);
          lVar9 = *unaff_x24;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar9 = *unaff_x24;
          }
          puVar12 = *(undefined8 **)(lVar9 + 0xb8);
          lVar6 = puVar12[2];
          if (lVar6 == 0) {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              puVar12 = *(undefined8 **)(*unaff_x24 + 0xb8);
            }
            uVar8 = *puVar12;
            lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                      );
            FUN_03b78e40(lVar6,uVar8,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                         ,0);
            plVar15 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
            *plVar15 = lVar6;
            LeanTween__value(plVar15,lVar6);
            unaff_x28 = in_stack_00000030;
          }
          if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar9 = FUN_0383594c(uVar7,lVar6,*(undefined8 *)(*(long *)(unaff_x25 + 0x18) + 0x60),
                               *(undefined8 *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                              );
          if (lVar9 == 0) goto LAB_055b6160;
        }
      } while (*(char *)(lVar9 + 0x80) != '\0');
      if (((unaff_w21 != 0) && (*(ulong *)(unaff_x25 + 0x28) >> 0x21 == 0)) &&
         ((*(ulong *)(unaff_x25 + 0x28) & 0xff) != 0)) {
        plVar15 = (long *)(lVar9 + 0x48);
        if (*plVar15 == 0) {
          lVar6 = FUN_055ae608(in_stack_00000038,*(undefined8 *)(lVar9 + 0x40));
          *plVar15 = lVar6;
          LeanTween__value(plVar15);
        }
        in_stack_00000098 = *(undefined8 *)(lVar9 + 0x90);
        if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar3 = FUN_043301f4(&stack0x00000098,
                             *(undefined4 *)(*(long *)(in_stack_00000038 + 0x20) + 0x2c),
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                            );
        if ((uVar3 >> 1 & 1) != 0) {
          uVar7 = FUN_055ab994(lVar9);
          if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar8 = FUN_0547e2f8(0);
          uVar7 = FUN_055b0cf8(uVar8,in_stack_00000028,uVar7,uVar8,*(undefined8 *)(lVar9 + 0x48),
                               *(undefined8 *)(lVar9 + 0x40));
          *(undefined8 *)(unaff_x25 + 0x30) = uVar7;
          LeanTween__value();
        }
      }
      lVar6 = FUN_055aacb0(unaff_x28);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      unaff_w23 = FUN_04792f70(lVar6,lVar9,
                               *(undefined8 *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                              );
      if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      param_1 = *(long *)(unaff_x25 + 0x30);
    } while (param_1 == 0);
    param_2 = *(undefined8 *)(*unaff_x26 + 0x40);
    unaff_x27 = param_1;
  } while( true );
LAB_055b64a4:
  do {
    uVar5 = FUN_05156804(&stack0x000000a0,*unaff_x29);
    puVar2 = in_stack_000000b0;
    lVar9 = in_stack_00000060;
    if ((uVar5 & 1) == 0) {
      FUN_05156800(in_stack_00000068,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar9);
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
            lVar9 = *(long *)(in_stack_00000030 + 0xe0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),uVar7,*(undefined8 *)(in_stack_000000b0 + 0x10)
                       ,*(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar9 + 0x28));
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
            FUN_055b7880(in_stack_00000038,uVar7,in_stack_00000028,in_stack_00000030,uVar4,
                         *(undefined8 *)(puVar2 + 0x18),*(undefined4 *)(puVar2 + 0x2c),
                         puVar2[0x38] == '\0');
          }
        }
        FUN_05156800(&stack0x000000a0,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                    );
      }
      FUN_055b5560(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar7);
      return uVar7;
    }
    if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  } while ((((in_stack_000000b0[0x38] != '\0') ||
            (lVar9 = *(long *)(in_stack_000000b0 + 0x18), lVar9 == 0)) ||
           (*(char *)(lVar9 + 0x80) != '\0')) ||
          ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
           ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
  lVar6 = *(long *)(in_stack_000000b0 + 0x30);
  uVar5 = FUN_055b4e68(in_stack_00000038,lVar9,unaff_x28,lVar6);
  if ((uVar5 & 1) == 0) goto LAB_055b6554;
  plVar15 = *(long **)(lVar9 + 0x68);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar15;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_055b65cc;
      }
      uVar5 = uVar5 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar5 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_02dd004c(plVar15,*(long *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                         ,0);
LAB_055b65cc:
  (*(code *)*puVar12)(plVar15,uVar7,lVar6,puVar12[1]);
  goto LAB_055b65e0;
LAB_055b6554:
  if ((lVar6 == 0) || (*(char *)(lVar9 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar15 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar13 = *plVar15;
  uVar8 = *(undefined8 *)(lVar9 + 0x40);
  uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar5 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar5 = uVar5 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar5 != 0);
  }
  puVar12 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar15 = (long *)(*(code *)*puVar12)(plVar15,uVar8,puVar12[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar15 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar15);
    }
    if ((*(char *)((long)plVar15 + 0xf2) != '\0') && ((char)plVar15[5] == '\0')) {
      plVar15 = *(long **)(lVar9 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar15;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02dd004c(plVar15,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b66c4:
      lVar9 = (*(code *)*puVar12)(plVar15,uVar7,puVar12[1]);
      if (lVar9 != 0) {
        uVar8 = thunk_FUN_02da6564(lVar9,0);
        uVar8 = FUN_055ae66c(in_stack_00000038,uVar8);
        lVar13 = FUN_02979eb8(uVar8,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar13 + 0xf1) == '\0') {
          plVar15 = (long *)FUN_02979ef0(lVar9,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar15 = (long *)FUN_055a740c(lVar13,lVar9);
        }
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar15);
        if ((uVar5 & 1) == 0) {
          if (*(char *)(lVar13 + 0xf1) == '\0') {
            auVar16 = FUN_02979ef0(lVar6,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar16 = FUN_055a740c(lVar13,lVar6);
          }
          uVar8 = auVar16._8_8_;
          if (auVar16._0_8_ != 0) {
            plVar10 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar16._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar10;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar9 = *plVar10;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 != 0) {
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar5 = uVar5 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar5 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar5 = (*(code *)*puVar12)(plVar10,puVar12[1]);
              plVar10 = in_stack_00000090;
              if ((uVar5 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar9 = *in_stack_00000090;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 != 0) {
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar5 = uVar5 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar5 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
              lVar9 = *plVar15;
              uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar5 != 0) {
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar5 = uVar5 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar5 != 0);
              }
              puVar12 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar12)(plVar15,uVar8,puVar12[1]);
              plVar10 = in_stack_00000090;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
  }
  else if (*(int *)((long)plVar15 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar15);
    }
    if ((char)plVar15[5] == '\0') {
      plVar10 = *(long **)(lVar9 + 0x68);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02dd004c(plVar10,*(long *)
                                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                             ,1);
LAB_055b69d0:
      lVar9 = (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
      if (lVar9 != 0) {
        if ((char)plVar15[0x20] == '\0') {
          plVar10 = (long *)FUN_02979ef0(lVar9,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar10 = (long *)FUN_055a9a84(plVar15,lVar9);
        }
        if ((char)plVar15[0x20] == '\0') {
          auVar16 = FUN_02979ef0(lVar6,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar16 = FUN_055a9a84(plVar15,lVar6);
        }
        uVar8 = auVar16._8_8_;
        if (auVar16._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar15 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar9 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar5 = uVar5 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar5 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar5 = (*(code *)*puVar12)(plVar15,puVar12[1]);
            plVar15 = in_stack_00000080;
            if ((uVar5 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar9 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar5 = uVar5 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar5 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar16 = (*(code *)*puVar12)(plVar15,puVar12[1]);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar9 = *plVar10;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar5 = uVar5 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar5 != 0);
            }
            puVar12 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar12)(plVar10,auVar16._0_8_,auVar16._8_8_,puVar12[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar8,0);
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


