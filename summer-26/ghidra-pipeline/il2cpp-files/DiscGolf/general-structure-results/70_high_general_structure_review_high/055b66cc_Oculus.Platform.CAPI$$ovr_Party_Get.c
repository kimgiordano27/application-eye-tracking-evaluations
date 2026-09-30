/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Party_Get
ENTRY_POINT: 055b66cc
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

undefined8
Oculus_Platform_CAPI__ovr_Party_Get
          (code *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 unaff_x19;
  undefined1 unaff_w20;
  int unaff_w21;
  undefined1 *unaff_x23;
  long unaff_x24;
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
  
code_r0x055b66cc:
  lVar4 = (*param_1)(param_2,unaff_x19,param_4);
  if (lVar4 != 0) {
    uVar5 = thunk_FUN_02da6564(lVar4,0);
    uVar5 = FUN_055ae66c(in_stack_00000038,uVar5);
    lVar6 = FUN_02979eb8(uVar5,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(lVar6 + 0xf1) == '\0') {
      plVar7 = (long *)FUN_02979ef0(lVar4,*(undefined8 *)PTR_DAT_069ff858);
    }
    else {
      plVar7 = (long *)FUN_055a740c(lVar6,lVar4);
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar7);
    if ((uVar8 & 1) == 0) {
      if (*(char *)(lVar6 + 0xf1) == '\0') {
        auVar12 = FUN_02979ef0(unaff_x24,*(undefined8 *)PTR_DAT_069ff858);
      }
      else {
        auVar12 = FUN_055a740c(lVar6,unaff_x24);
      }
      uVar5 = auVar12._8_8_;
      if (auVar12._0_8_ != 0) {
        plVar9 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar12._0_8_);
        in_stack_00000048 = &stack0x00000090;
        in_stack_00000040 = 0;
        in_stack_00000050 = &stack0x00000088;
        do {
          in_stack_00000090 = plVar9;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar4 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069fbff8) {
                puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_055b6814;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
          uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          plVar9 = in_stack_00000090;
          if ((uVar8 & 1) == 0) goto LAB_055b690c;
          if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar4 = *in_stack_00000090;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069fbff8) {
                puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_055b6884;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
          uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          lVar4 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069ff858) {
                puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_055b68ec;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
          (*(code *)*puVar10)(plVar7,uVar5,puVar10[1]);
          plVar9 = in_stack_00000090;
        } while( true );
      }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(0,uVar5,0);
    }
  }
  goto LAB_055b65e0;
LAB_055b690c:
  FUN_02978ec0(&stack0x00000040);
LAB_055b65e0:
  unaff_x23[0x38] = unaff_w20;
  do {
    do {
      uVar8 = FUN_05156804(&stack0x000000a0,*unaff_x29);
      unaff_x23 = in_stack_000000b0;
      lVar4 = in_stack_00000060;
      if ((uVar8 & 1) == 0) {
        FUN_05156800(in_stack_00000068,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                    );
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96858(lVar4);
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
              lVar4 = *(long *)(in_stack_00000030 + 0xe0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),in_stack_00000020,
                         *(undefined8 *)(in_stack_000000b0 + 0x10),
                         *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar4 + 0x28));
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
              (lVar4 = *(long *)(in_stack_000000b0 + 0x18), lVar4 == 0)) ||
             (*(char *)(lVar4 + 0x80) != '\0')) ||
            ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
             ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
    unaff_x24 = *(long *)(in_stack_000000b0 + 0x30);
    uVar8 = FUN_055b4e68(in_stack_00000038,lVar4,in_stack_00000030,unaff_x24);
    if ((uVar8 & 1) != 0) {
      plVar7 = *(long **)(lVar4 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 == 0) goto LAB_055b6544;
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_055b652c;
    }
  } while ((unaff_x24 == 0) || (*(char *)(lVar4 + 0x82) != '\0'));
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar7 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar6 = *plVar7;
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar10 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar7 = (long *)(*(code *)*puVar10)(plVar7,uVar5,puVar10[1]);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar7 + 0x24) != 2) {
    if (*(int *)((long)plVar7 + 0x24) == 5) {
      bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar7);
      }
      if ((char)plVar7[5] == '\0') {
        plVar9 = *(long **)(lVar4 + 0x68);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar4 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_055b69d0;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02dd004c(plVar9,*(long *)
                                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                               ,1);
LAB_055b69d0:
        lVar4 = (*(code *)*puVar10)(plVar9,in_stack_00000020,puVar10[1]);
        if (lVar4 != 0) {
          if ((char)plVar7[0x20] == '\0') {
            plVar9 = (long *)FUN_02979ef0(lVar4,*(undefined8 *)PTR_DAT_069ff850);
          }
          else {
            plVar9 = (long *)FUN_055a9a84(plVar7,lVar4);
          }
          if ((char)plVar7[0x20] == '\0') {
            auVar12 = FUN_02979ef0(unaff_x24,*(undefined8 *)PTR_DAT_069ff850);
          }
          else {
            auVar12 = FUN_055a9a84(plVar7,unaff_x24);
          }
          uVar5 = auVar12._8_8_;
          if (auVar12._0_8_ != 0) {
            in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
            in_stack_00000048 = &stack0x00000080;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000078;
            in_stack_00000058 = &stack0x00000070;
            do {
              plVar7 = in_stack_00000080;
              if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar4 = *in_stack_00000080;
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_055b6ad8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
              uVar8 = (*(code *)*puVar10)(plVar7,puVar10[1]);
              plVar7 = in_stack_00000080;
              if ((uVar8 & 1) == 0) goto LAB_055b6bd0;
              if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar4 = *in_stack_00000080;
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06a11758) {
                    puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
              auVar12 = (*(code *)*puVar10)(plVar7,puVar10[1]);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar4 = *plVar9;
              uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069ff850) {
                    puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_055b6bb8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar8 != 0);
              }
              puVar10 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
              (*(code *)*puVar10)(plVar9,auVar12._0_8_,auVar12._8_8_,puVar10[1]);
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
    goto LAB_055b65e0;
  }
  bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
  if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(plVar7);
  }
  if ((*(char *)((long)plVar7 + 0xf2) == '\0') || ((char)plVar7[5] != '\0')) goto LAB_055b65e0;
  param_2 = *(long **)(lVar4 + 0x68);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *param_2;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_055b66c4;
      }
      uVar8 = uVar8 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_02dd004c(param_2,*(long *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                         ,1);
LAB_055b66c4:
  param_1 = (code *)*puVar10;
  param_4 = puVar10[1];
  unaff_x19 = in_stack_00000020;
  goto code_r0x055b66cc;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_055b652c:
    if (*(long *)(piVar11 + -2) ==
        *(long *)
         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
      puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_055b65cc;
    }
  }
LAB_055b6544:
  puVar10 = (undefined8 *)
            FUN_02dd004c(plVar7,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                         ,0);
LAB_055b65cc:
  (*(code *)*puVar10)(plVar7,in_stack_00000020,unaff_x24,puVar10[1]);
  goto LAB_055b65e0;
LAB_055b6bd0:
  FUN_02a58224(&stack0x00000040);
  goto LAB_055b65e0;
}


