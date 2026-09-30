/*
FUNCTION_NAME: Castle.DynamicProxy.StandardInterceptor$$PostProceed
ENTRY_POINT: 07781150
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x077818a8) */
/* WARNING: Removing unreachable block (ram,0x077818ac) */
/* WARNING: Removing unreachable block (ram,0x077813a0) */
/* WARNING: Removing unreachable block (ram,0x07781b6c) */
/* WARNING: Removing unreachable block (ram,0x07781b70) */
/* WARNING: Removing unreachable block (ram,0x07781c40) */

undefined8
Castle_DynamicProxy_StandardInterceptor__PostProceed(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long lVar14;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *plVar15;
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
    uVar5 = FUN_0777c1d0(param_1,param_2);
    iVar11 = unaff_w19;
    if ((uVar5 & 1) == 0) {
      iVar11 = unaff_w19 + 1;
    }
Castle_Core_Logging_AbstractExtendedLoggerFactory__Create:
    in_stack_00000060 = 0;
    System_Collections_Generic_ObjectEqualityComparer<RaycastResult>___ctor
              (&stack0x00000060,iVar11,*(undefined8 *)PTR_DAT_092e0098);
    *(long *)(unaff_x25 + 0x28) = in_stack_00000060;
LAB_0778117c:
    do {
      lVar14 = *(long *)(unaff_x25 + 0x20);
      if (lVar14 == 0) {
        if (*(long *)(unaff_x25 + 0x18) != 0) {
          uVar7 = FUN_077692c8(unaff_x28);
          lVar14 = *unaff_x24;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar14 = *unaff_x24;
          }
          puVar9 = *(undefined8 **)(lVar14 + 0xb8);
          lVar6 = puVar9[2];
          if (lVar6 == 0) {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar9 = *(undefined8 **)(*unaff_x24 + 0xb8);
            }
            uVar8 = *puVar9;
            lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092e0078);
            FUN_0568af90(lVar6,uVar8,*(undefined8 *)PTR_DAT_092e00b8,0);
            plVar15 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
            *plVar15 = lVar6;
            thunk_FUN_040ec700(plVar15,lVar6);
            unaff_x28 = in_stack_00000030;
          }
          if (*(long *)(unaff_x25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = FUN_051f5310(uVar7,lVar6,*(undefined8 *)(*(long *)(unaff_x25 + 0x18) + 0x60),
                                *(undefined8 *)PTR_DAT_092e00a8);
          if (lVar14 != 0) goto LAB_07781184;
        }
      }
      else {
LAB_07781184:
        if (*(char *)(lVar14 + 0x80) == '\0') {
          if (((unaff_w21 != 0) && (*(ulong *)(unaff_x25 + 0x28) >> 0x21 == 0)) &&
             ((*(ulong *)(unaff_x25 + 0x28) & 0xff) != 0)) {
            plVar15 = (long *)(lVar14 + 0x48);
            if (*plVar15 == 0) {
              lVar6 = FUN_077794fc(in_stack_00000038,*(undefined8 *)(lVar14 + 0x40));
              *plVar15 = lVar6;
              thunk_FUN_040ec700(plVar15);
            }
            in_stack_00000098 = *(undefined8 *)(lVar14 + 0x90);
            if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar3 = FUN_0601592c(&stack0x00000098,
                                 *(undefined4 *)(*(long *)(in_stack_00000038 + 0x20) + 0x2c),
                                 *(undefined8 *)PTR_DAT_092dfff8);
            if ((uVar3 >> 1 & 1) != 0) {
              uVar7 = FUN_07776a90(lVar14);
              if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar8 = FUN_076060c0(0);
              uVar7 = FUN_0777bc30(uVar8,in_stack_00000028,uVar7,uVar8,
                                   *(undefined8 *)(lVar14 + 0x48),*(undefined8 *)(lVar14 + 0x40));
              *(undefined8 *)(unaff_x25 + 0x30) = uVar7;
              thunk_FUN_040ec700();
            }
          }
          lVar6 = FUN_077692c8(unaff_x28);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar3 = FUN_06b64224(lVar6,lVar14,*(undefined8 *)PTR_DAT_092e0038);
          if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *(long *)(unaff_x25 + 0x30);
          if ((lVar14 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*unaff_x26 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar7,0);
          }
          if (*(uint *)(unaff_x26 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          unaff_x26[(long)(int)uVar3 + 4] = lVar14;
          thunk_FUN_040ec700(unaff_x20 + (long)(int)uVar3 * 8,lVar14);
          *(char *)(unaff_x25 + 0x38) = (char)unaff_w19;
        }
      }
      uVar5 = FUN_07161154(&stack0x000000a0,*unaff_x29);
      lVar14 = in_stack_00000040;
      if ((uVar5 & 1) == 0) {
        FUN_07161150(in_stack_00000048,*(undefined8 *)PTR_DAT_092e0058);
        if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077828(lVar14);
        }
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar7 = (**(code **)(in_stack_00000018 + 0x18))(*(undefined8 *)(in_stack_00000018 + 0x40));
        if (in_stack_00000010 != 0) {
          FUN_0777ff04(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar7);
        }
        FUN_077802c4(in_stack_00000038,in_stack_00000028,unaff_x28,uVar7);
        FUN_05c27784(&stack0x00000040);
        in_stack_00000068 = &stack0x000000a0;
        in_stack_00000060 = 0;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_000000b0 = in_stack_00000050;
        goto LAB_0778142c;
      }
      unaff_x25 = (long)in_stack_000000b0;
      if (unaff_w21 == 0) {
        if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_0778117c;
      }
      if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *(long *)((long)in_stack_000000b0 + 0x18);
    } while ((lVar14 == 0) || (*(char *)((long)in_stack_000000b0 + 0x28) != '\0'));
    if (*(long **)((long)in_stack_000000b0 + 0x30) == (long *)0x0) {
      iVar11 = 1;
      goto Castle_Core_Logging_AbstractExtendedLoggerFactory__Create;
    }
    if (**(long **)((long)in_stack_000000b0 + 0x30) != *(long *)(PTR_DAT_09285980 + 0x90)) {
      iVar11 = 2;
      goto Castle_Core_Logging_AbstractExtendedLoggerFactory__Create;
    }
    param_1 = *(undefined8 *)(lVar14 + 0x40);
    param_2 = *(undefined8 *)(lVar14 + 0x48);
  } while( true );
LAB_0778142c:
  do {
    uVar5 = FUN_07161154(&stack0x000000a0,*unaff_x29);
    puVar2 = in_stack_000000b0;
    lVar14 = in_stack_00000060;
    if ((uVar5 & 1) == 0) {
      FUN_07161150(in_stack_00000068,*(undefined8 *)PTR_DAT_092e0058);
      if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077828(lVar14);
      }
      if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
        FUN_05c27784(&stack0x00000040);
        in_stack_000000b0 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x000000a0;
        while (uVar5 = FUN_07161154(&stack0x000000a0,*unaff_x29), (uVar5 & 1) != 0) {
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if ((in_stack_000000b0[0x38] == '\0') &&
             ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
              ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
            lVar14 = *(long *)(in_stack_00000030 + 0xe0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            (**(code **)(lVar14 + 0x18))
                      (*(undefined8 *)(lVar14 + 0x40),uVar7,
                       *(undefined8 *)(in_stack_000000b0 + 0x10),
                       *(undefined8 *)(in_stack_000000b0 + 0x30),*(undefined8 *)(lVar14 + 0x28));
          }
        }
        FUN_07161150(&stack0x000000a0,*(undefined8 *)PTR_DAT_092e0058);
      }
      if (unaff_w21 != 0) {
        FUN_05c27784(&stack0x00000040);
        in_stack_000000b0 = in_stack_00000050;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000a0 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_00000048 = &stack0x000000a0;
        while (uVar5 = FUN_07161154(&stack0x000000a0,*unaff_x29), puVar2 = in_stack_000000b0,
              (uVar5 & 1) != 0) {
          if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(long *)(in_stack_000000b0 + 0x18) != 0) {
            if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar4 = (**(code **)(*in_stack_00000028 + 0x268))
                              (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x270));
            FUN_077827e0(in_stack_00000038,uVar7,in_stack_00000028,in_stack_00000030,uVar4,
                         *(undefined8 *)(puVar2 + 0x18),*(undefined4 *)(puVar2 + 0x2c),
                         puVar2[0x38] == '\0');
          }
        }
        FUN_07161150(&stack0x000000a0,*(undefined8 *)PTR_DAT_092e0058);
      }
      FUN_077804f0(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar7);
      return uVar7;
    }
    if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while ((((in_stack_000000b0[0x38] != '\0') ||
            (lVar14 = *(long *)(in_stack_000000b0 + 0x18), lVar14 == 0)) ||
           (*(char *)(lVar14 + 0x80) != '\0')) ||
          ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
           ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
  lVar6 = *(long *)(in_stack_000000b0 + 0x30);
  uVar5 = FUN_0777fdfc(in_stack_00000038,lVar14,unaff_x28,lVar6);
  if ((uVar5 & 1) == 0) goto LAB_077814dc;
  plVar15 = *(long **)(lVar14 + 0x68);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar14 = *plVar15;
  uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar5 != 0) {
    piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092dffe0) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_07781554;
      }
      uVar5 = uVar5 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar5 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092dffe0,0);
LAB_07781554:
  (*(code *)*puVar9)(plVar15,uVar7,lVar6,puVar9[1]);
  goto LAB_07781568;
LAB_077814dc:
  if ((lVar6 == 0) || (*(char *)(lVar14 + 0x82) != '\0')) goto LAB_0778142c;
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar15 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar12 = *plVar15;
  uVar8 = *(undefined8 *)(lVar14 + 0x40);
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar5 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092dfc80) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_07781580;
      }
      uVar5 = uVar5 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar5 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092dfc80,0);
LAB_07781580:
  plVar15 = (long *)(*(code *)*puVar9)(plVar15,uVar8,puVar9[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(int *)((long)plVar15 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_092df7e8 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092df7e8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar15);
    }
    if ((*(char *)((long)plVar15 + 0xf2) != '\0') && ((char)plVar15[5] == '\0')) {
      plVar15 = *(long **)(lVar14 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *plVar15;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092dffe0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0778164c;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092dffe0,1);
LAB_0778164c:
      lVar14 = (*(code *)*puVar9)(plVar15,uVar7,puVar9[1]);
      if (lVar14 != 0) {
        uVar8 = thunk_FUN_0408781c(lVar14,0);
        uVar8 = FUN_07779560(in_stack_00000038,uVar8);
        lVar12 = FUN_03b0b7dc(uVar8,*(undefined8 *)PTR_DAT_092df7e8);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(char *)(lVar12 + 0xf1) == '\0') {
          plVar15 = (long *)FUN_03b0bce4(lVar14,*(undefined8 *)PTR_DAT_09287998);
        }
        else {
          plVar15 = (long *)FUN_07773794(lVar12,lVar14);
        }
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar5 = FUN_03b08e64(6,*(undefined8 *)PTR_DAT_09287998,plVar15);
        if ((uVar5 & 1) == 0) {
          if (*(char *)(lVar12 + 0xf1) == '\0') {
            auVar16 = FUN_03b0bce4(lVar6,*(undefined8 *)PTR_DAT_09287998);
          }
          else {
            auVar16 = FUN_07773794(lVar12,lVar6);
          }
          uVar8 = auVar16._8_8_;
          if (auVar16._0_8_ != 0) {
            plVar10 = (long *)FUN_03b08e64(0,*(undefined8 *)PTR_DAT_092a6300,auVar16._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar10;
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar14 = *plVar10;
              uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092860c8) {
                    puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0778179c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092860c8,0);
LAB_0778179c:
              uVar5 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              plVar10 = in_stack_00000090;
              if ((uVar5 & 1) == 0) goto LAB_07781894;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar14 = *in_stack_00000090;
              uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092860c8) {
                    puVar9 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_0778180c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(in_stack_00000090,*(long *)PTR_DAT_092860c8,1);
LAB_0778180c:
              uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              lVar14 = *plVar15;
              uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar5 != 0) {
                piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09287998) {
                    puVar9 = (undefined8 *)(lVar14 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_07781874;
                  }
                  uVar5 = uVar5 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_09287998,2);
LAB_07781874:
              (*(code *)*puVar9)(plVar15,uVar8,puVar9[1]);
              plVar10 = in_stack_00000090;
            } while( true );
          }
          goto LAB_07781e64;
        }
      }
    }
  }
  else if (*(int *)((long)plVar15 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_092df7b0 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092df7b0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar15);
    }
    if ((char)plVar15[5] == '\0') {
      plVar10 = *(long **)(lVar14 + 0x68);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092dffe0) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_07781958;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092dffe0,1);
LAB_07781958:
      lVar14 = (*(code *)*puVar9)(plVar10,uVar7,puVar9[1]);
      if (lVar14 != 0) {
        if ((char)plVar15[0x20] == '\0') {
          plVar10 = (long *)FUN_03b0bce4(lVar14,*(undefined8 *)PTR_DAT_092a61d0);
        }
        else {
          plVar10 = (long *)FUN_07774e64(plVar15,lVar14);
        }
        if ((char)plVar15[0x20] == '\0') {
          auVar16 = FUN_03b0bce4(lVar6,*(undefined8 *)PTR_DAT_092a61d0);
        }
        else {
          auVar16 = FUN_07774e64(plVar15,lVar6);
        }
        uVar8 = auVar16._8_8_;
        if (auVar16._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_03b08e64(9,*(undefined8 *)PTR_DAT_092a61d0);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar15 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092860c8) {
                  puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_07781a60;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(in_stack_00000080,*(long *)PTR_DAT_092860c8,0);
LAB_07781a60:
            uVar5 = (*(code *)*puVar9)(plVar15,puVar9[1]);
            plVar15 = in_stack_00000080;
            if ((uVar5 & 1) == 0) goto LAB_07781b58;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *in_stack_00000080;
            uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092bcf00) {
                  puVar9 = (undefined8 *)(lVar14 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                  goto LAB_07781ad0;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(in_stack_00000080,*(long *)PTR_DAT_092bcf00,2);
LAB_07781ad0:
            auVar16 = (*(code *)*puVar9)(plVar15,puVar9[1]);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *plVar10;
            uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092a61d0) {
                  puVar9 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_07781b40;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_092a61d0,1);
LAB_07781b40:
            (*(code *)*puVar9)(plVar10,auVar16._0_8_,auVar16._8_8_,puVar9[1]);
          } while( true );
        }
LAB_07781e64:
                    /* WARNING: Subroutine does not return */
        FUN_04077830(0,uVar8,0);
      }
    }
  }
LAB_07781568:
  puVar2[0x38] = 1;
  unaff_x28 = in_stack_00000030;
  goto LAB_0778142c;
LAB_07781894:
  FUN_03b08764(&stack0x00000040);
  goto LAB_07781568;
LAB_07781b58:
  FUN_03c54610(&stack0x00000040);
  goto LAB_07781568;
}


