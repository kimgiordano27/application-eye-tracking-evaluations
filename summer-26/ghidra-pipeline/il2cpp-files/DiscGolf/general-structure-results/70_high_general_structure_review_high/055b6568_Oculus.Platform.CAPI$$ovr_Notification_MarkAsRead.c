/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Notification_MarkAsRead
ENTRY_POINT: 055b6568
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_Notification_MarkAsRead(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 unaff_w20;
  int unaff_w21;
  undefined1 *unaff_x23;
  long unaff_x24;
  long *plVar10;
  long unaff_x26;
  undefined8 uVar11;
  undefined8 *unaff_x29;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined1 *in_stack_00000050;
  undefined1 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000080;
  long *in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined1 *in_stack_000000b0;
  
code_r0x055b6568:
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar7 = *plVar10;
  uVar11 = *(undefined8 *)(unaff_x26 + 0x40);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar10 = (long *)(*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
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
      plVar10 = *(long **)(unaff_x26 + 0x68);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02dd004c(plVar10,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b66c4:
      lVar7 = (*(code *)*puVar4)(plVar10,in_stack_00000020,puVar4[1]);
      if (lVar7 != 0) {
        uVar11 = thunk_FUN_02da6564(lVar7,0);
        uVar11 = FUN_055ae66c(in_stack_00000038,uVar11);
        lVar5 = FUN_02979eb8(uVar11,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar5 + 0xf1) == '\0') {
          plVar10 = (long *)FUN_02979ef0(lVar7,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar10 = (long *)FUN_055a740c(lVar5,lVar7);
        }
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar8 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar10);
        if ((uVar8 & 1) == 0) {
          if (*(char *)(lVar5 + 0xf1) == '\0') {
            auVar12 = FUN_02979ef0(unaff_x24,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar12 = FUN_055a740c(lVar5,unaff_x24);
          }
          uVar11 = auVar12._8_8_;
          if (auVar12._0_8_ != 0) {
            plVar6 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar12._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar6;
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar7 = *plVar6;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar8 = (*(code *)*puVar4)(plVar6,puVar4[1]);
              plVar6 = in_stack_00000090;
              if ((uVar8 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar7 = *in_stack_00000090;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar11 = (*(code *)*puVar4)(plVar6,puVar4[1]);
              lVar7 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
              plVar6 = in_stack_00000090;
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
      plVar6 = *(long **)(unaff_x26 + 0x68);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02dd004c(plVar6,*(long *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b69d0:
      lVar7 = (*(code *)*puVar4)(plVar6,in_stack_00000020,puVar4[1]);
      if (lVar7 != 0) {
        if ((char)plVar10[0x20] == '\0') {
          plVar6 = (long *)FUN_02979ef0(lVar7,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar6 = (long *)FUN_055a9a84(plVar10,lVar7);
        }
        if ((char)plVar10[0x20] == '\0') {
          auVar12 = FUN_02979ef0(unaff_x24,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar12 = FUN_055a9a84(plVar10,unaff_x24);
        }
        uVar11 = auVar12._8_8_;
        if (auVar12._0_8_ != 0) {
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
            lVar7 = *in_stack_00000080;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
            plVar10 = in_stack_00000080;
            if ((uVar8 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar7 = *in_stack_00000080;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar12 = (*(code *)*puVar4)(plVar10,puVar4[1]);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar7 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar4)(plVar6,auVar12._0_8_,auVar12._8_8_,puVar4[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar11,0);
      }
    }
  }
  goto LAB_055b65e0;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
LAB_055b65e0:
  do {
    unaff_x23[0x38] = unaff_w20;
    while( true ) {
      do {
        uVar8 = FUN_05156804(&stack0x000000a0,*unaff_x29);
        unaff_x23 = in_stack_000000b0;
        lVar7 = in_stack_00000060;
        if ((uVar8 & 1) == 0) {
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
            while (uVar8 = FUN_05156804(&stack0x000000a0,*unaff_x29), (uVar8 & 1) != 0) {
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
                          (*(undefined8 *)(lVar7 + 0x40),in_stack_00000020,
                           *(undefined8 *)(in_stack_000000b0 + 0x10),
                           *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar7 + 0x28));
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
            while (uVar8 = FUN_05156804(&stack0x000000a0,*unaff_x29), puVar2 = in_stack_000000b0,
                  (uVar8 & 1) != 0) {
              if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(long *)(in_stack_000000b0 + 0x18) != 0) {
                if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar3 = (**(code **)(*in_stack_00000028 + 0x1b8))
                                  (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1c0));
                FUN_055b7880(in_stack_00000038,in_stack_00000020,in_stack_00000028,in_stack_00000030
                             ,uVar3,*(undefined8 *)(puVar2 + 0x18),*(undefined4 *)(puVar2 + 0x2c),
                             puVar2[0x38] == '\0');
              }
            }
            FUN_05156800(&stack0x000000a0,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                        );
          }
          FUN_055b5560(in_stack_00000038,in_stack_00000028,in_stack_00000030,in_stack_00000020);
          return in_stack_00000020;
        }
        if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      } while ((((in_stack_000000b0[0x38] != '\0') ||
                (unaff_x26 = *(long *)(in_stack_000000b0 + 0x18), unaff_x26 == 0)) ||
               (*(char *)(unaff_x26 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
      unaff_x24 = *(long *)(in_stack_000000b0 + 0x30);
      uVar8 = FUN_055b4e68(in_stack_00000038,unaff_x26,in_stack_00000030,unaff_x24);
      if ((uVar8 & 1) != 0) break;
      if ((unaff_x24 != 0) && (*(char *)(unaff_x26 + 0x82) == '\0')) {
        param_1 = *(long *)(in_stack_00000038 + 0x20);
        goto code_r0x055b6568;
      }
    }
    plVar10 = *(long **)(unaff_x26 + 0x68);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_055b65cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                          ,0);
LAB_055b65cc:
    (*(code *)*puVar4)(plVar10,in_stack_00000020,unaff_x24,puVar4[1]);
  } while( true );
}


