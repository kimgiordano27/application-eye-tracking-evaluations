/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Party_GetCurrentForUser
ENTRY_POINT: 055b67ac
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

undefined8 Oculus_Platform_CAPI__ovr_Party_GetCurrentForUser(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 unaff_w20;
  int unaff_w21;
  undefined1 *unaff_x23;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 *puStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined1 *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000080;
  long *plStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined1 *in_stack_000000b0;
  
code_r0x055b67ac:
  uStack0000000000000040 = 0;
  puStack0000000000000050 = &stack0x00000088;
  plStack0000000000000090 = param_2;
  puStack0000000000000048 = param_1;
  do {
    if (plStack0000000000000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *unaff_x28;
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
    puVar4 = (undefined8 *)FUN_02dd004c(unaff_x28,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
    uVar8 = (*(code *)*puVar4)(unaff_x28,puVar4[1]);
    plVar11 = plStack0000000000000090;
    if ((uVar8 & 1) == 0) break;
    if (plStack0000000000000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *plStack0000000000000090;
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
    puVar4 = (undefined8 *)FUN_02dd004c(plStack0000000000000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
    uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    lVar7 = *unaff_x27;
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
    puVar4 = (undefined8 *)FUN_02dd004c(unaff_x27,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
    (*(code *)*puVar4)(unaff_x27,uVar5,puVar4[1]);
    unaff_x28 = plStack0000000000000090;
  } while( true );
  FUN_02978ec0(&stack0x00000040);
LAB_055b65e0:
  unaff_x23[0x38] = unaff_w20;
  do {
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
          in_stack_000000b0 = puStack0000000000000050;
          in_stack_000000a8 = puStack0000000000000048;
          in_stack_000000a0 = uStack0000000000000040;
          uStack0000000000000040 = 0;
          puStack0000000000000048 = &stack0x000000a0;
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
          in_stack_000000b0 = puStack0000000000000050;
          in_stack_000000a8 = puStack0000000000000048;
          in_stack_000000a0 = uStack0000000000000040;
          uStack0000000000000040 = 0;
          puStack0000000000000048 = &stack0x000000a0;
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
              (lVar7 = *(long *)(in_stack_000000b0 + 0x18), lVar7 == 0)) ||
             (*(char *)(lVar7 + 0x80) != '\0')) ||
            ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
             ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
    lVar10 = *(long *)(in_stack_000000b0 + 0x30);
    uVar8 = FUN_055b4e68(in_stack_00000038,lVar7,in_stack_00000030,lVar10);
    if ((uVar8 & 1) != 0) {
      plVar11 = *(long **)(lVar7 + 0x68);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_055b6544;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_055b652c;
    }
  } while ((lVar10 == 0) || (*(char *)(lVar7 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar11 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar6 = *plVar11;
  uVar5 = *(undefined8 *)(lVar7 + 0x40);
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar11 = (long *)(*(code *)*puVar4)(plVar11,uVar5,puVar4[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar11 + 0x24) != 2) {
    if (*(int *)((long)plVar11 + 0x24) == 5) {
      bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar11);
      }
      if ((char)plVar11[5] == '\0') {
        plVar12 = *(long **)(lVar7 + 0x68);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar7 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_055b69d0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_02dd004c(plVar12,*(long *)
                                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                              ,1);
LAB_055b69d0:
        lVar7 = (*(code *)*puVar4)(plVar12,in_stack_00000020,puVar4[1]);
        if (lVar7 != 0) {
          if ((char)plVar11[0x20] == '\0') {
            plVar12 = (long *)FUN_02979ef0(lVar7,*(undefined8 *)PTR_DAT_069ff850);
          }
          else {
            plVar12 = (long *)FUN_055a9a84(plVar11,lVar7);
          }
          if ((char)plVar11[0x20] == '\0') {
            auVar13 = FUN_02979ef0(lVar10,*(undefined8 *)PTR_DAT_069ff850);
          }
          else {
            auVar13 = FUN_055a9a84(plVar11,lVar10);
          }
          uVar5 = auVar13._8_8_;
          if (auVar13._0_8_ != 0) {
            in_stack_00000080 =
                 (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850,auVar13._0_8_);
            puStack0000000000000048 = &stack0x00000080;
            uStack0000000000000040 = 0;
            puStack0000000000000050 = &stack0x00000078;
            in_stack_00000058 = &stack0x00000070;
            do {
              plVar11 = in_stack_00000080;
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
              uVar8 = (*(code *)*puVar4)(plVar11,puVar4[1]);
              plVar11 = in_stack_00000080;
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
              auVar13 = (*(code *)*puVar4)(plVar11,puVar4[1]);
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar7 = *plVar12;
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
              puVar4 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
              (*(code *)*puVar4)(plVar12,auVar13._0_8_,auVar13._8_8_,puVar4[1]);
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
    goto LAB_055b65e0;
  }
  bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
  if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(plVar11);
  }
  if ((*(char *)((long)plVar11 + 0xf2) == '\0') || ((char)plVar11[5] != '\0')) goto LAB_055b65e0;
  plVar11 = *(long **)(lVar7 + 0x68);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar7 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_055b66c4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02dd004c(plVar11,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,1);
LAB_055b66c4:
  lVar7 = (*(code *)*puVar4)(plVar11,in_stack_00000020,puVar4[1]);
  if (lVar7 == 0) goto LAB_055b65e0;
  uVar5 = thunk_FUN_02da6564(lVar7,0);
  uVar5 = FUN_055ae66c(in_stack_00000038,uVar5);
  lVar6 = FUN_02979eb8(uVar5,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(char *)(lVar6 + 0xf1) == '\0') {
    unaff_x27 = (long *)FUN_02979ef0(lVar7,*(undefined8 *)PTR_DAT_069ff858);
  }
  else {
    unaff_x27 = (long *)FUN_055a740c(lVar6,lVar7);
  }
  if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar8 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,unaff_x27);
  if ((uVar8 & 1) != 0) goto LAB_055b65e0;
  if (*(char *)(lVar6 + 0xf1) == '\0') {
    auVar13 = FUN_02979ef0(lVar10,*(undefined8 *)PTR_DAT_069ff858);
  }
  else {
    auVar13 = FUN_055a740c(lVar6,lVar10);
  }
  uVar5 = auVar13._8_8_;
  if (auVar13._0_8_ == 0) {
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(0,uVar5,0);
  }
  param_2 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8);
  param_1 = &stack0x00000090;
  unaff_x28 = param_2;
  goto code_r0x055b67ac;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_055b652c:
    if (*(long *)(piVar9 + -2) ==
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_055b65cc;
    }
  }
LAB_055b6544:
  puVar4 = (undefined8 *)
           FUN_02dd004c(plVar11,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,0);
LAB_055b65cc:
  (*(code *)*puVar4)(plVar11,in_stack_00000020,lVar10,puVar4[1]);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
}


