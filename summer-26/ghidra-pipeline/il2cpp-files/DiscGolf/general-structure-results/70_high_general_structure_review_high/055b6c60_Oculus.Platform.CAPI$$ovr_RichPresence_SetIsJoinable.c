/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_RichPresence_SetIsJoinable
ENTRY_POINT: 055b6c60
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

undefined8 Oculus_Platform_CAPI__ovr_RichPresence_SetIsJoinable(undefined8 param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined1 unaff_w20;
  int unaff_w21;
  undefined1 *unaff_x23;
  long lVar11;
  long *plVar12;
  int unaff_w27;
  undefined8 uVar13;
  undefined8 *unaff_x29;
  undefined1 auVar14 [16];
  undefined8 uStack0000000000000018;
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
  
  uStack0000000000000018 = param_1;
  if (unaff_w27 != 1) {
    FUN_02a58224(&stack0x00000040);
    if (unaff_w27 != 1) {
      FUN_02cfc3b4(&stack0x00000060);
                    /* WARNING: Subroutine does not return */
      FUN_02e86b8c(uStack0000000000000018);
    }
    plVar12 = (long *)__cxa_begin_catch(uStack0000000000000018);
    lVar8 = *plVar12;
    in_stack_00000060 = lVar8;
    __cxa_end_catch();
    iVar10 = 0;
code_r0x055b6c90:
    FUN_05156800(in_stack_00000068,
                 *(undefined8 *)
                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                );
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar8);
    }
    if ((iVar10 == 0x29) || (iVar10 == 0)) {
      if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
        FUN_04010c90(&stack0x00000040);
        in_stack_000000b0 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x000000a0;
        while (uVar6 = FUN_05156804(&stack0x000000a0,*unaff_x29), (uVar6 & 1) != 0) {
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
        while (uVar6 = FUN_05156804(&stack0x000000a0,*unaff_x29), puVar2 = in_stack_000000b0,
              (uVar6 & 1) != 0) {
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
    }
    return in_stack_00000020;
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
  in_stack_00000040 = *puVar5;
  __cxa_end_catch();
  iVar10 = 0;
code_r0x055b6bd4:
  FUN_02a58224(&stack0x00000040);
  if ((iVar10 == 0x1c) || (lVar8 = in_stack_00000060, iVar10 == 0)) {
LAB_055b65e0:
    do {
      unaff_x23[0x38] = unaff_w20;
      do {
        do {
          uVar6 = FUN_05156804(&stack0x000000a0,*unaff_x29);
          unaff_x23 = in_stack_000000b0;
          if ((uVar6 & 1) == 0) {
            iVar10 = 0x29;
            lVar8 = in_stack_00000060;
            goto code_r0x055b6c90;
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
        lVar11 = *(long *)(in_stack_000000b0 + 0x30);
        uVar6 = FUN_055b4e68(in_stack_00000038,lVar8,in_stack_00000030,lVar11);
        if ((uVar6 & 1) != 0) {
          plVar12 = *(long **)(lVar8 + 0x68);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 == 0) goto LAB_055b6544;
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_055b652c;
        }
      } while ((lVar11 == 0) || (*(char *)(lVar8 + 0x82) != '\0'));
      if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar12 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar12;
      uVar13 = *(undefined8 *)(lVar8 + 0x40);
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_055b65f8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02dd004c(plVar12,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
      plVar12 = (long *)(*(code *)*puVar5)(plVar12,uVar13,puVar5[1]);
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
          plVar12 = *(long **)(lVar8 + 0x68);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = *plVar12;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)
                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                 ) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_055b66c4;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_02dd004c(plVar12,*(long *)
                                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                                ,1);
LAB_055b66c4:
          lVar8 = (*(code *)*puVar5)(plVar12,in_stack_00000020,puVar5[1]);
          if (lVar8 != 0) {
            uVar13 = thunk_FUN_02da6564(lVar8,0);
            uVar13 = FUN_055ae66c(in_stack_00000038,uVar13);
            lVar7 = FUN_02979eb8(uVar13,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var
                                );
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(char *)(lVar7 + 0xf1) == '\0') {
              plVar12 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff858);
            }
            else {
              plVar12 = (long *)FUN_055a740c(lVar7,lVar8);
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar6 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar12);
            if ((uVar6 & 1) == 0) {
              if (*(char *)(lVar7 + 0xf1) == '\0') {
                auVar14 = FUN_02979ef0(lVar11,*(undefined8 *)PTR_DAT_069ff858);
              }
              else {
                auVar14 = FUN_055a740c(lVar7,lVar11);
              }
              uVar13 = auVar14._8_8_;
              if (auVar14._0_8_ != 0) {
                plVar4 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar14._0_8_);
                in_stack_00000048 = &stack0x00000090;
                in_stack_00000040 = 0;
                in_stack_00000050 = &stack0x00000088;
                do {
                  in_stack_00000090 = plVar4;
                  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar8 = *plVar4;
                  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar6 != 0) {
                    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                        puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_055b6814;
                      }
                      uVar6 = uVar6 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
                  uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  plVar4 = in_stack_00000090;
                  if ((uVar6 & 1) == 0) goto LAB_055b690c;
                  if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar8 = *in_stack_00000090;
                  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar6 != 0) {
                    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
                        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                        goto LAB_055b6884;
                      }
                      uVar6 = uVar6 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1)
                  ;
LAB_055b6884:
                  uVar13 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  lVar8 = *plVar12;
                  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar6 != 0) {
                    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff858) {
                        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                        goto LAB_055b68ec;
                      }
                      uVar6 = uVar6 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
                  (*(code *)*puVar5)(plVar12,uVar13,puVar5[1]);
                  plVar4 = in_stack_00000090;
                } while( true );
              }
              goto LAB_055b6ed4;
            }
          }
        }
        goto LAB_055b65e0;
      }
      if (*(int *)((long)plVar12 + 0x24) != 5) goto LAB_055b65e0;
      bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar12);
      }
      if ((char)plVar12[5] != '\0') goto LAB_055b65e0;
      plVar4 = *(long **)(lVar8 + 0x68);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02dd004c(plVar4,*(long *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b69d0:
      lVar8 = (*(code *)*puVar5)(plVar4,in_stack_00000020,puVar5[1]);
    } while (lVar8 == 0);
    if ((char)plVar12[0x20] == '\0') {
      plVar4 = (long *)FUN_02979ef0(lVar8,*(undefined8 *)PTR_DAT_069ff850);
    }
    else {
      plVar4 = (long *)FUN_055a9a84(plVar12,lVar8);
    }
    if ((char)plVar12[0x20] == '\0') {
      auVar14 = FUN_02979ef0(lVar11,*(undefined8 *)PTR_DAT_069ff850);
    }
    else {
      auVar14 = FUN_055a9a84(plVar12,lVar11);
    }
    uVar13 = auVar14._8_8_;
    if (auVar14._0_8_ == 0) {
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(0,uVar13,0);
    }
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
      lVar8 = *in_stack_00000080;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff8) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_055b6ad8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
      uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      plVar12 = in_stack_00000080;
      if ((uVar6 & 1) == 0) goto LAB_055b6bd0;
      if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *in_stack_00000080;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a11758) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
      auVar14 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069ff850) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_055b6bb8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
      (*(code *)*puVar5)(plVar4,auVar14._0_8_,auVar14._8_8_,puVar5[1]);
    } while( true );
  }
  goto code_r0x055b6c90;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar9 = piVar9 + 4;
    if (uVar6 == 0) break;
LAB_055b652c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_055b65cc;
    }
  }
LAB_055b6544:
  puVar5 = (undefined8 *)
           FUN_02dd004c(plVar12,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,0);
LAB_055b65cc:
  (*(code *)*puVar5)(plVar12,in_stack_00000020,lVar11,puVar5[1]);
  goto LAB_055b65e0;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
  goto LAB_055b65e0;
LAB_055b6bd0:
  iVar10 = 0x1c;
  goto code_r0x055b6bd4;
}


