/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_NetSync_SetVoipStreamMode
ENTRY_POINT: 055b64d4
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

undefined8 Oculus_Platform_CAPI__ovr_NetSync_SetVoipStreamMode(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined1 unaff_w20;
  int unaff_w21;
  undefined1 *unaff_x23;
  long lVar10;
  long *plVar11;
  long unaff_x26;
  undefined8 uVar12;
  long unaff_x28;
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
  
code_r0x055b64d4:
  if ((*(ulong *)(unaff_x23 + 0x28) >> 0x20 != 0) || ((*(ulong *)(unaff_x23 + 0x28) & 0xff) == 0)) {
    lVar10 = *(long *)(unaff_x23 + 0x30);
    uVar4 = FUN_055b4e68(in_stack_00000038,unaff_x26,unaff_x28,lVar10);
    if ((uVar4 & 1) == 0) {
      if ((lVar10 == 0) || (*(char *)(unaff_x26 + 0x82) != '\0')) goto LAB_055b64a4;
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
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_055b65f8;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02dd004c(plVar11,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
      plVar11 = (long *)(*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
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
          plVar11 = *(long **)(unaff_x26 + 0x68);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)
                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                 ) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_055b66c4;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_02dd004c(plVar11,*(long *)
                                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                                ,1);
LAB_055b66c4:
          lVar8 = (*(code *)*puVar5)(plVar11,in_stack_00000020,puVar5[1]);
          if (lVar8 != 0) {
            uVar12 = thunk_FUN_02da6564(lVar8,0);
            uVar12 = FUN_055ae66c(in_stack_00000038,uVar12);
            lVar6 = FUN_02979eb8(uVar12,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var
                                );
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(char *)(lVar6 + 0xf1) == '\0') {
              plVar11 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff858);
            }
            else {
              plVar11 = (long *)FUN_055a740c(lVar6,lVar8);
            }
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar4 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar11);
            if ((uVar4 & 1) == 0) {
              if (*(char *)(lVar6 + 0xf1) == '\0') {
                auVar13 = FUN_02979ef0(lVar10,*(undefined8 *)PTR_DAT_069ff858);
              }
              else {
                auVar13 = FUN_055a740c(lVar6,lVar10);
              }
              uVar12 = auVar13._8_8_;
              if (auVar13._0_8_ != 0) {
                plVar7 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar13._0_8_);
                in_stack_00000048 = &stack0x00000090;
                in_stack_00000040 = 0;
                in_stack_00000050 = &stack0x00000088;
                do {
                  in_stack_00000090 = plVar7;
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar10 = *plVar7;
                  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar4 != 0) {
                    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                        puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_055b6814;
                      }
                      uVar4 = uVar4 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
                  uVar4 = (*(code *)*puVar5)(plVar7,puVar5[1]);
                  plVar7 = in_stack_00000090;
                  if ((uVar4 & 1) == 0) goto LAB_055b690c;
                  if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar10 = *in_stack_00000090;
                  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar4 != 0) {
                    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                        goto LAB_055b6884;
                      }
                      uVar4 = uVar4 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1)
                  ;
LAB_055b6884:
                  uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
                  lVar10 = *plVar11;
                  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar4 != 0) {
                    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff858) {
                        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                        goto LAB_055b68ec;
                      }
                      uVar4 = uVar4 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
                  (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
                  plVar7 = in_stack_00000090;
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
          plVar7 = *(long **)(unaff_x26 + 0x68);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = *plVar7;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)
                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                 ) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_055b69d0;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_02dd004c(plVar7,*(long *)
                                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                                ,1);
LAB_055b69d0:
          lVar8 = (*(code *)*puVar5)(plVar7,in_stack_00000020,puVar5[1]);
          if (lVar8 != 0) {
            if ((char)plVar11[0x20] == '\0') {
              plVar7 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff850);
            }
            else {
              plVar7 = (long *)FUN_055a9a84(plVar11,lVar8);
            }
            if ((char)plVar11[0x20] == '\0') {
              auVar13 = FUN_02979ef0(lVar10,*(undefined8 *)PTR_DAT_069ff850);
            }
            else {
              auVar13 = FUN_055a9a84(plVar11,lVar10);
            }
            uVar12 = auVar13._8_8_;
            if (auVar13._0_8_ != 0) {
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
                lVar10 = *in_stack_00000080;
                uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                      puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_055b6ad8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
                uVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
                plVar11 = in_stack_00000080;
                if ((uVar4 & 1) == 0) goto LAB_055b6bd0;
                if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar10 = *in_stack_00000080;
                uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a11758) {
                      puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
                auVar13 = (*(code *)*puVar5)(plVar11,puVar5[1]);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar10 = *plVar7;
                uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar4 != 0) {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff850) {
                      puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                      goto LAB_055b6bb8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
                (*(code *)*puVar5)(plVar7,auVar13._0_8_,auVar13._8_8_,puVar5[1]);
              } while( true );
            }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860(0,uVar12,0);
          }
        }
      }
    }
    else {
      plVar11 = *(long **)(unaff_x26 + 0x68);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_055b65cc;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02dd004c(plVar11,*(long *)
                                     System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,0);
LAB_055b65cc:
      (*(code *)*puVar5)(plVar11,in_stack_00000020,lVar10,puVar5[1]);
    }
    goto LAB_055b65e0;
  }
  goto LAB_055b64a4;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
LAB_055b65e0:
  unaff_x23[0x38] = unaff_w20;
  unaff_x28 = in_stack_00000030;
LAB_055b64a4:
  do {
    uVar4 = FUN_05156804(&stack0x000000a0,*unaff_x29);
    lVar10 = in_stack_00000060;
    if ((uVar4 & 1) == 0) {
      FUN_05156800(in_stack_00000068,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar10);
      }
      if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
        FUN_04010c90(&stack0x00000040);
        in_stack_000000b0 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x000000a0;
        while (uVar4 = FUN_05156804(&stack0x000000a0,*unaff_x29), (uVar4 & 1) != 0) {
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((in_stack_000000b0[0x38] == '\0') &&
             ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
              ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
            lVar10 = *(long *)(in_stack_00000030 + 0xe0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),in_stack_00000020,
                       *(undefined8 *)(in_stack_000000b0 + 0x10),
                       *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar10 + 0x28));
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
        while (uVar4 = FUN_05156804(&stack0x000000a0,*unaff_x29), puVar2 = in_stack_000000b0,
              (uVar4 & 1) != 0) {
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
  } while (((in_stack_000000b0[0x38] != '\0') ||
           (unaff_x26 = *(long *)(in_stack_000000b0 + 0x18), unaff_x26 == 0)) ||
          (unaff_x23 = in_stack_000000b0, *(char *)(unaff_x26 + 0x80) != '\0'));
  goto code_r0x055b64d4;
}


