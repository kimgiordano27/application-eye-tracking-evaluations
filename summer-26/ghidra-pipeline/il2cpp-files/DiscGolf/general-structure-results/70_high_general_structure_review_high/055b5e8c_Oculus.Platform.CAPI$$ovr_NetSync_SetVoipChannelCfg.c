/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_SetVoipChannelCfg
ENTRY_POINT: 055b5e8c
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

undefined8 Oculus_Platform_CAPI__ovr_NetSync_SetVoipChannelCfg(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *plVar15;
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
  long *in_stack_000000b8;
  
LAB_055b5e9c:
  uVar7 = (*(code *)*param_1)(unaff_x23,param_1[1]);
  plVar15 = in_stack_000000b8;
  puVar3 = System_Action<bool,_List<OVRAnchor>>_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar8 = thunk_FUN_02dd3144(*unaff_x19);
    FUN_0552aca4(lVar8,0);
    plVar15 = in_stack_000000b8;
    if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *in_stack_000000b8;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x20) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_055b5f14;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*unaff_x20,0);
LAB_055b5f14:
    lVar12 = (*(code *)*puVar9)(plVar15,puVar9[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar15 = (long *)(lVar8 + 0x10);
    *plVar15 = lVar12;
    LeanTween__value(plVar15);
    if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(*plVar15 + 0x80) == '\0') {
      uVar10 = thunk_FUN_02dd3144(*unaff_x24);
      FUN_03b7820c(uVar10,lVar8,*unaff_x25,0);
      uVar7 = FUN_035f7d60();
      if ((uVar7 & 1) != 0) {
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = *(undefined8 *)(*plVar15 + 0x30);
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                  );
        FUN_0552aca4(lVar8,0);
        *(undefined8 *)(lVar8 + 0x10) = uVar10;
        LeanTween__value((undefined8 *)(lVar8 + 0x10),uVar10);
        *(long *)(lVar8 + 0x18) = *plVar15;
        LeanTween__value();
        in_stack_00000060 = 0;
        FUN_043301b0(&stack0x00000060,0,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                    );
        *(long *)(lVar8 + 0x28) = in_stack_00000060;
        if (unaff_x22 == 0) {
LAB_055b6e68:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar12 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_055b6e68;
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        if (uVar6 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          plVar15 = (long *)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
          *plVar15 = lVar8;
          LeanTween__value(plVar15,lVar8);
        }
        else {
          FUN_040101ec();
        }
      }
    }
    unaff_x23 = in_stack_000000b8;
    if (in_stack_000000b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = *in_stack_000000b8;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
          param_1 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_055b5e9c;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    param_1 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)PTR_DAT_069fbff8,0);
    goto LAB_055b5e9c;
  }
  if (in_stack_000000b8 != (long *)0x0) {
    lVar8 = *in_stack_000000b8;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_055b60c4;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_02dd004c(in_stack_000000b8,*(long *)PTR_DAT_069fbff0,0);
LAB_055b60c4:
    (*(code *)*puVar9)(plVar15,puVar9[1]);
  }
  lVar8 = FUN_055aacb0(in_stack_00000030);
  puVar2 = PTR_DAT_069fc180;
  if (lVar8 != 0) {
    uVar5 = FUN_047928e8(lVar8,*(undefined8 *)System_Action<PinchGesture,_Touch,_Touch>_TypeInfo);
    plVar15 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,uVar5);
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
      uVar7 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
      puVar4 = in_stack_000000b0;
      lVar8 = in_stack_00000040;
      if ((uVar7 & 1) != 0) {
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
          lVar8 = *(long *)(in_stack_000000b0 + 0x18);
          if ((lVar8 != 0) && (in_stack_000000b0[0x28] == '\0')) {
            if (*(long **)(in_stack_000000b0 + 0x30) == (long *)0x0) {
              uVar5 = 1;
            }
            else if (**(long **)(in_stack_000000b0 + 0x30) == *(long *)(PTR_DAT_069fb9c0 + 0x90)) {
              uVar7 = FUN_055b129c(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x48));
              uVar5 = 1;
              if ((uVar7 & 1) == 0) {
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
        lVar8 = *(long *)(puVar4 + 0x20);
        if (lVar8 == 0) goto LAB_055b6330;
        goto LAB_055b61fc;
      }
      FUN_05156800(in_stack_00000048,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar8);
      }
      if (in_stack_00000018 != 0) {
        uVar10 = (**(code **)(in_stack_00000018 + 0x18))
                           (*(undefined8 *)(in_stack_00000018 + 0x40),plVar15,
                            *(undefined8 *)(in_stack_00000018 + 0x28));
        if (in_stack_00000010 != 0) {
          FUN_055b4f70(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar10);
        }
        FUN_055b5334(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar10);
        FUN_04010c90(&stack0x00000040);
        in_stack_00000068 = &stack0x000000a0;
        in_stack_00000060 = 0;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000050;
LAB_055b64a4:
        do {
          uVar7 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2);
          puVar4 = in_stack_000000b0;
          lVar8 = in_stack_00000060;
          if ((uVar7 & 1) == 0) {
            FUN_05156800(in_stack_00000068,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
            if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96858(lVar8);
            }
            if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
              FUN_04010c90(&stack0x00000040);
              in_stack_000000b0 = in_stack_00000050;
              in_stack_000000a8 = in_stack_00000048;
              in_stack_000000a0 = in_stack_00000040;
              in_stack_00000040 = 0;
              in_stack_00000048 = &stack0x000000a0;
              while (uVar7 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2), (uVar7 & 1) != 0)
              {
                if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if ((in_stack_000000b0[0x38] == '\0') &&
                   ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
                    ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
                  lVar8 = *(long *)(in_stack_00000030 + 0xe0);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),uVar10,
                             *(undefined8 *)(in_stack_000000b0 + 0x10),
                             *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar8 + 0x28)
                            );
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
              while (uVar7 = FUN_05156804(&stack0x000000a0,*(undefined8 *)puVar2),
                    puVar4 = in_stack_000000b0, (uVar7 & 1) != 0) {
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
                  FUN_055b7880(in_stack_00000038,uVar10,in_stack_00000028,in_stack_00000030,uVar5,
                               *(undefined8 *)(puVar4 + 0x18),*(undefined4 *)(puVar4 + 0x2c),
                               puVar4[0x38] == '\0');
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
                  (lVar8 = *(long *)(in_stack_000000b0 + 0x18), lVar8 == 0)) ||
                 (*(char *)(lVar8 + 0x80) != '\0')) ||
                ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
                 ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
        lVar12 = *(long *)(in_stack_000000b0 + 0x30);
        uVar7 = FUN_055b4e68(in_stack_00000038,lVar8,in_stack_00000030,lVar12);
        if ((uVar7 & 1) == 0) goto LAB_055b6554;
        plVar15 = *(long **)(lVar8 + 0x68);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *plVar15;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_055b65cc;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_02dd004c(plVar15,*(long *)
                                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                              ,0);
LAB_055b65cc:
        (*(code *)*puVar9)(plVar15,uVar10,lVar12,puVar9[1]);
        goto LAB_055b65e0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_055b6330:
  if (*(long *)(puVar4 + 0x18) != 0) {
    uVar10 = FUN_055aacb0(in_stack_00000030);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar8 = *(long *)puVar3;
    }
    puVar9 = *(undefined8 **)(lVar8 + 0xb8);
    lVar12 = puVar9[2];
    if (lVar12 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar11 = *puVar9;
      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryResponse>>_TypeInfo
                                 );
      FUN_03b78e40(lVar12,uVar11,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<RegionsResponseBody>>_TypeInfo
                   ,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar16 = lVar12;
      LeanTween__value(plVar16,lVar12);
    }
    if (*(long *)(puVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = FUN_0383594c(uVar10,lVar12,*(undefined8 *)(*(long *)(puVar4 + 0x18) + 0x60),
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                        );
    if (lVar8 != 0) {
LAB_055b61fc:
      if (*(char *)(lVar8 + 0x80) == '\0') {
        if (((unaff_w21 != 0) && (*(ulong *)(puVar4 + 0x28) >> 0x21 == 0)) &&
           ((*(ulong *)(puVar4 + 0x28) & 0xff) != 0)) {
          plVar16 = (long *)(lVar8 + 0x48);
          if (*plVar16 == 0) {
            lVar12 = FUN_055ae608(in_stack_00000038,*(undefined8 *)(lVar8 + 0x40));
            *plVar16 = lVar12;
            LeanTween__value(plVar16);
          }
          in_stack_00000098 = *(undefined8 *)(lVar8 + 0x90);
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
            uVar10 = FUN_055ab994(lVar8);
            if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_0547e2f8(0);
            uVar10 = FUN_055b0cf8(uVar11,in_stack_00000028,uVar10,uVar11,
                                  *(undefined8 *)(lVar8 + 0x48),*(undefined8 *)(lVar8 + 0x40));
            *(undefined8 *)(puVar4 + 0x30) = uVar10;
            LeanTween__value();
          }
        }
        lVar12 = FUN_055aacb0(in_stack_00000030);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = FUN_04792f70(lVar12,lVar8,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<FileList>>_TypeInfo
                            );
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *(long *)(puVar4 + 0x30);
        if ((lVar8 != 0) &&
           (lVar12 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar15 + 0x40)), lVar12 == 0)) {
          uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar10,0);
        }
        if (*(uint *)(plVar15 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar15[(long)(int)uVar6 + 4] = lVar8;
        LeanTween__value(plVar15 + (long)(int)uVar6 + 4,lVar8);
        puVar4[0x38] = 1;
      }
    }
  }
  goto LAB_055b6160;
LAB_055b6554:
  if ((lVar12 == 0) || (*(char *)(lVar8 + 0x82) != '\0')) goto LAB_055b64a4;
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
  uVar11 = *(undefined8 *)(lVar8 + 0x40);
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar7 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar15 = (long *)(*(code *)*puVar9)(plVar15,uVar11,puVar9[1]);
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
      plVar15 = *(long **)(lVar8 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar15;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02dd004c(plVar15,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b66c4:
      lVar8 = (*(code *)*puVar9)(plVar15,uVar10,puVar9[1]);
      if (lVar8 != 0) {
        uVar11 = thunk_FUN_02da6564(lVar8,0);
        uVar11 = FUN_055ae66c(in_stack_00000038,uVar11);
        lVar13 = FUN_02979eb8(uVar11,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar13 + 0xf1) == '\0') {
          plVar15 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar15 = (long *)FUN_055a740c(lVar13,lVar8);
        }
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar7 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar15);
        if ((uVar7 & 1) == 0) {
          if (*(char *)(lVar13 + 0xf1) == '\0') {
            auVar17 = FUN_02979ef0(lVar12,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar17 = FUN_055a740c(lVar13,lVar12);
          }
          uVar11 = auVar17._8_8_;
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
              lVar8 = *plVar16;
              uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
              puVar9 = (undefined8 *)FUN_02dd004c(plVar16,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar7 = (*(code *)*puVar9)(plVar16,puVar9[1]);
              plVar16 = in_stack_00000090;
              if ((uVar7 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar8 = *in_stack_00000090;
              uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
              puVar9 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar11 = (*(code *)*puVar9)(plVar16,puVar9[1]);
              lVar8 = *plVar15;
              uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar7 != 0) {
                piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar7 = uVar7 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar7 != 0);
              }
              puVar9 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar9)(plVar15,uVar11,puVar9[1]);
              plVar16 = in_stack_00000090;
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
      plVar16 = *(long **)(lVar8 + 0x68);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar16;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar7 = uVar7 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02dd004c(plVar16,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b69d0:
      lVar8 = (*(code *)*puVar9)(plVar16,uVar10,puVar9[1]);
      if (lVar8 != 0) {
        if ((char)plVar15[0x20] == '\0') {
          plVar16 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar16 = (long *)FUN_055a9a84(plVar15,lVar8);
        }
        if ((char)plVar15[0x20] == '\0') {
          auVar17 = FUN_02979ef0(lVar12,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar17 = FUN_055a9a84(plVar15,lVar12);
        }
        uVar11 = auVar17._8_8_;
        if (auVar17._0_8_ != 0) {
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
            lVar8 = *in_stack_00000080;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar7 = (*(code *)*puVar9)(plVar15,puVar9[1]);
            plVar15 = in_stack_00000080;
            if ((uVar7 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *in_stack_00000080;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar17 = (*(code *)*puVar9)(plVar15,puVar9[1]);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *plVar16;
            uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar9 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_02dd004c(plVar16,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar9)(plVar16,auVar17._0_8_,auVar17._8_8_,puVar9[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar11,0);
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


