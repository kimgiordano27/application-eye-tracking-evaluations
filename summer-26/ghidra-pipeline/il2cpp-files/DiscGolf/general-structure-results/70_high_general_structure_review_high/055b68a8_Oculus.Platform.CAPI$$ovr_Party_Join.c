/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Party_Join
ENTRY_POINT: 055b68a8
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

undefined8 Oculus_Platform_CAPI__ovr_Party_Join(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x9;
  int *piVar8;
  undefined1 unaff_w20;
  int unaff_w21;
  undefined1 *unaff_x23;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x27;
  undefined8 unaff_x28;
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
  
code_r0x055b68a8:
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_055b68ec;
      }
      in_x9 = in_x9 - 1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02dd004c(unaff_x27,param_3,2);
LAB_055b68ec:
  (*(code *)*puVar4)(unaff_x27,unaff_x28,puVar4[1]);
  plVar10 = in_stack_00000090;
  do {
    in_stack_00000090 = plVar10;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_055b6814;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
    uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    plVar10 = in_stack_00000090;
    if ((uVar7 & 1) != 0) break;
    FUN_02978ec0(&stack0x00000040);
LAB_055b65e0:
    unaff_x23[0x38] = unaff_w20;
    do {
      do {
        uVar7 = FUN_05156804(&stack0x000000a0,*unaff_x29);
        unaff_x23 = in_stack_000000b0;
        lVar6 = in_stack_00000060;
        if ((uVar7 & 1) == 0) {
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
            while (uVar7 = FUN_05156804(&stack0x000000a0,*unaff_x29), (uVar7 & 1) != 0) {
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
                          (*(undefined8 *)(lVar6 + 0x40),in_stack_00000020,
                           *(undefined8 *)(in_stack_000000b0 + 0x10),
                           *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar6 + 0x28));
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
            while (uVar7 = FUN_05156804(&stack0x000000a0,*unaff_x29), puVar2 = in_stack_000000b0,
                  (uVar7 & 1) != 0) {
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
                (lVar6 = *(long *)(in_stack_000000b0 + 0x18), lVar6 == 0)) ||
               (*(char *)(lVar6 + 0x80) != '\0')) ||
              ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
               ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
      lVar9 = *(long *)(in_stack_000000b0 + 0x30);
      uVar7 = FUN_055b4e68(in_stack_00000038,lVar6,in_stack_00000030,lVar9);
      if ((uVar7 & 1) != 0) {
        plVar10 = *(long **)(lVar6 + 0x68);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_055b6544;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_055b652c;
      }
    } while ((lVar9 == 0) || (*(char *)(lVar6 + 0x82) != '\0'));
    if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar10 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar10;
    uVar12 = *(undefined8 *)(lVar6 + 0x40);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_055b65f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,uVar12,puVar4[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)((long)plVar10 + 0x24) != 2) {
      if (*(int *)((long)plVar10 + 0x24) == 5) {
        bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar10);
        }
        if ((char)plVar10[5] == '\0') {
          plVar11 = *(long **)(lVar6 + 0x68);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar6 = *plVar11;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)
                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                 ) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_055b69d0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_02dd004c(plVar11,*(long *)
                                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                                ,1);
LAB_055b69d0:
          lVar6 = (*(code *)*puVar4)(plVar11,in_stack_00000020,puVar4[1]);
          if (lVar6 != 0) {
            if ((char)plVar10[0x20] == '\0') {
              plVar11 = (long *)FUN_02979ef0(lVar6,*(undefined8 *)PTR_DAT_069ff850);
            }
            else {
              plVar11 = (long *)FUN_055a9a84(plVar10,lVar6);
            }
            if ((char)plVar10[0x20] == '\0') {
              auVar13 = FUN_02979ef0(lVar9,*(undefined8 *)PTR_DAT_069ff850);
            }
            else {
              auVar13 = FUN_055a9a84(plVar10,lVar9);
            }
            uVar12 = auVar13._8_8_;
            if (auVar13._0_8_ != 0) {
              in_stack_00000080 =
                   (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850,auVar13._0_8_);
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
                lVar6 = *in_stack_00000080;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
                      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_055b6ad8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
                uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                plVar10 = in_stack_00000080;
                if ((uVar7 & 1) == 0) goto LAB_055b6bd0;
                if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar6 = *in_stack_00000080;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a11758) {
                      puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                      goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
                auVar13 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar6 = *plVar11;
                uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069ff850) {
                      puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                      goto LAB_055b6bb8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
                (*(code *)*puVar4)(plVar11,auVar13._0_8_,auVar13._8_8_,puVar4[1]);
              } while( true );
            }
            goto LAB_055b6ed4;
          }
        }
      }
      goto LAB_055b65e0;
    }
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar10);
    }
    if ((*(char *)((long)plVar10 + 0xf2) == '\0') || ((char)plVar10[5] != '\0')) goto LAB_055b65e0;
    plVar10 = *(long **)(lVar6 + 0x68);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_055b66c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                          ,1);
LAB_055b66c4:
    lVar6 = (*(code *)*puVar4)(plVar10,in_stack_00000020,puVar4[1]);
    if (lVar6 == 0) goto LAB_055b65e0;
    uVar12 = thunk_FUN_02da6564(lVar6,0);
    uVar12 = FUN_055ae66c(in_stack_00000038,uVar12);
    lVar5 = FUN_02979eb8(uVar12,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(lVar5 + 0xf1) == '\0') {
      unaff_x27 = (long *)FUN_02979ef0(lVar6,*(undefined8 *)PTR_DAT_069ff858);
    }
    else {
      unaff_x27 = (long *)FUN_055a740c(lVar5,lVar6);
    }
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,unaff_x27);
    if ((uVar7 & 1) != 0) goto LAB_055b65e0;
    if (*(char *)(lVar5 + 0xf1) == '\0') {
      auVar13 = FUN_02979ef0(lVar9,*(undefined8 *)PTR_DAT_069ff858);
    }
    else {
      auVar13 = FUN_055a740c(lVar5,lVar9);
    }
    uVar12 = auVar13._8_8_;
    if (auVar13._0_8_ == 0) {
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(0,uVar12,0);
    }
    plVar10 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8);
    in_stack_00000048 = &stack0x00000090;
    in_stack_00000040 = 0;
    in_stack_00000050 = &stack0x00000088;
  } while( true );
  if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar6 = *in_stack_00000090;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff8) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_055b6884;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
  unaff_x28 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  param_1 = *unaff_x27;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)PTR_DAT_069ff858;
  goto code_r0x055b68a8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_055b652c:
    if (*(long *)(piVar8 + -2) ==
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_055b65cc;
    }
  }
LAB_055b6544:
  puVar4 = (undefined8 *)
           FUN_02dd004c(plVar10,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,0);
LAB_055b65cc:
  (*(code *)*puVar4)(plVar10,in_stack_00000020,lVar9,puVar4[1]);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
}


