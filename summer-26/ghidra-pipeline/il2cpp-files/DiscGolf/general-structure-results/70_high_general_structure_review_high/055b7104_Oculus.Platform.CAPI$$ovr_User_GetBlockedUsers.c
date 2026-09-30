/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetBlockedUsers
ENTRY_POINT: 055b7104
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


/* WARNING: Removing unreachable block (ram,0x055b6920) */
/* WARNING: Removing unreachable block (ram,0x055b6924) */
/* WARNING: Removing unreachable block (ram,0x055b6be4) */
/* WARNING: Removing unreachable block (ram,0x055b6be8) */
/* WARNING: Removing unreachable block (ram,0x055b6cb8) */

undefined8 Oculus_Platform_CAPI__ovr_User_GetBlockedUsers(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  int unaff_w21;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar14 [16];
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
  long in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined1 *in_stack_000000b0;
  
  if (param_2 != 1) {
    FUN_02cfc3b4(&stack0x00000040);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar8 = (long *)__cxa_begin_catch();
  lVar11 = *plVar8;
  in_stack_00000040 = lVar11;
  __cxa_end_catch();
  FUN_05156800(in_stack_00000048,
               *(undefined8 *)
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo);
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar11);
  }
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = (**(code **)(in_stack_00000018 + 0x18))(*(undefined8 *)(in_stack_00000018 + 0x40));
  if (in_stack_00000010 != 0) {
    FUN_055b4f70(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar4);
  }
  FUN_055b5334(in_stack_00000038,in_stack_00000028);
  FUN_04010c90(&stack0x00000040);
  in_stack_00000068 = &stack0x000000a0;
  in_stack_00000060 = 0;
  in_stack_000000a8 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000040;
  in_stack_000000b0 = in_stack_00000050;
LAB_055b64a4:
  do {
    uVar5 = FUN_05156804(&stack0x000000a0,*unaff_x29);
    puVar2 = in_stack_000000b0;
    lVar11 = in_stack_00000060;
    if ((uVar5 & 1) == 0) {
      FUN_05156800(in_stack_00000068,
                   *(undefined8 *)
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                  );
      if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar11);
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
            lVar11 = *(long *)(in_stack_00000030 + 0xe0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            (**(code **)(lVar11 + 0x18))
                      (*(undefined8 *)(lVar11 + 0x40),uVar4,
                       *(undefined8 *)(in_stack_000000b0 + 0x10),
                       *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar11 + 0x28));
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
            uVar3 = (**(code **)(*in_stack_00000028 + 0x1b8))
                              (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x1c0));
            FUN_055b7880(in_stack_00000038,uVar4,in_stack_00000028,in_stack_00000030,uVar3,
                         *(undefined8 *)(puVar2 + 0x18),*(undefined4 *)(puVar2 + 0x2c),
                         puVar2[0x38] == '\0');
          }
        }
        FUN_05156800(&stack0x000000a0,
                     *(undefined8 *)
                      System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_TypeInfo
                    );
      }
      FUN_055b5560(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar4);
      return uVar4;
    }
    if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  } while ((((in_stack_000000b0[0x38] != '\0') ||
            (lVar11 = *(long *)(in_stack_000000b0 + 0x18), lVar11 == 0)) ||
           (*(char *)(lVar11 + 0x80) != '\0')) ||
          ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
           ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
  lVar12 = *(long *)(in_stack_000000b0 + 0x30);
  uVar5 = FUN_055b4e68(in_stack_00000038,lVar11,unaff_x28,lVar12);
  if ((uVar5 & 1) == 0) goto LAB_055b6554;
  plVar8 = *(long **)(lVar11 + 0x68);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = *plVar8;
  uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_055b65cc;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02dd004c(plVar8,*(long *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,0);
LAB_055b65cc:
  (*(code *)*puVar6)(plVar8,uVar4,lVar12,puVar6[1]);
  goto LAB_055b65e0;
LAB_055b6554:
  if ((lVar12 == 0) || (*(char *)(lVar11 + 0x82) != '\0')) goto LAB_055b64a4;
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar8 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar8;
  uVar13 = *(undefined8 *)(lVar11 + 0x40);
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_055b65f8;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055b65f8:
  plVar8 = (long *)(*(code *)*puVar6)(plVar8,uVar13,puVar6[1]);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)((long)plVar8 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)System_Xml_XmlTextReaderImpl_ParsingState_var + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_XmlTextReaderImpl_ParsingState_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar8);
    }
    if ((*(char *)((long)plVar8 + 0xf2) != '\0') && ((char)plVar8[5] == '\0')) {
      plVar8 = *(long **)(lVar11 + 0x68);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_055b66c4;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(plVar8,*(long *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b66c4:
      lVar11 = (*(code *)*puVar6)(plVar8,uVar4,puVar6[1]);
      if (lVar11 != 0) {
        uVar13 = thunk_FUN_02da6564(lVar11,0);
        uVar13 = FUN_055ae66c(in_stack_00000038,uVar13);
        lVar9 = FUN_02979eb8(uVar13,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(char *)(lVar9 + 0xf1) == '\0') {
          plVar8 = (long *)FUN_02979ef0(lVar11,*(undefined8 *)PTR_DAT_069ff858);
        }
        else {
          plVar8 = (long *)FUN_055a740c(lVar9,lVar11);
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = FUN_0297bd6c(6,*(undefined8 *)PTR_DAT_069ff858,plVar8);
        if ((uVar5 & 1) == 0) {
          if (*(char *)(lVar9 + 0xf1) == '\0') {
            auVar14 = FUN_02979ef0(lVar12,*(undefined8 *)PTR_DAT_069ff858);
          }
          else {
            auVar14 = FUN_055a740c(lVar9,lVar12);
          }
          uVar13 = auVar14._8_8_;
          if (auVar14._0_8_ != 0) {
            plVar7 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,auVar14._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar7;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar11 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar5 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_055b6814;
                  }
                  uVar5 = uVar5 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6814:
              uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
              plVar7 = in_stack_00000090;
              if ((uVar5 & 1) == 0) goto LAB_055b690c;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar11 = *in_stack_00000090;
              uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar5 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff8) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_055b6884;
                  }
                  uVar5 = uVar5 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)FUN_02dd004c(in_stack_00000090,*(long *)PTR_DAT_069fbff8,1);
LAB_055b6884:
              uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
              lVar11 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar5 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069ff858) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                    goto LAB_055b68ec;
                  }
                  uVar5 = uVar5 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar5 != 0);
              }
              puVar6 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069ff858,2);
LAB_055b68ec:
              (*(code *)*puVar6)(plVar8,uVar13,puVar6[1]);
              plVar7 = in_stack_00000090;
            } while( true );
          }
          goto LAB_055b6ed4;
        }
      }
    }
  }
  else if (*(int *)((long)plVar8 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlAtomicValue_Union_var + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlAtomicValue_Union_var)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar8);
    }
    if ((char)plVar8[5] == '\0') {
      plVar7 = *(long **)(lVar11 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo)
          {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_055b69d0;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(plVar7,*(long *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                            ,1);
LAB_055b69d0:
      lVar11 = (*(code *)*puVar6)(plVar7,uVar4,puVar6[1]);
      if (lVar11 != 0) {
        if ((char)plVar8[0x20] == '\0') {
          plVar7 = (long *)FUN_02979ef0(lVar11,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          plVar7 = (long *)FUN_055a9a84(plVar8,lVar11);
        }
        if ((char)plVar8[0x20] == '\0') {
          auVar14 = FUN_02979ef0(lVar12,*(undefined8 *)PTR_DAT_069ff850);
        }
        else {
          auVar14 = FUN_055a9a84(plVar8,lVar12);
        }
        uVar13 = auVar14._8_8_;
        if (auVar14._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_0297bd6c(8,*(undefined8 *)PTR_DAT_069ff850);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar8 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar11 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff8) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_055b6ad8;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_069fbff8,0);
LAB_055b6ad8:
            uVar5 = (*(code *)*puVar6)(plVar8,puVar6[1]);
            plVar8 = in_stack_00000080;
            if ((uVar5 & 1) == 0) goto LAB_055b6bd0;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar11 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a11758) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto Oculus_Platform_CAPI__ovr_RichPresence_SetDestination;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_02dd004c(in_stack_00000080,*(long *)PTR_DAT_06a11758,2);
Oculus_Platform_CAPI__ovr_RichPresence_SetDestination:
            auVar14 = (*(code *)*puVar6)(plVar8,puVar6[1]);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar11 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069ff850) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_055b6bb8;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069ff850,1);
LAB_055b6bb8:
            (*(code *)*puVar6)(plVar7,auVar14._0_8_,auVar14._8_8_,puVar6[1]);
          } while( true );
        }
LAB_055b6ed4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar13,0);
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


