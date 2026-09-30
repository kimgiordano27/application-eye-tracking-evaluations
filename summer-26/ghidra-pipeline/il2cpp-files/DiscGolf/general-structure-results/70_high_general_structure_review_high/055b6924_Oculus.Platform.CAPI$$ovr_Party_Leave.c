/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Party_Leave
ENTRY_POINT: 055b6924
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


/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_Party_Leave(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 unaff_w20;
  int unaff_w21;
  undefined1 *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *unaff_x29;
  undefined1 auVar13 [16];
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
  
  iVar7 = *(int *)((long)unaff_x25 + 0x24);
LAB_055b6928:
  if (iVar7 == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(unaff_x25);
    }
    if ((char)unaff_x25[5] == '\0') {
      plVar11 = *(long **)(unaff_x26 + 0x68);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(plVar11,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b69d0:
      lVar8 = (*(code *)*puVar6)(plVar11,in_stack_00000020,puVar6[1]);
      if (lVar8 != 0) {
        if ((char)unaff_x25[0x20] == '\0') {
          plVar11 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar11 = (long *)FUN_055a9a84(unaff_x25,lVar8);
        }
        if ((char)unaff_x25[0x20] == '\0') {
          auVar13 = FUN_02979ef0(unaff_x24,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar13 = FUN_055a9a84(unaff_x25,unaff_x24);
        }
        uVar12 = auVar13._8_8_;
        if (auVar13._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850,auVar13._0_8_);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar5 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *in_stack_00000080;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            plVar5 = in_stack_00000080;
            if ((uVar9 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *in_stack_00000080;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar6)(plVar11,auVar13._0_8_,auVar13._8_8_,puVar6[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar12,0);
      }
    }
  }
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
LAB_055b65e0:
  unaff_x23[0x38] = unaff_w20;
  do {
    do {
      uVar9 = FUN_05156804(&stack0x000000a0,*unaff_x29);
      unaff_x23 = in_stack_000000b0;
      lVar8 = in_stack_00000060;
      if ((uVar9 & 1) == 0) {
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
          while (uVar9 = FUN_05156804(&stack0x000000a0,*unaff_x29), (uVar9 & 1) != 0) {
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
                        (*(undefined8 *)(lVar8 + 0x40),in_stack_00000020,
                         *(undefined8 *)(in_stack_000000b0 + 0x10),
                         *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar8 + 0x28));
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
          while (uVar9 = FUN_05156804(&stack0x000000a0,*unaff_x29), puVar2 = in_stack_000000b0,
                (uVar9 & 1) != 0) {
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
              FUN_055b7880(in_stack_00000038,in_stack_00000020,in_stack_00000028,in_stack_00000030,
                           uVar3,*(undefined8 *)(puVar2 + 0x18),*(undefined4 *)(puVar2 + 0x2c),
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
    uVar9 = FUN_055b4e68(in_stack_00000038,unaff_x26,in_stack_00000030,unaff_x24);
    if ((uVar9 & 1) != 0) {
      plVar11 = *(long **)(unaff_x26 + 0x68);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_055b6544;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_055b652c;
    }
  } while ((unaff_x24 == 0) || (*(char *)(unaff_x26 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar11 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *plVar11;
  uVar12 = *(undefined8 *)(unaff_x26 + 0x40);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  unaff_x25 = (long *)(*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar7 = *(int *)((long)unaff_x25 + 0x24);
  if (iVar7 == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*unaff_x25 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(unaff_x25);
    }
    if ((*(char *)((long)unaff_x25 + 0xf2) != '\0') && ((char)unaff_x25[5] == '\0')) {
      plVar11 = *(long **)(unaff_x26 + 0x68);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(plVar11,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b66c4:
      lVar8 = (*(code *)*puVar6)(plVar11,in_stack_00000020,puVar6[1]);
      if (lVar8 != 0) {
        uVar12 = thunk_FUN_02da6564(lVar8,0);
        uVar12 = FUN_055ae66c(in_stack_00000038,uVar12);
        lVar4 = FUN_02979eb8(uVar12,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar4 + 0xf1) == '\0') {
          plVar11 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar11 = (long *)FUN_055a740c(lVar4,lVar8);
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar9 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar11);
        if ((uVar9 & 1) == 0) {
          if (*(char *)(lVar4 + 0xf1) == '\0') {
            auVar13 = FUN_02979ef0(unaff_x24,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar13 = FUN_055a740c(lVar4,unaff_x24);
          }
          uVar12 = auVar13._8_8_;
          if (auVar13._0_8_ != 0) {
            plVar5 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar5;
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar8 = *plVar5;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              plVar5 = in_stack_00000090;
              if ((uVar9 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar8 = *in_stack_00000090;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              lVar8 = *plVar11;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
              plVar5 = in_stack_00000090;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
    goto LAB_055b65e0;
  }
  goto LAB_055b6928;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_055b652c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_055b65cc;
    }
  }
LAB_055b6544:
  puVar6 = (undefined8 *)
           FUN_02dd004c(plVar11,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,0);
LAB_055b65cc:
  (*(code *)*puVar6)(plVar11,in_stack_00000020,unaff_x24,puVar6[1]);
  goto LAB_055b65e0;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
}


