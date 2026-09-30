/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 0776b220
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (undefined1 param_1 [16],double param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar19;
  long *unaff_x23;
  int unaff_w25;
  long unaff_x28;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000070;
  double in_stack_00000078;
  double in_stack_00000080;
  double in_stack_00000088;
  double in_stack_00000090;
  double in_stack_00000098;
  long in_stack_000000a8;
  
  do {
    FUN_078c415c();
    lVar18 = *(long *)PTR_DAT_09f22e40;
    lVar13 = *(long *)(lVar18 + 0x38);
    if (lVar13 == 0) {
      FUN_04482014(lVar18);
      lVar13 = *(long *)(lVar18 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_04481fb8();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_078c4d74();
    lVar18 = *(long *)PTR_DAT_09f22e40;
    lVar13 = *(long *)(lVar18 + 0x38);
    if (lVar13 == 0) {
      FUN_04482014(lVar18);
      lVar13 = *(long *)(lVar18 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_04481fb8();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_078c4d74();
    lVar18 = *(long *)PTR_DAT_09f22e40;
    lVar13 = *(long *)(lVar18 + 0x38);
    if (lVar13 == 0) {
      FUN_04482014(lVar18);
      lVar13 = *(long *)(lVar18 + 0x38);
    }
    lVar13 = *(long *)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_04481fb8();
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_078c4d74();
    do {
      do {
        puVar2 = PTR_DAT_09f32f78;
        unaff_w25 = unaff_w25 + 1;
        if (*(int *)(unaff_x28 + 0x18) <= unaff_w25) {
          lVar13 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32f90);
          FUN_07441bc0(lVar13,*(undefined8 *)puVar2);
          puVar4 = PTR_DAT_09f32f70;
          puVar3 = PTR_DAT_09f32f68;
          puVar2 = PTR_DAT_09f30c10;
          if (*(int *)(unaff_x28 + 0x18) < 1) goto LAB_0776b5dc;
          iVar6 = 0;
          goto 
          Meta_XR_MultiplayerBlocks_Colocation_NetworkDataUtils__GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
          ;
        }
        lVar13 = FUN_05badb74(unaff_x28,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
        }
        uVar8 = FUN_0952c404(lVar13,0,0);
      } while ((uVar8 & 1) != 0);
      FUN_05badb74(unaff_x28,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
      lVar18 = FUN_0775e914();
      if (lVar18 == 0) goto LAB_0776be8c;
      if (1 < *(int *)(lVar18 + 0x18)) {
        lVar16 = FUN_05badb74(in_stack_00000028,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
        if (lVar16 == 0) goto LAB_0776be8c;
        thunk_FUN_0952ff6c(lVar16,0);
        fStack0000000000000038 = (float)*(undefined8 *)(lVar18 + 0x18);
        thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000038);
        if (unaff_x23 == (long *)0x0) goto LAB_0776be8c;
        FUN_078c4cb8();
        lVar9 = *(long *)PTR_DAT_09f22e40;
        lVar16 = *(long *)(lVar9 + 0x38);
        if (lVar16 == 0) {
          FUN_04482014(lVar9);
          lVar16 = *(long *)(lVar9 + 0x38);
        }
        lVar16 = *(long *)(lVar16 + 0x10);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_04481fb8();
        }
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_078c4d74();
        lVar9 = *(long *)PTR_DAT_09f22e40;
        lVar16 = *(long *)(lVar9 + 0x38);
        if (lVar16 == 0) {
          FUN_04482014(lVar9);
          lVar16 = *(long *)(lVar9 + 0x38);
        }
        lVar16 = *(long *)(lVar16 + 0x10);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_04481fb8();
        }
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_078c4d74();
      }
      lVar16 = FUN_0775abb4(lVar13);
      if ((lVar16 == 0) || (uVar5 = FUN_0952fcb8(lVar16,0), unaff_x21 == 0)) goto LAB_0776be8c;
      uVar8 = FUN_0731ca6c(unaff_x21,uVar5,&stack0x000000a8,*(undefined8 *)PTR_DAT_09f31390);
      if ((uVar8 & 1) == 0) {
        uVar5 = FUN_094d3ba4(lVar16,0);
        in_stack_000000a8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31398,uVar5);
        if (in_stack_000000a8 == 0) goto LAB_0776be8c;
        if (*(int *)(in_stack_000000a8 + 0x18) == 0) goto LAB_0776be88;
        FUN_0775fa84(lVar16,in_stack_000000a8 + 0x20);
        iVar6 = FUN_094d3ba4(lVar16,0);
        if (0 < iVar6) {
          uVar8 = 0;
          lVar9 = 0x31;
          do {
            if (in_stack_000000a8 == 0) goto LAB_0776be8c;
            if (*(uint *)(in_stack_000000a8 + 0x18) <= uVar8) goto LAB_0776be88;
            FUN_0775f248(lVar16,in_stack_000000a8 + lVar9 + -0x11,uVar8 & 0xffffffff,0);
            if (in_stack_000000a8 == 0) goto LAB_0776be8c;
            if (((int)*(ulong *)(in_stack_000000a8 + 0x18) == 0) ||
               ((*(ulong *)(in_stack_000000a8 + 0x18) & 0xffffffff) <= uVar8)) goto LAB_0776be88;
            uVar8 = uVar8 + 1;
            *(undefined1 *)(in_stack_000000a8 + lVar9) = *(undefined1 *)(in_stack_000000a8 + 0x31);
            iVar6 = FUN_094d3ba4(lVar16,0);
            lVar9 = lVar9 + 0x18;
          } while ((long)uVar8 < (long)iVar6);
        }
        uVar5 = FUN_0952fcb8(lVar16,0);
        FUN_0731afd4(unaff_x21,uVar5,in_stack_000000a8,*(undefined8 *)PTR_DAT_09f31388);
      }
      if (in_stack_000000a8 == 0) goto LAB_0776be8c;
      lVar16 = 0;
      uVar8 = 0;
      lVar9 = in_stack_000000a8;
      while( true ) {
        if ((long)*(int *)(lVar18 + 0x18) <= (long)uVar8) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0776be88;
        lVar15 = lVar9 + lVar16;
        if (*(char *)(lVar15 + 0x30) != '\0') {
          in_stack_00000080 = (double)(float)*(undefined8 *)(lVar15 + 0x20);
          in_stack_00000088 = (double)(float)((ulong)*(undefined8 *)(lVar15 + 0x20) >> 0x20);
          in_stack_00000090 = (double)(float)*(undefined8 *)(lVar15 + 0x28);
          in_stack_00000098 = (double)(float)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
          plVar19 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,7);
          if (plVar19 == (long *)0x0) goto LAB_0776be8c;
          if ((lVar13 != 0) &&
             (lVar9 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*plVar19 + 0x40)), lVar9 == 0)) {
LAB_0776be90:
            uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar7,0);
          }
          if ((int)plVar19[3] == 0) goto LAB_0776be88;
          plVar19[4] = lVar13;
          thunk_FUN_044bb4b4(plVar19 + 4,lVar13);
          fStack0000000000000038 = (float)uVar8;
          lVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000038);
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar19 + 3) < 2) goto LAB_0776be88;
          plVar19[5] = lVar9;
          thunk_FUN_044bb4b4(plVar19 + 5,lVar9);
          if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_0776be88;
          lVar9 = *(long *)(lVar18 + 0x20 + uVar8 * 8);
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar19 + 3) < 3) goto LAB_0776be88;
          plVar19[6] = lVar9;
          thunk_FUN_044bb4b4(plVar19 + 6,lVar9);
          lVar9 = FUN_07a256d8(&stack0x00000080,*unaff_x22,0);
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar19 + 3) < 4) goto LAB_0776be88;
          plVar19[7] = lVar9;
          thunk_FUN_044bb4b4(plVar19 + 7,lVar9);
          lVar9 = FUN_07a256d8();
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar19 + 3) < 5) goto LAB_0776be88;
          plVar19[8] = lVar9;
          thunk_FUN_044bb4b4(plVar19 + 8,lVar9);
          in_stack_00000078 = in_stack_00000080 + in_stack_00000090;
          lVar9 = FUN_07a256d8(&stack0x00000078,*unaff_x22,0);
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar19 + 3) < 6) goto LAB_0776be88;
          plVar19[9] = lVar9;
          thunk_FUN_044bb4b4(plVar19 + 9,lVar9);
          in_stack_00000078 = in_stack_00000088 + in_stack_00000098;
          param_2 = in_stack_00000098;
          lVar9 = FUN_07a256d8(&stack0x00000078,*unaff_x22,0);
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0))
          goto LAB_0776be90;
          if (*(uint *)(plVar19 + 3) < 7) goto LAB_0776be88;
          plVar19[10] = lVar9;
          thunk_FUN_044bb4b4(plVar19 + 10,lVar9);
          if (unaff_x23 == (long *)0x0) goto LAB_0776be8c;
          FUN_078c4d74();
          lVar15 = *(long *)PTR_DAT_09f22e40;
          lVar9 = *(long *)(lVar15 + 0x38);
          if (lVar9 == 0) {
            FUN_04482014(lVar15);
            lVar9 = *(long *)(lVar15 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar15 = *(long *)PTR_DAT_09f22e40;
          lVar9 = *(long *)(lVar15 + 0x38);
          if (lVar9 == 0) {
            FUN_04482014(lVar15);
            lVar9 = *(long *)(lVar15 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar15 = *(long *)PTR_DAT_09f22e40;
          lVar9 = *(long *)(lVar15 + 0x38);
          if (lVar9 == 0) {
            FUN_04482014(lVar15);
            lVar9 = *(long *)(lVar15 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar15 = *(long *)PTR_DAT_09f22e40;
          lVar9 = *(long *)(lVar15 + 0x38);
          if (lVar9 == 0) {
            FUN_04482014(lVar15);
            lVar9 = *(long *)(lVar15 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_04481fb8();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_078c4d74();
          lVar9 = in_stack_000000a8;
        }
        uVar8 = uVar8 + 1;
        lVar16 = lVar16 + 0x18;
        if (lVar9 == 0) goto LAB_0776be8c;
      }
      if (*(uint *)(lVar9 + 0x18) == 0) goto LAB_0776be88;
      unaff_x21 = in_stack_00000020;
      unaff_x28 = in_stack_00000028;
    } while (*(char *)(lVar9 + 0x31) == '\0');
    FUN_05badb74(in_stack_00000028,unaff_w25,*(undefined8 *)PTR_DAT_09f1e8c0);
  } while (unaff_x23 != (long *)0x0);
  goto LAB_0776be8c;

  Meta_XR_MultiplayerBlocks_Colocation_NetworkDataUtils__GetOculusIdOfColocatedGroupOwnerFromColocationGroupId
  :
  do {
    uVar7 = FUN_05badb74(unaff_x28,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
    }
    uVar8 = FUN_09531730(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      FUN_05badb74(in_stack_00000028,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
      lVar18 = FUN_0775e914();
      if (lVar18 == 0) goto LAB_0776be8c;
      if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
        uVar8 = 0;
        uVar14 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
        lVar16 = lVar18 + 0x20;
        do {
          if (uVar14 <= uVar8) goto LAB_0776be88;
          uVar7 = *(undefined8 *)(lVar16 + uVar8 * 8);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar14 = FUN_09531730(uVar7,0,0);
          if ((uVar14 & 1) != 0) {
            if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_0776be88;
            if (lVar13 == 0) goto LAB_0776be8c;
            uVar14 = FUN_074444a8(lVar13,*(undefined8 *)(lVar16 + uVar8 * 8),&stack0x00000070,
                                  *(undefined8 *)puVar4);
            if ((uVar14 & 1) == 0) {
              lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e858);
              FUN_05bad610(lVar9,*(undefined8 *)PTR_DAT_09f1e860);
              in_stack_00000070 = lVar9;
              if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_0776be88;
              FUN_0744298c(lVar13,*(undefined8 *)(lVar16 + uVar8 * 8),lVar9,*(undefined8 *)puVar3);
            }
            lVar9 = in_stack_00000070;
            uVar7 = FUN_05badb74(in_stack_00000028,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
            if (lVar9 == 0) goto LAB_0776be8c;
            uVar14 = FUN_05bae1d4(lVar9,uVar7,*(undefined8 *)puVar2);
            lVar9 = in_stack_00000070;
            if ((uVar14 & 1) == 0) {
              uVar7 = FUN_05badb74(in_stack_00000028,iVar6,*(undefined8 *)PTR_DAT_09f1e8c0);
              if (lVar9 == 0) goto LAB_0776be8c;
              lVar15 = *(long *)(lVar9 + 0x10);
              lVar17 = *(long *)PTR_DAT_09f1e870;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_0776be8c;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                thunk_FUN_044bb4b4();
              }
              else {
                FUN_05bade44(lVar9,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar14 = (ulong)*(uint *)(lVar18 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar18 + 0x18));
      }
    }
    iVar6 = iVar6 + 1;
    unaff_x28 = in_stack_00000028;
  } while (iVar6 < *(int *)(in_stack_00000028 + 0x18));
LAB_0776b5dc:
  puVar3 = PTR_DAT_09f32e80;
  puVar2 = PTR_DAT_09f30dd0;
  if (in_stack_00000018 != 0) {
    if (0 < (int)*(ulong *)(in_stack_00000018 + 0x18)) {
      uVar8 = 0;
      uVar14 = *(ulong *)(in_stack_00000018 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar8) {
LAB_0776be88:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar19 = (long *)(in_stack_00000018 + uVar8 * 8 + 0x20);
        lVar18 = *plVar19;
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar14 = FUN_09531730(lVar18,0,0);
        if ((uVar14 & 1) == 0) {
          if (*(uint *)(in_stack_00000018 + 0x18) <= uVar8) goto LAB_0776be88;
          if ((*plVar19 == 0) || (lVar18 = FUN_094e2354(*plVar19,0), lVar18 == 0))
          goto LAB_0776be8c;
          uVar7 = thunk_FUN_0952ff6c(lVar18,0);
        }
        else {
          uVar7 = *(undefined8 *)PTR_DAT_09f33010;
        }
        if (*(uint *)(in_stack_00000018 + 0x18) <= uVar8) goto LAB_0776be88;
        lVar18 = *plVar19;
        uVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30e70);
        FUN_05bad610(uVar10,*(undefined8 *)PTR_DAT_09f30e78);
        uVar11 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1f070);
        FUN_05bad610(uVar11,*(undefined8 *)PTR_DAT_09f1f078);
        uVar12 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32fc0);
        FUN_05bad610(uVar12,*(undefined8 *)PTR_DAT_09f32fb8);
        lVar18 = FUN_07769854(in_stack_00000010,lVar18,uVar10,unaff_x28,uVar11,in_stack_00000008,
                              uVar12);
        lVar16 = *(long *)puVar2;
        uVar5 = *(undefined4 *)(in_stack_00000010 + 0x10);
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_044a54b4(lVar16);
        }
        FUN_0777ff38(lVar18,uVar5,0);
        if ((lVar13 == 0) ||
           (lVar16 = FUN_0744266c(lVar13,*(undefined8 *)PTR_DAT_09f32f88), lVar16 == 0))
        goto LAB_0776be8c;
        FUN_058cf098(&stack0x00000038,lVar16,*(undefined8 *)PTR_DAT_09f32fb0);
        in_stack_00000058 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
        in_stack_00000050 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
        in_stack_00000060 = in_stack_00000048;
        while (uVar14 = FUN_05260c20(&stack0x00000050,*(undefined8 *)PTR_DAT_09f32fa0),
              lVar16 = in_stack_00000060, (uVar14 & 1) != 0) {
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar9 = *(long *)(lVar18 + 0x70);
          if (lVar9 == 0) {
LAB_0776bbf4:
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          iVar6 = 0;
          while (iVar6 < *(int *)(lVar9 + 0x18)) {
            lVar9 = FUN_05badb74(lVar9,iVar6,*(undefined8 *)puVar3);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar14 = FUN_094e2b8c(lVar16,*(undefined8 *)(lVar9 + 0x10),0);
            dVar22 = param_2;
            if ((uVar14 & 1) != 0) {
              if (*(long *)(lVar18 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar9 = FUN_05badb74(*(long *)(lVar18 + 0x70),iVar6,*(undefined8 *)puVar3);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              lVar15 = *(long *)puVar2;
              uVar10 = *(undefined8 *)(lVar9 + 0x10);
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_044a54b4(lVar15);
              }
              lVar9 = FUN_07780320(uVar7,lVar16,uVar10,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              uVar14 = FUN_09531730(lVar9,0,0);
              dVar22 = param_2;
              if ((uVar14 & 1) != 0) {
                if (*(long *)(lVar18 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar15 = FUN_05badb74(*(long *)(lVar18 + 0x70),iVar6,*(undefined8 *)puVar3);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                fVar20 = (float)FUN_094ea7b0(lVar16,*(undefined8 *)(lVar15 + 0x10),0);
                if (*(long *)(lVar18 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                dVar22 = param_2;
                lVar15 = FUN_05badb74(*(long *)(lVar18 + 0x70),iVar6,*(undefined8 *)puVar3);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                fVar21 = (float)FUN_094ea7dc(lVar16,*(undefined8 *)(lVar15 + 0x10),0);
                fVar24 = SUB84(dVar22,0);
                fVar23 = SUB84(param_2,0);
                if ((((fVar20 < 0.0) || (1.0 < fVar23 + fVar24)) || (fVar23 < 0.0)) ||
                   (1.0 < fVar20 + fVar21)) {
                  plVar19 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,5);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar15 = thunk_FUN_04485110(lVar16,*(undefined8 *)(*plVar19 + 0x40));
                  if (lVar15 == 0) {
                    uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar7,0);
                  }
                  if ((int)plVar19[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar19[4] = lVar16;
                  thunk_FUN_044bb4b4(plVar19 + 4,lVar16);
                  uVar10 = FUN_0744290c(lVar13,lVar16,*(undefined8 *)PTR_DAT_09f32f80);
                  lVar15 = FUN_0776bed4(uVar10,uVar10);
                  if ((lVar15 != 0) &&
                     (lVar17 = thunk_FUN_04485110(lVar15,*(undefined8 *)(*plVar19 + 0x40)),
                     lVar17 == 0)) {
                    uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar7,0);
                  }
                  if (*(uint *)(plVar19 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar19[5] = lVar15;
                  thunk_FUN_044bb4b4(plVar19 + 5,lVar15);
                  if ((lVar9 != 0) &&
                     (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)),
                     lVar15 == 0)) {
                    uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar7,0);
                  }
                  if (*(uint *)(plVar19 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar19[6] = lVar9;
                  thunk_FUN_044bb4b4(plVar19 + 6,lVar9);
                  uStack0000000000000040 = 0;
                  fStack0000000000000038 = fVar21;
                  fStack000000000000003c = fVar24;
                  lVar9 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f1e740,&stack0x00000038);
                  if ((lVar9 != 0) &&
                     (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)),
                     lVar15 == 0)) {
                    uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar7,0);
                  }
                  if (*(uint *)(plVar19 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar19[7] = lVar9;
                  thunk_FUN_044bb4b4(plVar19 + 7,lVar9);
                  fStack0000000000000030 = fVar20;
                  fStack0000000000000034 = fVar23;
                  lVar9 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f1fb40,&stack0x00000030);
                  if ((lVar9 != 0) &&
                     (lVar15 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar19 + 0x40)),
                     lVar15 == 0)) {
                    uVar7 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                    FUN_04447d10(uVar7,0);
                  }
                  if (*(uint *)(plVar19 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  plVar19[8] = lVar9;
                  thunk_FUN_044bb4b4(plVar19 + 8,lVar9);
                  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  FUN_078c4d74();
                  lVar15 = *(long *)PTR_DAT_09f22e40;
                  lVar9 = *(long *)(lVar15 + 0x38);
                  if (lVar9 == 0) {
                    FUN_04482014(lVar15);
                    lVar9 = *(long *)(lVar15 + 0x38);
                  }
                  lVar9 = *(long *)(lVar9 + 0x10);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_04481fb8();
                  }
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_04481fb8();
                  }
                  FUN_078c4d74();
                  lVar15 = *(long *)PTR_DAT_09f22e40;
                  lVar9 = *(long *)(lVar15 + 0x38);
                  if (lVar9 == 0) {
                    FUN_04482014(lVar15);
                    lVar9 = *(long *)(lVar15 + 0x38);
                  }
                  lVar9 = *(long *)(lVar9 + 0x10);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_04481fb8();
                  }
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_04481fb8();
                  }
                  FUN_078c4d74();
                  lVar15 = *(long *)PTR_DAT_09f22e40;
                  lVar9 = *(long *)(lVar15 + 0x38);
                  if (lVar9 == 0) {
                    FUN_04482014(lVar15);
                    lVar9 = *(long *)(lVar15 + 0x38);
                  }
                  lVar9 = *(long *)(lVar9 + 0x10);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_04481fb8();
                  }
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                    FUN_04481fb8();
                  }
                  FUN_078c4d74();
                }
              }
            }
            lVar9 = *(long *)(lVar18 + 0x70);
            iVar6 = iVar6 + 1;
            param_2 = dVar22;
            if (lVar9 == 0) goto LAB_0776bbf4;
          }
        }
        FUN_05260c1c(&stack0x00000050,*(undefined8 *)PTR_DAT_09f32f98);
        uVar14 = (ulong)*(uint *)(in_stack_00000018 + 0x18);
        uVar8 = uVar8 + 1;
        unaff_x28 = in_stack_00000028;
      } while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000018 + 0x18));
    }
    puVar2 = PTR_DAT_09f1e540;
    if (unaff_x23 != (long *)0x0) {
      iVar6 = FUN_078bb6fc();
      puVar3 = PTR_DAT_09f32fe0;
      if (iVar6 == 0) {
        uVar7 = *(undefined8 *)PTR_DAT_09f33030;
      }
      else {
        uVar7 = (**(code **)(*unaff_x23 + 0x168))();
        uVar7 = FUN_078a7764(*(undefined8 *)puVar3,uVar7,0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c652c(uVar7,0);
      return;
    }
  }
LAB_0776be8c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


