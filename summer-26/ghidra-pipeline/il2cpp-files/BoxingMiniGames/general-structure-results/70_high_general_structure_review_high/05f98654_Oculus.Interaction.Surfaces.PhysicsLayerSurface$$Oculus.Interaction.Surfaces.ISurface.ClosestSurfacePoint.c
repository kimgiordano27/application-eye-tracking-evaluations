/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.PhysicsLayerSurface$$Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
ENTRY_POINT: 05f98654
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05f98eb8) */
/* WARNING: Removing unreachable block (ram,0x05f98ebc) */
/* WARNING: Removing unreachable block (ram,0x05f989b0) */
/* WARNING: Removing unreachable block (ram,0x05f9917c) */
/* WARNING: Removing unreachable block (ram,0x05f99180) */
/* WARNING: Removing unreachable block (ram,0x05f99250) */

undefined8
Oculus_Interaction_Surfaces_PhysicsLayerSurface__Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
          (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long in_x9;
  int *piVar14;
  int unaff_w19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long *plVar15;
  long unaff_x28;
  undefined1 auVar16 [16];
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
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
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x23 == 0) {
    if ((unaff_w19 != 6) && (unaff_w19 != 0)) {
      return in_stack_00000020;
    }
    lVar6 = FUN_05f808d8();
    puVar2 = PTR_DAT_079f4558;
    if (lVar6 != 0) {
      uVar4 = FUN_053a3a50(lVar6,*(undefined8 *)PTR_DAT_07a1e358);
      plVar7 = (long *)FUN_03642a4c(*(undefined8 *)puVar2,uVar4);
      puVar2 = PTR_DAT_07a1e4e0;
      if (unaff_x22 != 0) {
        FUN_0459fb44(&stack0x00000040);
        in_stack_000000a0 = in_stack_00000040;
        in_stack_00000040 = 0;
        in_stack_000000a8 = in_stack_00000048;
        in_stack_000000b0 = in_stack_00000050;
        in_stack_00000048 = &stack0x000000a0;
LAB_05f986f8:
        uVar8 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2);
        puVar3 = in_stack_000000b0;
        unaff_x23 = in_stack_00000040;
        if ((uVar8 & 1) != 0) {
          if (unaff_w21 == 0) {
            if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
          }
          else {
            if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar6 = *(long *)(in_stack_000000b0 + 0x18);
            if ((lVar6 != 0) && (in_stack_000000b0[0x28] == '\0')) {
              if (*(long **)(in_stack_000000b0 + 0x30) == (long *)0x0) {
                uVar4 = 1;
              }
              else if (**(long **)(in_stack_000000b0 + 0x30) == *(long *)(PTR_DAT_079f4610 + 0x90))
              {
                uVar8 = FUN_05f937e0(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48));
                uVar4 = 1;
                if ((uVar8 & 1) == 0) {
                  uVar4 = 2;
                }
              }
              else {
                uVar4 = 2;
              }
              in_stack_00000060 = 0;
              FUN_0493c164(&stack0x00000060,uVar4,*(undefined8 *)PTR_DAT_07a1e518);
              *(long *)(puVar3 + 0x28) = in_stack_00000060;
            }
          }
          lVar6 = *(long *)(puVar3 + 0x20);
          if (lVar6 == 0) goto LAB_05f988c8;
          goto LAB_05f98794;
        }
        FUN_05897b24(in_stack_00000048,*(undefined8 *)PTR_DAT_07a1e4d8);
        if (unaff_x23 != 0) goto LAB_05f99440;
        if (in_stack_00000018 != 0) {
          uVar10 = (**(code **)(in_stack_00000018 + 0x18))
                             (*(undefined8 *)(in_stack_00000018 + 0x40),plVar7,
                              *(undefined8 *)(in_stack_00000018 + 0x28));
          if (in_stack_00000010 != 0) {
            FUN_05f97514(in_stack_00000038,in_stack_00000028,in_stack_00000010,uVar10);
          }
          FUN_05f978d4(in_stack_00000038,in_stack_00000028,unaff_x28,uVar10);
          FUN_0459fb44(&stack0x00000040);
          in_stack_00000068 = &stack0x000000a0;
          in_stack_00000060 = 0;
          in_stack_000000a8 = in_stack_00000048;
          in_stack_000000a0 = in_stack_00000040;
          in_stack_000000b0 = in_stack_00000050;
LAB_05f98a3c:
          do {
            uVar8 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2);
            puVar3 = in_stack_000000b0;
            lVar6 = in_stack_00000060;
            if ((uVar8 & 1) == 0) {
              FUN_05897b24(in_stack_00000068,*(undefined8 *)PTR_DAT_07a1e4d8);
              if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c00(lVar6);
              }
              if (*(long *)(in_stack_00000030 + 0xe0) != 0) {
                FUN_0459fb44(&stack0x00000040);
                in_stack_000000b0 = in_stack_00000050;
                in_stack_000000a8 = in_stack_00000048;
                in_stack_000000a0 = in_stack_00000040;
                in_stack_00000040 = 0;
                in_stack_00000048 = &stack0x000000a0;
                while (uVar8 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2),
                      (uVar8 & 1) != 0) {
                  if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if ((in_stack_000000b0[0x38] == '\0') &&
                     ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 != 0 ||
                      ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) == 0)))) {
                    lVar6 = *(long *)(in_stack_00000030 + 0xe0);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    (**(code **)(lVar6 + 0x18))
                              (*(undefined8 *)(lVar6 + 0x40),uVar10,
                               *(undefined8 *)(in_stack_000000b0 + 0x10),
                               *(undefined8 *)(in_stack_000000b0 + 0x30),
                               *(undefined8 *)(lVar6 + 0x28));
                  }
                }
                FUN_05897b24(&stack0x000000a0,*(undefined8 *)PTR_DAT_07a1e4d8);
              }
              if (unaff_w21 != 0) {
                FUN_0459fb44(&stack0x00000040);
                in_stack_000000b0 = in_stack_00000050;
                in_stack_000000a8 = in_stack_00000048;
                in_stack_000000a0 = in_stack_00000040;
                in_stack_00000040 = 0;
                in_stack_00000048 = &stack0x000000a0;
                while (uVar8 = FUN_05897b28(&stack0x000000a0,*(undefined8 *)puVar2),
                      puVar3 = in_stack_000000b0, (uVar8 & 1) != 0) {
                  if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(long *)(in_stack_000000b0 + 0x18) != 0) {
                    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    uVar4 = (**(code **)(*in_stack_00000028 + 0x268))
                                      (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x270)
                                      );
                    FUN_05f99df0(in_stack_00000038,uVar10,in_stack_00000028,in_stack_00000030,uVar4,
                                 *(undefined8 *)(puVar3 + 0x18),*(undefined4 *)(puVar3 + 0x2c),
                                 puVar3[0x38] == '\0');
                  }
                }
                FUN_05897b24(&stack0x000000a0,*(undefined8 *)PTR_DAT_07a1e4d8);
              }
              FUN_05f97b00(in_stack_00000038,in_stack_00000028,in_stack_00000030,uVar10);
              return uVar10;
            }
            if (in_stack_000000b0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
          } while ((((in_stack_000000b0[0x38] != '\0') ||
                    (lVar6 = *(long *)(in_stack_000000b0 + 0x18), lVar6 == 0)) ||
                   (*(char *)(lVar6 + 0x80) != '\0')) ||
                  ((*(ulong *)(in_stack_000000b0 + 0x28) >> 0x20 == 0 &&
                   ((*(ulong *)(in_stack_000000b0 + 0x28) & 0xff) != 0))));
          lVar9 = *(long *)(in_stack_000000b0 + 0x30);
          uVar8 = FUN_05f9740c(in_stack_00000038,lVar6,unaff_x28,lVar9);
          if ((uVar8 & 1) == 0) goto LAB_05f98aec;
          plVar7 = *(long **)(lVar6 + 0x68);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar6 = *plVar7;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07a1e460) {
                puVar12 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_05f98b64;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_07a1e460,0);
LAB_05f98b64:
          (*(code *)*puVar12)(plVar7,uVar10,lVar9,puVar12[1]);
          goto LAB_05f98b78;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_05f99440:
                    /* WARNING: Subroutine does not return */
  FUN_03642c00(unaff_x23);
LAB_05f988c8:
  if (*(long *)(puVar3 + 0x18) != 0) {
    uVar10 = FUN_05f808d8(unaff_x28);
    lVar6 = *unaff_x20;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar6 = *unaff_x20;
    }
    puVar12 = *(undefined8 **)(lVar6 + 0xb8);
    lVar9 = puVar12[2];
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        puVar12 = *(undefined8 **)(*unaff_x20 + 0xb8);
      }
      uVar11 = *puVar12;
      lVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a1e4f8);
      FUN_04159c38(lVar9,uVar11,*(undefined8 *)PTR_DAT_07a1e538,0);
      plVar15 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      *plVar15 = lVar9;
      thunk_FUN_036b7ad0(plVar15,lVar9);
      unaff_x28 = in_stack_00000030;
    }
    if (*(long *)(puVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar6 = FUN_03ef92bc(uVar10,lVar9,*(undefined8 *)(*(long *)(puVar3 + 0x18) + 0x60),
                         *(undefined8 *)PTR_DAT_07a1e528);
    if (lVar6 != 0) {
LAB_05f98794:
      if (*(char *)(lVar6 + 0x80) == '\0') {
        if (((unaff_w21 != 0) && (*(ulong *)(puVar3 + 0x28) >> 0x21 == 0)) &&
           ((*(ulong *)(puVar3 + 0x28) & 0xff) != 0)) {
          plVar15 = (long *)(lVar6 + 0x48);
          if (*plVar15 == 0) {
            lVar9 = FUN_05f90b0c(in_stack_00000038,*(undefined8 *)(lVar6 + 0x40));
            *plVar15 = lVar9;
            thunk_FUN_036b7ad0(plVar15);
          }
          in_stack_00000098 = *(undefined8 *)(lVar6 + 0x90);
          if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar5 = FUN_0493c1a8(&stack0x00000098,
                               *(undefined4 *)(*(long *)(in_stack_00000038 + 0x20) + 0x2c),
                               *(undefined8 *)PTR_DAT_07a1e478);
          if ((uVar5 >> 1 & 1) != 0) {
            uVar10 = FUN_05f8e0a0(lVar6);
            if (*(int *)(*(long *)PTR_DAT_079f49b0 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar11 = FUN_05d949a4(0);
            uVar10 = FUN_05f93240(uVar11,in_stack_00000028,uVar10,uVar11,
                                  *(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x40));
            *(undefined8 *)(puVar3 + 0x30) = uVar10;
            thunk_FUN_036b7ad0();
          }
        }
        lVar9 = FUN_05f808d8(unaff_x28);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar5 = FUN_053a40d8(lVar9,lVar6,*(undefined8 *)PTR_DAT_07a1e4b8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar6 = *(long *)(puVar3 + 0x30);
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
          uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar10,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar7[(long)(int)uVar5 + 4] = lVar6;
        thunk_FUN_036b7ad0(plVar7 + (long)(int)uVar5 + 4,lVar6);
        puVar3[0x38] = 1;
      }
    }
  }
  goto LAB_05f986f8;
LAB_05f98aec:
  if ((lVar9 == 0) || (*(char *)(lVar6 + 0x82) != '\0')) goto LAB_05f98a3c;
  if (*(long *)(in_stack_00000038 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar7 = *(long **)(*(long *)(in_stack_00000038 + 0x20) + 0x40);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar13 = *plVar7;
  uVar11 = *(undefined8 *)(lVar6 + 0x40);
  uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07a1e0f8) {
        puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_05f98b90;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_07a1e0f8,0);
LAB_05f98b90:
  plVar7 = (long *)(*(code *)*puVar12)(plVar7,uVar11,puVar12[1]);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)((long)plVar7 + 0x24) == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a1dc28 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a1dc28)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar7);
    }
    if ((*(char *)((long)plVar7 + 0xf2) != '\0') && ((char)plVar7[5] == '\0')) {
      plVar7 = *(long **)(lVar6 + 0x68);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar6 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07a1e460) {
            puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto FUN_05f98c5c;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_07a1e460,1);
FUN_05f98c5c:
      lVar6 = (*(code *)*puVar12)(plVar7,uVar10,puVar12[1]);
      if (lVar6 != 0) {
        uVar11 = thunk_FUN_03652da4(lVar6,0);
        uVar11 = FUN_05f90b70(in_stack_00000038,uVar11);
        lVar13 = FUN_03156018(uVar11,*(undefined8 *)PTR_DAT_07a1dc28);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(char *)(lVar13 + 0xf1) == '\0') {
          plVar7 = (long *)FUN_03157130(lVar6,*(undefined8 *)PTR_DAT_079f4958);
        }
        else {
          plVar7 = (long *)FUN_05f8ada4(lVar13,lVar6);
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar8 = FUN_03156cec(6,*(undefined8 *)PTR_DAT_079f4958,plVar7);
        if ((uVar8 & 1) == 0) {
          if (*(char *)(lVar13 + 0xf1) == '\0') {
            auVar16 = FUN_03157130(lVar9,*(undefined8 *)PTR_DAT_079f4958);
          }
          else {
            auVar16 = FUN_05f8ada4(lVar13,lVar9);
          }
          uVar11 = auVar16._8_8_;
          if (auVar16._0_8_ != 0) {
            plVar15 = (long *)FUN_03156cec(0,*(undefined8 *)PTR_DAT_079f49a0,auVar16._0_8_);
            in_stack_00000048 = &stack0x00000090;
            in_stack_00000040 = 0;
            in_stack_00000050 = &stack0x00000088;
            do {
              in_stack_00000090 = plVar15;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar6 = *plVar15;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_079f49a8) {
                    puVar12 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_05f98dac;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_0367cd30(plVar15,*(long *)PTR_DAT_079f49a8,0);
LAB_05f98dac:
              uVar8 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              plVar15 = in_stack_00000090;
              if ((uVar8 & 1) == 0) goto LAB_05f98ea4;
              if (in_stack_00000090 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar6 = *in_stack_00000090;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_079f49a8) {
                    puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                    goto FUN_05f98e1c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_0367cd30(in_stack_00000090,*(long *)PTR_DAT_079f49a8,1);
FUN_05f98e1c:
              uVar11 = (*(code *)*puVar12)(plVar15,puVar12[1]);
              lVar6 = *plVar7;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_079f4958) {
                    puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_05f98e84;
                  }
                  uVar8 = uVar8 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4958,2);
LAB_05f98e84:
              (*(code *)*puVar12)(plVar7,uVar11,puVar12[1]);
              plVar15 = in_stack_00000090;
            } while( true );
          }
          goto LAB_05f99474;
        }
      }
    }
  }
  else if (*(int *)((long)plVar7 + 0x24) == 5) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07a1dbf0 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07a1dbf0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar7);
    }
    if ((char)plVar7[5] == '\0') {
      plVar15 = *(long **)(lVar6 + 0x68);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar6 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07a1e460) {
            puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_05f98f68;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_0367cd30(plVar15,*(long *)PTR_DAT_07a1e460,1);
LAB_05f98f68:
      lVar6 = (*(code *)*puVar12)(plVar15,uVar10,puVar12[1]);
      if (lVar6 != 0) {
        if ((char)plVar7[0x20] == '\0') {
          plVar15 = (long *)FUN_03157130(lVar6,*(undefined8 *)PTR_DAT_079f4950);
        }
        else {
          plVar15 = (long *)FUN_05f8c474(plVar7,lVar6);
        }
        if ((char)plVar7[0x20] == '\0') {
          auVar16 = FUN_03157130(lVar9,*(undefined8 *)PTR_DAT_079f4950);
        }
        else {
          auVar16 = FUN_05f8c474(plVar7,lVar9);
        }
        uVar11 = auVar16._8_8_;
        if (auVar16._0_8_ != 0) {
          in_stack_00000080 = (long *)FUN_03156cec(9,*(undefined8 *)PTR_DAT_079f4950);
          in_stack_00000048 = &stack0x00000080;
          in_stack_00000040 = 0;
          in_stack_00000050 = &stack0x00000078;
          in_stack_00000058 = &stack0x00000070;
          do {
            plVar7 = in_stack_00000080;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar6 = *in_stack_00000080;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_079f49a8) {
                  puVar12 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_05f99070;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_0367cd30(in_stack_00000080,*(long *)PTR_DAT_079f49a8,0);
LAB_05f99070:
            uVar8 = (*(code *)*puVar12)(plVar7,puVar12[1]);
            plVar7 = in_stack_00000080;
            if ((uVar8 & 1) == 0) goto LAB_05f99168;
            if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar6 = *in_stack_00000080;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07a02c10) {
                  puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                  goto LAB_05f990e0;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_0367cd30(in_stack_00000080,*(long *)PTR_DAT_07a02c10,2);
LAB_05f990e0:
            auVar16 = (*(code *)*puVar12)(plVar7,puVar12[1]);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar6 = *plVar15;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_079f4950) {
                  puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_05f99150;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_0367cd30(plVar15,*(long *)PTR_DAT_079f4950,1);
LAB_05f99150:
            (*(code *)*puVar12)(plVar15,auVar16._0_8_,auVar16._8_8_,puVar12[1]);
          } while( true );
        }
LAB_05f99474:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18(0,uVar11,0);
      }
    }
  }
LAB_05f98b78:
  puVar3[0x38] = 1;
  unaff_x28 = in_stack_00000030;
  goto LAB_05f98a3c;
LAB_05f98ea4:
  FUN_0315420c(&stack0x00000040);
  goto LAB_05f98b78;
LAB_05f99168:
  FUN_0324f4c0(&stack0x00000040);
  goto LAB_05f98b78;
}


